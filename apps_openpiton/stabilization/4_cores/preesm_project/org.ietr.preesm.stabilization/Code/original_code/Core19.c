/**
 * @file Core19.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:10:56 CET 2021
 *
 * Code generated for processing element Core19 (ID=19).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__18;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__152;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__50;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__85;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 1024*char defined in Core0
extern coord *const blocksCoord_18__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_18 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_18__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_18 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_18_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_18_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_18__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_18 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__218;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__184;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__117;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 1024*char defined in Core0
extern coord *const blocksCoord_50__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_50 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_50__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_50 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_50_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_50_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_50__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_50 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__250;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core19(void *arg){
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
		receiveStart(); // Core1 > Core19: Stabilization_0_ComputeBlock__18
		// SyncComGroup = 0
		receiveEnd(1, 19); // Core1 > Core19: Stabilization_0_ComputeBlock__18
		receiveStart(); // Core0 > Core19: Stabilization_0_ComputeBlock__152
		// SyncComGroup = 0
		receiveEnd(0, 19); // Core0 > Core19: Stabilization_0_ComputeBlock__152
		receiveStart(); // Core1 > Core19: Stabilization_0_ComputeBlock__50
		// SyncComGroup = 0
		receiveEnd(1, 19); // Core1 > Core19: Stabilization_0_ComputeBlock__50
		receiveStart(); // Core1 > Core19: Stabilization_0_ComputeBlock__85
		// SyncComGroup = 0
		receiveEnd(1, 19); // Core1 > Core19: Stabilization_0_ComputeBlock__85
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_18__blockCoord__0,blocksData_18__blockData__0,out_18_65__previousFrame__0,vector__vectors_18__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18
		// SyncComGroup = 1
		sendStart(19, 0); // Core19 > Core0: Stabilization_0_ComputeBlock__218
		sendEnd(); // Core19 > Core0: Stabilization_0_ComputeBlock__218
		receiveStart(); // Core0 > Core19: Stabilization_0_ComputeBlock__184
		// SyncComGroup = 2
		receiveEnd(0, 19); // Core0 > Core19: Stabilization_0_ComputeBlock__184
		receiveStart(); // Core1 > Core19: Stabilization_0_ComputeBlock__117
		// SyncComGroup = 2
		receiveEnd(1, 19); // Core1 > Core19: Stabilization_0_ComputeBlock__117
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_50__blockCoord__0,blocksData_50__blockData__0,out_50_65__previousFrame__0,vector__vectors_50__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50
		// SyncComGroup = 3
		sendStart(19, 0); // Core19 > Core0: Stabilization_0_ComputeBlock__250
		sendEnd(); // Core19 > Core0: Stabilization_0_ComputeBlock__250
	}
	return NULL;
}

