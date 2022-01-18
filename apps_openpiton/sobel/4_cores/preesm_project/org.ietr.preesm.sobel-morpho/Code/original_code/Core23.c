/**
 * @file Core23.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core23 (ID=23).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__16;  // explode_Split_0_output > Sobel_16 size:= 6688*char defined in Core0
extern uchar *const output_16__input__0;  // explode_Split_0_output_output_16 > Sobel_16_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_16__0;  // Erosion_16_output > implode_display_0_y_y_16 size:= 3168*uchar defined in Core0
extern char *const Erosion_16__implode_display___0;  // Erosion_16 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core23[10560]; //  size:= 10560*char
char *const Sobel_16__Dilation_16__0 = (char*) (Core23+0);  // Sobel_16 > Dilation_16 size:= 5984*char
char *const Dilation_16__Erosion_16__0 = (char*) (Core23+5984);  // Dilation_16 > Erosion_16 size:= 4576*char
uchar *const output__input__32 = (uchar*) (Core23+0);  // Sobel_16_output > Dilation_16_input size:= 5984*uchar
uchar *const output__input__33 = (uchar*) (Core23+5984);  // Dilation_16_output > Erosion_16_input size:= 4576*uchar
int idx;

void *computationThread_Core23(void *arg){
	if (arg != NULL) {
		printf("Warning: expecting NULL arguments\n");
	}
	// Begin the execution loop
#ifdef LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<LOOP_SIZE;index++){
#else // Default case of an infinite loop
	while(1){
#endif
		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		dumpTime(309/*globalID*/,dumpedTimes); // 
		*(nbExec+310) = 0;
		receiveStart(); // Core0 > Core23: explode_Split_0_output__Sobe__16
		dumpTime(310/*globalID*/,dumpedTimes); // 
		*(nbExec+311) = 0;
		receiveEnd(0, 23); // Core0 > Core23: explode_Split_0_output__Sobe__16
		dumpTime(311/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+312); idx++){
			sobel(352/*width*/,19/*height*/,output_16__input__0,output__input__32); // Sobel_16
		}
		dumpTime(312/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+313); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__32,output__input__33); // Dilation_16
		}
		dumpTime(313/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+314); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__33,output__y_16__0); // Erosion_16
		}
		dumpTime(314/*globalID*/,dumpedTimes); // 
		*(nbExec+315) = 0;
		sendStart(23, 0); // Core23 > Core0: Erosion_16__implode_display___0
		dumpTime(315/*globalID*/,dumpedTimes); // 
		*(nbExec+316) = 0;
		sendEnd(); // Core23 > Core0: Erosion_16__implode_display___0
		dumpTime(316/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

