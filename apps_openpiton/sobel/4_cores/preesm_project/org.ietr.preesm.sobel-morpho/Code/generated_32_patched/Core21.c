//File edited by soys - Shame of you sniper - 18.March.2021
/**
 * @file Core21.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core21 (ID=21).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__14;  // explode_Split_0_output > Sobel_14 size:= 6688*char defined in Core0
extern uchar *const output_14__input__0;  // explode_Split_0_output_output_14 > Sobel_14_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_14__0;  // Erosion_14_output > implode_display_0_y_y_14 size:= 3168*uchar defined in Core0
extern char *const Erosion_14__implode_display___0;  // Erosion_14 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core21[10560]; //  size:= 10560*char
char *const Sobel_14__Dilation_14__0 = (char*) (Core21+0);  // Sobel_14 > Dilation_14 size:= 5984*char
char *const Dilation_14__Erosion_14__0 = (char*) (Core21+5984);  // Dilation_14 > Erosion_14 size:= 4576*char
uchar *const output__input__28 = (uchar*) (Core21+0);  // Sobel_14_output > Dilation_14_input size:= 5984*uchar
uchar *const output__input__29 = (uchar*) (Core21+5984);  // Dilation_14_output > Erosion_14_input size:= 4576*uchar
int idx;

void *computationThread_Core21(void *arg){
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
		while(lock(21));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		dumpTime(293/*globalID*/,dumpedTimes); // 
		*(nbExec+294) = 0;
		receiveStart(); // Core0 > Core21: explode_Split_0_output__Sobe__14
		dumpTime(294/*globalID*/,dumpedTimes); // 
		*(nbExec+295) = 0;
		receiveEnd(0, 21); // Core0 > Core21: explode_Split_0_output__Sobe__14
		dumpTime(295/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+296); idx++){
			sobel(352/*width*/,19/*height*/,output_14__input__0,output__input__28); // Sobel_14
		}
		dumpTime(296/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+297); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__28,output__input__29); // Dilation_14
		}
		dumpTime(297/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+298); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__29,output__y_14__0); // Erosion_14
		}
		dumpTime(298/*globalID*/,dumpedTimes); // 
		*(nbExec+299) = 0;
		sendStart(21, 0); // Core21 > Core0: Erosion_14__implode_display___0
		dumpTime(299/*globalID*/,dumpedTimes); // 
		*(nbExec+300) = 0;
		sendEnd(); // Core21 > Core0: Erosion_14__implode_display___0
		dumpTime(300/*globalID*/,dumpedTimes); // 
		while(lock(21));
//		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

