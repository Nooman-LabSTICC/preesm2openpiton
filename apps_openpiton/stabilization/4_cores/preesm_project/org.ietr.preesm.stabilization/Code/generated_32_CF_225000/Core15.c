//File edited by soys - Shame of you sniper - 27.March.2021
//File edited by Cowa - CoW automatic script - 27.March.2021
/**
 * @file Core15.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core15 (ID=15).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "cow_master.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__14;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__148;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__46;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__81;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14 size:= 1024*char defined in Core0
extern coord *const blocksCoord_14__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_14 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_14__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_14 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_14_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_14_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_14__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_14 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__214;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__180;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__113;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46 size:= 1024*char defined in Core0
extern coord *const blocksCoord_46__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_46 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_46__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_46 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_46_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_46_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_46__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_46 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__246;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core15(void *arg){
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
		reconfigure_CoW(index);
		while(lock(15));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core15: Stabilization_0_ComputeBlock__14
		// SyncComGroup = 0
		receiveEnd(1, 15); // Core1 > Core15: Stabilization_0_ComputeBlock__14
		receiveStart(); // Core0 > Core15: Stabilization_0_ComputeBlock__148
		// SyncComGroup = 0
		receiveEnd(0, 15); // Core0 > Core15: Stabilization_0_ComputeBlock__148
		receiveStart(); // Core1 > Core15: Stabilization_0_ComputeBlock__46
		// SyncComGroup = 0
		receiveEnd(1, 15); // Core1 > Core15: Stabilization_0_ComputeBlock__46
		receiveStart(); // Core1 > Core15: Stabilization_0_ComputeBlock__81
		// SyncComGroup = 0
		receiveEnd(1, 15); // Core1 > Core15: Stabilization_0_ComputeBlock__81
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_14__blockCoord__0,blocksData_14__blockData__0,out_14_65__previousFrame__0,vector__vectors_14__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_14
		// SyncComGroup = 1
		sendStart(15, 0); // Core15 > Core0: Stabilization_0_ComputeBlock__214
		sendEnd(); // Core15 > Core0: Stabilization_0_ComputeBlock__214
		receiveStart(); // Core0 > Core15: Stabilization_0_ComputeBlock__180
		// SyncComGroup = 2
		receiveEnd(0, 15); // Core0 > Core15: Stabilization_0_ComputeBlock__180
		receiveStart(); // Core1 > Core15: Stabilization_0_ComputeBlock__113
		// SyncComGroup = 2
		receiveEnd(1, 15); // Core1 > Core15: Stabilization_0_ComputeBlock__113
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_46__blockCoord__0,blocksData_46__blockData__0,out_46_65__previousFrame__0,vector__vectors_46__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_46
		// SyncComGroup = 3
		sendStart(15, 0); // Core15 > Core0: Stabilization_0_ComputeBlock__246
		sendEnd(); // Core15 > Core0: Stabilization_0_ComputeBlock__246
	}
	return NULL;
}

