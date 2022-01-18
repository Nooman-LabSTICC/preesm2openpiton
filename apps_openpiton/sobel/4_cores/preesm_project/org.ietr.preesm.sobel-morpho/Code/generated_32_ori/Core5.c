/**
 * @file Core5.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core5 (ID=5).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__26;  // explode_Split_0_output > Sobel_26 size:= 6688*char defined in Core0
extern uchar *const output_26__input__0;  // explode_Split_0_output_output_26 > Sobel_26_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_26__0;  // Erosion_26_output > implode_display_0_y_y_26 size:= 3168*uchar defined in Core0
extern char *const Erosion_26__implode_display___0;  // Erosion_26 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core5[10560]; //  size:= 10560*char
char *const Sobel_26__Dilation_26__0 = (char*) (Core5+0);  // Sobel_26 > Dilation_26 size:= 5984*char
char *const Dilation_26__Erosion_26__0 = (char*) (Core5+5984);  // Dilation_26 > Erosion_26 size:= 4576*char
uchar *const output__input__52 = (uchar*) (Core5+0);  // Sobel_26_output > Dilation_26_input size:= 5984*uchar
uchar *const output__input__53 = (uchar*) (Core5+5984);  // Dilation_26_output > Erosion_26_input size:= 4576*uchar
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
		dumpTime(165/*globalID*/,dumpedTimes); // 
		*(nbExec+166) = 0;
		receiveStart(); // Core0 > Core5: explode_Split_0_output__Sobe__26
		dumpTime(166/*globalID*/,dumpedTimes); // 
		*(nbExec+167) = 0;
		receiveEnd(0, 5); // Core0 > Core5: explode_Split_0_output__Sobe__26
		dumpTime(167/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+168); idx++){
			sobel(352/*width*/,19/*height*/,output_26__input__0,output__input__52); // Sobel_26
		}
		dumpTime(168/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+169); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__52,output__input__53); // Dilation_26
		}
		dumpTime(169/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+170); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__53,output__y_26__0); // Erosion_26
		}
		dumpTime(170/*globalID*/,dumpedTimes); // 
		*(nbExec+171) = 0;
		sendStart(5, 0); // Core5 > Core0: Erosion_26__implode_display___0
		dumpTime(171/*globalID*/,dumpedTimes); // 
		*(nbExec+172) = 0;
		sendEnd(); // Core5 > Core0: Erosion_26__implode_display___0
		dumpTime(172/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

