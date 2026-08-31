/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstCouple_ tdstCouple_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct stMorphData stMorphData;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstAChannel_ {
    int hSupObject; /* +0x0 */
    int hZoomSupObject; /* +0x4 */
    int p_stNextActiveChannel; /* +0x8 */
    int p_stFatherChannel; /* +0xc */
    /* array */ int ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct tdstEngineTimerStructure_ {
    unsigned int ulTrameNumber; /* +0x0 */
    short sTimerHandle; /* +0x4 */
    unsigned int ulCurrentTimerCount; /* +0x8 */
    unsigned int ulDeltaTimerCount; /* +0xc */
    unsigned int a_ulCounter[16]; /* +0x10 */
    unsigned int ulUsefulDeltaTime; /* +0x50 */
    unsigned int ulPauseTime; /* +0x54 */
    float xFrameLength; /* +0x58 */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

unsigned char IPO_g_ucNumberOfRLITables;
char IPO_g_cBlockingTransitions;
char IPO_g_cChangeMode;
unsigned int IPO_g_ulCurrentTransitionID;
char IPO_g_cTransitionInProgress;
unsigned int IPO_g_ulChangeDuration;
unsigned int IPO_g_ulCurrentTime;
float IPO_g_fCurrentIncrementRatio;
float IPO_g_fCurrentGlobalRatio;
float IPO_g_fPreviousGlobalRatio;
float IPO_g_fIncrementByMilliSecond;
unsigned char IPO_g_ucCurrentRadiosityIndex;
unsigned char IPO_g_ucNextRadiosityIndex;
unsigned char IPO_g_ucRadiosityIndexToReach;
unsigned char IPO_g_ucRadiosityIndexToAdd;
float IPO_g_fAddWantedRatio;
/* aggregate */ int IPO_g_a_szAdditionnalRLITables;
ISI_tdstColor_ IPO_g_tdstBlack;
int gp_stActualWorld;
/* aggregate */ int g_stEngineStructure;

/* addr: 0x002f1bf0  size: 8 bytes */
void IPO_fn_hGetPhysicalObject(/* function pointer */ int _hInstanciatedPhysicalObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 766–849 */
/* addr: 0x002f1c00  size: 920 bytes */
void IPO_fn_vSetRadiosityFromIndex(/* function pointer */ int _hInstanciatedPhysicalObject, char _cRadiosityIndex, ISI_tdstColor_* p_tdstColor, ISI_tdstColor_* p_tdstColor)
{
    float* p_fLMU;
    short xNumberOfVertices;
    short xCurrentVertex;
    float* p_fLMU;
    short xCurrentIndex;
    short iNumberOfVerticesInSourceRLI;
    short iNumberOfVerticesInCurrentRLI;
    /* line map: */
    /*   line 766 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 779 @ +0x000 */
    /*   line 779 @ +0x000 */
    /*   line 786 @ +0x000 */
    /*   line 794 @ +0x000 */
    /*   line 794 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 643–720 */
/* addr: 0x002f1fa0  size: 620 bytes */
void IPO_fn_vInternalComputeRLI_Add(/* function pointer */ int _hIPO, float _fRatio, float _fPreviousRatio, ISI_tdstColor_* p_tdstColor2, ISI_tdstColor_* p_tdstColor1)
{
    short xNumberOfVerticesToUse;
    short xNumberOfVerticesInSource;
    short xNumberOfVerticesInCurrent;
    short xCurrentVertex;
    /* line map: */
    /*   line 643 @ +0x000 */
    /*   line 646 @ +0x000 */
    /*   line 651 @ +0x000 */
    /*   line 651 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 658 @ +0x000 */
    /*   line 684 @ +0x000 */
    /*   line 684 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 517–631 */
/* addr: 0x002f2210  size: 920 bytes */
void IPO_fn_vInternalComputeRLI_Normal(/* function pointer */ int _hIPO, float _fRatio, ISI_tdstColor_* p_tdstColorResult, ISI_tdstColor_* p_tdstUsedColor2, ISI_tdstColor_* param4, ISI_tdstColor_* p_tdstColor2, ISI_tdstColor_* p_tdstColor1)
{
    float* p_fUV_LM2;
    float* p_fUV_LM1;
    float* p_fUV_LM;
    short xNumberOfVerticesInCurrent;
    short xNumberOfVertices1;
    short xCurrentVertex;
    float fOtherRatio;
    /* line map: */
    /*   line 517 @ +0x000 */
    /*   line 517 @ +0x000 */
    /*   line 529 @ +0x000 */
    /*   line 529 @ +0x000 */
    /*   line 536 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 551 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 483–506 */
/* addr: 0x002f25b0  size: 200 bytes */
void IPO_fn_vInternalComputeRLI(/* function pointer */ int _hIPO, float _fRatio)
{
    /* line map: */
    /*   line 483 @ +0x000 */
    /*   line 483 @ +0x000 */
    /*   line 488 @ +0x000 */
    /*   line 488 @ +0x000 */
    /*   line 492 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 502 @ +0x000 */
    /*   line 502 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 473–477 */
/* addr: 0x002f2680  size: 212 bytes */
void IPO_fn_vComputeRadiosity(/* function pointer */ int _hIPO)
{
    /* line map: */
    /*   line 473 @ +0x000 */
    /*   line 477 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 453–465 */
/* addr: 0x002f2760  size: 468 bytes */
void IPO_fn_vUpdateAllIPOAfterTransition(/* function pointer */ int _hSO, /* function pointer */ int hIPO, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 453 @ +0x000 */
    /*   line 456 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 391–444 */
/* addr: 0x002f2940  size: 500 bytes */
void IPO_fn_vFrameEndForRLITables(void)
{
    char cMustEndTransition;
    /* line map: */
    /*   line 391 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 404 @ +0x000 */
    /*   line 404 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 412 @ +0x000 */
    /*   line 417 @ +0x000 */
    /*   line 420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 349–380 */
/* addr: 0x002f2b40  size: 280 bytes */
void IPO_fn_vFrameInitForRLITables(void)
{
    /* line map: */
    /*   line 349 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 359 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 368 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 300–335 */
/* addr: 0x002f2c60  size: 284 bytes */
void IPO_fn_vSetAddRLITable(char _cIndexToReach, unsigned int _ulChangeDuration, float _fFinalRatio)
{
    /* line map: */
    /*   line 300 @ +0x000 */
    /*   line 303 @ +0x000 */
    /*   line 310 @ +0x000 */
    /*   line 314 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 248–289 */
/* addr: 0x002f2d80  size: 452 bytes */
void IPO_fn_vSetChangeOfRLITable(char _cIndexToReach, unsigned int _ulChangeDuration, char _cIncrementOrJump)
{
    /* line map: */
    /*   line 248 @ +0x000 */
    /*   line 251 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 263 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f2f50  size: 8 bytes */
void IPO_fn_vSetRLITransitionsBlocking(char _cBlocking)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x002f2f60  size: 8 bytes */
char IPO_fn_bRLITransitionInProgress(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 214–222 */
/* addr: 0x002f2f70  size: 132 bytes */
unsigned char IPO_fn_ucGetRLITableIndex(char* _szRLITableName)
{
    int lI;
    /* line map: */
    /*   line 214 @ +0x000 */
    /*   line 217 @ +0x000 */
    /*   line 219 @ +0x000 */
    /*   line 222 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 155–183 */
/* addr: 0x002f3000  size: 244 bytes */
void IPO_fn_vReInitIPO(/* function pointer */ int _hSO, /* function pointer */ int hIPO)
{
    /* line map: */
    /*   line 155 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 183 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_RLI.c lines 111–140 */
/* addr: 0x002f3100  size: 208 bytes */
void IPO_fn_vLevelReInitRLI(void)
{
    /* line map: */
    /*   line 111 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 131 @ +0x000 */
    /* TODO: decompile from asm/... */
}
