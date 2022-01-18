#ifndef __BROAD_ONLY_2_HH__
#define __BROAD_ONLY_2_HH__

#include "../cow/cow_sniper.h"

#define SHARED_NAME_OF_BROAD_ONLY_2	"/broad_only_2"
#define SHARED_SIZE_OF_BROAD_ONLY_2	225120  //Bytes

int volatile fd_broad_only_2;

//Pointers for the commented pointers of Cores files

//BROADCAST pointers
uchar *volatile out_1_1_1__out_1_1__5;	//size: 225120
uchar *volatile yOut__in__0;	//size: 225120

//BROADCAST auxiliary pointers - used as reference for map and unmap

static inline void step_1_shared_mem_setup_broad_only_2() {

	create_shared_mem((void * volatile)&fd_broad_only_2, SHARED_NAME_OF_BROAD_ONLY_2, SHARED_SIZE_OF_BROAD_ONLY_2);
}


static inline void step_2_map_shared_broad_only_2() {

	map_shared((void * volatile)&yOut__in__0, &fd_broad_only_2, SHARED_SIZE_OF_BROAD_ONLY_2);

}


static inline void step_3_map_private_broad_only_2() {


	set_CoW__map_private((void * volatile)&out_1_1_1__out_1_1__5, &fd_broad_only_2, SHARED_SIZE_OF_BROAD_ONLY_2);

}


static inline void step_4_unmap_broad_only_2() {

	//Releases the SORUCE-MAIN buffer
	CoW_release__unmap((void * volatile)&yOut__in__0, SHARED_SIZE_OF_BROAD_ONLY_2);

	//Releases the TARGET buffer(s)
	CoW_release__unmap((void * volatile)&out_1_1_1__out_1_1__5, SHARED_SIZE_OF_BROAD_ONLY_2);

}


static inline void step_5_free_shared_mem_broad_only_2() {

	clear_shared_mem(SHARED_NAME_OF_BROAD_ONLY_2);

}

#endif