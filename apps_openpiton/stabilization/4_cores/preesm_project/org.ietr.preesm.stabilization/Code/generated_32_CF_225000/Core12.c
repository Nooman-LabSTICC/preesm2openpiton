//File edited by soys - Shame of you sniper - 27.March.2021
//File edited by Cowa - CoW automatic script - 27.March.2021
/**
 * @file Core12.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core12 (ID=12).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "cow_master.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__11;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__145;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__43;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__78;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 1024*char defined in Core0
extern coord *const blocksCoord_11__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_11 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_11__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_11 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_11_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_11_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_11__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_11 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__211;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__177;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__110;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 1024*char defined in Core0
extern coord *const blocksCoord_43__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_43 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_43__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_43 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_43_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_43_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_43__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_43 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__243;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core12(void *arg){
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
		while(lock(12));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core12: Stabilization_0_ComputeBlock__11
		// SyncComGroup = 0
		receiveEnd(1, 12); // Core1 > Core12: Stabilization_0_ComputeBlock__11
		receiveStart(); // Core0 > Core12: Stabilization_0_ComputeBlock__145
		// SyncComGroup = 0
		receiveEnd(0, 12); // Core0 > Core12: Stabilization_0_ComputeBlock__145
		receiveStart(); // Core1 > Core12: Stabilization_0_ComputeBlock__43
		// SyncComGroup = 0
		receiveEnd(1, 12); // Core1 > Core12: Stabilization_0_ComputeBlock__43
		receiveStart(); // Core1 > Core12: Stabilization_0_ComputeBlock__78
		// SyncComGroup = 0
		receiveEnd(1, 12); // Core1 > Core12: Stabilization_0_ComputeBlock__78
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_11__blockCoord__0,blocksData_11__blockData__0,out_11_65__previousFrame__0,vector__vectors_11__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11
		// SyncComGroup = 1
		sendStart(12, 0); // Core12 > Core0: Stabilization_0_ComputeBlock__211
		sendEnd(); // Core12 > Core0: Stabilization_0_ComputeBlock__211
		receiveStart(); // Core0 > Core12: Stabilization_0_ComputeBlock__177
		// SyncComGroup = 2
		receiveEnd(0, 12); // Core0 > Core12: Stabilization_0_ComputeBlock__177
		receiveStart(); // Core1 > Core12: Stabilization_0_ComputeBlock__110
		// SyncComGroup = 2
		receiveEnd(1, 12); // Core1 > Core12: Stabilization_0_ComputeBlock__110
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_43__blockCoord__0,blocksData_43__blockData__0,out_43_65__previousFrame__0,vector__vectors_43__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43
		// SyncComGroup = 3
		sendStart(12, 0); // Core12 > Core0: Stabilization_0_ComputeBlock__243
		sendEnd(); // Core12 > Core0: Stabilization_0_ComputeBlock__243
	}
	return NULL;
}

