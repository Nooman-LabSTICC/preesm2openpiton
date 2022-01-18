/**
 * @file Core6.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core6 (ID=6).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__27;  // explode_Split_0_output > Sobel_27 size:= 6688*char defined in Core0
extern uchar *const output_27__input__0;  // explode_Split_0_output_output_27 > Sobel_27_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_27__0;  // Erosion_27_output > implode_display_0_y_y_27 size:= 3168*uchar defined in Core0
extern char *const Erosion_27__implode_display___0;  // Erosion_27 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core6[10560]; //  size:= 10560*char
char *const Sobel_27__Dilation_27__0 = (char*) (Core6+0);  // Sobel_27 > Dilation_27 size:= 5984*char
char *const Dilation_27__Erosion_27__0 = (char*) (Core6+5984);  // Dilation_27 > Erosion_27 size:= 4576*char
uchar *const output__input__54 = (uchar*) (Core6+0);  // Sobel_27_output > Dilation_27_input size:= 5984*uchar
uchar *const output__input__55 = (uchar*) (Core6+5984);  // Dilation_27_output > Erosion_27_input size:= 4576*uchar
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
		dumpTime(173/*globalID*/,dumpedTimes); // 
		*(nbExec+174) = 0;
		receiveStart(); // Core0 > Core6: explode_Split_0_output__Sobe__27
		dumpTime(174/*globalID*/,dumpedTimes); // 
		*(nbExec+175) = 0;
		receiveEnd(0, 6); // Core0 > Core6: explode_Split_0_output__Sobe__27
		dumpTime(175/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+176); idx++){
			sobel(352/*width*/,19/*height*/,output_27__input__0,output__input__54); // Sobel_27
		}
		dumpTime(176/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+177); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__54,output__input__55); // Dilation_27
		}
		dumpTime(177/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+178); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__55,output__y_27__0); // Erosion_27
		}
		dumpTime(178/*globalID*/,dumpedTimes); // 
		*(nbExec+179) = 0;
		sendStart(6, 0); // Core6 > Core0: Erosion_27__implode_display___0
		dumpTime(179/*globalID*/,dumpedTimes); // 
		*(nbExec+180) = 0;
		sendEnd(); // Core6 > Core0: Erosion_27__implode_display___0
		dumpTime(180/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}
