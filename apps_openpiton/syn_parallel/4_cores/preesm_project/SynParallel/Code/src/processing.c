#include "processing.h"


void processing(int slice_size, unsigned char *input, unsigned char *output){
	static int loop_counter = 1 ;

	//printf("\n");
	for(int i=0; i<slice_size; i++){
		//printf("%d, ", output[i]);
		output[i] = input[i] + 1;
	}

	printf("Processing %d\n", loop_counter++);
	//printf("\n");

}
