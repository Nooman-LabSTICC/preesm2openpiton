/**
 * @file Core30.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:10:56 CET 2021
 *
 * Code generated for processing element Core30 (ID=30).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__29;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__163;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__61;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__96;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29 size:= 1024*char defined in Core0
extern coord *const blocksCoord_29__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_29 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_29__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_29 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_29_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_29_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_29__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_29 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__229;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__195;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__128;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61 size:= 1024*char defined in Core0
extern coord *const blocksCoord_61__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_61 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_61__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_61 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_61_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_61_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_61__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_61 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__261;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core30(void *arg){
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
		receiveStart(); // Core1 > Core30: Stabilization_0_ComputeBlock__29
		// SyncComGroup = 0
		receiveEnd(1, 30); // Core1 > Core30: Stabilization_0_ComputeBlock__29
		receiveStart(); // Core0 > Core30: Stabilization_0_ComputeBlock__163
		// SyncComGroup = 0
		receiveEnd(0, 30); // Core0 > Core30: Stabilization_0_ComputeBlock__163
		receiveStart(); // Core1 > Core30: Stabilization_0_ComputeBlock__61
		// SyncComGroup = 0
		receiveEnd(1, 30); // Core1 > Core30: Stabilization_0_ComputeBlock__61
		receiveStart(); // Core1 > Core30: Stabilization_0_ComputeBlock__96
		// SyncComGroup = 0
		receiveEnd(1, 30); // Core1 > Core30: Stabilization_0_ComputeBlock__96
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_29__blockCoord__0,blocksData_29__blockData__0,out_29_65__previousFrame__0,vector__vectors_29__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_29
		// SyncComGroup = 1
		sendStart(30, 0); // Core30 > Core0: Stabilization_0_ComputeBlock__229
		sendEnd(); // Core30 > Core0: Stabilization_0_ComputeBlock__229
		receiveStart(); // Core0 > Core30: Stabilization_0_ComputeBlock__195
		// SyncComGroup = 2
		receiveEnd(0, 30); // Core0 > Core30: Stabilization_0_ComputeBlock__195
		receiveStart(); // Core1 > Core30: Stabilization_0_ComputeBlock__128
		// SyncComGroup = 2
		receiveEnd(1, 30); // Core1 > Core30: Stabilization_0_ComputeBlock__128
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_61__blockCoord__0,blocksData_61__blockData__0,out_61_65__previousFrame__0,vector__vectors_61__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_61
		// SyncComGroup = 3
		sendStart(30, 0); // Core30 > Core0: Stabilization_0_ComputeBlock__261
		sendEnd(); // Core30 > Core0: Stabilization_0_ComputeBlock__261
	}
	return NULL;
}

