//File edited by soys - Shame of you sniper - 19.March.2021
/**
 * @file Core16.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core16 (ID=16).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__15;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__149;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__47;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__82;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15 size:= 1024*char defined in Core0
extern coord *const blocksCoord_15__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_15 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_15__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_15 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_15_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_15_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_15__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_15 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__215;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__181;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__114;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47 size:= 1024*char defined in Core0
extern coord *const blocksCoord_47__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_47 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_47__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_47 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_47_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_47_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_47__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_47 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__247;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core16(void *arg){
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
		while(lock(16));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core16: Stabilization_0_ComputeBlock__15
		// SyncComGroup = 0
		receiveEnd(1, 16); // Core1 > Core16: Stabilization_0_ComputeBlock__15
		receiveStart(); // Core0 > Core16: Stabilization_0_ComputeBlock__149
		// SyncComGroup = 0
		receiveEnd(0, 16); // Core0 > Core16: Stabilization_0_ComputeBlock__149
		receiveStart(); // Core1 > Core16: Stabilization_0_ComputeBlock__47
		// SyncComGroup = 0
		receiveEnd(1, 16); // Core1 > Core16: Stabilization_0_ComputeBlock__47
		receiveStart(); // Core1 > Core16: Stabilization_0_ComputeBlock__82
		// SyncComGroup = 0
		receiveEnd(1, 16); // Core1 > Core16: Stabilization_0_ComputeBlock__82
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_15__blockCoord__0,blocksData_15__blockData__0,out_15_65__previousFrame__0,vector__vectors_15__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_15
		// SyncComGroup = 1
		sendStart(16, 0); // Core16 > Core0: Stabilization_0_ComputeBlock__215
		sendEnd(); // Core16 > Core0: Stabilization_0_ComputeBlock__215
		receiveStart(); // Core0 > Core16: Stabilization_0_ComputeBlock__181
		// SyncComGroup = 2
		receiveEnd(0, 16); // Core0 > Core16: Stabilization_0_ComputeBlock__181
		receiveStart(); // Core1 > Core16: Stabilization_0_ComputeBlock__114
		// SyncComGroup = 2
		receiveEnd(1, 16); // Core1 > Core16: Stabilization_0_ComputeBlock__114
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_47__blockCoord__0,blocksData_47__blockData__0,out_47_65__previousFrame__0,vector__vectors_47__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_47
		// SyncComGroup = 3
		sendStart(16, 0); // Core16 > Core0: Stabilization_0_ComputeBlock__247
		sendEnd(); // Core16 > Core0: Stabilization_0_ComputeBlock__247
	}
	return NULL;
}

