/**
 * @file Core13.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core13 (ID=13).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__5;  // explode_Split_0_output > Sobel_5 size:= 6688*char defined in Core0
extern uchar *const output_5__input__0;  // explode_Split_0_output_output_5 > Sobel_5_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_5__0;  // Erosion_5_output > implode_display_0_y_y_5 size:= 3168*uchar defined in Core0
extern char *const Erosion_5__implode_display_0__0;  // Erosion_5 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core13[10560]; //  size:= 10560*char
char *const Sobel_5__Dilation_5__0 = (char*) (Core13+0);  // Sobel_5 > Dilation_5 size:= 5984*char
char *const Dilation_5__Erosion_5__0 = (char*) (Core13+5984);  // Dilation_5 > Erosion_5 size:= 4576*char
uchar *const output__input__10 = (uchar*) (Core13+0);  // Sobel_5_output > Dilation_5_input size:= 5984*uchar
uchar *const output__input__11 = (uchar*) (Core13+5984);  // Dilation_5_output > Erosion_5_input size:= 4576*uchar
int idx;

void *computationThread_Core13(void *arg){
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
		dumpTime(229/*globalID*/,dumpedTimes); // 
		*(nbExec+230) = 0;
		receiveStart(); // Core0 > Core13: explode_Split_0_output__Sobe__5
		dumpTime(230/*globalID*/,dumpedTimes); // 
		*(nbExec+231) = 0;
		receiveEnd(0, 13); // Core0 > Core13: explode_Split_0_output__Sobe__5
		dumpTime(231/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+232); idx++){
			sobel(352/*width*/,19/*height*/,output_5__input__0,output__input__10); // Sobel_5
		}
		dumpTime(232/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+233); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__10,output__input__11); // Dilation_5
		}
		dumpTime(233/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+234); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__11,output__y_5__0); // Erosion_5
		}
		dumpTime(234/*globalID*/,dumpedTimes); // 
		*(nbExec+235) = 0;
		sendStart(13, 0); // Core13 > Core0: Erosion_5__implode_display_0__0
		dumpTime(235/*globalID*/,dumpedTimes); // 
		*(nbExec+236) = 0;
		sendEnd(); // Core13 > Core0: Erosion_5__implode_display_0__0
		dumpTime(236/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

