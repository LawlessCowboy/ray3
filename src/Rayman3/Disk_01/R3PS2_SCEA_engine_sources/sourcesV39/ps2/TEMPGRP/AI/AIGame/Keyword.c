/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct anon_0 anon_0;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstState_ tdstState_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct stMorphData stMorphData;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstEvent_ tdstEvent_;
typedef union anon_1 anon_1;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct _RollOffParam _RollOffParam;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstGetSetParam_ {
    anon_0 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct anon_0 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
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

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

union anon_1 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
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

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
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

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

char gcSimulateRelease;
char gcSimulateNotU64;
int iNumWhile;
/* array */ int a_stWhileInfo[50];
unsigned char g_ucAIModuleId;
unsigned char g_ucNRule;
int g_p_stIntelligence;
char gcGlobAleat;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 138–277 */
/* addr: 0x002217c0  size: 952 bytes */
void fn_vComputeCollideResult(/* function pointer */ int hSender, SECT_tdstSector_* hSectorObject, /* function pointer */ int hColMatHit, /* function pointer */ int hInterList, /* function pointer */ int hList, /* function pointer */ int hSector1, /* function pointer */ int hCharacterList, /* function pointer */ int hSuperObjectHit)
{
    /* aggregate */ int stMax;
    /* aggregate */ int stMin;
    int i;
    /* line map: */
    /*   line 161 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 141 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 493–536 */
/* addr: 0x00221b80  size: 592 bytes */
void fn_p_stEngineGotoKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_stTempTree)
{
    int i;
    char szForErrorString[200];
    /* line map: */
    /*   line 493 @ +0x000 */
    /*   line 493 @ +0x000 */
    /*   line 496 @ +0x000 */
    /*   line 500 @ +0x000 */
    /*   line 502 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 508 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 470–482 */
/* addr: 0x00221dd0  size: 132 bytes */
void fn_p_stEndWhileKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stWhileInfo)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 470 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 479 @ +0x000 */
    /*   line 482 @ +0x000 */
    /*   line 482 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00221e60  size: 8 bytes */
void fn_p_stBeginWhileKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 437–455 */
/* addr: 0x00221e70  size: 168 bytes */
void fn_p_stWhileKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_stWhileInfo, /* function pointer */ int p_stTreeInit)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 437 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 449 @ +0x000 */
    /*   line 451 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 394–426 */
/* addr: 0x00221f20  size: 152 bytes */
void fn_p_stSkipWhile(/* function pointer */ int p_stTreeInit, /* function pointer */ int p_stTree)
{
    int iLevel;
    /* line map: */
    /*   line 394 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 409 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 423 @ +0x000 */
    /*   line 426 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 256–369 */
/* addr: 0x00221fc0  size: 584 bytes */
void fn_p_stIfKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_stTreeInit)
{
    /* aggregate */ int eKeyId;
    char cInvert;
    char cMax;
    /* line map: */
    /*   line 256 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 272 @ +0x000 */
    /*   line 277 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 284 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 237–248 */
/* addr: 0x00222210  size: 152 bytes */
void fn_p_stIfNotU64(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* aggregate */ int eKeyId;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 244 @ +0x000 */
    /*   line 248 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 220–231 */
/* addr: 0x002222b0  size: 152 bytes */
void fn_p_stIfDebug(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* aggregate */ int eKeyId;
    /* line map: */
    /*   line 225 @ +0x000 */
    /*   line 220 @ +0x000 */
    /*   line 227 @ +0x000 */
    /*   line 231 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 194–194 */
/* addr: 0x00222350  size: 96 bytes */
void fn_p_stElseKeyWord(/* function pointer */ int p_stTree)
{
    /* line map: */
    /*   line 194 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002223b0  size: 8 bytes */
void fn_p_stThenKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 164–164 */
/* addr: 0x002223c0  size: 20 bytes */
void fn_p_stNoVMTKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 164 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 158–158 */
/* addr: 0x002223e0  size: 20 bytes */
void fn_p_stNoGMTKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 158 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 152–152 */
/* addr: 0x00222400  size: 20 bytes */
void fn_p_stNoGraphKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 152 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 146–146 */
/* addr: 0x00222420  size: 20 bytes */
void fn_p_stCapsNullKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 146 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 140–140 */
/* addr: 0x00222440  size: 24 bytes */
void fn_p_stEmptyTextKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 133–133 */
/* addr: 0x00222460  size: 20 bytes */
void fn_p_stNowhereKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 133 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 126–128 */
/* addr: 0x00222480  size: 20 bytes */
void fn_p_stNobodyKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 126 @ +0x000 */
    /*   line 128 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 120–122 */
/* addr: 0x002224a0  size: 20 bytes */
void fn_p_stNoSoundEventKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 120 @ +0x000 */
    /*   line 122 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 113–115 */
/* addr: 0x002224c0  size: 20 bytes */
void fn_p_stNoSOLinksWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 113 @ +0x000 */
    /*   line 115 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 104–106 */
/* addr: 0x002224e0  size: 20 bytes */
void fn_p_stNoSuperObjectKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 104 @ +0x000 */
    /*   line 106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 96–98 */
/* addr: 0x00222500  size: 20 bytes */
void fn_p_stNoInputKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 96 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 87–89 */
/* addr: 0x00222520  size: 120 bytes */
void fn_p_stMainActorKeyWord(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 87 @ +0x000 */
    /*   line 89 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Keyword.c lines 81–83 */
/* addr: 0x002225a0  size: 52 bytes */
void fn_p_stMeKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 83 @ +0x000 */
    /* TODO: decompile from asm/... */
}
