//File edited by soys - Shame of you sniper - 19.March.2021
/**
 * @file Core20.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core20 (ID=20).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__19;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__153;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__51;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__86;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19 size:= 1024*char defined in Core0
extern coord *const blocksCoord_19__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_19 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_19__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_19 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_19_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_19_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_19__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_19 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__219;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__185;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__118;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51 size:= 1024*char defined in Core0
extern coord *const blocksCoord_51__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_51 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_51__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_51 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_51_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_51_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_51__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_51 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__251;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0

// Core Global Definitions

void *computationThread_Core20(void *arg){
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
		while(lock(20));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core20: Stabilization_0_ComputeBlock__19
		// SyncComGroup = 0
		receiveEnd(1, 20); // Core1 > Core20: Stabilization_0_ComputeBlock__19
		receiveStart(); // Core0 > Core20: Stabilization_0_ComputeBlock__153
		// SyncComGroup = 0
		receiveEnd(0, 20); // Core0 > Core20: Stabilization_0_ComputeBlock__153
		receiveStart(); // Core1 > Core20: Stabilization_0_ComputeBlock__51
		// SyncComGroup = 0
		receiveEnd(1, 20); // Core1 > Core20: Stabilization_0_ComputeBlock__51
		receiveStart(); // Core1 > Core20: Stabilization_0_ComputeBlock__86
		// SyncComGroup = 0
		receiveEnd(1, 20); // Core1 > Core20: Stabilization_0_ComputeBlock__86
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_19__blockCoord__0,blocksData_19__blockData__0,out_19_65__previousFrame__0,vector__vectors_19__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_19
		// SyncComGroup = 1
		sendStart(20, 0); // Core20 > Core0: Stabilization_0_ComputeBlock__219
		sendEnd(); // Core20 > Core0: Stabilization_0_ComputeBlock__219
		receiveStart(); // Core0 > Core20: Stabilization_0_ComputeBlock__185
		// SyncComGroup = 2
		receiveEnd(0, 20); // Core0 > Core20: Stabilization_0_ComputeBlock__185
		receiveStart(); // Core1 > Core20: Stabilization_0_ComputeBlock__118
		// SyncComGroup = 2
		receiveEnd(1, 20); // Core1 > Core20: Stabilization_0_ComputeBlock__118
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_51__blockCoord__0,blocksData_51__blockData__0,out_51_65__previousFrame__0,vector__vectors_51__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_51
		// SyncComGroup = 3
		sendStart(20, 0); // Core20 > Core0: Stabilization_0_ComputeBlock__251
		sendEnd(); // Core20 > Core0: Stabilization_0_ComputeBlock__251
	}
	return NULL;
}

