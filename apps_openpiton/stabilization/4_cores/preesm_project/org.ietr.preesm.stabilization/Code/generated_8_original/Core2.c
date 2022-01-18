/**
 * @file Core2.c
 * @generated by CPrinter
 * @date Tue Mar 23 20:04:42 CET 2021
 *
 * Code generated for processing element Core2 (ID=2).
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
extern char *const Stabilization_0_ComputeBlock__3;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__10;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__18;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__26;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__34;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__42;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__50;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__58;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 72720*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__136;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__144;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__69;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 size:= 1024*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__77;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 size:= 1024*char defined in Core0
extern coord *const blocksCoord_10__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_10__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_10 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_10_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_10_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_10__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_10 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__210;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__152;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__85;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 size:= 1024*char defined in Core0
extern coord *const blocksCoord_18__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_18 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_18__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_18 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_18_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_18_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_18__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_18 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__218;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern coord *const blocksCoord_2__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_2 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_2__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_2 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_2_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_2_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_2__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_2 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__202;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__160;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__93;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 size:= 1024*char defined in Core0
extern coord *const blocksCoord_26__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_26 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_26__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_26 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_26_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_26_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_26__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_26 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__226;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__168;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__101;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 size:= 1024*char defined in Core0
extern coord *const blocksCoord_34__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_34 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_34__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_34 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_34_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_34_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_34__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_34 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__234;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__176;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__109;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 size:= 1024*char defined in Core0
extern coord *const blocksCoord_42__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_42__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_42 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_42_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_42_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_42__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_42 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__242;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__184;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__117;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 size:= 1024*char defined in Core0
extern coord *const blocksCoord_50__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_50 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_50__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_50 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_50_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_50_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_50__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_50 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__250;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__192;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 8*char defined in Core0
extern char *const Stabilization_0_ComputeBlock__125;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 size:= 1024*char defined in Core0
extern coord *const blocksCoord_58__blockCoord__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksCoord_blocksCoord_58 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_blockCoord size:= 1*coord defined in Core0
extern uchar *const blocksData_58__blockData__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_explode_Stabilization_0_ComputeBlockMotionVectorss_0_DivideBlocks_0_blocksData_blocksData_58 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_blockData size:= 1024*uchar defined in Core0
extern uchar *const out_58_65__previousFrame__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_DuplicatePreviousFrame_0_out_58_65 > Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_previousFrame size:= 72720*uchar defined in Core0
extern coord *const vector__vectors_58__0;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58_vector > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors_vectors_58 size:= 1*coord defined in Core0
extern char *const Stabilization_0_ComputeBlock__258;  // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58 > Stabilization_0_implode_Stabilization_0_FindDominatingMotion_0_vectors size:= 8*char defined in Core0
extern char *const Stabilization_0_renderFrame___1;  // Stabilization_0_renderFrame_0 > Stabilization_0_BrU_0 size:= 56280*char defined in Core0
extern uchar *const out_1_1_1__out_1_1__1;  // Stabilization_0_BrU_0_out_1_1_1 > Stabilization_end_out_BrU_out_1_out_1_1 size:= 56280*uchar defined in Core0
extern uchar *const out_0_0__in__1;  // Stabilization_0_BrU_0_out_0_0 > DuplicateU_0_in size:= 56280*uchar defined in Core0
extern uchar *const uOut__in__0;  // Stabilization_0_renderFrame_0_uOut > Stabilization_0_BrU_0_in size:= 56280*uchar defined in Core0
extern char *const Stabilization_0_BrU_0__Stabi__0;  // Stabilization_0_BrU_0 > Stabilization_end_out_BrU_out_1 size:= 56280*char defined in Core0
extern uchar *const out_0_0__u__0;  // DuplicateU_0_out_0_0 > DisplayYUV_0_u size:= 56280*uchar defined in Core0
extern uchar *const out_1_1__u__0;  // DuplicateU_0_out_1_1 > WriteYUV_0_u size:= 56280*uchar defined in Core0
extern char *const DuplicateU_0__DisplayYUV_0__0;  // DuplicateU_0 > DisplayYUV_0 size:= 56280*char defined in Core0
extern char *const DuplicateU_0__WriteYUV_0__0;  // DuplicateU_0 > WriteYUV_0 size:= 56280*char defined in Core0

// Core Global Definitions

void *computationThread_Core2(void *arg){
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
		sendStart(2, 1); // Core2 > Core1: Stabilization_init_in_Accumu__0
		sendEnd(); // Core2 > Core1: Stabilization_init_in_Accumu__0
		fifoPop(filteredMotionIn__filteredMo__0, FIFO_Head_Stabilization_end___5, 8*sizeof(char), NULL, 0);
		// SyncComGroup = 1
		sendStart(2, 1); // Core2 > Core1: Stabilization_init_in_Accumu__1
		sendEnd(); // Core2 > Core1: Stabilization_init_in_Accumu__1
		fifoPop(uPrev__uPrev__0, FIFO_Head_Stabilization_end___2, 56280*sizeof(char), NULL, 0);
		// SyncComGroup = 2
		sendStart(2, 0); // Core2 > Core0: Stabilization_init_in_render__1
		sendEnd(); // Core2 > Core0: Stabilization_init_in_render__1
		fifoPop(vPrev__vPrev__0, FIFO_Head_Stabilization_end___3, 56280*sizeof(char), NULL, 0);
		// SyncComGroup = 3
		sendStart(2, 0); // Core2 > Core0: Stabilization_init_in_render__2
		sendEnd(); // Core2 > Core0: Stabilization_init_in_render__2
		fifoPop(yPrev__yPrev__0, FIFO_Head_Stabilization_end___0, 225120*sizeof(char), NULL, 0);
		// SyncComGroup = 4
		sendStart(2, 0); // Core2 > Core0: Stabilization_init_in_render__0
		sendEnd(); // Core2 > Core0: Stabilization_init_in_render__0
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__3
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__3
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__10
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__10
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__18
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__18
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__26
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__26
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__34
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__34
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__42
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__42
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__50
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__50
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__58
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__58
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__136
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__136
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__144
		// SyncComGroup = 5
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__144
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__69
		// SyncComGroup = 5
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__69
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__77
		// SyncComGroup = 5
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__77
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_10__blockCoord__0,blocksData_10__blockData__0,out_10_65__previousFrame__0,vector__vectors_10__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_10
		// SyncComGroup = 6
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__210
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__210
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__152
		// SyncComGroup = 7
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__152
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__85
		// SyncComGroup = 7
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__85
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_18__blockCoord__0,blocksData_18__blockData__0,out_18_65__previousFrame__0,vector__vectors_18__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_18
		// SyncComGroup = 8
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__218
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__218
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_2__blockCoord__0,blocksData_2__blockData__0,out_2_65__previousFrame__0,vector__vectors_2__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_2
		// SyncComGroup = 9
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__202
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__202
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__160
		// SyncComGroup = 10
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__160
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__93
		// SyncComGroup = 10
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__93
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_26__blockCoord__0,blocksData_26__blockData__0,out_26_65__previousFrame__0,vector__vectors_26__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_26
		// SyncComGroup = 11
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__226
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__226
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__168
		// SyncComGroup = 12
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__168
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__101
		// SyncComGroup = 12
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__101
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_34__blockCoord__0,blocksData_34__blockData__0,out_34_65__previousFrame__0,vector__vectors_34__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_34
		// SyncComGroup = 13
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__234
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__234
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__176
		// SyncComGroup = 14
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__176
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__109
		// SyncComGroup = 14
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__109
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_42__blockCoord__0,blocksData_42__blockData__0,out_42_65__previousFrame__0,vector__vectors_42__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_42
		// SyncComGroup = 15
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__242
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__242
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__184
		// SyncComGroup = 16
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__184
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__117
		// SyncComGroup = 16
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__117
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_50__blockCoord__0,blocksData_50__blockData__0,out_50_65__previousFrame__0,vector__vectors_50__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_50
		// SyncComGroup = 17
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__250
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__250
		receiveStart(); // Core1 > Core2: Stabilization_0_ComputeBlock__192
		// SyncComGroup = 18
		receiveEnd(1, 2); // Core1 > Core2: Stabilization_0_ComputeBlock__192
		receiveStart(); // Core0 > Core2: Stabilization_0_ComputeBlock__125
		// SyncComGroup = 18
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_ComputeBlock__125
		computeBlockMotionVector(360/*width*/,202/*height*/,32/*blockWidth*/,32/*blockHeight*/,38/*maxDeltaX*/,21/*maxDeltaY*/,blocksCoord_58__blockCoord__0,blocksData_58__blockData__0,out_58_65__previousFrame__0,vector__vectors_58__0); // Stabilization_0_ComputeBlockMotionVectorss_0_ComputeBlockMotionVector_58
		// SyncComGroup = 19
		sendStart(2, 0); // Core2 > Core0: Stabilization_0_ComputeBlock__258
		sendEnd(); // Core2 > Core0: Stabilization_0_ComputeBlock__258
		receiveStart(); // Core0 > Core2: Stabilization_0_renderFrame___1
		// SyncComGroup = 20
		receiveEnd(0, 2); // Core0 > Core2: Stabilization_0_renderFrame___1
		// Broadcast Stabilization_0_BrU_0
		{
			// memcpy #0
			memcpy(out_1_1_1__out_1_1__1+0, uOut__in__0+0, 56280*sizeof(uchar));
			// memcpy #0
		}
		// SyncComGroup = 21
		sendStart(2, 4); // Core2 > Core4: Stabilization_0_BrU_0__Stabi__0
		sendEnd(); // Core2 > Core4: Stabilization_0_BrU_0__Stabi__0
		// Broadcast DuplicateU_0
		{
			// memcpy #0
			// memcpy #0
		}
		// SyncComGroup = 22
		sendStart(2, 0); // Core2 > Core0: DuplicateU_0__DisplayYUV_0__0
		sendEnd(); // Core2 > Core0: DuplicateU_0__DisplayYUV_0__0
		// SyncComGroup = 22
		sendStart(2, 1); // Core2 > Core1: DuplicateU_0__WriteYUV_0__0
		sendEnd(); // Core2 > Core1: DuplicateU_0__WriteYUV_0__0
	}
	return NULL;
}

