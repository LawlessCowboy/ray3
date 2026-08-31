/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstList_ tdstList_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef union anon_0 anon_0;
typedef struct tdstState_ tdstState_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstCouple_ tdstCouple_;
typedef struct anon_1 anon_1;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    int p_hTabElt; /* +0x4 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstState_ {
    int p_stAnim; /* +0x0 */
    /* aggregate */ int hForTransitionArray; /* +0x4 */
    /* aggregate */ int hForProhibitArray; /* +0xc */
    int h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
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

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct tdstCineinfo_ {
    int hInit; /* +0x0 */
    int hCurrent; /* +0x4 */
    int hVisibility; /* +0x8 */
    int hWork; /* +0xc */
    /* aggregate */ int stLastFailedOrigin; /* +0x10 */
    /* aggregate */ int stLastFailedWanted; /* +0x1c */
    /* aggregate */ int stForceTarget; /* +0x28 */
    /* aggregate */ int stForcePosition; /* +0x34 */
    /* aggregate */ int stForceRefAxisY; /* +0x40 */
    /* aggregate */ int stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    /* aggregate */ int eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    /* aggregate */ int AveragePosition; /* +0x78 */
    /* aggregate */ int stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    /* array */ int a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct anon_1 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

/* aggregate */ int g_a_hPersoInZone;
unsigned char g_ucAIModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 233–296 */
/* addr: 0x001fd340  size: 436 bytes */
void fn_p_stEvalSubRoutine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, tdstMacro_* p_stMacro, /* function pointer */ int p_stTreeTmp, /* function pointer */ int p_stTreeTmp, /* function pointer */ int p_stTreeSave)
{
    unsigned char ucIndTabAction;
    unsigned char ucActionReturn;
    /* line map: */
    /*   line 233 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 235 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 255 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 552–618 */
/* addr: 0x001fd500  size: 744 bytes */
void fn_p_stListSort(unsigned char ucWantedNbElt, char b_cIncrease, /* function pointer */ int p_stTree, /* function pointer */ int p_stTreeSv, /* function pointer */ int p_stPerso, /* function pointer */ int p_p_stPerso)
{
    tdstGetSetParam_ stParam;
    unsigned char ucId;
    float xValue;
    float* p_xCriteraResult;
    float* a_xCriteraResult;
    unsigned char ucJ;
    unsigned char ucI;
    /* line map: */
    /*   line 558 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 557 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 570 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 455–476 */
/* addr: 0x001fd7f0  size: 272 bytes */
void fn_p_stListSelect(tdstList_* p_List, char b_cInverse, /* function pointer */ int p_stTree, /* function pointer */ int p_stTreeSv, /* function pointer */ int p_p_stPerso)
{
    tdstGetSetParam_ stParam;
    tdstList_ stWorkList;
    /* line map: */
    /*   line 455 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 471 @ +0x000 */
    /*   line 476 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 434–445 */
/* addr: 0x001fd900  size: 120 bytes */
void fn_p_stGetPersoInList(tdstList_* p_List, unsigned char ucPosition)
{
    /* line map: */
    /*   line 434 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 442 @ +0x000 */
    /*   line 445 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 407–409 */
/* addr: 0x001fd980  size: 60 bytes */
unsigned char fn_ucAtLeastOnePersoInZde(/* function pointer */ int p_stPerso, unsigned char ucModulOrCharact, short xZoneId, unsigned short xMask)
{
    unsigned short uwNbDetectedPerso;
    /* line map: */
    /*   line 408 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 407 @ +0x000 */
    /*   line 409 @ +0x000 */
    /*   line 409 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 400–402 */
/* addr: 0x001fd9c0  size: 56 bytes */
unsigned char fn_ucAtLeastOnePersoInZdd(/* function pointer */ int p_stPerso, unsigned char ucModulOrCharact, short xZoneId)
{
    unsigned short uwNbDetectedPerso;
    /* line map: */
    /*   line 401 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 402 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 388–394 */
/* addr: 0x001fda00  size: 212 bytes */
void fn_vAffectTypeZdeWithTypeZdeInList(tdstList_* p_List, /* function pointer */ int p_stPerso, unsigned short xPersoMask, unsigned short xOthersMask)
{
    unsigned short uwNbDetectedPerso;
    unsigned short uwI;
    /* line map: */
    /*   line 391 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 391 @ +0x000 */
    /*   line 394 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 377–380 */
/* addr: 0x001fdae0  size: 220 bytes */
void fn_vAffectZdeInList(tdstList_* p_List, /* function pointer */ int p_stPerso, unsigned char ucModulOrCharact, short xZoneId, unsigned short xMask)
{
    unsigned short uwNbDetectedPerso;
    unsigned short uwI;
    /* line map: */
    /*   line 377 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 380 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 363–368 */
/* addr: 0x001fdbc0  size: 212 bytes */
void fn_vAffectZddInList(tdstList_* p_List, /* function pointer */ int p_stPerso, unsigned char ucModulOrCharact, short xZoneId)
{
    unsigned short uwNbDetectedPerso;
    unsigned short uwI;
    /* line map: */
    /*   line 364 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 364 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 363 @ +0x000 */
    /*   line 366 @ +0x000 */
    /*   line 368 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 340–354 */
/* addr: 0x001fdca0  size: 292 bytes */
void fn_vAddList(tdstList_* p_ListA, tdstList_* p_ListB, /* function pointer */ int hPerso)
{
    unsigned char ucSizeA;
    unsigned char ucB;
    unsigned char ucA;
    /* line map: */
    /*   line 340 @ +0x000 */
    /*   line 343 @ +0x000 */
    /*   line 343 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 352 @ +0x000 */
    /*   line 351 @ +0x000 */
    /*   line 354 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 306–317 */
/* addr: 0x001fddd0  size: 292 bytes */
void fn_vDiffList(tdstList_* p_ListA, tdstList_* p_ListB, tdstList_* p_ListC, /* function pointer */ int p_Perso)
{
    unsigned char ucC;
    unsigned char ucB;
    /* line map: */
    /*   line 306 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 312 @ +0x000 */
    /*   line 315 @ +0x000 */
    /*   line 314 @ +0x000 */
    /*   line 317 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 284–296 */
/* addr: 0x001fdf00  size: 268 bytes */
void fn_vInterList(tdstList_* p_ListA, tdstList_* p_ListB, tdstList_* p_ListC, /* function pointer */ int p_Perso)
{
    unsigned char ucC;
    unsigned char ucB;
    /* line map: */
    /*   line 284 @ +0x000 */
    /*   line 288 @ +0x000 */
    /*   line 288 @ +0x000 */
    /*   line 292 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 293 @ +0x000 */
    /*   line 296 @ +0x000 */
    /*   line 296 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 259–274 */
/* addr: 0x001fe010  size: 420 bytes */
void fn_vUnionList(tdstList_* p_ListA, tdstList_* p_ListB, tdstList_* p_ListC, /* function pointer */ int p_Perso)
{
    unsigned char ucJ;
    unsigned char ucI;
    /* line map: */
    /*   line 259 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 265 @ +0x000 */
    /*   line 265 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 269 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 226–248 */
/* addr: 0x001fe1c0  size: 464 bytes */
void fn_vSortListByModel(tdstList_* p_stList, /* function pointer */ int _p_stModel, /* function pointer */ int p_hSupObjElt, /* function pointer */ int hPerso)
{
    unsigned char ucJ;
    unsigned char ucI;
    unsigned char ucPos;
    /* line map: */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 229 @ +0x000 */
    /*   line 231 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 236 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 243 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 199–215 */
/* addr: 0x001fe390  size: 328 bytes */
void fn_vSortListByFamily(tdstList_* p_List, /* function pointer */ int hFamily, /* function pointer */ int hSupObjElt, /* function pointer */ int p_hSupObjElt)
{
    unsigned char ucJ;
    unsigned char ucI;
    /* line map: */
    /*   line 199 @ +0x000 */
    /*   line 204 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 210 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 176–187 */
/* addr: 0x001fe4e0  size: 184 bytes */
void fn_vDeletePersoAtPositionInList(tdstList_* p_List, unsigned char ucPosition)
{
    unsigned char ucI;
    /* line map: */
    /*   line 176 @ +0x000 */
    /*   line 180 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 187 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 159–164 */
/* addr: 0x001fe5a0  size: 180 bytes */
char fn_bFindPersoAndDeleteInList(tdstList_* p_List, /* function pointer */ int p_Perso)
{
    unsigned char ucPosition;
    unsigned char ucI;
    /* line map: */
    /*   line 159 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 162 @ +0x000 */
    /*   line 164 @ +0x000 */
    /*   line 164 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 133–145 */
/* addr: 0x001fe660  size: 100 bytes */
char fn_bFindFamilyInList(tdstList_* p_List, /* function pointer */ int hFamily)
{
    unsigned char ucPosition;
    /* line map: */
    /*   line 133 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 145 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 103–115 */
/* addr: 0x001fe6d0  size: 108 bytes */
char fn_bFindModelInList(tdstList_* p_List, /* function pointer */ int _p_stModel)
{
    unsigned char ucPosition;
    /* line map: */
    /*   line 103 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 115 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 78–84 */
/* addr: 0x001fe740  size: 92 bytes */
char fn_bFindPersoInList(tdstList_* p_List, /* function pointer */ int p_Perso)
{
    unsigned char ucPosition;
    /* line map: */
    /*   line 78 @ +0x000 */
    /*   line 84 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\List.c lines 54–65 */
/* addr: 0x001fe7a0  size: 176 bytes */
void fn_vInsertPersoAtPositionInList(tdstList_* p_List, /* function pointer */ int p_Perso, unsigned char ucPosition)
{
    unsigned char ucI;
    /* line map: */
    /*   line 54 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 58 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 60 @ +0x000 */
    /*   line 62 @ +0x000 */
    /*   line 65 @ +0x000 */
    /* TODO: decompile from asm/... */
}
