//File edited by soys - Shame of you sniper - 19.March.2021
/**
 * @file Core4.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core4 (ID=4).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__4;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__137;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__35;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__70;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3 size:= 1024*char defined in Core0
extern coord *const blocksCoord_3__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_3 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_3__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_3 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_3_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_3_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_3__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_3 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__203;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__169;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__102;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35 size:= 1024*char defined in Core0
extern coord *const blocksCoord_35__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_35 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_35__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_35 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_35_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_35_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_35__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_35 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__235;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_BrY_0__Dupli__0;  // Stabilization_0_BrY_0 > DuplicateY_0 size:= 225120*char defined in Core0
extern uchar *const out_0_0__y__0;  // DuplicateY_0_out_0_0 > DisplayYUV_0_y size:= 225120*uchar defined in Core0
extern uchar *const out_1_1__y__0;  // DuplicateY_0_out_1_1 > WriteYUV_0_y size:= 225120*uchar defined in Core0
extern uchar *const out_0_0__in__0;  // Stabilization_0_BrY_0_out_0_0 > DuplicateY_0_in size:= 225120*uchar defined in Core0
extern char *const DuplicateY_0__DisplayYUV_0__0;  // DuplicateY_0 > DisplayYUV_0 size:= 225120*char defined in Core0
extern char *const DuplicateY_0__WriteYUV_0__0;  // DuplicateY_0 > WriteYUV_0 size:= 225120*char defined in Core0

// Core Global Definitions

void *computationThread_Core4(void *arg){
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
		while(lock(4));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__4
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__4
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__137
		// SyncComGroup = 0
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__137
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__35
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__35
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__70
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__70
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_3__blockCoord__0,blocksData_3__blockData__0,out_3_65__previousFrame__0,vector__vectors_3__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_3
		// SyncComGroup = 1
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__203
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__203
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__169
		// SyncComGroup = 2
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__169
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__102
		// SyncComGroup = 2
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__102
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_35__blockCoord__0,blocksData_35__blockData__0,out_35_65__previousFrame__0,vector__vectors_35__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_35
		// SyncComGroup = 3
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__235
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__235
		receiveStart(); // Core0 > Core4: Stabilization_0_BrY_0__Dupli__0
		// SyncComGroup = 4
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_BrY_0__Dupli__0
		// Broadcast DuplicateY_0
		{
			// memcpy #0
			// memcpy #0
		}
		// SyncComGroup = 5
		sendStart(4, 0); // Core4 > Core0: DuplicateY_0__DisplayYUV_0__0
		sendEnd(); // Core4 > Core0: DuplicateY_0__DisplayYUV_0__0
		// SyncComGroup = 5
		sendStart(4, 1); // Core4 > Core1: DuplicateY_0__WriteYUV_0__0
		sendEnd(); // Core4 > Core1: DuplicateY_0__WriteYUV_0__0
	}
	return NULL;
}

