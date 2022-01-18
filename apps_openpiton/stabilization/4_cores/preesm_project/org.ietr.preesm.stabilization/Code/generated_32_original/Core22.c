/**
 * @file Core22.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core22 (ID=22).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__21;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__155;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__53;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__88;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21 size:= 1024*char defined in Core0
extern coord *const blocksCoord_21__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_21 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_21__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_21 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_21_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_21_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_21__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_21 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__221;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__187;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__120;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53 size:= 1024*char defined in Core0
extern coord *const blocksCoord_53__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_53 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_53__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_53 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_53_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_53_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_53__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_53 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__253;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core22(void *arg){
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
		receiveStart(); // Core1 > Core22: Stabilization_0_ComputeBlock__21
		// SyncComGroup = 0
		receiveEnd(1, 22); // Core1 > Core22: Stabilization_0_ComputeBlock__21
		receiveStart(); // Core0 > Core22: Stabilization_0_ComputeBlock__155
		// SyncComGroup = 0
		receiveEnd(0, 22); // Core0 > Core22: Stabilization_0_ComputeBlock__155
		receiveStart(); // Core1 > Core22: Stabilization_0_ComputeBlock__53
		// SyncComGroup = 0
		receiveEnd(1, 22); // Core1 > Core22: Stabilization_0_ComputeBlock__53
		receiveStart(); // Core1 > Core22: Stabilization_0_ComputeBlock__88
		// SyncComGroup = 0
		receiveEnd(1, 22); // Core1 > Core22: Stabilization_0_ComputeBlock__88
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_21__blockCoord__0,blocksData_21__blockData__0,out_21_65__previousFrame__0,vector__vectors_21__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_21
		// SyncComGroup = 1
		sendStart(22, 0); // Core22 > Core0: Stabilization_0_ComputeBlock__221
		sendEnd(); // Core22 > Core0: Stabilization_0_ComputeBlock__221
		receiveStart(); // Core0 > Core22: Stabilization_0_ComputeBlock__187
		// SyncComGroup = 2
		receiveEnd(0, 22); // Core0 > Core22: Stabilization_0_ComputeBlock__187
		receiveStart(); // Core1 > Core22: Stabilization_0_ComputeBlock__120
		// SyncComGroup = 2
		receiveEnd(1, 22); // Core1 > Core22: Stabilization_0_ComputeBlock__120
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_53__blockCoord__0,blocksData_53__blockData__0,out_53_65__previousFrame__0,vector__vectors_53__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_53
		// SyncComGroup = 3
		sendStart(22, 0); // Core22 > Core0: Stabilization_0_ComputeBlock__253
		sendEnd(); // Core22 > Core0: Stabilization_0_ComputeBlock__253
	}
	return NULL;
}

