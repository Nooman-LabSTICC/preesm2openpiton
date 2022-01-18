#include "prod.h"

void produce(int msg_size, unsigned char *prod_output){
	static int loop_counter = 1 ;

	for(int i=0; i<msg_size; i++){
		prod_output[i] = i;
	}

	printf("Produced %d\n", loop_counter++);

}


