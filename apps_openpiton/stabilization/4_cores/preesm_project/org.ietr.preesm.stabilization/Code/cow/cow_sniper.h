#ifndef __COW_HH__
#define __COW_HH__

#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <err.h>
#include <unistd.h>


/*##################### INITIALIZATION AND DESTROY ##############################*/

static inline void create_shared_mem(volatile int *file_descriptor, const char *name, size_t shared_size) {

	int ret;

	//printf("Shared memory name: %s\tsize: %d bytes\n", name, (int)shared_size);

	//Creates the shared memory area
	*file_descriptor = shm_open(name, O_RDWR | O_CREAT, 0666); //Creates a shared memory area

	if (*file_descriptor < 0)
		err(1, "shm_open");

	//Defines the size of the shared memory area
	ret = ftruncate(*file_descriptor, shared_size);

	if (ret < 0)
		err(1, "Shared memory failed");

}
static inline void clear_shared_mem(const char *name) { //Destroy a shared memory area
	int ret;

	ret = shm_unlink(name);
	if (ret < 0)
		err(1, "Shared memory free failed");

	//printf("Shared memory cleared!\n");
}



/*##################### RUNTIME SETUP ##############################*/

/**
 * Maps a given memory region and allows to write on it.
 */
static inline void map_shared(void *volatile * fifo_ptr, int volatile * shared_fd, int size_bytes) {

	//printf("Setting up first mapping (SHARED)...\n");

	*fifo_ptr = mmap(NULL, size_bytes, (PROT_READ | PROT_WRITE), MAP_SHARED, *shared_fd, 0);

	if (*fifo_ptr == MAP_FAILED)
		err(1, "Shared mapping failed");

	//printf("MAP_SHARED done!\n");
	//printf("Memory mapped (SHARED) at address: %p\n", *fifo_ptr);
}


static inline void set_CoW__map_private(void *volatile *fifo_ptr, int volatile * shared_fd, int size_bytes) {

	//printf("Setting up CoW mapping (PRIVATED)...\n");

	//*fifo_ptr = mmap(NULL, size_bytes, (PROT_READ | PROT_WRITE), MAP_PRIVATE, *shared_fd, 0);
	//Sniper doesn't have the PROT_WRITE enabled
	*fifo_ptr = mmap(NULL, size_bytes, (PROT_READ), MAP_PRIVATE, *shared_fd, 0);

	if (*fifo_ptr == MAP_FAILED)
		err(1, "Private mapping failed");

	//printf("MAP_PRIVATE done!\n");
	//printf("Memory mapped (PRIVATED-COW) at address: %p\n", *fifo_ptr);
}


static inline void CoW_release__unmap(void *volatile *fifo_ptr, int size) {

	int ret;

	ret = munmap(*fifo_ptr, size);

	if (ret < 0)
		err(1, "union_unmap_first_weight");

	//printf("Mapping released!\n");
}


#endif
