/**
 * @file Core5.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core5 (ID=5).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__5;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__36;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__138;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__170;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__71;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 1024*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__103;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 size:= 1024*char defined in Core0
extern coord *const blocksCoord_36__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_36 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_36__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_36 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_36_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_36_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_36__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_36 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__236;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern coord *const blocksCoord_4__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_4 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_4__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_4 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_4_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_4_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_4__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_4 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__204;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_DuplicateAcc__1;  // Stabilization_0_DuplicateAccumulatedMotion_0 > Stabilization_end_out_DuplicateAccumulatedMotion_out_1 size:= 8*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___4;  // FIFO_Head_Stabilization_end_out_DuplicateAccumulatedMotion_out_1 > Stabilization_init_in_AccumulateMotion_accumulatedMotionIn size:= 8*char defined in Core0
extern coordf *const out_1_1_1__out_1_1__3;  // Stabilization_0_DuplicateAccumulatedMotion_0_out_1_1_1 > Stabilization_end_out_DuplicateAccumulatedMotion_out_1_out_1_1 size:= 1*coordf defined in Core0

// Core Global Definitions

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
		receiveStart(); // Core1 > Core5: Stabilization_0_ComputeBlock__5
		// SyncComGroup = 0
		receiveEnd(1, 5); // Core1 > Core5: Stabilization_0_ComputeBlock__5
		receiveStart(); // Core1 > Core5: Stabilization_0_ComputeBlock__36
		// SyncComGroup = 0
		receiveEnd(1, 5); // Core1 > Core5: Stabilization_0_ComputeBlock__36
		receiveStart(); // Core0 > Core5: Stabilization_0_ComputeBlock__138
		// SyncComGroup = 0
		receiveEnd(0, 5); // Core0 > Core5: Stabilization_0_ComputeBlock__138
		receiveStart(); // Core0 > Core5: Stabilization_0_ComputeBlock__170
		// SyncComGroup = 0
		receiveEnd(0, 5); // Core0 > Core5: Stabilization_0_ComputeBlock__170
		receiveStart(); // Core1 > Core5: Stabilization_0_ComputeBlock__71
		// SyncComGroup = 0
		receiveEnd(1, 5); // Core1 > Core5: Stabilization_0_ComputeBlock__71
		receiveStart(); // Core1 > Core5: Stabilization_0_ComputeBlock__103
		// SyncComGroup = 0
		receiveEnd(1, 5); // Core1 > Core5: Stabilization_0_ComputeBlock__103
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_36__blockCoord__0,blocksData_36__blockData__0,out_36_65__previousFrame__0,vector__vectors_36__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36
		// SyncComGroup = 1
		sendStart(5, 0); // Core5 > Core0: Stabilization_0_ComputeBlock__236
		sendEnd(); // Core5 > Core0: Stabilization_0_ComputeBlock__236
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_4__blockCoord__0,blocksData_4__blockData__0,out_4_65__previousFrame__0,vector__vectors_4__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4
		// SyncComGroup = 2
		sendStart(5, 0); // Core5 > Core0: Stabilization_0_ComputeBlock__204
		sendEnd(); // Core5 > Core0: Stabilization_0_ComputeBlock__204
		receiveStart(); // Core1 > Core5: Stabilization_0_DuplicateAcc__1
		// SyncComGroup = 3
		receiveEnd(1, 5); // Core1 > Core5: Stabilization_0_DuplicateAcc__1
		fifoPush(out_1_1_1__out_1_1__3, FIFO_Head_Stabilization_end___4, 8*sizeof(char), NULL, 0);
	}
	return NULL;
}

