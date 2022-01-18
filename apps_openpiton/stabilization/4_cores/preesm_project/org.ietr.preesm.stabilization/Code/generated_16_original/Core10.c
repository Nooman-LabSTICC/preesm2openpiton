/**
 * @file Core10.c
 * @generated by CPrinter
 * @date Sun Mar 14 10:06:25 CET 2021
 *
 * Code generated for processing element Core10 (ID=10).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int stopThreads;
extern char Shared[748112]; //  size:= 748112*char
extern char *const FIFO_Head_Stabilization_end___4;  // FIFO_Head_Stabilization_end_out_DuplicateAccumulatedMotion_out_1 > Stabilization_init_in_AccumulateMotion_accumulatedMotionIn size:= 8*char defined in Core0
extern coordf *const accumulatedMotionIn__accumul__0;  // Stabilization_init_in_AccumulateMotion_accumulatedMotionIn_accumulatedMotionIn > Stabilization_0_AccumulateMotion_0_accumulatedMotionIn size:= 1*coordf defined in Core0
extern char *const Stabilization_init_in_Accumu__0;  // Stabilization_init_in_AccumulateMotion_accumulatedMotionIn > Stabilization_0_AccumulateMotion_0 size:= 8*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___5;  // FIFO_Head_Stabilization_end_out_brFilteredMotion_out_1 > Stabilization_init_in_AccumulateMotion_filteredMotionIn size:= 8*char defined in Core0
extern coordf *const filteredMotionIn__filteredMo__0;  // Stabilization_init_in_AccumulateMotion_filteredMotionIn_filteredMotionIn > Stabilization_0_AccumulateMotion_0_filteredMotionIn size:= 1*coordf defined in Core0
extern char *const Stabilization_init_in_Accumu__1;  // Stabilization_init_in_AccumulateMotion_filteredMotionIn > Stabilization_0_AccumulateMotion_0 size:= 8*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___2;  // FIFO_Head_Stabilization_end_out_BrU_out_1 > Stabilization_init_in_renderFrame_uPrev size:= 56280*char defined in Core0
extern uchar *const uPrev__uPrev__0;  // Stabilization_init_in_renderFrame_uPrev_uPrev > Stabilization_0_renderFrame_0_uPrev size:= 56280*uchar defined in Core0
extern char *const Stabilization_init_in_render__1;  // Stabilization_init_in_renderFrame_uPrev > Stabilization_0_renderFrame_0 size:= 56280*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___3;  // FIFO_Head_Stabilization_end_out_BrV_out_1 > Stabilization_init_in_renderFrame_vPrev size:= 56280*char defined in Core0
extern uchar *const vPrev__vPrev__0;  // Stabilization_init_in_renderFrame_vPrev_vPrev > Stabilization_0_renderFrame_0_vPrev size:= 56280*uchar defined in Core0
extern char *const Stabilization_init_in_render__2;  // Stabilization_init_in_renderFrame_vPrev > Stabilization_0_renderFrame_0 size:= 56280*char defined in Core0
extern char *const FIFO_Head_Stabilization_end___0;  // FIFO_Head_Stabilization_end_out_BrY_out_1 > Stabilization_init_in_renderFrame_yPrev size:= 225120*char defined in Core0
extern uchar *const yPrev__yPrev__0;  // Stabilization_init_in_renderFrame_yPrev_yPrev > Stabilization_0_renderFrame_0_yPrev size:= 225120*uchar defined in Core0
extern char *const Stabilization_init_in_render__0;  // Stabilization_init_in_renderFrame_yPrev > Stabilization_0_renderFrame_0 size:= 225120*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__10;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__144;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__26;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__42;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__58;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__77;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 1024*char defined in Core0
extern coord *const blocksCoord_10__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_10__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_10_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_10_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_10__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_10 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__210;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__160;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__93;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 1024*char defined in Core0
extern coord *const blocksCoord_26__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_26 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_26__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_26 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_26_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_26_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_26__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_26 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__226;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__176;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__109;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 1024*char defined in Core0
extern coord *const blocksCoord_42__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_42__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_42_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_42_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_42__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_42 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__242;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__192;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__125;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 1024*char defined in Core0
extern coord *const blocksCoord_58__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_58 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_58__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_58 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_58_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_58_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_58__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_58 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__258;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_renderFrame___2;  // Stabilization_0_renderFrame_0 > Stabilization_0_BrV_0 size:= 56280*char defined in Core0
extern uchar *const out_1_1_1__out_1_1__2;  // Stabilization_0_BrV_0_out_1_1_1 > Stabilization_end_out_BrV_out_1_out_1_1 size:= 56280*uchar defined in Core0
extern uchar *const out_0_0__in__2;  // Stabilization_0_BrV_0_out_0_0 > DuplicateV_0_in size:= 56280*uchar defined in Core0
extern uchar *const vOut__in__0;  // Stabilization_0_renderFrame_0_vOut > Stabilization_0_BrV_0_in size:= 56280*uchar defined in Core0
extern char *const Stabilization_0_BrV_0__Stabi__0;  // Stabilization_0_BrV_0 > Stabilization_end_out_BrV_out_1 size:= 56280*char defined in Core0
extern char *const Stabilization_0_BrV_0__Dupli__0;  // Stabilization_0_BrV_0 > DuplicateV_0 size:= 56280*char defined in Core0
extern char *const Stabilization_0_BrU_0__Stabi__0;  // Stabilization_0_BrU_0 > Stabilization_end_out_BrU_out_1 size:= 56280*char defined in Core0
extern uchar *const out_1_1_1__out_1_1__1;  // Stabilization_0_BrU_0_out_1_1_1 > Stabilization_end_out_BrU_out_1_out_1_1 size:= 56280*uchar defined in Core0

// Core Global Definitions

void *computationThread_Core10(void *arg){
	if (arg != NULL) {
		printf("Warning: expecting NULL arguments\n");
	}
	// Initialisation(s)
	fifoInit(FIFO_Head_Stabilization_end___4, 8*sizeof(char), NULL, 0);
	fifoInit(FIFO_Head_Stabilization_end___5, 8*sizeof(char), NULL, 0);
	fifoInit(FIFO_Head_Stabilization_end___2, 56280*sizeof(char), NULL, 0);
	fifoInit(FIFO_Head_Stabilization_end___3, 56280*sizeof(char), NULL, 0);
	fifoInit(FIFO_Head_Stabilization_end___0, 225120*sizeof(char), NULL, 0);

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
		fifoPop(accumulatedMotionIn__accumul__0, FIFO_Head_Stabilization_end___4, 8*sizeof(char), NULL, 0);
		// SyncComGroup = 0
		sendStart(10, 1); // Core10 > Core1: Stabilization_init_in_Accumu__0
		sendEnd(); // Core10 > Core1: Stabilization_init_in_Accumu__0
		fifoPop(filteredMotionIn__filteredMo__0, FIFO_Head_Stabilization_end___5, 8*sizeof(char), NULL, 0);
		// SyncComGroup = 1
		sendStart(10, 1); // Core10 > Core1: Stabilization_init_in_Accumu__1
		sendEnd(); // Core10 > Core1: Stabilization_init_in_Accumu__1
		fifoPop(uPrev__uPrev__0, FIFO_Head_Stabilization_end___2, 56280*sizeof(char), NULL, 0);
		// SyncComGroup = 2
		sendStart(10, 0); // Core10 > Core0: Stabilization_init_in_render__1
		sendEnd(); // Core10 > Core0: Stabilization_init_in_render__1
		fifoPop(vPrev__vPrev__0, FIFO_Head_Stabilization_end___3, 56280*sizeof(char), NULL, 0);
		// SyncComGroup = 3
		sendStart(10, 0); // Core10 > Core0: Stabilization_init_in_render__2
		sendEnd(); // Core10 > Core0: Stabilization_init_in_render__2
		fifoPop(yPrev__yPrev__0, FIFO_Head_Stabilization_end___0, 225120*sizeof(char), NULL, 0);
		// SyncComGroup = 4
		sendStart(10, 0); // Core10 > Core0: Stabilization_init_in_render__0
		sendEnd(); // Core10 > Core0: Stabilization_init_in_render__0
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__10
		// SyncComGroup = 5
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__10
		receiveStart(); // Core0 > Core10: Stabilization_0_ComputeBlock__144
		// SyncComGroup = 5
		receiveEnd(0, 10); // Core0 > Core10: Stabilization_0_ComputeBlock__144
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__26
		// SyncComGroup = 5
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__26
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__42
		// SyncComGroup = 5
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__42
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__58
		// SyncComGroup = 5
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__58
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__77
		// SyncComGroup = 5
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__77
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_10__blockCoord__0,blocksData_10__blockData__0,out_10_65__previousFrame__0,vector__vectors_10__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10
		// SyncComGroup = 6
		sendStart(10, 0); // Core10 > Core0: Stabilization_0_ComputeBlock__210
		sendEnd(); // Core10 > Core0: Stabilization_0_ComputeBlock__210
		receiveStart(); // Core0 > Core10: Stabilization_0_ComputeBlock__160
		// SyncComGroup = 7
		receiveEnd(0, 10); // Core0 > Core10: Stabilization_0_ComputeBlock__160
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__93
		// SyncComGroup = 7
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__93
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_26__blockCoord__0,blocksData_26__blockData__0,out_26_65__previousFrame__0,vector__vectors_26__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26
		// SyncComGroup = 8
		sendStart(10, 0); // Core10 > Core0: Stabilization_0_ComputeBlock__226
		sendEnd(); // Core10 > Core0: Stabilization_0_ComputeBlock__226
		receiveStart(); // Core0 > Core10: Stabilization_0_ComputeBlock__176
		// SyncComGroup = 9
		receiveEnd(0, 10); // Core0 > Core10: Stabilization_0_ComputeBlock__176
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__109
		// SyncComGroup = 9
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__109
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_42__blockCoord__0,blocksData_42__blockData__0,out_42_65__previousFrame__0,vector__vectors_42__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42
		// SyncComGroup = 10
		sendStart(10, 0); // Core10 > Core0: Stabilization_0_ComputeBlock__242
		sendEnd(); // Core10 > Core0: Stabilization_0_ComputeBlock__242
		receiveStart(); // Core0 > Core10: Stabilization_0_ComputeBlock__192
		// SyncComGroup = 11
		receiveEnd(0, 10); // Core0 > Core10: Stabilization_0_ComputeBlock__192
		receiveStart(); // Core1 > Core10: Stabilization_0_ComputeBlock__125
		// SyncComGroup = 11
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_ComputeBlock__125
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_58__blockCoord__0,blocksData_58__blockData__0,out_58_65__previousFrame__0,vector__vectors_58__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58
		// SyncComGroup = 12
		sendStart(10, 0); // Core10 > Core0: Stabilization_0_ComputeBlock__258
		sendEnd(); // Core10 > Core0: Stabilization_0_ComputeBlock__258
		receiveStart(); // Core0 > Core10: Stabilization_0_renderFrame___2
		// SyncComGroup = 13
		receiveEnd(0, 10); // Core0 > Core10: Stabilization_0_renderFrame___2
		// Broadcast Stabilization_0_BrV_0
		{
			// memcpy #0
			memcpy(out_1_1_1__out_1_1__2+0, vOut__in__0+0, 56280*sizeof(uchar));
			// memcpy #0
		}
		// SyncComGroup = 14
		sendStart(10, 11); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		sendEnd(); // Core10 > Core11: Stabilization_0_BrV_0__Stabi__0
		// SyncComGroup = 14
		sendStart(10, 2); // Core10 > Core2: Stabilization_0_BrV_0__Dupli__0
		sendEnd(); // Core10 > Core2: Stabilization_0_BrV_0__Dupli__0
		receiveStart(); // Core1 > Core10: Stabilization_0_BrU_0__Stabi__0
		// SyncComGroup = 15
		receiveEnd(1, 10); // Core1 > Core10: Stabilization_0_BrU_0__Stabi__0
		fifoPush(out_1_1_1__out_1_1__1, FIFO_Head_Stabilization_end___2, 56280*sizeof(char), NULL, 0);
	}
	return NULL;
}

