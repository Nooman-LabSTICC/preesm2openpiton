//File edited by soys - Shame of you sniper - 27.March.2021
/**
 * @file Core2.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:12:14 CET 2021
 *
 * Code generated for processing element Core2 (ID=2).
 */

#include "preesm_gen.h"
#include "path_sniper.h"
#include "ntm.h"
#include <emmintrin.h>
#include <smmintrin.h>
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__3;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__136;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__34;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__69;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 1024*char defined in Core0
extern coord *const blocksCoord_2__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_2 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_2__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_2 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_2_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_2_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_2__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_2 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__202;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__168;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__101;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 1024*char defined in Core0
extern coord *const blocksCoord_34__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_34 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_34__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_34 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_34_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_34_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_34__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_34 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__234;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_BrV_0__Dupli__0;  // Stabilization_0_BrV_0 > DuplicateV_0 size:= 56280*char defined in Core0
extern uchar *const out_0_0__v__0;  // DuplicateV_0_out_0_0 > DisplayYUV_0_v size:= 56280*uchar defined in Core0
extern uchar *const out_1_1__v__0;  // DuplicateV_0_out_1_1 > WriteYUV_0_v size:= 56280*uchar defined in Core0
extern uchar *const out_0_0__in__2;  // Stabilization_0_BrV_0_out_0_0 > DuplicateV_0_in size:= 56280*uchar defined in Core0
extern char *const DuplicateV_0__DisplayYUV_0__0;  // DuplicateV_0 > DisplayYUV_0 size:= 56280*char defined in Core0
extern char *const DuplicateV_0__WriteYUV_0__0;  // DuplicateV_0 > WriteYUV_0 size:= 56280*char defined in Core0

// Core Global Definitions

void *computationThread_Core2(void *arg){
	unsigned int my_time;
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
		if (index > 0){
			my_time = stopTiming(0);
			printf("Loop overhead %d us\n", my_time);
		}
		startTiming(0);
		while(lock(2));
//		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__3
		// SyncComGroup = 0
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__3
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__136
		// SyncComGroup = 0
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__136
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__34
		// SyncComGroup = 0
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__34
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__69
		// SyncComGroup = 0
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__69
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_2__blockCoord__0,blocksData_2__blockData__0,out_2_65__previousFrame__0,vector__vectors_2__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2
		// SyncComGroup = 1
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__202
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__202
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__168
		// SyncComGroup = 2
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__168
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__101
		// SyncComGroup = 2
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__101
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_34__blockCoord__0,blocksData_34__blockData__0,out_34_65__previousFrame__0,vector__vectors_34__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34
		// SyncComGroup = 3
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__234
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__234
		receiveStart(); // Core10 > Core2: Stabilization_0_BrV_0__Dupli__0
		// SyncComGroup = 4
		receiveEnd(10, 2); // Core10 > Core2: Stabilization_0_BrV_0__Dupli__0
		// Broadcast DuplicateV_0
		{
			// memcpy #0
			// memcpy #0
		}
		// SyncComGroup = 5
		sendStart(2, 0); // Core2 > Core0: DuplicateV_0__DisplayYUV_0__0
		sendEnd(); // Core2 > Core0: DuplicateV_0__DisplayYUV_0__0
		// SyncComGroup = 5
		sendStart(2, 1); // Core2 > Core1: DuplicateV_0__WriteYUV_0__0
		sendEnd(); // Core2 > Core1: DuplicateV_0__WriteYUV_0__0
	}
	my_time = stopTiming(0);
	printf("Loop overhead %d us\n", my_time);
	return NULL;
}

