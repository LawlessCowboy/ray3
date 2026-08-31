/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef union anon_0 anon_0;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstComport_ tdstComport_;
typedef struct stMorphData stMorphData;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct DNM_stReport DNM_stReport;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstState_ tdstState_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct anon_1 anon_1;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct anon_2 anon_2;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct anon_3 anon_3;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct _stTimerCount _stTimerCount;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct _RollOffParam _RollOffParam;
typedef struct MTH_stMove MTH_stMove;
typedef struct SECT_tdstSector_ SECT_tdstSector_;

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
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

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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
    anon_3 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct anon_1 {
    /* aggregate */ int uParam; /* +0x0 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct anon_3 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
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

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

/* aggregate */ int g_stEngineStructure;
int GLI_g_bWideScreenMode;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 123–150 */
/* addr: 0x0020db00  size: 296 bytes */
char CAM_fn_cSendSegmentInDynamicWorld(/* function pointer */ int _p_stSource, /* function pointer */ int _p_stDest, /* function pointer */ int _hSector, /* function pointer */ int _hCamera, /* function pointer */ int hStdGame, tdstCollSet_* hCollset, /* function pointer */ int hCharacterList)
{
    /* aggregate */ int stTempVector;
    unsigned char ucCameraPriority;
    /* line map: */
    /*   line 123 @ +0x000 */
    /*   line 123 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 146 @ +0x000 */
    /*   line 150 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1815–1815 */
/* addr: 0x0020dc30  size: 16 bytes */
void fn_p_stDummyCondition(/* function pointer */ int p_stTree, int* p_lValue)
{
    /* line map: */
    /*   line 1815 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1782–1803 */
/* addr: 0x0020f160  size: 136 bytes */
void fn_p_stCineIsPlaying(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, CINE_tdstCine_* hCine)
{
    /* aggregate */ int eCondId;
    char* p_szString;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1784 @ +0x000 */
    /*   line 1782 @ +0x000 */
    /*   line 1788 @ +0x000 */
    /*   line 1791 @ +0x000 */
    /*   line 1794 @ +0x000 */
    /*   line 1797 @ +0x000 */
    /*   line 1803 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1739–1762 */
/* addr: 0x0020f1f0  size: 124 bytes */
void fn_p_stComparisonOfObjectsCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* line map: */
    /*   line 1739 @ +0x000 */
    /*   line 1739 @ +0x000 */
    /*   line 1739 @ +0x000 */
    /*   line 1739 @ +0x000 */
    /*   line 1762 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1717–1733 */
/* addr: 0x0020f270  size: 124 bytes */
void fn_p_stSAV2Condition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    char* p_szElementName;
    tdstGetSetParam_ stParam;
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1717 @ +0x000 */
    /*   line 1717 @ +0x000 */
    /*   line 1720 @ +0x000 */
    /*   line 1730 @ +0x000 */
    /*   line 1733 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1675–1703 */
/* addr: 0x0020f2f0  size: 56 bytes */
void fn_p_stScreenCondition(/* function pointer */ int p_stTree, int* p_lValue)
{
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1675 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1628–1664 */
/* addr: 0x0020f330  size: 132 bytes */
void fn_p_stInputCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam;
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1632 @ +0x000 */
    /*   line 1629 @ +0x000 */
    /*   line 1628 @ +0x000 */
    /*   line 1635 @ +0x000 */
    /*   line 1641 @ +0x000 */
    /*   line 1650 @ +0x000 */
    /*   line 1664 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1600–1623 */
/* addr: 0x0020f3c0  size: 168 bytes */
void fn_p_stAlwaysActiveCond(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso)
{
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1600 @ +0x000 */
    /*   line 1606 @ +0x000 */
    /*   line 1612 @ +0x000 */
    /*   line 1615 @ +0x000 */
    /*   line 1623 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1579–1594 */
/* addr: 0x0020f470  size: 92 bytes */
void fn_p_stRLITransitionCondition(/* function pointer */ int p_stTree, int* p_lValue)
{
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1582 @ +0x000 */
    /*   line 1580 @ +0x000 */
    /*   line 1579 @ +0x000 */
    /*   line 1585 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1553–1572 */
/* addr: 0x0020f4d0  size: 172 bytes */
void fn_p_stAlw_IsMine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hAlwaysObject, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1553 @ +0x000 */
    /*   line 1567 @ +0x000 */
    /*   line 1572 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1478–1537 */
/* addr: 0x0020f580  size: 532 bytes */
void fn_p_st_UserEvent_IsSet(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* _p_lValue)
{
    /* aggregate */ int stSighting;
    /* aggregate */ int stGlobalMatrix;
    /* aggregate */ int stPosition;
    /* aggregate */ int eCondId;
    unsigned char ucVarId2;
    unsigned char ucVarId;
    unsigned char ucEventIndex;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1482 @ +0x000 */
    /*   line 1478 @ +0x000 */
    /*   line 1482 @ +0x000 */
    /*   line 1494 @ +0x000 */
    /*   line 1498 @ +0x000 */
    /*   line 1501 @ +0x000 */
    /*   line 1504 @ +0x000 */
    /*   line 1512 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1460–1468 */
/* addr: 0x0020f7a0  size: 72 bytes */
void fn_p_st_HandledCondition(/* function pointer */ int p_stTree, int* p_lValue)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1460 @ +0x000 */
    /*   line 1468 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1444–1449 */
/* addr: 0x0020f7f0  size: 156 bytes */
void fn_p_st_ActivationCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 1444 @ +0x000 */
    /*   line 1448 @ +0x000 */
    /*   line 1449 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1398–1428 */
/* addr: 0x0020f890  size: 244 bytes */
void fn_p_stLightCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso, tdstMSLight_* h_MSLight)
{
    int lValue;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 1398 @ +0x000 */
    /*   line 1404 @ +0x000 */
    /*   line 1409 @ +0x000 */
    /*   line 1414 @ +0x000 */
    /*   line 1417 @ +0x000 */
    /*   line 1420 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1349–1386 */
/* addr: 0x0020f990  size: 220 bytes */
void fn_p_stSectorCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int pPerso2, /* function pointer */ int pPerso1, /* function pointer */ int hNewSuperObjPerso)
{
    /* aggregate */ int stVertex2;
    /* aggregate */ int stVertex1;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1349 @ +0x000 */
    /*   line 1357 @ +0x000 */
    /*   line 1365 @ +0x000 */
    /*   line 1370 @ +0x000 */
    /*   line 1374 @ +0x000 */
    /*   line 1386 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1311–1340 */
/* addr: 0x0020fa70  size: 304 bytes */
unsigned char fn_bPerso1Point1IntersectPerso2Point2(/* function pointer */ int hPerso1, /* function pointer */ int p_stVertex1, /* function pointer */ int hPerso2, /* function pointer */ int p_stVertex2, /* function pointer */ int hList, /* function pointer */ int hSector2, /* function pointer */ int hSector1)
{
    int i;
    /* aggregate */ int stTempVector;
    /* line map: */
    /*   line 1311 @ +0x000 */
    /*   line 1314 @ +0x000 */
    /*   line 1317 @ +0x000 */
    /*   line 1317 @ +0x000 */
    /*   line 1317 @ +0x000 */
    /*   line 1320 @ +0x000 */
    /*   line 1324 @ +0x000 */
    /*   line 1329 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1145–1277 */
/* addr: 0x0020fba0  size: 760 bytes */
void fn_p_stMiscCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hTempPerso, DNM_stReport* p_stDynamReport, tdstCollSet_* hCollSet)
{
    unsigned short uwNbFrame;
    unsigned char ucVarId;
    unsigned short xTestMask;
    unsigned short xTestedMask;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1145 @ +0x000 */
    /*   line 1151 @ +0x000 */
    /*   line 1151 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /*   line 1159 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /*   line 1172 @ +0x000 */
    /*   line 1175 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1057–1136 */
/* addr: 0x0020fea0  size: 348 bytes */
void fn_p_stValidityCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hObject, /* function pointer */ int hStdGame)
{
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1057 @ +0x000 */
    /*   line 1069 @ +0x000 */
    /*   line 1073 @ +0x000 */
    /*   line 1078 @ +0x000 */
    /*   line 1085 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /*   line 1105 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 1029–1045 */
/* addr: 0x00210000  size: 128 bytes */
void fn_p_stTimeCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    unsigned int ulLimitDeltaTime;
    unsigned int ulSavedTime;
    unsigned int ulCurrentTime;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1029 @ +0x000 */
    /*   line 1029 @ +0x000 */
    /*   line 1034 @ +0x000 */
    /*   line 1033 @ +0x000 */
    /*   line 1045 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 981–1019 */
/* addr: 0x00210080  size: 328 bytes */
void fn_p_stListCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* line map: */
    /*   line 983 @ +0x000 */
    /*   line 981 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 989 @ +0x000 */
    /*   line 995 @ +0x000 */
    /*   line 1000 @ +0x000 */
    /*   line 1002 @ +0x000 */
    /*   line 1008 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 882–972 */
/* addr: 0x002101d0  size: 948 bytes */
void fn_p_stReportOnZDMSurfaceCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso, DNM_stReport* p_stDynamReport)
{
    /* aggregate */ int eCondId;
    unsigned short xTestMask;
    unsigned int ulSurfState;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 882 @ +0x000 */
    /*   line 891 @ +0x000 */
    /*   line 894 @ +0x000 */
    /*   line 897 @ +0x000 */
    /*   line 900 @ +0x000 */
    /*   line 905 @ +0x000 */
    /*   line 908 @ +0x000 */
    /*   line 914 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 843–868 */
/* addr: 0x00210590  size: 212 bytes */
void fn_p_stReportThisPerso(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso, /* function pointer */ int hSupObj, /* function pointer */ int hPersoSupObj, DNM_stReport* p_stDynamReport)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 843 @ +0x000 */
    /*   line 847 @ +0x000 */
    /*   line 851 @ +0x000 */
    /*   line 855 @ +0x000 */
    /*   line 860 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 868 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 755–826 */
/* addr: 0x00210670  size: 316 bytes */
void fn_p_stReportOnSurfaceCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hNewSuperObjPerso, DNM_stReport* p_stDynamReport)
{
    unsigned int ulSurfState;
    /* aggregate */ int eCondId;
    /* line map: */
    /*   line 755 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 766 @ +0x000 */
    /*   line 771 @ +0x000 */
    /*   line 775 @ +0x000 */
    /*   line 775 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 780 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 545–746 */
/* addr: 0x002107b0  size: 1104 bytes */
void fn_p_stZDECondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hCharacter2, /* function pointer */ int hCharacter1)
{
    unsigned short xMask;
    unsigned char ucChannelNumber;
    unsigned char ucModuleOrCharacter;
    unsigned short xMask2;
    unsigned short xMask1;
    unsigned short xMask;
    unsigned char ucModuleOrCharacter;
    unsigned char ucChannelNumber;
    unsigned char ucModuleOrCharacter2;
    unsigned char ucModuleOrCharacter1;
    unsigned char ucChannelNumber2;
    unsigned char ucChannelNumber1;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 545 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 564 @ +0x000 */
    /*   line 567 @ +0x000 */
    /*   line 567 @ +0x000 */
    /*   line 570 @ +0x000 */
    /*   line 573 @ +0x000 */
    /*   line 573 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 453–522 */
/* addr: 0x00210c00  size: 400 bytes */
void fn_p_stZDDCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int hCharacter2, /* function pointer */ int hCharacter1)
{
    unsigned char ucModuleOrCharacter;
    unsigned char ucChannelNumber;
    unsigned char ucChannelNumber;
    unsigned char ucModuleOrCharacter;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 453 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 457 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 471 @ +0x000 */
    /*   line 474 @ +0x000 */
    /*   line 487 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 348–441 */
/* addr: 0x00210d90  size: 652 bytes */
void fn_p_stButtonCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue)
{
    unsigned char ucButtonNumber;
    unsigned char ucPadNumber;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 352 @ +0x000 */
    /*   line 348 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 360 @ +0x000 */
    /*   line 368 @ +0x000 */
    /*   line 375 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 386 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Cond.c lines 251–324 */
/* addr: 0x00211020  size: 392 bytes */
void fn_p_stBooleanCondition(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, int* p_lValue, /* function pointer */ int p_stTreeInit, /* function pointer */ int p_stTreeInit)
{
    int l1;
    /* aggregate */ int eCondId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 251 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 254 @ +0x000 */
    /*   line 260 @ +0x000 */
    /*   line 265 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 276 @ +0x000 */
    /*   line 281 @ +0x000 */
    /* TODO: decompile from asm/... */
}
