/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stReport DNM_stReport;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct MTH_stMove MTH_stMove;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct _stTimerCount _stTimerCount;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;

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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
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

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

/* aggregate */ int CAM_g_stCopyCameraConstants;
/* aggregate */ int CAM_g_stCameraConstants;
/* aggregate */ int g_stEngineStructure;
unsigned char g_ucIsEdInGhostMode;
unsigned char g_ucGameModuleId;

/* addr: 0x0026d3e0  size: 8 bytes */
unsigned int fn_ulBrainSizeOf(void)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d3f0  size: 8 bytes */
void CAM_fn_vSetLightComputation(tdstCineinfo_* _hCineinfo, unsigned char _bLightComputation)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d400  size: 8 bytes */
unsigned char CAM_fn_bGetLightComputation(tdstCineinfo_* _hCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d410  size: 8 bytes */
unsigned char CAM_fn_bGetMirrorFlag(tdstCineinfo_* _hCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d420  size: 8 bytes */
void CAM_fn_vSetMirrorFlag(tdstCineinfo_* _hCineinfo, unsigned char _bFlag)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d430  size: 8 bytes */
unsigned char CAM_fn_ucGetTransparencyFlag(tdstCineinfo_* _hCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d440  size: 8 bytes */
void CAM_fn_vSetTransparencyFlag(tdstCineinfo_* _hCineinfo, unsigned char _ucValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 1234–1243 */
/* addr: 0x0026d450  size: 96 bytes */
void CAM_fn_vRestoreTransparencyOnSuperObject(tdstCineinfo_* _hCineinfo, /* function pointer */ int param1, /* function pointer */ int p_stFirst)
{
    /* line map: */
    /*   line 1234 @ +0x000 */
    /*   line 1238 @ +0x000 */
    /*   line 1241 @ +0x000 */
    /*   line 1243 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 1198–1229 */
/* addr: 0x0026d4b0  size: 320 bytes */
void CAM_fn_vApplyTransparencyOnSuperObject(tdstCineinfo_* _hCineinfo, /* function pointer */ int p_stEnd, /* function pointer */ int p_stFirst)
{
    float fDelta;
    /* line map: */
    /*   line 1201 @ +0x000 */
    /*   line 1198 @ +0x000 */
    /*   line 1203 @ +0x000 */
    /*   line 1225 @ +0x000 */
    /*   line 1205 @ +0x000 */
    /*   line 1209 @ +0x000 */
    /*   line 1213 @ +0x000 */
    /*   line 1219 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 1186–1192 */
/* addr: 0x0026d5f0  size: 80 bytes */
void CAM_fn_vResetArrayOfTransparentSuperObject(tdstCineinfo_* _hCineinfo, /* function pointer */ int param1, /* function pointer */ int p_stFirst)
{
    /* line map: */
    /*   line 1186 @ +0x000 */
    /*   line 1190 @ +0x000 */
    /*   line 1192 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026d640  size: 8 bytes */
void CAM_fn_vCineInfoSetSuperObjectTargeted(/* function pointer */ int _hIntCineinfo, /* function pointer */ int _hSuperObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 956–976 */
/* addr: 0x0026d650  size: 344 bytes */
void CAM_fn_vAveragePosition(tdstCineinfo_* _hCineinfo, float xTimeWindow, /* function pointer */ int p_result, /* function pointer */ int p_stTmp)
{
    unsigned int ulIndex;
    float tmpTime;
    float xCurrentTime;
    /* line map: */
    /*   line 956 @ +0x000 */
    /*   line 958 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 966 @ +0x000 */
    /*   line 964 @ +0x000 */
    /*   line 966 @ +0x000 */
    /*   line 968 @ +0x000 */
    /*   line 971 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 924–945 */
/* addr: 0x0026d7b0  size: 344 bytes */
void CAM_fn_vAverageSpeed(tdstCineinfo_* _hCineinfo, float xTimeWindow, /* function pointer */ int p_result, /* function pointer */ int p_stTmp)
{
    unsigned int ulIndex;
    float tmpTime;
    float xCurrentTime;
    /* line map: */
    /*   line 924 @ +0x000 */
    /*   line 926 @ +0x000 */
    /*   line 929 @ +0x000 */
    /*   line 935 @ +0x000 */
    /*   line 933 @ +0x000 */
    /*   line 935 @ +0x000 */
    /*   line 937 @ +0x000 */
    /*   line 940 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 912–914 */
/* addr: 0x0026d910  size: 64 bytes */
void CAM_fn_vRemindTime(tdstCineinfo_* _hCineinfo, float _dt)
{
    /* line map: */
    /*   line 912 @ +0x000 */
    /*   line 912 @ +0x000 */
    /*   line 914 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 903–905 */
/* addr: 0x0026d950  size: 84 bytes */
void CAM_fn_vRemindPos(tdstCineinfo_* _hCineinfo, MTH_stMove* _p_Pos)
{
    /* line map: */
    /*   line 903 @ +0x000 */
    /*   line 903 @ +0x000 */
    /*   line 905 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 894–896 */
/* addr: 0x0026d9b0  size: 84 bytes */
void CAM_fn_vRemindSpeed(tdstCineinfo_* _hCineinfo, MTH_stMove* _p_Speed)
{
    /* line map: */
    /*   line 894 @ +0x000 */
    /*   line 894 @ +0x000 */
    /*   line 896 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 869–885 */
/* addr: 0x0026da10  size: 180 bytes */
void fn_vInitAveragePositionDatasIfNecessary(tdstCineinfo_* _hCineinfo)
{
    unsigned int ulIndex;
    /* line map: */
    /*   line 869 @ +0x000 */
    /*   line 873 @ +0x000 */
    /*   line 880 @ +0x000 */
    /*   line 882 @ +0x000 */
    /*   line 882 @ +0x000 */
    /*   line 883 @ +0x000 */
    /*   line 883 @ +0x000 */
    /*   line 883 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 856–858 */
/* addr: 0x0026dad0  size: 76 bytes */
void fn_vGetPersoSightAxisSystem(tdstCineinfo_* _hCineinfo, /* function pointer */ int _p_stSightAxis, /* function pointer */ int _p_stFirstComplementaryAxis, /* function pointer */ int _p_stSecondComplementaryAxis)
{
    /* line map: */
    /*   line 856 @ +0x000 */
    /*   line 858 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 755–759 */
/* addr: 0x0026db20  size: 280 bytes */
void CAM_fn_vSetCameraInList(/* function pointer */ int _hSupObjectCamera, /* function pointer */ int p_stTempNodeCamera)
{
    /* line map: */
    /*   line 755 @ +0x000 */
    /*   line 755 @ +0x000 */
    /*   line 757 @ +0x000 */
    /*   line 759 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026dc40  size: 16 bytes */
void CAM_fn_vSetCineinfoWorkFromVisibility(tdstCineinfo_* param0)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 726–728 */
/* addr: 0x0026dc50  size: 60 bytes */
void CAM_fn_vSetCineinfoCurrentFromVisibility(tdstCineinfo_* _hCineinfo)
{
    /* line map: */
    /*   line 726 @ +0x000 */
    /*   line 728 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 717–720 */
/* addr: 0x0026dc90  size: 72 bytes */
void CAM_fn_vSetCineinfoVisibilityFromCurrent(tdstCineinfo_* _hCineinfo)
{
    /* line map: */
    /*   line 717 @ +0x000 */
    /*   line 720 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 708–711 */
/* addr: 0x0026dce0  size: 64 bytes */
void CAM_fn_vSetCineinfoWorkFromCurrent(tdstCineinfo_* _hCineinfo)
{
    /* line map: */
    /*   line 708 @ +0x000 */
    /*   line 711 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026dd20  size: 8 bytes */
unsigned char CAM_fn_bCineInfoGetIsDebugCamera(/* function pointer */ int _hIntCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026dd30  size: 8 bytes */
char CAM_fn_cCineInfoGetChannel(/* function pointer */ int _hIntCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026dd40  size: 8 bytes */
void CAM_fn_hCineInfoGetSuperObjectTargeted(/* function pointer */ int _hIntCineinfo)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026dd50  size: 24 bytes */
void CAM_fn_vCineinfoCopyClone(/* function pointer */ int _p_stObjectDest, /* function pointer */ int _p_stObjectSrc)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 585–605 */
/* addr: 0x0026dd70  size: 140 bytes */
void CAM_fn_vCineinfoDesinit(/* function pointer */ int _p_stObject)
{
    /* line map: */
    /*   line 585 @ +0x000 */
    /*   line 588 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 533–573 */
/* addr: 0x0026de00  size: 340 bytes */
void CAM_fn_vCineinfoInit(/* function pointer */ int _p_stObject, /* aggregate */ int eObjectInit, /* function pointer */ int hSupObjectCamera, /* function pointer */ int hTarget, tdstCineinfo_* hCineinfo)
{
    /* line map: */
    /*   line 533 @ +0x000 */
    /*   line 536 @ +0x000 */
    /*   line 539 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 554 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 571 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 505–518 */
/* addr: 0x0026df60  size: 212 bytes */
void CAM_fn_vUpdateTargetPosition(tdstCineinfo_* _hCineinfo)
{
    /* aggregate */ int Axis;
    /* line map: */
    /*   line 505 @ +0x000 */
    /*   line 508 @ +0x000 */
    /*   line 511 @ +0x000 */
    /*   line 513 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 518 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 457–493 */
/* addr: 0x0026e040  size: 304 bytes */
void CAM_fn_vInitCompleteCineinfo(tdstCineinfo_* _hCineinfo)
{
    /* line map: */
    /*   line 457 @ +0x000 */
    /*   line 482 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 474 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 410–448 */
/* addr: 0x0026e170  size: 380 bytes */
void CAM_fn_vCineinfoFree(/* function pointer */ int _p_stObject)
{
    /* line map: */
    /*   line 410 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 424 @ +0x000 */
    /*   line 431 @ +0x000 */
    /*   line 438 @ +0x000 */
    /*   line 448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\cineinfo.c lines 318–385 */
/* addr: 0x0026e2f0  size: 780 bytes */
void CAM_fn_vCineinfoAlloc(/* function pointer */ int _p_stObject)
{
    /* line map: */
    /*   line 318 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 328 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 332 @ +0x000 */
    /*   line 341 @ +0x000 */
    /*   line 343 @ +0x000 */
    /*   line 344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0026e600  size: 8 bytes */
unsigned int CAM_fn_ulCineinfoSizeOf(void)
{
    /* TODO: decompile from asm/... */
}
