/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct stMorphData stMorphData;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;

struct tdstMSLight_ {
    unsigned char bLocalLight; /* +0x0 */
    unsigned char bOnlyLocalLight; /* +0x1 */
    unsigned char bGiroPhare; /* +0x2 */
    unsigned char bPulsing; /* +0x3 */
    /* aggregate */ int stOffsetVect; /* +0x4 */
    /* aggregate */ int stAngle; /* +0x10 */
    float xStepGiro; /* +0x1c */
    float xStepPulse; /* +0x20 */
    float xMaxRangePulse; /* +0x24 */
    float xGiroAngle; /* +0x28 */
    int p_stLight; /* +0x2c */
    int p_stVisuLight; /* +0x30 */
    int hLightInSector; /* +0x34 */
    unsigned char ucNbRLIUse; /* +0x38 */
    unsigned char ucFirstRLI; /* +0x39 */
    unsigned char ucSecondRLI; /* +0x3a */
    float ucBlendPercent; /* +0x3c */
};

struct tdst3dData_ {
    int h_InitialState; /* +0x0 */
    int h_CurrentState; /* +0x4 */
    int h_FirstStateOfAction; /* +0x8 */
    int h_InitialObjectsTable; /* +0xc */
    int h_CurrentObjectsTable; /* +0x10 */
    int h_Family; /* +0x14 */
    /* aggregate */ int stGLIObjectMatrix; /* +0x20 */
    int p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    int p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    int h_StateInLastFrame; /* +0x98 */
    int h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    int hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    int hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    int hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    int p_stShadowVisualMaterial; /* +0xf0 */
    int p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    /* aggregate */ int stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    /* aggregate */ int stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    /* aggregate */ int stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    /* aggregate */ int hForSubAnimInUseArray; /* +0x1b4 */
    int h_CurrentCineActor; /* +0x1c0 */
    /* aggregate */ int hSkinMaterial; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    short xSkinIndex[4]; /* +0x1d8 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct tdstFrame3d_ {
    int p_stArrayOfElts3d; /* +0x0 */
    int p_stAngularSpeedMatrix; /* +0x4 */
    int p_stLinearSpeedVector; /* +0x8 */
    /* aggregate */ int stHierarchy; /* +0xc */
    /* aggregate */ int stDeformation; /* +0x14 */
    int p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

unsigned char g_bShowLight;
unsigned char g_ucGameModuleId;

/* addr: 0x0026fde0  size: 8 bytes */
unsigned int fn_ulDynamSizeOf(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1348–1352 */
/* addr: 0x0026fdf0  size: 104 bytes */
void HIE_fn_hGetSuperObjectLight(/* function pointer */ int p_SuperObjPerso, tdstMSLight_* hMSLight)
{
    /* line map: */
    /*   line 1348 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1328–1333 */
/* addr: 0x0026fe60  size: 80 bytes */
void fn_vMSLightSetRLIParameter(tdstMSLight_* hMSLight, int lNbRLI, int lIndex1, int lIndex2, int lPercent)
{
    /* line map: */
    /*   line 1328 @ +0x000 */
    /*   line 1329 @ +0x000 */
    /*   line 1333 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1309–1309 */
/* addr: 0x0026feb0  size: 92 bytes */
unsigned char fn_ucGetNumberOfRLIFromCharacter(/* function pointer */ int hSprObj, unsigned char* p_ucIndex1, unsigned char* p_ucIndex2, float* p_xPercent)
{
    unsigned char ucNbRLIUse;
    /* line map: */
    /*   line 1309 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1160–1251 */
/* addr: 0x0026ff10  size: 1780 bytes */
void fn_vUpdateLight(/* function pointer */ int hSupObject)
{
    float xAnglePerso;
    /* aggregate */ int stOffsetVect;
    /* aggregate */ int stTransVect;
    /* aggregate */ int stDirection;
    /* aggregate */ int stMatrixD;
    /* aggregate */ int stMatrix3;
    /* aggregate */ int stMatrix2;
    float x;
    float step;
    float y;
    float z;
    /* line map: */
    /*   line 1160 @ +0x000 */
    /*   line 1160 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /*   line 1178 @ +0x000 */
    /*   line 1178 @ +0x000 */
    /*   line 1181 @ +0x000 */
    /*   line 1181 @ +0x000 */
    /*   line 1183 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1120–1139 */
/* addr: 0x00270610  size: 308 bytes */
float fn_xComputeAngleOfPerso(/* function pointer */ int p_SuperObjPerso)
{
    /* aggregate */ int p_stK;
    /* aggregate */ int p_stJ;
    /* aggregate */ int p_stI;
    float xAngle;
    float xSin;
    float xCos;
    /* line map: */
    /*   line 1120 @ +0x000 */
    /*   line 1120 @ +0x000 */
    /*   line 1124 @ +0x000 */
    /*   line 1127 @ +0x000 */
    /*   line 1129 @ +0x000 */
    /*   line 1131 @ +0x000 */
    /*   line 1136 @ +0x000 */
    /*   line 1139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270750  size: 8 bytes */
unsigned char fn_bMSLightGetPulse(tdstMSLight_* h_MSLight)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1092–1092 */
/* addr: 0x00270760  size: 16 bytes */
void fn_vMSLightSetPulse(tdstMSLight_* h_MSLight, unsigned char bOnOff, float xStep, float xMaxRange)
{
    /* line map: */
    /*   line 1092 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270770  size: 8 bytes */
unsigned char fn_bMSLightGetGiroPhare(tdstMSLight_* h_MSLight)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1082–1082 */
/* addr: 0x00270780  size: 12 bytes */
void fn_vMSLightSetGiroPhare(tdstMSLight_* h_MSLight, unsigned char bOnOff, float xStep)
{
    /* line map: */
    /*   line 1082 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270790  size: 8 bytes */
unsigned char fn_bMSLightGetOnlyLocalLight(tdstMSLight_* h_MSLight)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002707a0  size: 8 bytes */
void fn_vMSLightSetOnlyLocalLight(tdstMSLight_* h_MSLight, unsigned char bOnlyLocalLight)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002707b0  size: 8 bytes */
unsigned char fn_bMSLightGetLocalLight(tdstMSLight_* h_MSLight)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002707c0  size: 8 bytes */
void fn_vMSLightSetLocalLight(tdstMSLight_* h_MSLight, unsigned char bLocalLight)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002707d0  size: 8 bytes */
void fn_p_stMSLightGetLight(tdstMSLight_* h_MSLight)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1050–1054 */
/* addr: 0x002707e0  size: 48 bytes */
void fn_vMSLightSetColorRGBA(tdstMSLight_* h_MSLight, float xR, float xG, float xB, float xA)
{
    GEO_tdstColor_ stColor;
    /* line map: */
    /*   line 1050 @ +0x000 */
    /*   line 1052 @ +0x000 */
    /*   line 1054 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1037–1039 */
/* addr: 0x00270810  size: 76 bytes */
void fn_vMSLightSetBigAlpha(tdstMSLight_* h_MSLight, float xBigAlpha)
{
    float xBigIni;
    float xLittleIni;
    /* line map: */
    /*   line 1037 @ +0x000 */
    /*   line 1037 @ +0x000 */
    /*   line 1037 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1030–1032 */
/* addr: 0x00270860  size: 76 bytes */
void fn_vMSLightSetLittleAlpha(tdstMSLight_* h_MSLight, float xLittleAlpha)
{
    float xBigIni;
    float xLittleIni;
    /* line map: */
    /*   line 1030 @ +0x000 */
    /*   line 1030 @ +0x000 */
    /*   line 1030 @ +0x000 */
    /*   line 1032 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002708b0  size: 8 bytes */
void fn_vMSLightSetNearFar(tdstMSLight_* h_MSLight, float xNear, float xFar)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002708c0  size: 12 bytes */
void fn_vMSLightSetOnOff(tdstMSLight_* h_MSLight, unsigned char ucOnOff)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 1006–1008 */
/* addr: 0x002708d0  size: 36 bytes */
unsigned char fn_ucMSLightGetOnOff(tdstMSLight_* h_MSLight)
{
    int lOnOff;
    /* line map: */
    /*   line 1006 @ +0x000 */
    /*   line 1008 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270900  size: 12 bytes */
void fn_vMSLightSetTypeOfLight(tdstMSLight_* h_MSLight, int lTypeOfLight)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270910  size: 8 bytes */
void fn_hMSLightGetLightNodeInSector(tdstMSLight_* _hMSLight)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 689–698 */
/* addr: 0x00270920  size: 120 bytes */
void fn_vLightCopyClone(/* function pointer */ int _p_stObjectDest, /* function pointer */ int _p_stObjectSrc)
{
    /* line map: */
    /*   line 689 @ +0x000 */
    /*   line 689 @ +0x000 */
    /*   line 692 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 698 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 653–671 */
/* addr: 0x002709a0  size: 140 bytes */
void fn_vLightDesinit(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 653 @ +0x000 */
    /*   line 656 @ +0x000 */
    /*   line 671 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 556–593 */
/* addr: 0x00270a30  size: 480 bytes */
void fn_vLightInit(/* function pointer */ int p_stObject, /* aggregate */ int eObjectInit, /* function pointer */ int hSuperObjFather)
{
    /* aggregate */ int stMatrix2;
    /* line map: */
    /*   line 556 @ +0x000 */
    /*   line 559 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 568 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 587 @ +0x000 */
    /*   line 591 @ +0x000 */
    /*   line 593 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 526–532 */
/* addr: 0x00270c10  size: 276 bytes */
void fn_vLightFree(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 526 @ +0x000 */
    /*   line 529 @ +0x000 */
    /*   line 532 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 487–497 */
/* addr: 0x00270d30  size: 340 bytes */
void fn_vLightAlloc(/* function pointer */ int p_stObject)
{
    /* line map: */
    /*   line 487 @ +0x000 */
    /*   line 490 @ +0x000 */
    /*   line 494 @ +0x000 */
    /*   line 497 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00270e90  size: 8 bytes */
unsigned int fn_ulLightSizeOf(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSlight.c lines 243–288 */
/* addr: 0x00270ea0  size: 432 bytes */
void fn_pCreateCone(float xS, float yS, float zS, float xRadius, /* function pointer */ int hMaterial, /* function pointer */ int p_stSphere)
{
    GEO_tdstColor_ stColor;
    short hElement;
    /* aggregate */ int stCenter;
    /* line map: */
    /*   line 243 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 251 @ +0x000 */
    /* TODO: decompile from asm/... */
}
