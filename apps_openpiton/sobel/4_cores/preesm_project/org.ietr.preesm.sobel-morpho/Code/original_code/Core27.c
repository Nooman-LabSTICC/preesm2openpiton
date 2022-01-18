/**
 * @file Core27.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 19:09:15 CET 2021
 *
 * Code generated for processing element Core27 (ID=27).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const explode_Split_0_output__Sobe__19;  // explode_Split_0_output > Sobel_19 size:= 6688*char defined in Core0
extern uchar *const output_19__input__0;  // explode_Split_0_output_output_19 > Sobel_19_input size:= 6688*uchar defined in Core0
extern uchar *const output__y_19__0;  // Erosion_19_output > implode_display_0_y_y_19 size:= 3168*uchar defined in Core0
extern char *const Erosion_19__implode_display___0;  // Erosion_19 > implode_display_0_y size:= 3168*char defined in Core0
extern uint64_t dumpedTimes[381]; //  size:= 381*uint64_t
extern int nbExec[381]; //  size:= 381*int

// Core Global Definitions
char Core27[10560]; //  size:= 10560*char
char *const Sobel_19__Dilation_19__0 = (char*) (Core27+0);  // Sobel_19 > Dilation_19 size:= 5984*char
char *const Dilation_19__Erosion_19__0 = (char*) (Core27+5984);  // Dilation_19 > Erosion_19 size:= 4576*char
uchar *const output__input__38 = (uchar*) (Core27+0);  // Sobel_19_output > Dilation_19_input size:= 5984*uchar
uchar *const output__input__39 = (uchar*) (Core27+5984);  // Dilation_19_output > Erosion_19_input size:= 4576*uchar
int idx;

void *computationThread_Core27(void *arg){
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
		dumpTime(341/*globalID*/,dumpedTimes); // 
		*(nbExec+342) = 0;
		receiveStart(); // Core0 > Core27: explode_Split_0_output__Sobe__19
		dumpTime(342/*globalID*/,dumpedTimes); // 
		*(nbExec+343) = 0;
		receiveEnd(0, 27); // Core0 > Core27: explode_Split_0_output__Sobe__19
		dumpTime(343/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+344); idx++){
			sobel(352/*width*/,19/*height*/,output_19__input__0,output__input__38); // Sobel_19
		}
		dumpTime(344/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+345); idx++){
			dilation(17/*height*/,352/*width*/,2/*window*/,output__input__38,output__input__39); // Dilation_19
		}
		dumpTime(345/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+346); idx++){
			erosion(13/*height*/,352/*width*/,2/*window*/,output__input__39,output__y_19__0); // Erosion_19
		}
		dumpTime(346/*globalID*/,dumpedTimes); // 
		*(nbExec+347) = 0;
		sendStart(27, 0); // Core27 > Core0: Erosion_19__implode_display___0
		dumpTime(347/*globalID*/,dumpedTimes); // 
		*(nbExec+348) = 0;
		sendEnd(); // Core27 > Core0: Erosion_19__implode_display___0
		dumpTime(348/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
	}
	return NULL;
}

