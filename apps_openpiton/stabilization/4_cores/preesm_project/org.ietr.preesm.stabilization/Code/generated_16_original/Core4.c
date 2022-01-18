/**
 * @file Core4.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:06:25 CET 2021
 *
 * Code generated for processing element Core4 (ID=4).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__5;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__20;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__138;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__154;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__36;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__52;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__71;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4 size:= 1024*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__87;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20 size:= 1024*char defined in Core0
extern coord *const blocksCoord_20__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_20 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_20__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_20 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_20_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_20_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_20__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_20 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__220;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__170;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36 size:= 8*char defined in Core0
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
extern char *const Stabilization_0_ComputeBlock__186;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__119;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52 size:= 1024*char defined in Core0
extern coord *const blocksCoord_52__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_52 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_52__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_52 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_52_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_52_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_52__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_52 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__252;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_DuplicateAcc__1;  // Stabilization_0_DuplicateAccumulatedMotion_0 > Stabilization_end_out_DuplicateAccumulatedMotion_out_1 size:= 8*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___4;  // FIFO_Head_Stabilization_end_out_DuplicateAccumulatedMotion_out_1 > Stabilization_init_in_AccumulateMotion_accumulatedMotionIn size:= 8*char defined in Core0
extern coordf *const out_1_1_1__out_1_1__3;  // Stabilization_0_DuplicateAccumulatedMotion_0_out_1_1_1 > Stabilization_end_out_DuplicateAccumulatedMotion_out_1_out_1_1 size:= 1*coordf defined in Core0

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
		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__5
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__5
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__20
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__20
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__138
		// SyncComGroup = 0
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__138
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__154
		// SyncComGroup = 0
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__154
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__36
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__36
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__52
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__52
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__71
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__71
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__87
		// SyncComGroup = 0
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__87
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_20__blockCoord__0,blocksData_20__blockData__0,out_20_65__previousFrame__0,vector__vectors_20__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_20
		// SyncComGroup = 1
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__220
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__220
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__170
		// SyncComGroup = 2
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__170
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__103
		// SyncComGroup = 2
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__103
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_36__blockCoord__0,blocksData_36__blockData__0,out_36_65__previousFrame__0,vector__vectors_36__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_36
		// SyncComGroup = 3
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__236
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__236
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_4__blockCoord__0,blocksData_4__blockData__0,out_4_65__previousFrame__0,vector__vectors_4__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_4
		// SyncComGroup = 4
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__204
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__204
		receiveStart(); // Core0 > Core4: Stabilization_0_ComputeBlock__186
		// SyncComGroup = 5
		receiveEnd(0, 4); // Core0 > Core4: Stabilization_0_ComputeBlock__186
		receiveStart(); // Core1 > Core4: Stabilization_0_ComputeBlock__119
		// SyncComGroup = 5
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_ComputeBlock__119
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_52__blockCoord__0,blocksData_52__blockData__0,out_52_65__previousFrame__0,vector__vectors_52__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_52
		// SyncComGroup = 6
		sendStart(4, 0); // Core4 > Core0: Stabilization_0_ComputeBlock__252
		sendEnd(); // Core4 > Core0: Stabilization_0_ComputeBlock__252
		receiveStart(); // Core1 > Core4: Stabilization_0_DuplicateAcc__1
		// SyncComGroup = 7
		receiveEnd(1, 4); // Core1 > Core4: Stabilization_0_DuplicateAcc__1
		fifoPush(out_1_1_1__out_1_1__3, FIFO_Head_Stabilization_end___4, 8*sizeof(char), NULL, 0);
	}
	return NULL;
}

