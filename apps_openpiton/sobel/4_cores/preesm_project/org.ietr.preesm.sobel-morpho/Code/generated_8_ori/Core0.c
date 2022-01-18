/**
 * @file Core0.c
 * @generated by InstrumentedCPrinter
 * @date Thu Mar 18 18:59:31 CET 2021
 *
 * Code generated for processing element Core0 (ID=0).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;

// Core Global Definitions
char Core0[80256]; //  size:= 80256*char
char Shared[209088]; //  size:= 209088*char
char *const Read_YUV_0__display_0__0 = (char*) (Core0+0);  // Read_YUV_0 > display_0 size:= 50688*char
char *const Sobel_0__Dilation_0__0 = (char*) (Core0+50688);  // Sobel_0 > Dilation_0 size:= 15488*char
char *const Dilation_0__Erosion_0__0 = (char*) (Core0+66176);  // Dilation_0 > Erosion_0 size:= 14080*char
char *const Read_YUV_0__Split_0__0 = (char*) (Shared+1760);  // Read_YUV_0 > Split_0 size:= 101376*char
char *const explode_Split_0_output__Sobe__0 = (char*) (Shared+0);  // explode_Split_0_output > Sobel_0 size:= 16192*char
char *const explode_Split_0_output__Sobe__1 = (char*) (Shared+12672);  // explode_Split_0_output > Sobel_1 size:= 16192*char
char *const explode_Split_0_output__Sobe__2 = (char*) (Shared+25344);  // explode_Split_0_output > Sobel_2 size:= 16192*char
char *const explode_Split_0_output__Sobe__3 = (char*) (Shared+38016);  // explode_Split_0_output > Sobel_3 size:= 16192*char
char *const explode_Split_0_output__Sobe__4 = (char*) (Shared+50688);  // explode_Split_0_output > Sobel_4 size:= 16192*char
char *const explode_Split_0_output__Sobe__5 = (char*) (Shared+63360);  // explode_Split_0_output > Sobel_5 size:= 16192*char
char *const explode_Split_0_output__Sobe__6 = (char*) (Shared+76032);  // explode_Split_0_output > Sobel_6 size:= 16192*char
char *const explode_Split_0_output__Sobe__7 = (char*) (Shared+88704);  // explode_Split_0_output > Sobel_7 size:= 16192*char
char *const implode_display_0_y__display__0 = (char*) (Shared+104896);  // implode_display_0_y > display_0 size:= 101376*char
char *const Erosion_0__implode_display_0__0 = (char*) (Shared+104896);  // Erosion_0 > implode_display_0_y size:= 12672*char
char *const Erosion_1__implode_display_0__0 = (char*) (Shared+117568);  // Erosion_1 > implode_display_0_y size:= 12672*char
char *const Erosion_2__implode_display_0__0 = (char*) (Shared+130240);  // Erosion_2 > implode_display_0_y size:= 12672*char
char *const Erosion_3__implode_display_0__0 = (char*) (Shared+142912);  // Erosion_3 > implode_display_0_y size:= 12672*char
char *const Erosion_4__implode_display_0__0 = (char*) (Shared+155584);  // Erosion_4 > implode_display_0_y size:= 12672*char
char *const Erosion_5__implode_display_0__0 = (char*) (Shared+168256);  // Erosion_5 > implode_display_0_y size:= 12672*char
char *const Erosion_6__implode_display_0__0 = (char*) (Shared+180928);  // Erosion_6 > implode_display_0_y size:= 12672*char
char *const Erosion_7__implode_display_0__0 = (char*) (Shared+193600);  // Erosion_7 > implode_display_0_y size:= 12672*char
char *const Sobel_7__Dilation_7__0 = (char*) (Shared+193600);  // Sobel_7 > Dilation_7 size:= 15488*char
char *const Dilation_7__Erosion_7__0 = (char*) (Shared+0);  // Dilation_7 > Erosion_7 size:= 14080*char
uchar *const u__u__0 = (uchar*) (Core0+0);  // Read_YUV_0_u > display_0_u size:= 25344*uchar
uchar *const v__v__0 = (uchar*) (Core0+25344);  // Read_YUV_0_v > display_0_v size:= 25344*uchar
uchar *const output__input__0 = (uchar*) (Core0+50688);  // Sobel_0_output > Dilation_0_input size:= 15488*uchar
uchar *const output__input__1 = (uchar*) (Core0+66176);  // Dilation_0_output > Erosion_0_input size:= 14080*uchar
uchar *const y__input__0 = (uchar*) (Shared+1760);  // Read_YUV_0_y > Split_0_input size:= 101376*uchar
uchar *const output_0__input__0 = (uchar*) (Shared+0);  // explode_Split_0_output_output_0 > Sobel_0_input size:= 16192*uchar
uchar *const output_1__input__0 = (uchar*) (Shared+12672);  // explode_Split_0_output_output_1 > Sobel_1_input size:= 16192*uchar
uchar *const output_2__input__0 = (uchar*) (Shared+25344);  // explode_Split_0_output_output_2 > Sobel_2_input size:= 16192*uchar
uchar *const output_3__input__0 = (uchar*) (Shared+38016);  // explode_Split_0_output_output_3 > Sobel_3_input size:= 16192*uchar
uchar *const output_4__input__0 = (uchar*) (Shared+50688);  // explode_Split_0_output_output_4 > Sobel_4_input size:= 16192*uchar
uchar *const output_5__input__0 = (uchar*) (Shared+63360);  // explode_Split_0_output_output_5 > Sobel_5_input size:= 16192*uchar
uchar *const output_6__input__0 = (uchar*) (Shared+76032);  // explode_Split_0_output_output_6 > Sobel_6_input size:= 16192*uchar
uchar *const output_7__input__0 = (uchar*) (Shared+88704);  // explode_Split_0_output_output_7 > Sobel_7_input size:= 16192*uchar
uchar *const output__y__0 = (uchar*) (Shared+104896);  // implode_display_0_y_output > display_0_y size:= 101376*uchar
uchar *const output__y_0__0 = (uchar*) (Shared+104896);  // Erosion_0_output > implode_display_0_y_y_0 size:= 12672*uchar
uchar *const output__y_1__0 = (uchar*) (Shared+117568);  // Erosion_1_output > implode_display_0_y_y_1 size:= 12672*uchar
uchar *const output__y_2__0 = (uchar*) (Shared+130240);  // Erosion_2_output > implode_display_0_y_y_2 size:= 12672*uchar
uchar *const output__y_3__0 = (uchar*) (Shared+142912);  // Erosion_3_output > implode_display_0_y_y_3 size:= 12672*uchar
uchar *const output__y_4__0 = (uchar*) (Shared+155584);  // Erosion_4_output > implode_display_0_y_y_4 size:= 12672*uchar
uchar *const output__y_5__0 = (uchar*) (Shared+168256);  // Erosion_5_output > implode_display_0_y_y_5 size:= 12672*uchar
uchar *const output__y_6__0 = (uchar*) (Shared+180928);  // Erosion_6_output > implode_display_0_y_y_6 size:= 12672*uchar
uchar *const output__y_7__0 = (uchar*) (Shared+193600);  // Erosion_7_output > implode_display_0_y_y_7 size:= 12672*uchar
uchar *const output__input__2 = (uchar*) (Shared+193600);  // Sobel_7_output > Dilation_7_input size:= 15488*uchar
uchar *const output__input__3 = (uchar*) (Shared+0);  // Dilation_7_output > Erosion_7_input size:= 14080*uchar
uint64_t dumpedTimes[96]; //  size:= 96*uint64_t
int nbExec[96]; //  size:= 96*int
int idx;

void *computationThread_Core0(void *arg){
	if (arg != NULL) {
		printf("Warning: expecting NULL arguments\n");
	}
	// Initialisation(s)
	initReadYUV(352/*width*/,288/*height*/); // Read_YUV_0
	yuvDisplayInit(0/*id*/,352/*width*/,288/*height*/); // display_0
	initNbExec(nbExec,96/*nbDump*/); // 

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
		dumpTime(0/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+1); idx++){
			readYUV(352/*width*/,288/*height*/,y__input__0,u__u__0,v__v__0); // Read_YUV_0
		}
		dumpTime(1/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+2); idx++){
			split(8/*nbSlice*/,352/*width*/,288/*height*/,5/*overlap*/,y__input__0,NULL); // Split_0
		}
		dumpTime(2/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+3); idx++){
			// Fork explode_Split_0_output
			{
			}
		}
		dumpTime(3/*globalID*/,dumpedTimes); // 
		*(nbExec+4) = 0;
		sendStart(0, 1); // Core0 > Core2: explode_Split_0_output__Sobe__1
		dumpTime(4/*globalID*/,dumpedTimes); // 
		*(nbExec+5) = 0;
		sendEnd(); // Core0 > Core2: explode_Split_0_output__Sobe__1
		dumpTime(5/*globalID*/,dumpedTimes); // 
		*(nbExec+6) = 0;
		sendStart(0, 2); // Core0 > Core3: explode_Split_0_output__Sobe__2
		dumpTime(6/*globalID*/,dumpedTimes); // 
		*(nbExec+7) = 0;
		sendEnd(); // Core0 > Core3: explode_Split_0_output__Sobe__2
		dumpTime(7/*globalID*/,dumpedTimes); // 
		*(nbExec+8) = 0;
		sendStart(0, 3); // Core0 > Core4: explode_Split_0_output__Sobe__3
		dumpTime(8/*globalID*/,dumpedTimes); // 
		*(nbExec+9) = 0;
		sendEnd(); // Core0 > Core4: explode_Split_0_output__Sobe__3
		dumpTime(9/*globalID*/,dumpedTimes); // 
		*(nbExec+10) = 0;
		sendStart(0, 4); // Core0 > Core5: explode_Split_0_output__Sobe__4
		dumpTime(10/*globalID*/,dumpedTimes); // 
		*(nbExec+11) = 0;
		sendEnd(); // Core0 > Core5: explode_Split_0_output__Sobe__4
		dumpTime(11/*globalID*/,dumpedTimes); // 
		*(nbExec+12) = 0;
		sendStart(0, 5); // Core0 > Core6: explode_Split_0_output__Sobe__5
		dumpTime(12/*globalID*/,dumpedTimes); // 
		*(nbExec+13) = 0;
		sendEnd(); // Core0 > Core6: explode_Split_0_output__Sobe__5
		dumpTime(13/*globalID*/,dumpedTimes); // 
		*(nbExec+14) = 0;
		sendStart(0, 6); // Core0 > Core7: explode_Split_0_output__Sobe__6
		dumpTime(14/*globalID*/,dumpedTimes); // 
		*(nbExec+15) = 0;
		sendEnd(); // Core0 > Core7: explode_Split_0_output__Sobe__6
		dumpTime(15/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+16); idx++){
			sobel(352/*width*/,46/*height*/,output_0__input__0,output__input__0); // Sobel_0
		}
		dumpTime(16/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+17); idx++){
			sobel(352/*width*/,46/*height*/,output_7__input__0,output__input__2); // Sobel_7
		}
		dumpTime(17/*globalID*/,dumpedTimes); // 
		*(nbExec+18) = 0;
		sendStart(0, 1); // Core0 > Core2: Sobel_7__Dilation_7__0
		dumpTime(18/*globalID*/,dumpedTimes); // 
		*(nbExec+19) = 0;
		sendEnd(); // Core0 > Core2: Sobel_7__Dilation_7__0
		dumpTime(19/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+20); idx++){
			dilation(44/*height*/,352/*width*/,2/*window*/,output__input__0,output__input__1); // Dilation_0
		}
		dumpTime(20/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+21); idx++){
			erosion(40/*height*/,352/*width*/,2/*window*/,output__input__1,output__y_0__0); // Erosion_0
		}
		dumpTime(21/*globalID*/,dumpedTimes); // 
		*(nbExec+22) = 0;
		receiveStart(); // Core2 > Core0: Erosion_1__implode_display_0__0
		dumpTime(22/*globalID*/,dumpedTimes); // 
		*(nbExec+23) = 0;
		receiveEnd(1, 0); // Core2 > Core0: Erosion_1__implode_display_0__0
		dumpTime(23/*globalID*/,dumpedTimes); // 
		*(nbExec+24) = 0;
		receiveStart(); // Core3 > Core0: Erosion_2__implode_display_0__0
		dumpTime(24/*globalID*/,dumpedTimes); // 
		*(nbExec+25) = 0;
		receiveEnd(2, 0); // Core3 > Core0: Erosion_2__implode_display_0__0
		dumpTime(25/*globalID*/,dumpedTimes); // 
		*(nbExec+26) = 0;
		receiveStart(); // Core4 > Core0: Erosion_3__implode_display_0__0
		dumpTime(26/*globalID*/,dumpedTimes); // 
		*(nbExec+27) = 0;
		receiveEnd(3, 0); // Core4 > Core0: Erosion_3__implode_display_0__0
		dumpTime(27/*globalID*/,dumpedTimes); // 
		*(nbExec+28) = 0;
		receiveStart(); // Core5 > Core0: Erosion_4__implode_display_0__0
		dumpTime(28/*globalID*/,dumpedTimes); // 
		*(nbExec+29) = 0;
		receiveEnd(4, 0); // Core5 > Core0: Erosion_4__implode_display_0__0
		dumpTime(29/*globalID*/,dumpedTimes); // 
		*(nbExec+30) = 0;
		receiveStart(); // Core6 > Core0: Erosion_5__implode_display_0__0
		dumpTime(30/*globalID*/,dumpedTimes); // 
		*(nbExec+31) = 0;
		receiveEnd(5, 0); // Core6 > Core0: Erosion_5__implode_display_0__0
		dumpTime(31/*globalID*/,dumpedTimes); // 
		*(nbExec+32) = 0;
		receiveStart(); // Core7 > Core0: Erosion_6__implode_display_0__0
		dumpTime(32/*globalID*/,dumpedTimes); // 
		*(nbExec+33) = 0;
		receiveEnd(6, 0); // Core7 > Core0: Erosion_6__implode_display_0__0
		dumpTime(33/*globalID*/,dumpedTimes); // 
		*(nbExec+34) = 0;
		receiveStart(); // Core3 > Core0: Erosion_7__implode_display_0__0
		dumpTime(34/*globalID*/,dumpedTimes); // 
		*(nbExec+35) = 0;
		receiveEnd(2, 0); // Core3 > Core0: Erosion_7__implode_display_0__0
		dumpTime(35/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+36); idx++){
			// Join implode_display_0_y
			{
			}
		}
		dumpTime(36/*globalID*/,dumpedTimes); // 
		for(idx=0; idx<*(nbExec+37); idx++){
			yuvDisplay(0/*id*/,output__y__0,u__u__0,v__v__0); // display_0
		}
		dumpTime(37/*globalID*/,dumpedTimes); // 
		pthread_barrier_wait(&iter_barrier);
		writeTime(dumpedTimes,96/*nbDump*/, nbExec);
	}
	return NULL;
}

