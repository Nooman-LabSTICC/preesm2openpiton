#ifndef __COW_MASTER_HH__
#define __COW_MASTER_HH__

#include "broad_only_2.h"
#include "cow_sig_fault_handler.h"


#define NUMBER_OF_CORES	32

extern volatile int last_to_start;

static inline void reconfigure_CoW(int index){

	if (__sync_sub_and_fetch(&last_to_start, 1) != 0)
		return;

	if (index != 0) {
		step_4_unmap_broad_only_2();
	}

	step_2_map_shared_broad_only_2();

	if (index == 0)
		install_sigsegv_handler();


	last_to_start = NUMBER_OF_CORES;

}

static inline void initialize_CoW(){

	step_1_shared_mem_setup_broad_only_2();
}

static inline void finish_CoW(){

	step_5_free_shared_mem_broad_only_2();

	remove_sigsegv_handler();
}

#endif