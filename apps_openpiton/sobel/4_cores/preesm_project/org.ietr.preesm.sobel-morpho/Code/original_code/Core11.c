/**
 * @file Core11.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:00:00 CET 2021
 *
 * Code generated for processing element Core11 (ID=11).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__3;  // explode_Split_0_output > Sobel_3 size:= 9856*char defined in Core0
extern uchar *const output_3__input__0;  // explode_Split_0_output_output_3 > Sobel_3_input size:= 9856*uchar defined in Core0
extern uchar *const output__y_3__0;  // Erosion_3_output > implode_display_0_y_y_3 size:= 6336*uchar defined in Core0
extern char *const Erosion_3__implode_display_0__0;  // Erosion_3 > implode_display_0_y size:= 6336*char defined in Core0
extern uint64_t dumpedTimes[189]; //  size:= 189*uint64_t
extern int nbExec[189]; //  size:= 189*int

// Core Global Definitions
char Core11[16896]; //  size:= 16896*char
char *const Sobel_3__Dilation_3__0 = (char*) (Core11+0);  // Sobel_3 > Dilation_3 size:= 9152*char
char *const Dilation_3__Erosion_3__0 = (char*) (Core11+9152);  // Dilation_3 > Erosion_3 size:= 7744*char
uchar *const output__input__6 = (uchar*) (Core11+0);  // Sobel_3_output > Dilation_3_input size:= 9152*uchar
uchar *const output__input__7 = (uchar*) (Core11+9152);  // Dilation_3_output > Erosion_3_input size:= 7744*uchar
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
		dumpTime(149/*globalID*/,dumpedTimes); // 
		*(nbExec+150) = 0;
		receiveStart(); // Core0 > Core11: explode_Split_0_output__Sobe__3
		dumpTime(150/*globalID*/,dumpedTimes); // 
		*(nbExec+151) = 0;
		receiveEnd(0, 11); // Core0 > Core11: explode_Split_0_output__Sobe__3
		dumpTime(151/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+152); idx++){
			sobel(352/*width*/,28/*height*/,output_3__input__0,output__input__6); // Sobel_3
		}
		dumpTime(152/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+153); idx++){
			dilation(26/*height*/,352/*width*/,2/*window*/,output__input__6,output__input__7); // Dilation_3
		}
		dumpTime(153/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+154); idx++){
			erosion(22/*height*/,352/*width*/,2/*window*/,output__input__7,output__y_3__0); // Erosion_3
		}
		dumpTime(154/*globalID*/,dumpedTimes); // 
		*(nbExec+155) = 0;
		sendStart(11, 0); // Core11 > Core0: Erosion_3__implode_display_0__0
		dumpTime(155/*globalID*/,dumpedTimes); // 
		*(nbExec+156) = 0;
		sendEnd(); // Core11 > Core0: Erosion_3__implode_display_0__0
		dumpTime(156/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

