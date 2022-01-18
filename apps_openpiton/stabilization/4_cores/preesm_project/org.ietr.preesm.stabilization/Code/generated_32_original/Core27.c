/**
 * @file Core27.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core27 (ID=27).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__31;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__165;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__63;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__98;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31 size:= 1024*char defined in Core0
extern coord *const blocksCoord_31__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_31 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_31__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_31 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_31_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_31_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_31__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_31 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__231;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__197;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__130;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63 size:= 1024*char defined in Core0
extern coord *const blocksCoord_63__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_63 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_63__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_63 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_63_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_63_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_63__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_63 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__263;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core27(void *arg){
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
		receiveStart(); // Core1 > Core27: Stabilization_0_ComputeBlock__31
		// SyncComGroup = 0
		receiveEnd(1, 27); // Core1 > Core27: Stabilization_0_ComputeBlock__31
		receiveStart(); // Core0 > Core27: Stabilization_0_ComputeBlock__165
		// SyncComGroup = 0
		receiveEnd(0, 27); // Core0 > Core27: Stabilization_0_ComputeBlock__165
		receiveStart(); // Core1 > Core27: Stabilization_0_ComputeBlock__63
		// SyncComGroup = 0
		receiveEnd(1, 27); // Core1 > Core27: Stabilization_0_ComputeBlock__63
		receiveStart(); // Core1 > Core27: Stabilization_0_ComputeBlock__98
		// SyncComGroup = 0
		receiveEnd(1, 27); // Core1 > Core27: Stabilization_0_ComputeBlock__98
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_31__blockCoord__0,blocksData_31__blockData__0,out_31_65__previousFrame__0,vector__vectors_31__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_31
		// SyncComGroup = 1
		sendStart(27, 0); // Core27 > Core0: Stabilization_0_ComputeBlock__231
		sendEnd(); // Core27 > Core0: Stabilization_0_ComputeBlock__231
		receiveStart(); // Core0 > Core27: Stabilization_0_ComputeBlock__197
		// SyncComGroup = 2
		receiveEnd(0, 27); // Core0 > Core27: Stabilization_0_ComputeBlock__197
		receiveStart(); // Core1 > Core27: Stabilization_0_ComputeBlock__130
		// SyncComGroup = 2
		receiveEnd(1, 27); // Core1 > Core27: Stabilization_0_ComputeBlock__130
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_63__blockCoord__0,blocksData_63__blockData__0,out_63_65__previousFrame__0,vector__vectors_63__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_63
		// SyncComGroup = 3
		sendStart(27, 0); // Core27 > Core0: Stabilization_0_ComputeBlock__263
		sendEnd(); // Core27 > Core0: Stabilization_0_ComputeBlock__263
	}
	return NULL;
}

