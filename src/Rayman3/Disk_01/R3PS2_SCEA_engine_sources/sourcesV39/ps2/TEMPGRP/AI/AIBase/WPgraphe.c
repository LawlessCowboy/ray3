/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstState_ tdstState_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstMacro_ tdstMacro_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstComport_ tdstComport_;
typedef struct _stTimerCount _stTimerCount;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union anon_0 anon_0;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct _RollOffParam _RollOffParam;

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

/* aggregate */ int g_stEngineStructure;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 59–71 */
/* addr: 0x001feeb0  size: 80 bytes */
void WPARCLST_fn_hInit(/* function pointer */ int hList)
{
    /* line map: */
    /*   line 59 @ +0x000 */
    /*   line 65 @ +0x000 */
    /*   line 68 @ +0x000 */
    /*   line 71 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 1662–1662 */
/* addr: 0x001fef00  size: 24 bytes */
void WPG_fn_hGetArcList(/* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 1662 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 1495–1495 */
/* addr: 0x001fef20  size: 64 bytes */
void WPG_fn_hGetWaypointOfGraph(WP_tdstGraph_* hGraph, int iIndex, int* _plTypeOfWP, /* function pointer */ int hElement)
{
    int i;
    /* line map: */
    /*   line 1495 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001fef60  size: 8 bytes */
int WPG_fn_lNumberOfWaypointOfGraph(WP_tdstGraph_* hGraph)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x001fef70  size: 8 bytes */
void WPG_fn_lBuildRandomPath(WP_tdstGraph_* _hGraph, WP_tdstWayPoint_* _hStartWP, int _bIsCircular)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 1253–1436 */
/* addr: 0x001fef80  size: 1768 bytes */
void WPG_fn_lBuildOrderedPath(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hStartWP, int bIsCircular, int bIsRandom, WP_tdstWayPoint_* d_hListOfDestWP, /* function pointer */ int hFirstNode, /* function pointer */ int d_hListOfWPNode, /* function pointer */ int hCurrentNode, WP_tdstGraph_* tdhNewPath)
{
    int lPonderationTmp;
    int lPonderationMin;
    int i;
    int iIndex;
    int* d_hListOfDestWeight;
    unsigned int* d_hListOfDestCaps;
    int* d_hListOfTypeOfWP;
    int iIndexOfBestNode;
    unsigned int ulCapsOfBestNode;
    int lBestArcWeight;
    int lRealArcWeight;
    unsigned int ulCapability;
    int iCurrentIndex;
    int iStartingIndex;
    int iCount;
    int iNbElementInTheGraph;
    /* line map: */
    /*   line 1253 @ +0x000 */
    /*   line 1256 @ +0x000 */
    /*   line 1261 @ +0x000 */
    /*   line 1263 @ +0x000 */
    /*   line 1263 @ +0x000 */
    /*   line 1268 @ +0x000 */
    /*   line 1271 @ +0x000 */
    /*   line 1274 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 1141–1195 */
/* addr: 0x001ff670  size: 704 bytes */
void WPG_fn_hBuildOrderedPathFromAtoB(WP_tdstGraph_* _hGraph, /* function pointer */ int _hStartingNode, /* function pointer */ int _hEndingNode, int bIsRandom, /* function pointer */ int p_hListOfResultNodes, /* function pointer */ int p_hListOfUsefulNodes, /* function pointer */ int param6)
{
    int lIndex;
    int lWeight;
    unsigned int ulCapability;
    int iNbElementInTheGraph;
    int j;
    int i;
    int lSizeOfResult;
    /* line map: */
    /*   line 1141 @ +0x000 */
    /*   line 1143 @ +0x000 */
    /*   line 1143 @ +0x000 */
    /*   line 1143 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /*   line 1150 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1152 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 1019–1124 */
/* addr: 0x001ff930  size: 660 bytes */
int WPG_fn_hRecursiveBuildBestOrderedPathFromAtoB(/* function pointer */ int _hStartingNode, /* function pointer */ int _hEndingNode, /* function pointer */ int _p_hListOfUsefulNodes, int _iNbOfElementInTheGraph, /* function pointer */ int _p_hListOfResultNodes, int bIsRandom, WP_tdstArc_* hElement, /* function pointer */ int ap_hListOfTmpResultNodes)
{
    int lBestWeight;
    int lSizeOfResultForNextNode;
    int lSizeOfResult;
    int lTmpPonderation;
    int lWeight;
    unsigned int ulCapability;
    int i;
    /* line map: */
    /*   line 1022 @ +0x000 */
    /*   line 1022 @ +0x000 */
    /*   line 1026 @ +0x000 */
    /*   line 1026 @ +0x000 */
    /*   line 1019 @ +0x000 */
    /*   line 1029 @ +0x000 */
    /*   line 1029 @ +0x000 */
    /*   line 1033 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 840–1007 */
/* addr: 0x001ffbd0  size: 1364 bytes */
void WPG_fn_lShortestPath(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int ulCapability, WP_tdstGraph_* tdhShortestPath, /* function pointer */ int d_hReached, /* function pointer */ int d_hExplored, WP_tdstArc_* hArc, /* function pointer */ int hNeighbor, /* function pointer */ int param9)
{
    int lWeight;
    int i;
    int iValuation;
    int iIndex;
    int iDone;
    int iNbElementInReached;
    int iCurrentWayPointInReached;
    int iNbElementInExplored;
    int iCurrentWayPointInExplored;
    int* d_iValuationOfReached;
    int* d_iValuationOfExplored;
    int* d_iWayOfReached;
    int* d_iWayOfExplored;
    /* line map: */
    /*   line 840 @ +0x000 */
    /*   line 840 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 844 @ +0x000 */
    /*   line 844 @ +0x000 */
    /*   line 847 @ +0x000 */
    /*   line 848 @ +0x000 */
    /*   line 850 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 786–804 */
/* addr: 0x00200130  size: 160 bytes */
void WPG_fn_hGetNearestGraph(/* function pointer */ int _p_stPos, WP_tdstGraph_* hCloserGraph, tdstGraphChainedListNode_* p_stGraphListNode)
{
    float xTmp;
    float xDistMin;
    /* line map: */
    /*   line 786 @ +0x000 */
    /*   line 786 @ +0x000 */
    /*   line 790 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 798 @ +0x000 */
    /*   line 802 @ +0x000 */
    /*   line 804 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 754–768 */
/* addr: 0x002001d0  size: 396 bytes */
float WPG_xGetCloserWPDistInGraph(WP_tdstGraph_* _hGraph, /* function pointer */ int _p_stPos)
{
    float xDistMin;
    /* aggregate */ int stWpPos;
    long lIndex;
    long lNbWp;
    /* line map: */
    /*   line 754 @ +0x000 */
    /*   line 756 @ +0x000 */
    /*   line 758 @ +0x000 */
    /*   line 758 @ +0x000 */
    /*   line 761 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 765 @ +0x000 */
    /*   line 767 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 728–735 */
/* addr: 0x00200360  size: 136 bytes */
void WPG_fn_vReinitAllGraphs(tdstGraphChainedListNode_* param0)
{
    /* line map: */
    /*   line 728 @ +0x000 */
    /*   line 731 @ +0x000 */
    /*   line 735 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 690–700 */
/* addr: 0x002003f0  size: 104 bytes */
void WPG_fn_vReinitGraph(WP_tdstGraph_* hGraph, WP_tdstArc_* hElement, /* function pointer */ int param2)
{
    /* line map: */
    /*   line 690 @ +0x000 */
    /*   line 693 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 698 @ +0x000 */
    /*   line 700 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 659–679 */
/* addr: 0x00200460  size: 160 bytes */
int WPG_fn_lGetLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int* p_lWeight, /* function pointer */ int hDstNode, /* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 659 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 668 @ +0x000 */
    /*   line 670 @ +0x000 */
    /*   line 673 @ +0x000 */
    /*   line 679 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 630–650 */
/* addr: 0x00200500  size: 160 bytes */
int WPG_fn_lChangeLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int lWeight, /* function pointer */ int hDstNode, /* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 630 @ +0x000 */
    /*   line 635 @ +0x000 */
    /*   line 639 @ +0x000 */
    /*   line 641 @ +0x000 */
    /*   line 644 @ +0x000 */
    /*   line 650 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 601–621 */
/* addr: 0x002005a0  size: 160 bytes */
int WPG_fn_lGetLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int* p_ulCapability, /* function pointer */ int hDstNode, /* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 601 @ +0x000 */
    /*   line 606 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 612 @ +0x000 */
    /*   line 615 @ +0x000 */
    /*   line 621 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 565–583 */
/* addr: 0x00200640  size: 168 bytes */
int WPG_fn_lChangeLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int ulCapability, int lValue, /* function pointer */ int hDstNode, /* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 565 @ +0x000 */
    /*   line 570 @ +0x000 */
    /*   line 574 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 583 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 492–511 */
/* addr: 0x002006f0  size: 168 bytes */
int WPG_fn_lAddArcToWayPoint(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int lWeight, unsigned int ulCapability, /* function pointer */ int hDstNode, /* function pointer */ int hSrcNode)
{
    /* line map: */
    /*   line 492 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 503 @ +0x000 */
    /*   line 505 @ +0x000 */
    /*   line 511 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 338–344 */
/* addr: 0x002007a0  size: 356 bytes */
int WPG_fn_lAddWayPoint(WP_tdstGraph_* _hGraph, WP_tdstWayPoint_* _hWayPoint, int _lTypeOfWP)
{
    /* line map: */
    /*   line 338 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\WPgraphe.c lines 270–292 */
/* addr: 0x00200910  size: 340 bytes */
void WPG_fn_vDestroy(WP_tdstGraph_* hGraph, /* function pointer */ int hNextElement, /* function pointer */ int hElement)
{
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 287 @ +0x000 */
    /*   line 292 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00200a70  size: 8 bytes */
void WPG_fn_vClearAllocMode(void)
{
    /* TODO: decompile from asm/... */
}
