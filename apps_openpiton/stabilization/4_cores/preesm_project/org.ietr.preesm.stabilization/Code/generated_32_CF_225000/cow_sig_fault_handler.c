#include "cow_sig_fault_handler.h"
#include <err.h>
#include <errno.h>
#include <signal.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define ITOA_MAX_STRLEN(type) 	(sizeof(type) * CHAR_BIT + 2)

int 			pipefd[2];
const char *	sigerr_itoa_str = "i\n";
static uint64_t page_size;
struct sigaction sigold;

int itoa_signal(void *, char *, int);

void segv_handler(int sig, siginfo_t *info, void *context) {
	int ret;
	size_t sl;
	char sbuf[ITOA_MAX_STRLEN(void *) + 1];
	void *addr = (void *)((uint64_t)info->si_addr & ~(page_size - 1));

	//printf("New segv handled - addr: %p\n", addr);

	/**
	 * this is not strictly safe according to POSIX
	 * its okay for glibc/linux (two system calls)
	 **/

	ret = mprotect(addr, page_size, PROT_READ | PROT_WRITE);
	if (ret < 0)
		/* if mprotect fails, we are screwed, we will keep hitting
		 * sigsegv */
		abort();

	memset(sbuf, 0, sizeof(sbuf));
	ret = itoa_signal(info->si_addr, sbuf, 16);
	if (ret < 0)
		goto fail_itoa;

	sl = strlen(sbuf);
	sbuf[sl] = '\n';
	(void)write(pipefd[1], sbuf, sl + 1);
	return;

fail_itoa:
	(void)write(pipefd[1], sigerr_itoa_str, sizeof(sigerr_itoa_str));
}


void install_sigsegv_handler() {
	int ret;
	struct sigaction act;

	//printf("Installing sigv handler...\n");
	if ( pipe(pipefd) < 0)                            err(1, "pipe");
	if ( fcntl(pipefd[0], F_SETFL, O_NONBLOCK) < 0 )  err(1, "fcntl");
	if ( fcntl(pipefd[1], F_SETFL, O_NONBLOCK) < 0 )  err(1, "fcntl");

	page_size = getpagesize();
	memset(&act, 0, sizeof(act));
	act.sa_sigaction = segv_handler;
	act.sa_flags = SA_SIGINFO;
	ret = sigaction(SIGSEGV, &act, &sigold);
	if (ret < 0)
		err(1, "sigaction");

	//printf("End installlation - page size: %ld bytes\n", page_size);
}

void remove_sigsegv_handler() {
	int ret;

	ret = sigaction(SIGSEGV, &sigold, NULL);
	if (ret < 0)
		err(1, "sigaction");

	//printf("Sigv handler uninstalled!\n");
}


/* async-signal-safe implementation of integer to string conversion.
 *
 * Null terminates the output string.
 *
 * The input buffer size must be large enough to contain the output,
 * the caller must calculate it properly.
 *
 * @param[out] value  Input integer value to convert.
 * @param[out] result Buffer to output to.
 * @param[in]  base   Base to convert to.
 * @return     0 for success, -1 for fail (set errno).
 */
int itoa_signal(void *val_ptr, char *result, int base) {
	size_t tmp_value;
	char *ptr, *ptr2, tmp_char;
	uint64_t value = (uint64_t)val_ptr;
	const char *arr = "ZYXWVUTSRQPONMLKJIHGFEDCBA9876543210123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (base < 2 || base > 36) {
		errno = EINVAL;
		return -1;
	}

	ptr = result;
	do {
		tmp_value = value;
		value /= base;
		*ptr++ = arr[35 + (tmp_value - value * base)];
	} while (value);

	if (tmp_value < 0)
		*ptr++ = '-';

	ptr2 = result;
	result = ptr;
	*ptr-- = '\0';
	while (ptr2 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr2;
		*ptr2++ = tmp_char;
	}
	return 0;
}
