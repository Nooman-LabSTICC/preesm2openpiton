#ifndef __PATH_SNIPER_HH__
#define __PATH_SNIPER_HH__

#include "clock.h"

#define NUMBER_OF_CORES 8

extern volatile int barrier_counter;
extern pthread_mutex_t count_lock;
extern pthread_cond_t cond;


static inline int lock(int id){
	int sleep = 0;
	static int first = 0;

	pthread_mutex_lock(&count_lock);

	//The first core never is bloqued, them it is necessary to ensure that it never will decrement the barrier twice
	if (first == 0){
		barrier_counter--;
		//printf("Id %d decrementou: %d\n", id, barrier_counter);
	}

	//Just elects the first core
	if (barrier_counter == (NUMBER_OF_CORES-1) ){
		first = 1;
		//printf("Id %d ----- FIRST --- \n", id);
	}

	//Implement the barrier management by the first core.
	if (first){
		//If all cores are blocked, them release
		if (barrier_counter == 0){
			//printf("Id %d LIBEROU ---- \n", id);
			barrier_counter = NUMBER_OF_CORES;
			first = 0;
			pthread_cond_broadcast(&cond);
		//Goes sleep waiting all cores call this function
		} else {
			sleep = 1;
		}
	//For regular cores, just block after decrement the barrier
	} else {
		//printf("Id %d bloqueado\n", id);
		pthread_cond_wait (&cond, &count_lock);
	}

	pthread_mutex_unlock(&count_lock);

	if (sleep){
		usleep(1);
		return 1;
	}

	//printf("Id %d finalizou\n", id);
	return 0;
}

/*
static inline int lock(int id){
	pthread_mutex_lock(&count_lock);

	barrier_counter = barrier_counter - 1;

	if (barrier_counter > 0){
		pthread_cond_wait (&cond, &count_lock);

	} else {

		printf("Id %d RELEASED\n", id);
		barrier_counter = NUMBER_OF_CORES;
		pthread_cond_broadcast(&cond);
		printf("Id %d RELEASED2\n", id);
	}

	pthread_mutex_unlock(&count_lock);

	return 0;
}
*/

#endif

