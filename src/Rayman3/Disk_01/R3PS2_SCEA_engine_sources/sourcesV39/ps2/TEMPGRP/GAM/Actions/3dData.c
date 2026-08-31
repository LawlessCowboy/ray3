/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstState_ tdstState_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct DNM_stReport DNM_stReport;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstCouple_ tdstCouple_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct stMACDPID stMACDPID;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct anon_0 anon_0;
typedef struct _stTimerCount _stTimerCount;
typedef struct anon_1 anon_1;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct stMorphData stMorphData;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct MTH_stMove MTH_stMove;

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct tdstCsaList_ {
    /* aggregate */ int hZoneSetEncapsulationList; /* +0x0 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstZoneSetList_ {
    /* aggregate */ int hZdxIndexList; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
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

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstZdxList_ {
    /* aggregate */ int hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct tdstZoneSetEncapsulation_ {
    int p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

float g_fGlobalAccelerationFactorForAnims;
/* aggregate */ int g_stEngineStructure;
unsigned char g_ucGameModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 125–142 */
/* addr: 0x002886d0  size: 84 bytes */
unsigned char CINE_fn_bIsCinePlaying(CINE_tdstCine_* hCine, /* function pointer */ int hElement)
{
    /* line map: */
    /*   line 125 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 130 @ +0x000 */
    /*   line 132 @ +0x000 */
    /*   line 142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1215–1228 */
/* addr: 0x00288730  size: 316 bytes */
int fn_bTestSubAnimNearEnd(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, /* function pointer */ int param2, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* param4)
{
    /* line map: */
    /*   line 1215 @ +0x000 */
    /*   line 1215 @ +0x000 */
    /*   line 1218 @ +0x000 */
    /*   line 1226 @ +0x000 */
    /*   line 1228 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1205–1205 */
/* addr: 0x00288870  size: 20 bytes */
int fn_bSubAnimRunning(/* function pointer */ int _hCharacter)
{
    /* line map: */
    /*   line 1205 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1185–1193 */
/* addr: 0x00288890  size: 72 bytes */
void fn_vStopSubAnimationAtEnd(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, /* function pointer */ int hSubAnimInUse, tdstSubAnim_* param3, tdst3dData_* h3dData)
{
    /* line map: */
    /*   line 1185 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1188 @ +0x000 */
    /*   line 1193 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1168–1174 */
/* addr: 0x002888e0  size: 320 bytes */
void fn_vRemoveAllSubAnimations(/* function pointer */ int _hCharacter, /* function pointer */ int hNextSubAnimInUse, /* function pointer */ int hSubAnimInUse)
{
    /* line map: */
    /*   line 1168 @ +0x000 */
    /*   line 1172 @ +0x000 */
    /*   line 1174 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1152–1159 */
/* addr: 0x00288a20  size: 76 bytes */
int fn_bTestSubAnim(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, /* function pointer */ int param2, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* param4)
{
    /* line map: */
    /*   line 1152 @ +0x000 */
    /*   line 1152 @ +0x000 */
    /*   line 1155 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1129–1142 */
/* addr: 0x00288a70  size: 132 bytes */
int fn_bTestCustomBitSubAnim(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, unsigned int ulBitNumber, /* function pointer */ int hNextSubAnimInUse, /* function pointer */ int param4, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* param6)
{
    /* line map: */
    /*   line 1129 @ +0x000 */
    /*   line 1129 @ +0x000 */
    /*   line 1132 @ +0x000 */
    /*   line 1140 @ +0x000 */
    /*   line 1142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1101–1118 */
/* addr: 0x00288b00  size: 152 bytes */
void fn_vSetCustombitSubAnim(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, unsigned int ulBitNumber, int bValue, /* function pointer */ int hNextSubAnimInUse, /* function pointer */ int hSubAnimInUse, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* h3dData)
{
    unsigned int ulMask;
    /* line map: */
    /*   line 1101 @ +0x000 */
    /*   line 1101 @ +0x000 */
    /*   line 1101 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1104 @ +0x000 */
    /*   line 1110 @ +0x000 */
    /*   line 1115 @ +0x000 */
    /*   line 1118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 1065–1091 */
/* addr: 0x00288ba0  size: 400 bytes */
void fn_vRemoveSubAnimation(/* function pointer */ int hNextSubAnimInUse, /* function pointer */ int hSubAnimInUse, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* h3dData)
{
    /* line map: */
    /*   line 1065 @ +0x000 */
    /*   line 1073 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1076 @ +0x000 */
    /*   line 1080 @ +0x000 */
    /*   line 1083 @ +0x000 */
    /*   line 1086 @ +0x000 */
    /*   line 1091 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 966–1060 */
/* addr: 0x00288d30  size: 808 bytes */
void fn_vAddSubAnimation(/* function pointer */ int _hCharacter, unsigned int ulNumberOfSubAnim, unsigned char bStop, unsigned int ulLoop, unsigned char bMerge, float xFrame, /* function pointer */ int hSubAnimInUse, /* function pointer */ int hNewSubAnimInUse, tdstSubAnim_* hSubAnimInFamily, tdst3dData_* h3dData)
{
    /* line map: */
    /*   line 966 @ +0x000 */
    /*   line 1012 @ +0x000 */
    /*   line 1016 @ +0x000 */
    /*   line 1016 @ +0x000 */
    /*   line 1020 @ +0x000 */
    /*   line 1022 @ +0x000 */
    /*   line 1024 @ +0x000 */
    /*   line 1025 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 952–960 */
/* addr: 0x00289060  size: 68 bytes */
void fn_vFreeArrayOfElts3d(tdst3dData_* h_3dData, tdstElement3d_* p_stElts3d)
{
    /* line map: */
    /*   line 952 @ +0x000 */
    /*   line 957 @ +0x000 */
    /*   line 960 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 937–946 */
/* addr: 0x002890b0  size: 120 bytes */
void fn_vAllocArrayOfElts3d(tdst3dData_* h_3dData, unsigned short _wNumberOfElts3d)
{
    /* line map: */
    /*   line 937 @ +0x000 */
    /*   line 942 @ +0x000 */
    /*   line 946 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 924–929 */
/* addr: 0x00289130  size: 132 bytes */
void fn_v3dDataSetUserEventFlag(tdst3dData_* h_3dData, unsigned char _ucFlagIndex, int _bSet, /* function pointer */ int _p_stPosition)
{
    unsigned char ucMask;
    /* line map: */
    /*   line 924 @ +0x000 */
    /*   line 927 @ +0x000 */
    /*   line 929 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 916–918 */
/* addr: 0x002891c0  size: 88 bytes */
int fn_b3dDataGetUserEventFlag(tdst3dData_* h_3dData, unsigned char _ucFlagIndex, /* function pointer */ int _p_stPosition)
{
    unsigned char ucMask;
    /* line map: */
    /*   line 916 @ +0x000 */
    /*   line 918 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 892–894 */
/* addr: 0x00289220  size: 36 bytes */
void fn_v3dDataSetLightComputationFrequency(tdst3dData_* h_3dData, unsigned char _ucFrequency)
{
    /* line map: */
    /*   line 892 @ +0x000 */
    /*   line 894 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 882–885 */
/* addr: 0x00289250  size: 52 bytes */
unsigned char fn_b3dDataCanComputeBrain(/* function pointer */ int _hCharacter)
{
    /* line map: */
    /*   line 882 @ +0x000 */
    /*   line 885 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 870–872 */
/* addr: 0x00289290  size: 68 bytes */
void fn_v3dDataUpdateBrainCounter(/* function pointer */ int _hCharacter, tdst3dData_* h_3dData)
{
    /* line map: */
    /*   line 870 @ +0x000 */
    /*   line 872 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 859–861 */
/* addr: 0x002892e0  size: 36 bytes */
void fn_v3dDataSetBrainComputationFrequency(tdst3dData_* h_3dData, unsigned char _ucFrequency)
{
    /* line map: */
    /*   line 859 @ +0x000 */
    /*   line 861 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 833–833 */
/* addr: 0x00289310  size: 44 bytes */
void fn_v3dDataSetGlobalAccelerationFactor(float fFactor)
{
    /* line map: */
    /*   line 833 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 819–828 */
/* addr: 0x00289340  size: 144 bytes */
void fn_v3dDataFactorFrameRate(tdst3dData_* _h3dData, unsigned int _ulFactor100)
{
    unsigned char ucFrameRate;
    /* line map: */
    /*   line 819 @ +0x000 */
    /*   line 824 @ +0x000 */
    /*   line 828 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 808–814 */
/* addr: 0x002893d0  size: 196 bytes */
void fn_v3dDataSetFrameRate(tdst3dData_* h_3dData, unsigned char ucFrameRate)
{
    unsigned char ucFrameRate2;
    /* line map: */
    /*   line 808 @ +0x000 */
    /*   line 814 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 662–677 */
/* addr: 0x002894a0  size: 148 bytes */
void fn_v3dDataCopyClone(/* function pointer */ int _p_stObjectDest, /* function pointer */ int _p_stObjectSrc)
{
    void* pv_tmp4;
    void* pv_tmp3;
    void* pv_tmp2;
    void* pv_tmp1;
    /* line map: */
    /*   line 662 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 666 @ +0x000 */
    /*   line 673 @ +0x000 */
    /*   line 675 @ +0x000 */
    /*   line 677 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 619–621 */
/* addr: 0x00289540  size: 80 bytes */
void fn_v3dDataInitValueSAI(tdst3dData_* h_3dData)
{
    /* line map: */
    /*   line 619 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 619 @ +0x000 */
    /*   line 621 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00289590  size: 8 bytes */
unsigned int fn_ul3dDataSizeOf(void)
{
    return 0x1E0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 573–599 */
/* addr: 0x002895a0  size: 480 bytes */
void fn_v3dDataDesinit(/* function pointer */ int p_stObject, /* aggregate */ int eObjectInit, /* function pointer */ int hNextSubAnim, /* function pointer */ int hThisSubAnim)
{
    /* line map: */
    /*   line 573 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 585 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 596 @ +0x000 */
    /*   line 599 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 429–554 */
/* addr: 0x00289780  size: 1224 bytes */
void fn_v3dDataInit(/* function pointer */ int p_stObject, /* aggregate */ int eObjectInit, /* function pointer */ int h_SupObject, /* function pointer */ int hCharacter, /* function pointer */ int hFather, /* function pointer */ int hNextSubAnim, /* function pointer */ int hThisSubAnim)
{
    /* line map: */
    /*   line 429 @ +0x000 */
    /*   line 434 @ +0x000 */
    /*   line 437 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 466 @ +0x000 */
    /*   line 469 @ +0x000 */
    /*   line 478 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 386–402 */
/* addr: 0x00289c50  size: 464 bytes */
void fn_v3dDataFree(/* function pointer */ int p_stObject, /* function pointer */ int hNextSubAnim, /* function pointer */ int hThisSubAnim)
{
    /* line map: */
    /*   line 386 @ +0x000 */
    /*   line 389 @ +0x000 */
    /*   line 392 @ +0x000 */
    /*   line 395 @ +0x000 */
    /*   line 399 @ +0x000 */
    /*   line 399 @ +0x000 */
    /*   line 402 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\3dData.c lines 289–367 */
/* addr: 0x00289e20  size: 388 bytes */
void fn_h_3dDataRealAlloc(tdst3dData_* h_3dData)
{
    /* line map: */
    /*   line 289 @ +0x000 */
    /*   line 289 @ +0x000 */
    /*   line 292 @ +0x000 */
    /*   line 293 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 295 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 298 @ +0x000 */
    /* TODO: decompile from asm/... */
}
