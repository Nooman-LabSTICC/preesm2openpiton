/**
 * @file Core7.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 18:59:31 CET 2021
 *
 * Code generated for processing element Core7 (ID=6).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__6;  // explode_Split_0_output > Sobel_6 size:= 16192*char defined in Core0
extern uchar *const output_6__input__0;  // explode_Split_0_output_output_6 > Sobel_6_input size:= 16192*uchar defined in Core0
extern uchar *const output__y_6__0;  // Erosion_6_output > implode_display_0_y_y_6 size:= 12672*uchar defined in Core0
extern char *const Erosion_6__implode_display_0__0;  // Erosion_6 > implode_display_0_y size:= 12672*char defined in Core0
extern uint64_t dumpedTimes[96]; //  size:= 96*uint64_t
extern int nbExec[96]; //  size:= 96*int

// Core Global Definitions
char Core7[29568]; //  size:= 29568*char
char *const Sobel_6__Dilation_6__0 = (char*) (Core7+0);  // Sobel_6 > Dilation_6 size:= 15488*char
char *const Dilation_6__Erosion_6__0 = (char*) (Core7+15488);  // Dilation_6 > Erosion_6 size:= 14080*char
uchar *const output__input__14 = (uchar*) (Core7+0);  // Sobel_6_output > Dilation_6_input size:= 15488*uchar
uchar *const output__input__15 = (uchar*) (Core7+15488);  // Dilation_6_output > Erosion_6_input size:= 14080*uchar
int idx;

void *computationThread_Core6(void *arg){
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
		dumpTime(88/*globalID*/,dumpedTimes); // 
		*(nbExec+89) = 0;
		receiveStart(); // Core0 > Core7: explode_Split_0_output__Sobe__6
		dumpTime(89/*globalID*/,dumpedTimes); // 
		*(nbExec+90) = 0;
		receiveEnd(0, 6); // Core0 > Core7: explode_Split_0_output__Sobe__6
		dumpTime(90/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+91); idx++){
			sobel(352/*width*/,46/*height*/,output_6__input__0,output__input__14); // Sobel_6
		}
		dumpTime(91/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+92); idx++){
			dilation(44/*height*/,352/*width*/,2/*window*/,output__input__14,output__input__15); // Dilation_6
		}
		dumpTime(92/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+93); idx++){
			erosion(40/*height*/,352/*width*/,2/*window*/,output__input__15,output__y_6__0); // Erosion_6
		}
		dumpTime(93/*globalID*/,dumpedTimes); // 
		*(nbExec+94) = 0;
		sendStart(6, 0); // Core7 > Core0: Erosion_6__implode_display_0__0
		dumpTime(94/*globalID*/,dumpedTimes); // 
		*(nbExec+95) = 0;
		sendEnd(); // Core7 > Core0: Erosion_6__implode_display_0__0
		dumpTime(95/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}
