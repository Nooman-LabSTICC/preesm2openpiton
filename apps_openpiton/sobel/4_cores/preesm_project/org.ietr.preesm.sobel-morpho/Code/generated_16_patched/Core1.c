//File edited by soys - Shame of you sniper - 18.March.2021
/**
 * @file Core1.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:00:00 CET 2021
 *
 * Code generated for processing element Core1 (ID=1).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__1;  // explode_Split_0_output > Sobel_1 size:= 9856*char defined in Core0
extern uchar *const output_1__input__0;  // explode_Split_0_output_output_1 > Sobel_1_input size:= 9856*uchar defined in Core0
extern uchar *const output__y_1__0;  // Erosion_1_output > implode_display_0_y_y_1 size:= 6336*uchar defined in Core0
extern char *const Erosion_1__implode_display_0__0;  // Erosion_1 > implode_display_0_y size:= 6336*char defined in Core0
extern uint64_t dumpedTimes[189]; //  size:= 189*uint64_t
extern int nbExec[189]; //  size:= 189*int

// Core Global Definitions
char Core1[16896]; //  size:= 16896*char
char *const Sobel_1__Dilation_1__0 = (char*) (Core1+0);  // Sobel_1 > Dilation_1 size:= 9152*char
char *const Dilation_1__Erosion_1__0 = (char*) (Core1+9152);  // Dilation_1 > Erosion_1 size:= 7744*char
uchar *const output__input__2 = (uchar*) (Core1+0);  // Sobel_1_output > Dilation_1_input size:= 9152*uchar
uchar *const output__input__3 = (uchar*) (Core1+9152);  // Dilation_1_output > Erosion_1_input size:= 7744*uchar
int idx;

void *computationThread_Core1(void *arg){
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
		while(lock(1));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		dumpTime(69/*globalID*/,dumpedTimes); // 
		*(nbExec+70) = 0;
		receiveStart(); // Core0 > Core1: explode_Split_0_output__Sobe__1
		dumpTime(70/*globalID*/,dumpedTimes); // 
		*(nbExec+71) = 0;
		receiveEnd(0, 1); // Core0 > Core1: explode_Split_0_output__Sobe__1
		dumpTime(71/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+72); idx++){
			sobel(352/*width*/,28/*height*/,output_1__input__0,output__input__2); // Sobel_1
		}
		dumpTime(72/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+73); idx++){
			dilation(26/*height*/,352/*width*/,2/*window*/,output__input__2,output__input__3); // Dilation_1
		}
		dumpTime(73/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+74); idx++){
			erosion(22/*height*/,352/*width*/,2/*window*/,output__input__3,output__y_1__0); // Erosion_1
		}
		dumpTime(74/*globalID*/,dumpedTimes); // 
		*(nbExec+75) = 0;
		sendStart(1, 0); // Core1 > Core0: Erosion_1__implode_display_0__0
		dumpTime(75/*globalID*/,dumpedTimes); // 
		*(nbExec+76) = 0;
		sendEnd(); // Core1 > Core0: Erosion_1__implode_display_0__0
		dumpTime(76/*globalID*/,dumpedTimes); // 
		while(lock(1));
//		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

