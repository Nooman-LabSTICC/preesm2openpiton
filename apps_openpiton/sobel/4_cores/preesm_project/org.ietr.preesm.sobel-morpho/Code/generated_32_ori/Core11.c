/**
 * @file Core11.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core11 (ID=11).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__3;  // explode_Split_0_output > Sobel_3 size:= 6688*char defined in Core0
extern uchar *const output_3__input__0;  // explode_Split_0_output_output_3 > Sobel_3_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_3__0;  // Erosion_3_output > implode_display_0_y_y_3 size:= 3168*uchar defined in Core0
extern char *const Erosion_3__implode_display_0__0;  // Erosion_3 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core11[10560]; //  size:= 10560*char
char *const Sobel_3__Dilation_3__0 = (char*) (Core11+0);  // Sobel_3 > Dilation_3 size:= 5984*char
char *const Dilation_3__Erosion_3__0 = (char*) (Core11+5984);  // Dilation_3 > Erosion_3 size:= 4576*char
uchar *const output__input__6 = (uchar*) (Core11+0);  // Sobel_3_output > Dilation_3_input size:= 5984*uchar
uchar *const output__input__7 = (uchar*) (Core11+5984);  // Dilation_3_output > Erosion_3_input size:= 4576*uchar
int idx;

void *computationThread_Core11(void *arg){
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
		dumpTime(213/*globalID*/,dumpedTimes); // 
		*(nbExec+214) = 0;
		receiveStart(); // Core0 > Core11: explode_Split_0_output__Sobe__3
		dumpTime(214/*globalID*/,dumpedTimes); // 
		*(nbExec+215) = 0;
		receiveEnd(0, 11); // Core0 > Core11: explode_Split_0_output__Sobe__3
		dumpTime(215/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+216); idx++){
			sobel(352/*width*/,19/*height*/,output_3__input__0,output__input__6); // Sobel_3
		}
		dumpTime(216/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+217); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__6,output__input__7); // Dilation_3
		}
		dumpTime(217/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+218); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__7,output__y_3__0); // Erosion_3
		}
		dumpTime(218/*globalID*/,dumpedTimes); // 
		*(nbExec+219) = 0;
		sendStart(11, 0); // Core11 > Core0: Erosion_3__implode_display_0__0
		dumpTime(219/*globalID*/,dumpedTimes); // 
		*(nbExec+220) = 0;
		sendEnd(); // Core11 > Core0: Erosion_3__implode_display_0__0
		dumpTime(220/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

