/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstKeyFrame_ tdstKeyFrame_;
typedef struct tdstOnlyFrame_ tdstOnlyFrame_;
typedef struct tdstHierarchy_ tdstHierarchy_;
typedef struct tdstNTTO_ tdstNTTO_;
typedef struct tdstChannel_ tdstChannel_;
typedef struct tdstDeformation_ tdstDeformation_;
typedef struct stMorphData stMorphData;

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

int g_i_CurrentStorageBank;
unsigned int ulFreePlaceInMergeStack;
/* array */ int a32_stA3dGENERALTransitionArray[32];
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
/* aggregate */ int g_ax_pDeformations;
/* aggregate */ int g_ax_pMorphData;
/* aggregate */ int g_ax_pEvents;
/* aggregate */ int g_ax_pKeyFrames;
/* aggregate */ int g_ax_pFramesKFIndex;
/* aggregate */ int g_ax_pFramesNumOfNTTO;
/* aggregate */ int g_ax_pChannels;
/* aggregate */ int g_ax_pOnlyFrames;
/* aggregate */ int g_ax_pNTTO;
/* aggregate */ int g_ax_pHierarchies;
/* aggregate */ int g_ax_pQuaternions;
/* aggregate */ int g_ax_pVectors;
/* aggregate */ int g_ax_pA3dGENERAL;
/* array */ int g_tdstStackInfos[100][13];
unsigned char g_ucGameModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 121–292 */
/* addr: 0x0027f350  size: 1480 bytes */
void fn_v_InterpolBetweenKeys(tdstKeyFrame_* _p_stKey1, tdstKeyFrame_* _p_stKey2, tdstChannel_* _p_stChannel, /* function pointer */ int _p_stResult, float _xT)
{
    float a4_xQuatS2[4];
    float a4_xQuatS1[4];
    /* line map: */
    /*   line 121 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 144 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 155 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 706–706 */
/* addr: 0x0027f920  size: 24 bytes */
void fn_p_GetA3dGENERALForTransitions(unsigned short uwIndex)
{
    /* line map: */
    /*   line 706 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 694–696 */
/* addr: 0x0027f940  size: 32 bytes */
void fn_vReleaseMergeA3dGeneral(unsigned short _uwIndex)
{
    unsigned int ubBitToSet;
    /* line map: */
    /*   line 694 @ +0x000 */
    /*   line 694 @ +0x000 */
    /*   line 696 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_mem.c lines 666–683 */
/* addr: 0x0027f960  size: 100 bytes */
void fn_p_stFindFreeMergeA3dGeneral(unsigned short* p_uwIndex)
{
    int i;
    unsigned int ulTest;
    /* line map: */
    /*   line 666 @ +0x000 */
    /*   line 671 @ +0x000 */
    /*   line 673 @ +0x000 */
    /*   line 677 @ +0x000 */
    /*   line 677 @ +0x000 */
    /*   line 683 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0027f9d0  size: 8 bytes */
void fn_v_InitInterpol(void)
{
    /* TODO: decompile from asm/... */
}
