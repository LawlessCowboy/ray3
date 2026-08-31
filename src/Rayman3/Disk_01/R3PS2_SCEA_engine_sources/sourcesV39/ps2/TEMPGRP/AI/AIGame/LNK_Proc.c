/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstState_ tdstState_;
typedef struct LinkActorType_ LinkActorType_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct LNK_NetEvent_ LNK_NetEvent_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct stMorphData stMorphData;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct _RollOffParam _RollOffParam;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstComport_ tdstComport_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef union anon_0 anon_0;
typedef struct EnergyZone_ EnergyZone_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct anon_1 anon_1;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct LNK_CutPoint_ LNK_CutPoint_;

struct WP_tdstArc_ {
    int hNextBrotherDyn; /* +0x0 */
    int hPrevBrotherDyn; /* +0x4 */
    int hFatherDyn; /* +0x8 */
    int m_hNode; /* +0xc */
    unsigned int m_ulCapability; /* +0x10 */
    unsigned int m_ulCapabilityInit; /* +0x14 */
    int m_lWeight; /* +0x18 */
    int m_lWeightInit; /* +0x1c */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
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

struct LinkActorType_ {
    signed char iLinkID; /* +0x0 */
    int p_LinkSPO; /* +0x4 */
    int p_GhostLinkSPO; /* +0x8 */
    int p_RefFisher; /* +0xc */
    int p_RefFish; /* +0x10 */
    int bIsGhost; /* +0x14 */
    /* aggregate */ int State; /* +0x18 */
    unsigned char ui_CutPointNb; /* +0x1c */
    unsigned char ui_Material; /* +0x1d */
    float xLaunchSpeed; /* +0x20 */
    int bStraightLink; /* +0x24 */
    float xEnergy; /* +0x28 */
    float xRay; /* +0x2c */
    float xGaugeSpeedFactor; /* +0x30 */
    LNK_CutPoint_ a_Cutpoint[100]; /* +0x34 */
    unsigned char uiLag; /* +0x1484 */
    unsigned int ulSendDataPeriod; /* +0x1488 */
    unsigned int ulSendStatusPeriod; /* +0x148c */
    unsigned short ulAvailableBand; /* +0x1490 */
    int ui_BCPTimeRead; /* +0x1494 */
    int ui_BCPTimeWrite; /* +0x1498 */
    unsigned int ulInitTime; /* +0x149c */
    unsigned int ulPrevFrameTime; /* +0x14a0 */
    unsigned int ulCurrentTime; /* +0x14a4 */
    unsigned int ulLastFrameDuration; /* +0x14a8 */
    unsigned int ulLastSendDataTime; /* +0x14ac */
    unsigned int ulLastSendStatusTime; /* +0x14b0 */
    int bIsMessageSent; /* +0x14b4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct LNK_NetEvent_ {
    signed char iLinkID; /* +0x0 */
    /* aggregate */ int Event; /* +0x4 */
    int Time; /* +0x8 */
    unsigned char iValue; /* +0xc */
    /* aggregate */ int vValue; /* +0x10 */
    float fValue; /* +0x10 */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
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

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
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

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct EnergyZone_ {
    unsigned char ui_LowerBound; /* +0x0 */
    float ui_CollisionDecrease; /* +0x4 */
    float ui_StraightIncrease; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
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

struct anon_1 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct LNK_CutPoint_ {
    /* aggregate */ int Position; /* +0x0 */
    /* aggregate */ int Speed; /* +0xc */
    /* aggregate */ int Normal; /* +0x18 */
    /* aggregate */ int prevPosition; /* +0x24 */
    int isAgainstActor; /* +0x30 */
};

EnergyZone_ LinkEnergy_Zone[5];
float xLinkPosThr;
int bSendStatus;
int bSendData;
float agoXParam;
int agoType;
unsigned short ui_BCPindexWrite;
unsigned short ui_BCPindexRead;
LNK_NetEvent_ a_NetBuffer[1000];
LinkActorType_ linkStructure[8];
/* aggregate */ int hVisualMaterial;
/* aggregate */ int vNullVector;
/* aggregate */ int g_stCollideResultPoint;
int g_hSuperObjectHit;
unsigned int g_ulCollideTimeCounter;
/* aggregate */ int g_stEngineStructure;
unsigned int g_ulMode;
/* aggregate */ int g_stCollideParameterVector;
/* aggregate */ int g_stCollideParameterPoint;
/* aggregate */ int g_stCollideResultVector;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 74–107 */
/* addr: 0x0023c710  size: 328 bytes */
void fn_p_stPrepareMorph(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue[5];
    float xEnd;
    float xStart;
    short xEndIndexInObjectTable;
    /* line map: */
    /*   line 74 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 2354–2367 */
/* addr: 0x0023c860  size: 1348 bytes */
void fn_DisplayLink(LinkActorType_* p_link, /* aggregate */ int displayMode)
{
    unsigned short cp;
    unsigned short k;
    /* line map: */
    /*   line 2356 @ +0x000 */
    /*   line 2354 @ +0x000 */
    /*   line 2358 @ +0x000 */
    /*   line 2360 @ +0x000 */
    /*   line 2363 @ +0x000 */
    /*   line 2367 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 2170–2174 */
/* addr: 0x0023cdb0  size: 124 bytes */
void fn_p_Fisher2Fish(/* function pointer */ int p_Fisher)
{
    unsigned char k;
    /* line map: */
    /*   line 2170 @ +0x000 */
    /*   line 2172 @ +0x000 */
    /*   line 2174 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 2068–2124 */
/* addr: 0x0023ce30  size: 1008 bytes */
void fn_NetSendEvent(LinkActorType_* p_link, /* aggregate */ int LNEvent, unsigned char iV, /* function pointer */ int vV, float fV)
{
    unsigned char k;
    /* line map: */
    /*   line 2068 @ +0x000 */
    /*   line 2071 @ +0x000 */
    /*   line 2074 @ +0x000 */
    /*   line 2076 @ +0x000 */
    /*   line 2074 @ +0x000 */
    /*   line 2076 @ +0x000 */
    /*   line 2078 @ +0x000 */
    /*   line 2075 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1975–2055 */
/* addr: 0x0023d220  size: 1128 bytes */
void fn_NetReceiveEvents(LinkActorType_* p_link)
{
    unsigned short iAnotherLinkEventIndex;
    unsigned short cp;
    /* aggregate */ int uiNetEvent;
    int i;
    int k;
    /* line map: */
    /*   line 1975 @ +0x000 */
    /*   line 1977 @ +0x000 */
    /*   line 1981 @ +0x000 */
    /*   line 1988 @ +0x000 */
    /*   line 1991 @ +0x000 */
    /*   line 1996 @ +0x000 */
    /*   line 1998 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1942–1956 */
/* addr: 0x0023d690  size: 224 bytes */
void LNK_fn_SetSendStatusPeriod(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    unsigned int k;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 1942 @ +0x000 */
    /*   line 1946 @ +0x000 */
    /*   line 1948 @ +0x000 */
    /*   line 1950 @ +0x000 */
    /*   line 1956 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1910–1925 */
/* addr: 0x0023d770  size: 240 bytes */
void LNK_fn_SetSendDataRate(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 1910 @ +0x000 */
    /*   line 1914 @ +0x000 */
    /*   line 1917 @ +0x000 */
    /*   line 1921 @ +0x000 */
    /*   line 1925 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0023d860  size: 8 bytes */
void LNK_fn_p_SetLag(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1818–1856 */
/* addr: 0x0023d870  size: 624 bytes */
int fn_CrunchLink(LinkActorType_* p_link)
{
    float xScale;
    unsigned char cp;
    unsigned char k;
    float xTempLength;
    float xCurrentLength;
    /* line map: */
    /*   line 1818 @ +0x000 */
    /*   line 1826 @ +0x000 */
    /*   line 1830 @ +0x000 */
    /*   line 1830 @ +0x000 */
    /*   line 1834 @ +0x000 */
    /*   line 1836 @ +0x000 */
    /*   line 1836 @ +0x000 */
    /*   line 1836 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1776–1795 */
/* addr: 0x0023dae0  size: 824 bytes */
unsigned char fn_Launch(LinkActorType_* p_link)
{
    float xNorm;
    /* aggregate */ int stDiff;
    float xScale;
    /* line map: */
    /*   line 1776 @ +0x000 */
    /*   line 1781 @ +0x000 */
    /*   line 1781 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1785 @ +0x000 */
    /*   line 1788 @ +0x000 */
    /*   line 1790 @ +0x000 */
    /*   line 1792 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1634–1672 */
/* addr: 0x0023de20  size: 928 bytes */
int fn_DeleteLoops(LinkActorType_* p_link, /* function pointer */ int Ipoint)
{
    short k;
    unsigned short temp16;
    unsigned short i;
    int bLoop;
    /* aggregate */ int stLastSegment;
    /* aggregate */ int stFirstSegment;
    /* line map: */
    /*   line 1634 @ +0x000 */
    /*   line 1636 @ +0x000 */
    /*   line 1640 @ +0x000 */
    /*   line 1642 @ +0x000 */
    /*   line 1642 @ +0x000 */
    /*   line 1644 @ +0x000 */
    /*   line 1647 @ +0x000 */
    /*   line 1650 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1576–1613 */
/* addr: 0x0023e1c0  size: 696 bytes */
void fn_stSegmentDistance(LinkActorType_* p_link, unsigned short k, unsigned short i, /* function pointer */ int p3, /* function pointer */ int p2, /* function pointer */ int p1, /* function pointer */ int p0)
{
    float det;
    float e;
    float b;
    float t;
    float s;
    /* aggregate */ int DP;
    /* line map: */
    /*   line 1577 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /*   line 1576 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1542–1547 */
/* addr: 0x0023e480  size: 140 bytes */
void fn_Mechanics(LinkActorType_* p_link)
{
    unsigned short k;
    /* line map: */
    /*   line 1542 @ +0x000 */
    /*   line 1544 @ +0x000 */
    /*   line 1547 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1449–1520 */
/* addr: 0x0023e510  size: 1916 bytes */
void fn_MoveCutPoint(LinkActorType_* p_link, unsigned short k, /* function pointer */ int p_stNormalB, /* function pointer */ int p_stSpeedB, /* function pointer */ int p_stPointC, /* function pointer */ int p_stPointB, /* function pointer */ int p_stPointA)
{
    float xNorm;
    float xNorm;
    int bMovePoint;
    float sumAngle;
    /* aggregate */ int p_stPointD;
    /* aggregate */ int p_NewPointB;
    /* aggregate */ int p_tempVector;
    /* line map: */
    /*   line 1460 @ +0x000 */
    /*   line 1460 @ +0x000 */
    /*   line 1460 @ +0x000 */
    /*   line 1461 @ +0x000 */
    /*   line 1461 @ +0x000 */
    /*   line 1461 @ +0x000 */
    /*   line 1460 @ +0x000 */
    /*   line 1461 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1343–1385 */
/* addr: 0x0023ec90  size: 856 bytes */
int fn_CheckDeletedCutPoint(LinkActorType_* p_link, int k, /* function pointer */ int p_stNormalB, /* function pointer */ int p_stPointC, /* function pointer */ int p_stPointB, /* function pointer */ int p_stPointA)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int p_tempVector;
    int bRemoved;
    /* line map: */
    /*   line 1343 @ +0x000 */
    /*   line 1343 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /*   line 1352 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1260–1329 */
/* addr: 0x0023eff0  size: 2800 bytes */
void fn_CheckNewCutPoint(LinkActorType_* p_link, unsigned short k, /* function pointer */ int p_stPoint)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int VectTmp;
    /* aggregate */ int p_stMovePoint;
    /* aggregate */ int p_stNormalMid;
    /* aggregate */ int p_stPointMid;
    /* aggregate */ int p_stNormal2;
    /* aggregate */ int p_stNormal1;
    /* aggregate */ int p_stCollidedPoint2;
    /* aggregate */ int p_stCollidedPoint1;
    /* aggregate */ int p_Direction;
    /* line map: */
    /*   line 1263 @ +0x000 */
    /*   line 1261 @ +0x000 */
    /*   line 1261 @ +0x000 */
    /*   line 1260 @ +0x000 */
    /*   line 1260 @ +0x000 */
    /*   line 1260 @ +0x000 */
    /*   line 1260 @ +0x000 */
    /*   line 1261 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1214–1236 */
/* addr: 0x0023fae0  size: 380 bytes */
void fn_DeleteCutPoint(LinkActorType_* p_link, unsigned char uiStart, unsigned char uiEnd)
{
    int nDeletedCutPoints;
    int k;
    unsigned char* p_uiCutPointNb;
    /* line map: */
    /*   line 1216 @ +0x000 */
    /*   line 1216 @ +0x000 */
    /*   line 1214 @ +0x000 */
    /*   line 1220 @ +0x000 */
    /*   line 1223 @ +0x000 */
    /*   line 1223 @ +0x000 */
    /*   line 1226 @ +0x000 */
    /*   line 1228 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1157–1195 */
/* addr: 0x0023fc60  size: 836 bytes */
void fn_InsertCutPoint(LinkActorType_* p_link, /* function pointer */ int p_vPosition, /* function pointer */ int p_vNormal, /* function pointer */ int p_vSpeed, int uc_index)
{
    unsigned char bAddPoint;
    unsigned char k;
    unsigned char* uc_p_CutPointNb;
    /* line map: */
    /*   line 1157 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1163 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1167 @ +0x000 */
    /*   line 1169 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /*   line 1171 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 1060–1069 */
/* addr: 0x0023ffb0  size: 100 bytes */
/*type_0x00*/ int fn_CollisionRayCastLnKProc(LinkActorType_* p_link, /* function pointer */ int p_vPoint, /* function pointer */ int p_vDirection, unsigned long ulMode)
{
    /* line map: */
    /*   line 1060 @ +0x000 */
    /*   line 1060 @ +0x000 */
    /*   line 1066 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 941–1004 */
/* addr: 0x00240020  size: 440 bytes */
void fn_StateConstructor(/* function pointer */ int vPointCP_K, /* function pointer */ int vPointK)
{
    float xTemp;
    unsigned char cp_2;
    unsigned char k;
    /* line map: */
    /*   line 941 @ +0x000 */
    /*   line 941 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 946 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 965 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 976 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 763–808 */
/* addr: 0x002401e0  size: 856 bytes */
void LNK_fn_p_FollowLinkDirection(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int hNewSuperObjPerso)
{
    unsigned char cp;
    /* aggregate */ int vDirection;
    float xNorm;
    float xSpeed;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 763 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 773 @ +0x000 */
    /*   line 776 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 736–743 */
/* addr: 0x00240540  size: 176 bytes */
void LNK_fn_SetUnlaunch(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 736 @ +0x000 */
    /*   line 740 @ +0x000 */
    /*   line 743 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 707–719 */
/* addr: 0x002405f0  size: 236 bytes */
void LNK_fn_SetFlagStraight(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 707 @ +0x000 */
    /*   line 711 @ +0x000 */
    /*   line 714 @ +0x000 */
    /*   line 715 @ +0x000 */
    /*   line 715 @ +0x000 */
    /*   line 719 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 677–688 */
/* addr: 0x002406e0  size: 276 bytes */
void LNK_fn_SetLaunchSpeed(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 677 @ +0x000 */
    /*   line 681 @ +0x000 */
    /*   line 684 @ +0x000 */
    /*   line 688 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 651–660 */
/* addr: 0x00240800  size: 232 bytes */
void LNK_fn_p_SetGaugeSpeed(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 651 @ +0x000 */
    /*   line 655 @ +0x000 */
    /*   line 657 @ +0x000 */
    /*   line 657 @ +0x000 */
    /*   line 660 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 603–618 */
/* addr: 0x002408f0  size: 368 bytes */
void LNK_fn_p_GetCutPoint(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stValue;
    unsigned short i;
    /* line map: */
    /*   line 603 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 606 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 612 @ +0x000 */
    /*   line 614 @ +0x000 */
    /*   line 617 @ +0x000 */
    /*   line 618 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 557–565 */
/* addr: 0x00240a60  size: 204 bytes */
void LNK_fn_p_GetNoCutPoints(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 557 @ +0x000 */
    /*   line 565 @ +0x000 */
    /*   line 565 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 507–520 */
/* addr: 0x00240b30  size: 220 bytes */
void LNK_fn_p_Kill(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 507 @ +0x000 */
    /*   line 511 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 520 @ +0x000 */
    /*   line 520 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 326–464 */
/* addr: 0x00240c10  size: 2248 bytes */
void LNK_fn_p_DoBehaviour(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* aggregate */ int OldState;
    unsigned short cp;
    unsigned char k;
    /* line map: */
    /*   line 326 @ +0x000 */
    /*   line 326 @ +0x000 */
    /*   line 329 @ +0x000 */
    /*   line 337 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 351 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 285–289 */
/* addr: 0x002414e0  size: 84 bytes */
void LNK_fn_p_SetAgo(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 285 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 287 @ +0x000 */
    /*   line 289 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\LNK_Proc.c lines 188–271 */
/* addr: 0x00241540  size: 1096 bytes */
void LNK_fn_p_Init(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int pRemoteSPOLink)
{
    unsigned short cp;
    tdstGetSetParam_ stValue;
    unsigned char k;
    /* line map: */
    /*   line 188 @ +0x000 */
    /*   line 188 @ +0x000 */
    /*   line 193 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 200 @ +0x000 */
    /* TODO: decompile from asm/... */
}
