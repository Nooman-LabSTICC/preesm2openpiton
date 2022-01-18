/**
 * @file Core9.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core9 (ID=9).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__30;  // explode_Split_0_output > Sobel_30 size:= 6688*char defined in Core0
extern uchar *const output_30__input__0;  // explode_Split_0_output_output_30 > Sobel_30_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_30__0;  // Erosion_30_output > implode_display_0_y_y_30 size:= 3168*uchar defined in Core0
extern char *const Erosion_30__implode_display___0;  // Erosion_30 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core9[10560]; //  size:= 10560*char
char *const Sobel_30__Dilation_30__0 = (char*) (Core9+0);  // Sobel_30 > Dilation_30 size:= 5984*char
char *const Dilation_30__Erosion_30__0 = (char*) (Core9+5984);  // Dilation_30 > Erosion_30 size:= 4576*char
uchar *const output__input__60 = (uchar*) (Core9+0);  // Sobel_30_output > Dilation_30_input size:= 5984*uchar
uchar *const output__input__61 = (uchar*) (Core9+5984);  // Dilation_30_output > Erosion_30_input size:= 4576*uchar
int idx;

void *computationThread_Core9(void *arg){
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
		dumpTime(197/*globalID*/,dumpedTimes); // 
		*(nbExec+198) = 0;
		receiveStart(); // Core0 > Core9: explode_Split_0_output__Sobe__30
		dumpTime(198/*globalID*/,dumpedTimes); // 
		*(nbExec+199) = 0;
		receiveEnd(0, 9); // Core0 > Core9: explode_Split_0_output__Sobe__30
		dumpTime(199/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+200); idx++){
			sobel(352/*width*/,19/*height*/,output_30__input__0,output__input__60); // Sobel_30
		}
		dumpTime(200/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+201); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__60,output__input__61); // Dilation_30
		}
		dumpTime(201/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+202); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__61,output__y_30__0); // Erosion_30
		}
		dumpTime(202/*globalID*/,dumpedTimes); // 
		*(nbExec+203) = 0;
		sendStart(9, 0); // Core9 > Core0: Erosion_30__implode_display___0
		dumpTime(203/*globalID*/,dumpedTimes); // 
		*(nbExec+204) = 0;
		sendEnd(); // Core9 > Core0: Erosion_30__implode_display___0
		dumpTime(204/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

