/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstState_ tdstState_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct DNM_stReport DNM_stReport;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct MTH_stMove MTH_stMove;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct stMACDPID stMACDPID;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct anon_0 anon_0;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct anon_1 anon_1;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct stMorphData stMorphData;
typedef struct anon_2 anon_2;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef union anon_3 anon_3;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct _RollOffParam _RollOffParam;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct CAM_tdstComputedPosition_ CAM_tdstComputedPosition_;

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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_2 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct anon_1 {
    /* aggregate */ int uParam; /* +0x0 */
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

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

union anon_3 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
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

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct CAM_tdstComputedPosition_ {
    /* aggregate */ int stTarget; /* +0x0 */
    /* aggregate */ int stMovePos; /* +0xc */
    /* aggregate */ int stRefAxisZ; /* +0x18 */
    float xLinearSpeed; /* +0x24 */
    float xAngularSpeed; /* +0x28 */
    float xTargetSpeed; /* +0x2c */
};

/* aggregate */ int g_stEngineStructure;
char cCanTestStatic;
char cNoDynChangeTheta;
char cRefAxisIsAlreadyComputed;
/* aggregate */ int CAM_g_stCopyCameraConstants;
/* aggregate */ int CAM_g_stCameraConstants;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 155–212 */
/* addr: 0x00206f90  size: 516 bytes */
void CAM_fn_p_stGetVectorParameter(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_stVisValue, /* function pointer */ int p_stWorkValue, /* function pointer */ int p_stCurrentValue, /* function pointer */ int p_stInitialValue, tdstCineinfo_* hCineInfo, /* function pointer */ int hCamera)
{
    /* aggregate */ int eFuncId;
    int lCurrentValue;
    /* line map: */
    /*   line 157 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 168 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 182 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 2156–2230 */
/* addr: 0x002071a0  size: 1024 bytes */
void CAM_fn_p_stUpdatePosition2(/* function pointer */ int _hSuperObjPerso, /* function pointer */ int p_stTree, tdstDynam_* hDynam, tdstCineinfo_* hCineinfo)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int stSight;
    /* aggregate */ int stHorizontal;
    /* aggregate */ int stVertical;
    /* line map: */
    /*   line 2160 @ +0x000 */
    /*   line 2156 @ +0x000 */
    /*   line 2158 @ +0x000 */
    /*   line 2160 @ +0x000 */
    /*   line 2173 @ +0x000 */
    /*   line 2173 @ +0x000 */
    /*   line 2181 @ +0x000 */
    /*   line 2180 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 2127–2139 */
/* addr: 0x002075a0  size: 116 bytes */
void CAM_fn_p_stCameraSetTransparencyFlag(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstCineinfo_* hCineinfo, /* function pointer */ int hCamera)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 2127 @ +0x000 */
    /*   line 2136 @ +0x000 */
    /*   line 2136 @ +0x000 */
    /*   line 2136 @ +0x000 */
    /*   line 2139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 2102–2106 */
/* addr: 0x00207620  size: 40 bytes */
void CAM_fn_p_stCameraMode(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 2102 @ +0x000 */
    /*   line 2106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1849–2081 */
/* addr: 0x00207650  size: 1600 bytes */
void CAM_fn_p_stForceMovingOnRail(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstMSWay_* h_MSWay, WP_tdstWayPoint_* hOldPreviousWayPoint, WP_tdstWayPoint_* hPreviousWayPoint, WP_tdstWayPoint_* hNextWayPoint, WP_tdstWayPoint_* hWayPoint, tdstCineinfo_* hCineinfo, /* function pointer */ int hCamera)
{
    unsigned char bWantedPositionIsAlreadyComputed;
    char cCas;
    float xDist3;
    float xDist2;
    float xDist1;
    float xDistWanted;
    float xDistMax;
    float xDistMin;
    /* aggregate */ int stWantedPosition;
    /* aggregate */ int stNextWpPosition;
    /* aggregate */ int stOldPreviousWpPosition;
    /* aggregate */ int stPreviousWpPosition;
    /* aggregate */ int stWpPosition;
    /* aggregate */ int stTargetPosition;
    int lCurrentIndex;
    /* aggregate */ int stStruct;
    int lSens;
    /* line map: */
    /*   line 1849 @ +0x000 */
    /*   line 1859 @ +0x000 */
    /*   line 1859 @ +0x000 */
    /*   line 1871 @ +0x000 */
    /*   line 1873 @ +0x000 */
    /*   line 1877 @ +0x000 */
    /*   line 1883 @ +0x000 */
    /*   line 1886 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1794–1809 */
/* addr: 0x00207c90  size: 124 bytes */
void CAM_fn_p_stForceNormalState(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstCineinfo_* hCineinfo, /* function pointer */ int hCamera)
{
    /* line map: */
    /*   line 1794 @ +0x000 */
    /*   line 1802 @ +0x000 */
    /*   line 1805 @ +0x000 */
    /*   line 1805 @ +0x000 */
    /*   line 1809 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1713–1775 */
/* addr: 0x00207d10  size: 380 bytes */
void CAM_fn_p_stForceBestPos(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstCineinfo_* hCineinfo, /* function pointer */ int hCamera)
{
    /* aggregate */ int stStruct;
    /* line map: */
    /*   line 1713 @ +0x000 */
    /*   line 1721 @ +0x000 */
    /*   line 1724 @ +0x000 */
    /*   line 1724 @ +0x000 */
    /*   line 1740 @ +0x000 */
    /*   line 1743 @ +0x000 */
    /*   line 1745 @ +0x000 */
    /*   line 1743 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1677–1688 */
/* addr: 0x00207e90  size: 88 bytes */
void CAM_fn_p_stReset(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera)
{
    /* line map: */
    /*   line 1677 @ +0x000 */
    /*   line 1688 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1572–1647 */
/* addr: 0x00207ef0  size: 492 bytes */
void CAM_fn_p_stSetForce(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stValue, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    /* aggregate */ int stTempVector;
    /* aggregate */ int eProcedureId;
    unsigned short uwFlag;
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 1572 @ +0x000 */
    /*   line 1573 @ +0x000 */
    /*   line 1583 @ +0x000 */
    /*   line 1583 @ +0x000 */
    /*   line 1589 @ +0x000 */
    /*   line 1591 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1538–1553 */
/* addr: 0x002080e0  size: 120 bytes */
void CAM_fn_p_stConstants(/* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 1539 @ +0x000 */
    /*   line 1538 @ +0x000 */
    /*   line 1542 @ +0x000 */
    /*   line 1546 @ +0x000 */
    /*   line 1553 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1454–1525 */
/* addr: 0x00208160  size: 476 bytes */
void CAM_fn_p_stChangeConstants(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    tdstGetSetParam_ stValue;
    float xVal;
    int lMode;
    /* line map: */
    /*   line 1454 @ +0x000 */
    /*   line 1460 @ +0x000 */
    /*   line 1460 @ +0x000 */
    /*   line 1467 @ +0x000 */
    /*   line 1467 @ +0x000 */
    /*   line 1473 @ +0x000 */
    /*   line 1473 @ +0x000 */
    /*   line 1475 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1409–1428 */
/* addr: 0x00208340  size: 164 bytes */
void CAM_fn_p_stShowInfo(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 1409 @ +0x000 */
    /*   line 1418 @ +0x000 */
    /*   line 1418 @ +0x000 */
    /*   line 1418 @ +0x000 */
    /*   line 1424 @ +0x000 */
    /*   line 1428 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1229–1374 */
/* addr: 0x002083f0  size: 680 bytes */
void CAM_fn_p_stSetDNMFlags(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    /* aggregate */ int eProcedureId;
    unsigned short uwFlag;
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 1229 @ +0x000 */
    /*   line 1230 @ +0x000 */
    /*   line 1238 @ +0x000 */
    /*   line 1238 @ +0x000 */
    /*   line 1247 @ +0x000 */
    /*   line 1245 @ +0x000 */
    /*   line 1250 @ +0x000 */
    /*   line 1256 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 1074–1212 */
/* addr: 0x002086a0  size: 632 bytes */
void CAM_fn_p_stSetIAFlags(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    /* aggregate */ int eProcedureId;
    unsigned short uwFlag;
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 1074 @ +0x000 */
    /*   line 1075 @ +0x000 */
    /*   line 1084 @ +0x000 */
    /*   line 1084 @ +0x000 */
    /*   line 1092 @ +0x000 */
    /*   line 1090 @ +0x000 */
    /*   line 1095 @ +0x000 */
    /*   line 1101 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 973–1054 */
/* addr: 0x00208920  size: 396 bytes */
void CAM_fn_p_stAssociateViewport(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hOldCamera, /* function pointer */ int hNewCamera, tdstCineinfo_* hOldCineInfo, tdstCineinfo_* hNewCineInfo)
{
    tdstGetSetParam_ stValue;
    int lDeactived;
    int lViewport;
    /* line map: */
    /*   line 983 @ +0x000 */
    /*   line 974 @ +0x000 */
    /*   line 973 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 983 @ +0x000 */
    /*   line 991 @ +0x000 */
    /*   line 991 @ +0x000 */
    /*   line 995 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 931–952 */
/* addr: 0x00208ab0  size: 164 bytes */
void CAM_fn_p_stActivate(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    int lTypeOfChange;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 931 @ +0x000 */
    /*   line 939 @ +0x000 */
    /*   line 939 @ +0x000 */
    /*   line 940 @ +0x000 */
    /*   line 949 @ +0x000 */
    /*   line 949 @ +0x000 */
    /*   line 952 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 855–903 */
/* addr: 0x00208b60  size: 288 bytes */
void CAM_fn_p_stChangeChannel(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCineInfoCurrent, tdstCineinfo_* hCineInfo, /* function pointer */ int hCamera)
{
    tdstGetSetParam_ stValue;
    char cChannelNumber;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 855 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 867 @ +0x000 */
    /*   line 872 @ +0x000 */
    /*   line 876 @ +0x000 */
    /*   line 882 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 766–826 */
/* addr: 0x00208c80  size: 384 bytes */
void CAM_fn_p_stChangeSecondTgtPerso(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjectTargeted, /* function pointer */ int hCamera, /* function pointer */ int hCineInfoCurrent, tdstCineinfo_* hCineInfo)
{
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    float xRatio;
    /* line map: */
    /*   line 766 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 774 @ +0x000 */
    /*   line 778 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 787 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 682–735 */
/* addr: 0x00208e00  size: 312 bytes */
void CAM_fn_p_stChangeTgtPerso(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjectTargeted, /* function pointer */ int hCamera, /* function pointer */ int hCineInfoCurrent, tdstCineinfo_* hCineInfo)
{
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 682 @ +0x000 */
    /*   line 690 @ +0x000 */
    /*   line 690 @ +0x000 */
    /*   line 690 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 696 @ +0x000 */
    /*   line 699 @ +0x000 */
    /*   line 703 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 460–652 */
/* addr: 0x00208f40  size: 1016 bytes */
void CAM_fn_p_stChangeRealParameter(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    /* aggregate */ int eProcedureId;
    float* p_xWorkValue;
    float* p_xVisibilityValue;
    float* p_xCurrentValue;
    float* p_xInitialValue;
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    float xValue;
    /* line map: */
    /*   line 463 @ +0x000 */
    /*   line 462 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 464 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 483 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 379–440 */
/* addr: 0x00209340  size: 288 bytes */
void CAM_fn_p_stChangeVectorParameter(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stWorkValue, /* function pointer */ int p_stVisibilityValue, /* function pointer */ int p_stCurrentValue, /* function pointer */ int p_stInitialValue, /* function pointer */ int p_stValue, /* function pointer */ int hCamera, tdstCineinfo_* hCineInfo)
{
    tdstGetSetParam_ stValue;
    int lTypeOfChange;
    int lChangingMode;
    /* line map: */
    /*   line 379 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 398 @ +0x000 */
    /*   line 400 @ +0x000 */
    /*   line 401 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 406 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 320–353 */
/* addr: 0x00209460  size: 456 bytes */
void CAM_fn_vChangeAVectorParameter(tdstCineinfo_* _hCineInfo, /* function pointer */ int _p_stInitialValue, /* function pointer */ int _p_stCurrentValue, /* function pointer */ int _p_stVisibilityValue, /* function pointer */ int _p_stWorkValue, int _lTypeOfChange, int _lChangingMode, /* function pointer */ int _p_stValue)
{
    /* aggregate */ int stActualValue;
    /* line map: */
    /*   line 322 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 320 @ +0x000 */
    /*   line 324 @ +0x000 */
    /*   line 328 @ +0x000 */
    /*   line 332 @ +0x000 */
    /*   line 336 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 243–282 */
/* addr: 0x00209630  size: 200 bytes */
void CAM_fn_vActivateCamera(tdstCineinfo_* _hCineInfo, int _lTypeOfChange, unsigned char _bActive, /* function pointer */ int hCineInfoTest, /* function pointer */ int param4)
{
    /* line map: */
    /*   line 243 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 246 @ +0x000 */
    /*   line 252 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 272 @ +0x000 */
    /*   line 276 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Proc.c lines 192–224 */
/* addr: 0x00209700  size: 244 bytes */
void CAM_fn_vChangeARealParameter(tdstCineinfo_* _hCineInfo, float* _p_xInitialValue, float* _p_xCurrentValue, float* _p_xVisibilityValue, float* _p_xWorkValue, int _lTypeOfChange, int _lChangingMode, float _xValue)
{
    float xActualValue;
    /* line map: */
    /*   line 195 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 197 @ +0x000 */
    /*   line 201 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 210 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 221 @ +0x000 */
    /* TODO: decompile from asm/... */
}
