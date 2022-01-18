#include <stdio.h>
#include "cons.h"


void consume(int msg_size, unsigned char *cons_input){
	unsigned int sum = 0;
	static int loop_counter = 1 ;

	//printf("Begin loop\n\n");

	for(int i=0; i<msg_size; i++){
		sum += (unsigned int) cons_input[i];
		printf("%d |", cons_input[i]);
	}

	printf("Computed loop %d\n", loop_counter++);

	//printf("End loop, sum: %d\n", sum);

}
