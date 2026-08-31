/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstKeyFrame_ tdstKeyFrame_;
typedef struct tdstOnlyFrame_ tdstOnlyFrame_;
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;
typedef struct tdstHierarchy_ tdstHierarchy_;
typedef struct tdstNTTO_ tdstNTTO_;
typedef struct tdstChannel_ tdstChannel_;
typedef struct tdstDeformation_ tdstDeformation_;
typedef struct stMorphData stMorphData;
typedef struct tdstStackInfos_ tdstStackInfos_;
typedef struct tdstA3dGENERAL_ForTransitions_ tdstA3dGENERAL_ForTransitions_;

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstKeyFrame_ {
    unsigned short uwFrameNumber; /* +0x0 */
    unsigned short uwMask; /* +0x2 */
    unsigned short uwNumOfQuatOri; /* +0x4 */
    unsigned short uwNumOfQuatSca; /* +0x6 */
    unsigned short uwNumOfScaleValues; /* +0x8 */
    unsigned short uwNumOfPosition; /* +0xa */
    short swInterpolationParameter; /* +0xc */
};

struct tdstOnlyFrame_ {
    unsigned short uwNumOfAngularSpeedQuat; /* +0x0 */
    unsigned short uwNumOfSpeedVector; /* +0x2 */
    unsigned short uwHierarchyNbCouples; /* +0x4 */
    unsigned short uwNumOfFirstHierarchyCouple; /* +0x6 */
    unsigned short uwDeformationNb; /* +0x8 */
    unsigned short uwNumOfFirstDeformation; /* +0xa */
    unsigned short uwNumOfSavedFrame; /* +0xc */
};

struct tdstA3dGENERAL_ {
    unsigned short uwAnimationSpeed; /* +0x0 */
    unsigned short uwNumberOfVectors; /* +0x2 */
    unsigned short uwNumberOfQuaternions; /* +0x4 */
    unsigned short uwNumberOfHierarchies; /* +0x6 */
    unsigned short uwNumberOfNTTO; /* +0x8 */
    unsigned short uwNumberOfSavedFrames; /* +0xa */
    unsigned short uwNumberOfDeformations; /* +0xc */
    unsigned short uwNumberOfChannels; /* +0xe */
    unsigned short uwNumberOfFrames; /* +0x10 */
    unsigned int ulNumberOfKeyFrames; /* +0x14 */
    unsigned short uwNumberOfEvents; /* +0x18 */
    unsigned short uwNumOfFirstPosition; /* +0x1a */
    unsigned short uwStartFrame; /* +0x1c */
    unsigned short uwEndFrame; /* +0x1e */
    unsigned short uwFakeAnimSpeed; /* +0x20 */
    unsigned short uwFlags; /* +0x22 */
    unsigned short uwNumOfAnimationTranslationOffset; /* +0x24 */
    unsigned short uwNumOfAnimationRotationOffset; /* +0x26 */
    unsigned short uwNumberOfMorphData; /* +0x28 */
    unsigned short uwNumOfFirstVector; /* +0x2a */
    unsigned short uwNumOfFirstQuaternion; /* +0x2c */
    unsigned short uwNumOfFirstHierarchy; /* +0x2e */
    unsigned short uwNumOfFirstNTTO; /* +0x30 */
    unsigned short uwNumOfFirstDeformation; /* +0x32 */
    unsigned short uwNumOfFirstOnlyFrame; /* +0x34 */
    unsigned short uwNumOfFirstChannel; /* +0x36 */
    unsigned short uwNumOfFirstEvent; /* +0x38 */
    unsigned short uwNumOfFirstMorphData; /* +0x3a */
};

struct tdstHierarchy_ {
    unsigned short uwChild; /* +0x0 */
    unsigned short uwFather; /* +0x2 */
};

struct tdstNTTO_ {
    unsigned short uwTypeOfObject; /* +0x0 */
    unsigned short ucNumberInTable; /* +0x2 */
    unsigned char ucTransparency; /* +0x4 */
};

struct tdstChannel_ {
    unsigned short uwNumberOfKeys; /* +0x0 */
    unsigned short uwChannelNumber; /* +0x2 */
    unsigned short uwNumOfLocalPivotPos; /* +0x4 */
    unsigned short uwNumOfFirstFrame; /* +0x6 */
    unsigned int ulNumOfFirstFrameKF; /* +0x8 */
    unsigned int ulNumOfFirstKeyFrame; /* +0xc */
};

struct tdstDeformation_ {
    unsigned short uwChannel1; /* +0x0 */
    unsigned short uwFrontier1; /* +0x2 */
    unsigned short uwChannel2; /* +0x4 */
    unsigned short uwFrontier2; /* +0x6 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstStackInfos_ {
    unsigned int ulPosAlloc; /* +0x0 */
    unsigned int ulStackPos; /* +0x4 */
    unsigned int ulMaxPos; /* +0x8 */
    unsigned int ulResetPos; /* +0xc */
    unsigned int ulFamilyPos; /* +0x10 */
};

struct tdstA3dGENERAL_ForTransitions_ {
    unsigned short uwPrevious; /* +0x0 */
    unsigned short uwNext; /* +0x2 */
    unsigned short uwPreviousFrame; /* +0x4 */
    unsigned short uwNextFrame; /* +0x6 */
    unsigned short uwNumberOfMorphData; /* +0x8 */
    unsigned short uwNoSpeed; /* +0xa */
    float xNLParameter; /* +0xc */
};

int g_i_CurrentStorageBank;
unsigned int ulFreePlaceInMergeStack;
tdstA3dGENERAL_ForTransitions_ a32_stA3dGENERALTransitionArray[32];
unsigned int ulFirstTmpA3dGeneral;
int gp_stDeformations;
int gp_stMorphData;
int gp_stEvents;
int gp_stKeyFrames;
int gp_FramesKFIndex;
int gp_FramesNumOfNTTO;
int gp_stChannels;
int gp_stOnlyFrames;
int gp_stNTTO;
int gp_stHierarchies;
int gp_a4_xQuaternions;
int gp_a3_xVectors;
int gp_stA3dGENERAL;
int g_ax_pDeformations[100];
int g_ax_pMorphData[100];
int g_ax_pEvents[100];
int g_ax_pKeyFrames[100];
int g_ax_pFramesKFIndex[100];
int g_ax_pFramesNumOfNTTO[100];
int g_ax_pChannels[100];
int g_ax_pOnlyFrames[100];
int g_ax_pNTTO[100];
int g_ax_pHierarchies[100];
int g_ax_pQuaternions[100];
int g_ax_pVectors[100];
int g_ax_pA3dGENERAL[100];
tdstStackInfos_ g_tdstStackInfos[100][13];
unsigned char g_ucGameModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 109–297 */
/* addr: 0x0027f350  size: 1480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 109
 *   +0x0008 -> line 121
 *   +0x000c -> line 109
 *   +0x0030 -> line 121
 *   +0x0064 -> line 123
 *   +0x0074 -> line 125
 *   +0x008c -> line 126
 *   +0x0094 -> line 133
 *   +0x00bc -> line 136
 *   +0x00c4 -> line 139
 *   +0x00dc -> line 140
 *   +0x00f4 -> line 144
 *   +0x0108 -> line 149
 *   +0x013c -> line 155
 *   +0x0140 -> line 158
 *   +0x0144 -> line 155
 *   +0x014c -> line 158
 *   +0x0150 -> line 155
 *   +0x020c -> line 158
 *   +0x0224 -> line 160
 *   +0x0234 -> line 167
 *   +0x025c -> line 169
 *   +0x0264 -> line 172
 *   +0x027c -> line 174
 *   +0x0284 -> line 177
 *   +0x029c -> line 178
 *   +0x02b4 -> line 182
 *   +0x02c8 -> line 185
 *   +0x02d0 -> line 188
 *   +0x02d8 -> line 190
 *   +0x02f0 -> line 194
 *   +0x031c -> line 196
 *   +0x0324 -> line 204
 *   +0x0350 -> line 205
 *   +0x0380 -> line 211
 *   +0x03bc -> line 224
 *   +0x03ec -> line 226
 *   +0x0460 -> line 228
 *   +0x0468 -> line 291
 *   +0x0530 -> line 292
 *   +0x05a8 -> line 297
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_InterpolBetweenKeys(tdstKeyFrame_* _p_stKey1, tdstKeyFrame_* _p_stKey2, tdstChannel_* _p_stChannel, stInterpolatedPosition* _p_stResult, float _xT)
{
    float a4_xQuatS2[4];
    float a4_xQuatS1[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 705–706 */
/* addr: 0x0027f920  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 705
 *   +0x0010 -> line 706
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_GetA3dGENERALForTransitions(unsigned short uwIndex)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 692–696 */
/* addr: 0x0027f940  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 695
 *   +0x0004 -> line 694
 *   +0x0008 -> line 692
 *   +0x000c -> line 694
 *   +0x0010 -> line 695
 *   +0x0018 -> line 696
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReleaseMergeA3dGeneral(unsigned short _uwIndex)
{
    unsigned int ubBitToSet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 666–683 */
/* addr: 0x0027f960  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 669
 *   +0x0004 -> line 666
 *   +0x0008 -> line 669
 *   +0x0010 -> line 671
 *   +0x0014 -> line 672
 *   +0x0018 -> line 673
 *   +0x0030 -> line 675
 *   +0x003c -> line 677
 *   +0x0040 -> line 679
 *   +0x0050 -> line 677
 *   +0x0058 -> line 678
 *   +0x005c -> line 683
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stFindFreeMergeA3dGeneral(unsigned short* p_uwIndex)
{
    int i;
    unsigned int ulTest;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 375–375 */
/* addr: 0x0027f9d0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 375
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_InitInterpol(void)
{
    /* TODO: decompile from asm/... */
}
