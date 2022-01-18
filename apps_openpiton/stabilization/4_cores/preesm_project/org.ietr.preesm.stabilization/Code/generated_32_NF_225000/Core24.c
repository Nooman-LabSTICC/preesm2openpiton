//File edited by soys - Shame of you sniper - 27.March.2021
/**
 * @file Core24.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core24 (ID=24).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "ntm.h"
#include <emmintrin.h>
#include <smmintrin.h>
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__23;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__157;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__55;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__90;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23 size:= 1024*char defined in Core0
extern coord *const blocksCoord_23__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_23 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_23__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_23 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_23_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_23_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_23__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_23 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__223;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__189;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__122;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55 size:= 1024*char defined in Core0
extern coord *const blocksCoord_55__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_55 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_55__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_55 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_55_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_55_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_55__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_55 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__255;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core24(void *arg){
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
		while(lock(24));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core24: Stabilization_0_ComputeBlock__23
		// SyncComGroup = 0
		receiveEnd(1, 24); // Core1 > Core24: Stabilization_0_ComputeBlock__23
		receiveStart(); // Core0 > Core24: Stabilization_0_ComputeBlock__157
		// SyncComGroup = 0
		receiveEnd(0, 24); // Core0 > Core24: Stabilization_0_ComputeBlock__157
		receiveStart(); // Core1 > Core24: Stabilization_0_ComputeBlock__55
		// SyncComGroup = 0
		receiveEnd(1, 24); // Core1 > Core24: Stabilization_0_ComputeBlock__55
		receiveStart(); // Core1 > Core24: Stabilization_0_ComputeBlock__90
		// SyncComGroup = 0
		receiveEnd(1, 24); // Core1 > Core24: Stabilization_0_ComputeBlock__90
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_23__blockCoord__0,blocksData_23__blockData__0,out_23_65__previousFrame__0,vector__vectors_23__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_23
		// SyncComGroup = 1
		sendStart(24, 0); // Core24 > Core0: Stabilization_0_ComputeBlock__223
		sendEnd(); // Core24 > Core0: Stabilization_0_ComputeBlock__223
		receiveStart(); // Core0 > Core24: Stabilization_0_ComputeBlock__189
		// SyncComGroup = 2
		receiveEnd(0, 24); // Core0 > Core24: Stabilization_0_ComputeBlock__189
		receiveStart(); // Core1 > Core24: Stabilization_0_ComputeBlock__122
		// SyncComGroup = 2
		receiveEnd(1, 24); // Core1 > Core24: Stabilization_0_ComputeBlock__122
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_55__blockCoord__0,blocksData_55__blockData__0,out_55_65__previousFrame__0,vector__vectors_55__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_55
		// SyncComGroup = 3
		sendStart(24, 0); // Core24 > Core0: Stabilization_0_ComputeBlock__255
		sendEnd(); // Core24 > Core0: Stabilization_0_ComputeBlock__255
	}
	return NULL;
}

