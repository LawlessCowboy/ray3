/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct anon_0 anon_0;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstState_ tdstState_;
typedef struct _stIDisplay _stIDisplay;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct stMorphData stMorphData;
typedef struct stFile_ stFile_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct anon_1 anon_1;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct DNM_stReport DNM_stReport;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct _tdstFixInfo _tdstFixInfo;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstCouple_ tdstCouple_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct _stTimerCount _stTimerCount;
typedef struct MTH_stMove MTH_stMove;
typedef struct anon_2 anon_2;

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

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstZoneSetList_ {
    /* aggregate */ int hZdxIndexList; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
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

struct _stIDisplay {
    int pfn_iGsInitialize; /* +0x0 */
    int pfn_vStartLoop; /* +0x4 */
    int pfn_vEndLoop; /* +0x8 */
    int pfn_vTextDisplay; /* +0xc */
};

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct stFile_ {
    int pChild; /* +0x0 */
    unsigned int sector; /* +0x4 */
    unsigned int length; /* +0x8 */
    char name[16]; /* +0xc */
    unsigned int nb_sons; /* +0x1c */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

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

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstCollSet_ {
    int hZddList; /* +0x0 */
    int hZdeList; /* +0x4 */
    int hZdmList; /* +0x8 */
    int hZdrList; /* +0xc */
    int hZddActivationList; /* +0x10 */
    int hZdeActivationList; /* +0x14 */
    int hZdmActivationList; /* +0x18 */
    int hZdrActivationList; /* +0x1c */
    int hZddCurrentActivation; /* +0x20 */
    int hZdeCurrentActivation; /* +0x24 */
    int hZdrCurrentActivation; /* +0x28 */
    int hZdmCurrentActivation; /* +0x2c */
    unsigned int ulFBZddPriviligedZones; /* +0x30 */
    unsigned int ulFBZdePriviligedZones; /* +0x34 */
    unsigned int ulFBZdmPriviligedZones; /* +0x38 */
    unsigned int ulFBZdrPriviligedZones; /* +0x3c */
    unsigned char ucCollComputeFrequency; /* +0x40 */
    unsigned char ucCharacterPriority; /* +0x41 */
    unsigned char ucCollisionFlag; /* +0x42 */
    /* aggregate */ int stColliderInfo; /* +0x44 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstZdxList_ {
    /* aggregate */ int hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
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

struct tdstCsaList_ {
    /* aggregate */ int hZoneSetEncapsulationList; /* +0x0 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
    DNM_stObstacle m_stWater; /* +0xa8 */
    DNM_stObstacle m_stCeil; /* +0xd0 */
    MTH_stMove m_stAbsolutePrevSpeed; /* +0xf8 */
    MTH_stMove m_stAbsoluteCurrSpeed; /* +0x114 */
    MTH_stMove m_stAbsolutePrevPosition; /* +0x130 */
    MTH_stMove m_stAbsoluteCurrPosition; /* +0x14c */
    char m_cBitField; /* +0x168 */
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

struct _tdstFixInfo {
    unsigned int ulNbObject; /* +0x0 */
    /* aggregate */ int a20_stObjects; /* +0x4 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstZoneSetEncapsulation_ {
    int p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_2 m_stData6; /* +0x34 */
    anon_0 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

unsigned char g_xA3bOff;
int g_hLoadedSuperObjectRoot;
int bFirst;
unsigned char g_bBeginMapSoundEventFlag;
unsigned char g_bFrozenWhenStart;
int g_iCurrentSpo;
int g_bMinimalLoading;
unsigned int g_FixMemHasBeenSet;
int g_JustForSPR;
/* aggregate */ int g_hCamLocalMatrix;
/* aggregate */ int g_hCamMatrix;
/* aggregate */ int g_hMCLocalMatrix;
/* aggregate */ int g_hMCMatrix;
int g_iLinkNumberA;
_tdstFixInfo g_stFixInfo;
/* array */ int g_a50_stDynSpoInitialPos[300];
/* aggregate */ int g_stEngineStructure;
int g_iNbPersoOfFixInDynamicHierarchy;
int gp_stDynamicWorld;
/* aggregate */ int gp_stPersoInDynamicHierarchy;
int gp_stActualWorld;
unsigned char g_bLoadNewLevel;
/* aggregate */ int g_a_hSOCurrentMainSector;
int SECT_hFatherSector;
char GLI_cGlobalFogIsOn;
/* aggregate */ int g_a_pfnDynamicFunction;
_SND_tduRefEvt g_stBeginMapSoundEvent;
int g_lSoundObjectTypeMusic;
unsigned char g_bInGameMenu;
int g_AlphabetCharacterPointer;
unsigned char GLI_g_bSaveFog;
unsigned char g_bLevelHasTransitionMemory;
unsigned char g_bLevelHadTransitionMemory;
unsigned char g_ucGameModuleId;
anon_1 last_video_fd;
int g_hMaterialForText;
unsigned int __text_end;
unsigned int __text_start;
/* array */ int g_a_stStructureHandleFunction;
int g_iArraySizes;
stFile_ ax_FileCache[2048];
unsigned char g_ucDebugCamera;
int iNumLoop;
int g_lSoundObjectTypeAnim;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 21–114 */
/* addr: 0x00262c30  size: 760 bytes */
void fn_vGetScrollSpeedMatCollided(/* function pointer */ int p_stSuperObj, /* function pointer */ int p_stVector, unsigned int ulObstacleType, int ulMTIndex, /* function pointer */ int hObject, /* function pointer */ int p_stObjectCollided, DNM_stObstacle* p_stObstacle, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, DNM_stReport* p_stDynamReport)
{
    /* aggregate */ int mGlobalToObst;
    /* aggregate */ int vV12;
    /* aggregate */ int vPt2;
    /* aggregate */ int vPt1;
    /* aggregate */ int vNorm;
    /* aggregate */ int vContact;
    short xNbFaceCollided;
    /* aggregate */ int stElement;
    /* aggregate */ int mGlobalToPerso;
    /* aggregate */ int vGlobalSpeed;
    /* aggregate */ int vXYZSpeed;
    /* line map: */
    /*   line 21 @ +0x000 */
    /*   line 27 @ +0x000 */
    /*   line 31 @ +0x000 */
    /*   line 40 @ +0x000 */
    /*   line 44 @ +0x000 */
    /*   line 48 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 56 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1419–1419 */
/* addr: 0x002647d0  size: 12 bytes */
unsigned char EngineIsFrozen(void)
{
    /* line map: */
    /*   line 1419 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1382–1387 */
/* addr: 0x002647e0  size: 208 bytes */
void fn_vReinitTheStaticHierarchie(/* function pointer */ int hSuperObject, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 1382 @ +0x000 */
    /*   line 1382 @ +0x000 */
    /*   line 1382 @ +0x000 */
    /*   line 1385 @ +0x000 */
    /*   line 1387 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1243–1364 */
/* addr: 0x002648b0  size: 808 bytes */
void fn_vReinitTheMap(void)
{
    unsigned char uc_ViewPortIndex;
    unsigned char uc_ViewPortIndex;
    int i;
    /* line map: */
    /*   line 1243 @ +0x000 */
    /*   line 1243 @ +0x000 */
    /*   line 1249 @ +0x000 */
    /*   line 1257 @ +0x000 */
    /*   line 1260 @ +0x000 */
    /*   line 1262 @ +0x000 */
    /*   line 1264 @ +0x000 */
    /*   line 1267 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1144–1147 */
/* addr: 0x00264be0  size: 44 bytes */
void fn_vDesInitDeadLoop(void)
{
    /* line map: */
    /*   line 1144 @ +0x000 */
    /*   line 1147 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1002–1116 */
/* addr: 0x00264c10  size: 896 bytes */
void fn_vInitDeadLoop(/* function pointer */ int hMaincharacter)
{
    unsigned char uc_ViewPortIndex;
    _SND_tduRefEvt uSoundEvent;
    int i;
    /* line map: */
    /*   line 1002 @ +0x000 */
    /*   line 1007 @ +0x000 */
    /*   line 1002 @ +0x000 */
    /*   line 1004 @ +0x000 */
    /*   line 1011 @ +0x000 */
    /*   line 1014 @ +0x000 */
    /*   line 1019 @ +0x000 */
    /*   line 1021 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 416–458 */
/* addr: 0x00264f90  size: 184 bytes */
void fn_vInitGameLoop(void)
{
    unsigned char eCallingMode;
    /* line map: */
    /*   line 416 @ +0x000 */
    /*   line 418 @ +0x000 */
    /*   line 426 @ +0x000 */
    /*   line 431 @ +0x000 */
    /*   line 433 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 449 @ +0x000 */
    /* TODO: decompile from asm/... */
}
