//File edited by soys - Shame of you sniper - 27.March.2021
/**
 * @file Core11.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core11 (ID=11).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "ntm.h"
#include <emmintrin.h>
#include <smmintrin.h>
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__10;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__144;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__42;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__77;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 1024*char defined in Core0
extern coord *const blocksCoord_10__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_10__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_10_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_10_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_10__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_10 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__210;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__176;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__109;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 1024*char defined in Core0
extern coord *const blocksCoord_42__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_42__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_42_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_42_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_42__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_42 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__242;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_BrV_0__Stabi__0;  // Stabilization_0_BrV_0 > Stabilization_end_out_BrV_out_1 size:= 56280*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___3;  // FIFO_Head_Stabilization_end_out_BrV_out_1 > Stabilization_init_in_renderFrame_vPrev size:= 56280*char defined in Core0
extern uchar *const out_1_1_1__out_1_1__2;  // Stabilization_0_BrV_0_out_1_1_1 > Stabilization_end_out_BrV_out_1_out_1_1 size:= 56280*uchar defined in Core0

// Core Global Definitions

void *computationThread_Core11(void *arg){
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
		while(lock(11));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__10
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__10
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__144
		// SyncComGroup = 0
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__144
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__42
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__42
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__77
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__77
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_10__blockCoord__0,blocksData_10__blockData__0,out_10_65__previousFrame__0,vector__vectors_10__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10
		// SyncComGroup = 1
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__210
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__210
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__176
		// SyncComGroup = 2
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__176
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__109
		// SyncComGroup = 2
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__109
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_42__blockCoord__0,blocksData_42__blockData__0,out_42_65__previousFrame__0,vector__vectors_42__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42
		// SyncComGroup = 3
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__242
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__242
		receiveStart(); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		// SyncComGroup = 4
		receiveEnd(10, 11); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		fifoPush(out_1_1_1__out_1_1__2, FIFO_Head_Stabilization_end___3, 56280*sizeof(char), NULL, 0);
	}
	return NULL;
}

