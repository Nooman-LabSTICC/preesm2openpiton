/**
 * @file Core6.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 18:59:31 CET 2021
 *
 * Code generated for processing element Core6 (ID=5).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__5;  // explode_Split_0_output > Sobel_5 size:= 16192*char defined in Core0
extern uchar *const output_5__input__0;  // explode_Split_0_output_output_5 > Sobel_5_input size:= 16192*uchar defined in Core0
extern uchar *const output__y_5__0;  // Erosion_5_output > implode_display_0_y_y_5 size:= 12672*uchar defined in Core0
extern char *const Erosion_5__implode_display_0__0;  // Erosion_5 > implode_display_0_y size:= 12672*char defined in Core0
extern uint64_t dumpedTimes[96]; //  size:= 96*uint64_t
extern int nbExec[96]; //  size:= 96*int

// Core Global Definitions
char Core6[29568]; //  size:= 29568*char
char *const Sobel_5__Dilation_5__0 = (char*) (Core6+0);  // Sobel_5 > Dilation_5 size:= 15488*char
char *const Dilation_5__Erosion_5__0 = (char*) (Core6+15488);  // Dilation_5 > Erosion_5 size:= 14080*char
uchar *const output__input__12 = (uchar*) (Core6+0);  // Sobel_5_output > Dilation_5_input size:= 15488*uchar
uchar *const output__input__13 = (uchar*) (Core6+15488);  // Dilation_5_output > Erosion_5_input size:= 14080*uchar
int idx;

void *computationThread_Core5(void *arg){
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
		dumpTime(80/*globalID*/,dumpedTimes); // 
		*(nbExec+81) = 0;
		receiveStart(); // Core0 > Core6: explode_Split_0_output__Sobe__5
		dumpTime(81/*globalID*/,dumpedTimes); // 
		*(nbExec+82) = 0;
		receiveEnd(0, 5); // Core0 > Core6: explode_Split_0_output__Sobe__5
		dumpTime(82/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+83); idx++){
			sobel(352/*width*/,46/*height*/,output_5__input__0,output__input__12); // Sobel_5
		}
		dumpTime(83/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+84); idx++){
			dilation(44/*height*/,352/*width*/,2/*window*/,output__input__12,output__input__13); // Dilation_5
		}
		dumpTime(84/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+85); idx++){
			erosion(40/*height*/,352/*width*/,2/*window*/,output__input__13,output__y_5__0); // Erosion_5
		}
		dumpTime(85/*globalID*/,dumpedTimes); // 
		*(nbExec+86) = 0;
		sendStart(5, 0); // Core6 > Core0: Erosion_5__implode_display_0__0
		dumpTime(86/*globalID*/,dumpedTimes); // 
		*(nbExec+87) = 0;
		sendEnd(); // Core6 > Core0: Erosion_5__implode_display_0__0
		dumpTime(87/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}
