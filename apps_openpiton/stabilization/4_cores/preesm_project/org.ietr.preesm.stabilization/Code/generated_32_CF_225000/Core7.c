//File edited by soys - Shame of you sniper - 27.March.2021
//File edited by Cowa - CoW automatic script - 27.March.2021
/**
 * @file Core7.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core7 (ID=7).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "cow_master.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__7;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__38;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__140;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__172;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__73;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6 size:= 1024*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__105;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38 size:= 1024*char defined in Core0
extern coord *const blocksCoord_38__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_38 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_38__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_38 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_38_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_38_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_38__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_38 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__238;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern coord *const blocksCoord_6__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_6 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_6__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_6 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_6_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_6_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_6__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_6 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__206;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core7(void *arg){
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
		while(lock(7));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core7: Stabilization_0_ComputeBlock__7
		// SyncComGroup = 0
		receiveEnd(1, 7); // Core1 > Core7: Stabilization_0_ComputeBlock__7
		receiveStart(); // Core1 > Core7: Stabilization_0_ComputeBlock__38
		// SyncComGroup = 0
		receiveEnd(1, 7); // Core1 > Core7: Stabilization_0_ComputeBlock__38
		receiveStart(); // Core0 > Core7: Stabilization_0_ComputeBlock__140
		// SyncComGroup = 0
		receiveEnd(0, 7); // Core0 > Core7: Stabilization_0_ComputeBlock__140
		receiveStart(); // Core0 > Core7: Stabilization_0_ComputeBlock__172
		// SyncComGroup = 0
		receiveEnd(0, 7); // Core0 > Core7: Stabilization_0_ComputeBlock__172
		receiveStart(); // Core1 > Core7: Stabilization_0_ComputeBlock__73
		// SyncComGroup = 0
		receiveEnd(1, 7); // Core1 > Core7: Stabilization_0_ComputeBlock__73
		receiveStart(); // Core1 > Core7: Stabilization_0_ComputeBlock__105
		// SyncComGroup = 0
		receiveEnd(1, 7); // Core1 > Core7: Stabilization_0_ComputeBlock__105
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_38__blockCoord__0,blocksData_38__blockData__0,out_38_65__previousFrame__0,vector__vectors_38__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_38
		// SyncComGroup = 1
		sendStart(7, 0); // Core7 > Core0: Stabilization_0_ComputeBlock__238
		sendEnd(); // Core7 > Core0: Stabilization_0_ComputeBlock__238
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_6__blockCoord__0,blocksData_6__blockData__0,out_6_65__previousFrame__0,vector__vectors_6__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_6
		// SyncComGroup = 2
		sendStart(7, 0); // Core7 > Core0: Stabilization_0_ComputeBlock__206
		sendEnd(); // Core7 > Core0: Stabilization_0_ComputeBlock__206
	}
	return NULL;
}

