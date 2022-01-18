/**
 * @file Core25.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:10:56 CET 2021
 *
 * Code generated for processing element Core25 (ID=25).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__24;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__158;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__56;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__91;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24 size:= 1024*char defined in Core0
extern coord *const blocksCoord_24__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_24 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_24__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_24 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_24_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_24_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_24__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_24 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__224;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__190;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__123;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56 size:= 1024*char defined in Core0
extern coord *const blocksCoord_56__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_56 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_56__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_56 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_56_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_56_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_56__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_56 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__256;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core25(void *arg){
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
		receiveStart(); // Core1 > Core25: Stabilization_0_ComputeBlock__24
		// SyncComGroup = 0
		receiveEnd(1, 25); // Core1 > Core25: Stabilization_0_ComputeBlock__24
		receiveStart(); // Core0 > Core25: Stabilization_0_ComputeBlock__158
		// SyncComGroup = 0
		receiveEnd(0, 25); // Core0 > Core25: Stabilization_0_ComputeBlock__158
		receiveStart(); // Core1 > Core25: Stabilization_0_ComputeBlock__56
		// SyncComGroup = 0
		receiveEnd(1, 25); // Core1 > Core25: Stabilization_0_ComputeBlock__56
		receiveStart(); // Core1 > Core25: Stabilization_0_ComputeBlock__91
		// SyncComGroup = 0
		receiveEnd(1, 25); // Core1 > Core25: Stabilization_0_ComputeBlock__91
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_24__blockCoord__0,blocksData_24__blockData__0,out_24_65__previousFrame__0,vector__vectors_24__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_24
		// SyncComGroup = 1
		sendStart(25, 0); // Core25 > Core0: Stabilization_0_ComputeBlock__224
		sendEnd(); // Core25 > Core0: Stabilization_0_ComputeBlock__224
		receiveStart(); // Core0 > Core25: Stabilization_0_ComputeBlock__190
		// SyncComGroup = 2
		receiveEnd(0, 25); // Core0 > Core25: Stabilization_0_ComputeBlock__190
		receiveStart(); // Core1 > Core25: Stabilization_0_ComputeBlock__123
		// SyncComGroup = 2
		receiveEnd(1, 25); // Core1 > Core25: Stabilization_0_ComputeBlock__123
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_56__blockCoord__0,blocksData_56__blockData__0,out_56_65__previousFrame__0,vector__vectors_56__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_56
		// SyncComGroup = 3
		sendStart(25, 0); // Core25 > Core0: Stabilization_0_ComputeBlock__256
		sendEnd(); // Core25 > Core0: Stabilization_0_ComputeBlock__256
	}
	return NULL;
}

