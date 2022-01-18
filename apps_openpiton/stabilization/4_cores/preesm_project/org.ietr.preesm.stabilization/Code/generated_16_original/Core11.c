/**
 * @file Core11.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:06:25 CET 2021
 *
 * Code generated for processing element Core11 (ID=11).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char *const Stabilization_0_ComputeBlock__11;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__145;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__27;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__43;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__59;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__78;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 size:= 1024*char defined in Core0
extern coord *const blocksCoord_11__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_11 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_11__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_11 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_11_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_11_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_11__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_11 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__211;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__161;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__94;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27 size:= 1024*char defined in Core0
extern coord *const blocksCoord_27__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_27 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_27__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_27 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_27_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_27_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_27__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_27 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__227;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__177;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__110;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 size:= 1024*char defined in Core0
extern coord *const blocksCoord_43__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_43 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_43__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_43 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_43_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_43_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_43__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_43 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__243;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__193;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__126;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59 size:= 1024*char defined in Core0
extern coord *const blocksCoord_59__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_59 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_59__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_59 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_59_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_59_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_59__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_59 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__259;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
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
		pthread_barrier_wait(&iter_barrier);
		if(stopThreads){
			pthread_exit(NULL);
		}
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__11
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__11
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__145
		// SyncComGroup = 0
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__145
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__27
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__27
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__43
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__43
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__59
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__59
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__78
		// SyncComGroup = 0
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__78
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_11__blockCoord__0,blocksData_11__blockData__0,out_11_65__previousFrame__0,vector__vectors_11__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_11
		// SyncComGroup = 1
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__211
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__211
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__161
		// SyncComGroup = 2
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__161
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__94
		// SyncComGroup = 2
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__94
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_27__blockCoord__0,blocksData_27__blockData__0,out_27_65__previousFrame__0,vector__vectors_27__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_27
		// SyncComGroup = 3
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__227
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__227
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__177
		// SyncComGroup = 4
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__177
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__110
		// SyncComGroup = 4
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__110
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_43__blockCoord__0,blocksData_43__blockData__0,out_43_65__previousFrame__0,vector__vectors_43__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_43
		// SyncComGroup = 5
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__243
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__243
		receiveStart(); // Core0 > Core11: Stabilization_0_ComputeBlock__193
		// SyncComGroup = 6
		receiveEnd(0, 11); // Core0 > Core11: Stabilization_0_ComputeBlock__193
		receiveStart(); // Core1 > Core11: Stabilization_0_ComputeBlock__126
		// SyncComGroup = 6
		receiveEnd(1, 11); // Core1 > Core11: Stabilization_0_ComputeBlock__126
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_59__blockCoord__0,blocksData_59__blockData__0,out_59_65__previousFrame__0,vector__vectors_59__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_59
		// SyncComGroup = 7
		sendStart(11, 0); // Core11 > Core0: Stabilization_0_ComputeBlock__259
		sendEnd(); // Core11 > Core0: Stabilization_0_ComputeBlock__259
		receiveStart(); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		// SyncComGroup = 8
		receiveEnd(10, 11); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		fifoPush(out_1_1_1__out_1_1__2, FIFO_Head_Stabilization_end___3, 56280*sizeof(char), NULL, 0);
	}
	return NULL;
}
