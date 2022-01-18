/**
 * @file Core31.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core31 (ID=31).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__30;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__164;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__62;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__97;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30 size:= 1024*char defined in Core0
extern coord *const blocksCoord_30__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_30 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_30__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_30 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_30_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_30_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_30__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_30 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__230;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__196;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__129;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62 size:= 1024*char defined in Core0
extern coord *const blocksCoord_62__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_62 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_62__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_62 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_62_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_62_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_62__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_62 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__262;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core31(void *arg){
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
		receiveStart(); // Core1 > Core31: Stabilization_0_ComputeBlock__30
		// SyncComGroup = 0
		receiveEnd(1, 31); // Core1 > Core31: Stabilization_0_ComputeBlock__30
		receiveStart(); // Core0 > Core31: Stabilization_0_ComputeBlock__164
		// SyncComGroup = 0
		receiveEnd(0, 31); // Core0 > Core31: Stabilization_0_ComputeBlock__164
		receiveStart(); // Core1 > Core31: Stabilization_0_ComputeBlock__62
		// SyncComGroup = 0
		receiveEnd(1, 31); // Core1 > Core31: Stabilization_0_ComputeBlock__62
		receiveStart(); // Core1 > Core31: Stabilization_0_ComputeBlock__97
		// SyncComGroup = 0
		receiveEnd(1, 31); // Core1 > Core31: Stabilization_0_ComputeBlock__97
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_30__blockCoord__0,blocksData_30__blockData__0,out_30_65__previousFrame__0,vector__vectors_30__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_30
		// SyncComGroup = 1
		sendStart(31, 0); // Core31 > Core0: Stabilization_0_ComputeBlock__230
		sendEnd(); // Core31 > Core0: Stabilization_0_ComputeBlock__230
		receiveStart(); // Core0 > Core31: Stabilization_0_ComputeBlock__196
		// SyncComGroup = 2
		receiveEnd(0, 31); // Core0 > Core31: Stabilization_0_ComputeBlock__196
		receiveStart(); // Core1 > Core31: Stabilization_0_ComputeBlock__129
		// SyncComGroup = 2
		receiveEnd(1, 31); // Core1 > Core31: Stabilization_0_ComputeBlock__129
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_62__blockCoord__0,blocksData_62__blockData__0,out_62_65__previousFrame__0,vector__vectors_62__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_62
		// SyncComGroup = 3
		sendStart(31, 0); // Core31 > Core0: Stabilization_0_ComputeBlock__262
		sendEnd(); // Core31 > Core0: Stabilization_0_ComputeBlock__262
	}
	return NULL;
}

