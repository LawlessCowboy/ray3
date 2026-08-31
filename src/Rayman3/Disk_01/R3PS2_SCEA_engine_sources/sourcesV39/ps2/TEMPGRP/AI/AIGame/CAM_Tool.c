/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstState_ tdstState_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct DNM_stReport DNM_stReport;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct MTH_stMove MTH_stMove;
typedef union anon_0 anon_0;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstComport_ tdstComport_;
typedef struct stMorphData stMorphData;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct CAM_tdstComputedPosition_ CAM_tdstComputedPosition_;
typedef struct anon_1 anon_1;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct anon_2 anon_2;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstProhibit_ tdstProhibit_;

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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_1 m_stData6; /* +0x34 */
    anon_2 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct CAM_tdstComputedPosition_ {
    /* aggregate */ int stTarget; /* +0x0 */
    /* aggregate */ int stMovePos; /* +0xc */
    /* aggregate */ int stRefAxisZ; /* +0x18 */
    float xLinearSpeed; /* +0x24 */
    float xAngularSpeed; /* +0x28 */
    float xTargetSpeed; /* +0x2c */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
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

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
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

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

char cCanTestStatic;
char cNoDynChangeTheta;
char cRefAxisIsAlreadyComputed;
/* aggregate */ int CAM_g_stCameraConstants;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 88–158 */
/* addr: 0x00209800  size: 488 bytes */
void CAM_fn_p_stUpdatePosition(/* function pointer */ int _hSuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, tdstCineinfo_* hCineinfo)
{
    /* aggregate */ int stStruct;
    /* line map: */
    /*   line 88 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 93 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 125 @ +0x000 */
    /*   line 130 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 984–1010 */
/* addr: 0x002099f0  size: 172 bytes */
void CAM_fn_vForceBestPosition(/* function pointer */ int _hCamera)
{
    /* aggregate */ int stStruct;
    /* line map: */
    /*   line 984 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 989 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 989 @ +0x000 */
    /*   line 995 @ +0x000 */
    /*   line 997 @ +0x000 */
    /*   line 1003 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 854–966 */
/* addr: 0x00209aa0  size: 812 bytes */
void CAM_fn_vSendParametersToParsing(/* function pointer */ int _p_stStruct, tdstDynam_* h_Dynam, DNM_stDynamics* p_stDynamics, stMACDPID* p_stMACDPID)
{
    /* line map: */
    /*   line 854 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 875 @ +0x000 */
    /*   line 864 @ +0x000 */
    /*   line 870 @ +0x000 */
    /*   line 874 @ +0x000 */
    /*   line 876 @ +0x000 */
    /*   line 882 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 768–825 */
/* addr: 0x00209dd0  size: 704 bytes */
void CAM_fn_vInitCameraStructure(/* function pointer */ int _hSuperObjPerso, /* function pointer */ int _p_stStruct, DNM_stDynamics* p_stDynamics)
{
    /* aggregate */ int stTempVector;
    /* line map: */
    /*   line 768 @ +0x000 */
    /*   line 768 @ +0x000 */
    /*   line 776 @ +0x000 */
    /*   line 779 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 784 @ +0x000 */
    /*   line 800 @ +0x000 */
    /*   line 810 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 659–745 */
/* addr: 0x0020a090  size: 1096 bytes */
void Cam_fn_vComputeMovingOnRail(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stWantedPosition, /* function pointer */ int _p_stWpPosition, /* function pointer */ int _p_stPreviousWpPosition, float _xDistWanted)
{
    float xNorm;
    char cCameraIsOnWp;
    float xSqrNorm;
    float xNorm;
    float xFactor;
    /* aggregate */ int stWpDestination;
    /* aggregate */ int stRailAxis;
    /* line map: */
    /*   line 659 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /*   line 664 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 599–628 */
/* addr: 0x0020a4e0  size: 312 bytes */
float Cam_fn_xComputeProjectionRail(/* function pointer */ int _p_stTargetedPersoPos, /* function pointer */ int _p_stWpPosition, /* function pointer */ int _p_stDestWpPosition)
{
    float xFactor;
    /* line map: */
    /*   line 599 @ +0x000 */
    /*   line 599 @ +0x000 */
    /*   line 599 @ +0x000 */
    /*   line 599 @ +0x000 */
    /*   line 604 @ +0x000 */
    /*   line 607 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 614 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 547–573 */
/* addr: 0x0020a620  size: 256 bytes */
void CAM_fn_vGetPersoSightAxis(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stAxis, /* function pointer */ int _p_stAxisZ, /* function pointer */ int hPerso)
{
    unsigned char ucChannel;
    /* aggregate */ int stTmpVector2;
    /* aggregate */ int stTmpVector1;
    /* aggregate */ int stSecondComplementaryAxis;
    /* aggregate */ int stFirstComplementaryAxis;
    /* line map: */
    /*   line 549 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 557 @ +0x000 */
    /*   line 569 @ +0x000 */
    /*   line 571 @ +0x000 */
    /*   line 573 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 493–498 */
/* addr: 0x0020a720  size: 88 bytes */
float CAM_fn_xSetAngleInInterval02Pi(float _xAngle)
{
    /* line map: */
    /*   line 493 @ +0x000 */
    /*   line 498 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 478–480 */
/* addr: 0x0020a780  size: 96 bytes */
float CAM_fn_xSetAngleInIntervalPiPi(float _xAngle)
{
    /* line map: */
    /*   line 478 @ +0x000 */
    /*   line 480 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 464–467 */
/* addr: 0x0020a7e0  size: 400 bytes */
void CAM_fn_vComputeAnglesBetweenTwoVectors(/* function pointer */ int _p_stSourceVector, /* function pointer */ int _p_stTargetVector, float* _p_xHorizontalAngle, float* _p_xVerticalAngle, /* function pointer */ int _p_stRefAxisZ)
{
    /* line map: */
    /*   line 464 @ +0x000 */
    /*   line 467 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 410–416 */
/* addr: 0x0020a970  size: 80 bytes */
unsigned char CAM_fn_bEqualVectorWithEpsilon(/* function pointer */ int _p_stVector1, /* function pointer */ int _p_stVector2, float _xEpsilon)
{
    /* line map: */
    /*   line 410 @ +0x000 */
    /*   line 416 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 367–389 */
/* addr: 0x0020a9c0  size: 668 bytes */
float CAM_fn_xComputeRotation(/* function pointer */ int _p_stDestVector, /* function pointer */ int _p_stSrcVector, /* function pointer */ int _p_stAxisVector)
{
    float xNorm;
    /* aggregate */ int VectTmp;
    float xDenom;
    float xCos;
    /* line map: */
    /*   line 367 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 372 @ +0x000 */
    /*   line 376 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 384 @ +0x000 */
    /*   line 386 @ +0x000 */
    /*   line 389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 341–345 */
/* addr: 0x0020ac60  size: 136 bytes */
void CAM_fn_vComputeProjection(/* function pointer */ int _p_sDestVector, /* function pointer */ int _p_sSrcVector, /* function pointer */ int _p_sNormVector)
{
    float xScalar;
    /* line map: */
    /*   line 341 @ +0x000 */
    /*   line 345 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 307–319 */
/* addr: 0x0020acf0  size: 120 bytes */
void CAM_fn_hGetFather(/* function pointer */ int _h_SuperObjPerso, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam)
{
    /* line map: */
    /*   line 307 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 313 @ +0x000 */
    /*   line 316 @ +0x000 */
    /*   line 319 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 277–293 */
/* addr: 0x0020ad70  size: 148 bytes */
unsigned char CAM_fn_bPersoOnFace(/* function pointer */ int _h_SuperObjPerso, /* function pointer */ int _p_stNormal, DNM_stReport* param2, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam)
{
    /* line map: */
    /*   line 277 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 281 @ +0x000 */
    /*   line 283 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 289 @ +0x000 */
    /*   line 292 @ +0x000 */
    /*   line 293 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 236–258 */
/* addr: 0x0020ae10  size: 160 bytes */
unsigned char CAM_fn_bPersoIsTurning(/* function pointer */ int _h_SuperObjPerso, float* _p_xAngularSpeed, DNM_stReport* p_stReport, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam)
{
    float xAngle;
    /* line map: */
    /*   line 236 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 247 @ +0x000 */
    /*   line 251 @ +0x000 */
    /*   line 254 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 206–217 */
/* addr: 0x0020aeb0  size: 176 bytes */
unsigned char CAM_fn_bPersoIsMoving(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stMove)
{
    /* aggregate */ int stMove;
    /* line map: */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 209 @ +0x000 */
    /*   line 213 @ +0x000 */
    /*   line 217 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 154–191 */
/* addr: 0x0020af60  size: 268 bytes */
void CAM_fn_vForceCameraTgt(/* function pointer */ int _hSuperObjCamera, /* function pointer */ int _p_stPosition, /* function pointer */ int _p_stRefAxisZ, DNM_stReport* p_stReport, /* function pointer */ int p_stParsingDatas, tdstDynam_* h_Dynam)
{
    /* aggregate */ int stCameraPosition;
    /* aggregate */ int stZ;
    /* aggregate */ int stY;
    /* aggregate */ int stX;
    /* line map: */
    /*   line 154 @ +0x000 */
    /*   line 156 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 161 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 182 @ +0x000 */
    /*   line 191 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 109–129 */
/* addr: 0x0020b070  size: 200 bytes */
void CAM_fn_vForceCameraPos(/* function pointer */ int _hSuperObjCamera, /* function pointer */ int _p_stPosition, DNM_stReport* p_stReport)
{
    /* line map: */
    /*   line 109 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Tool.c lines 75–98 */
/* addr: 0x0020b140  size: 224 bytes */
void CAM_fn_vSetResetInternalFlag(tdstCineinfo_* _hCineInfo, unsigned short* _p_uwCurrentValue, unsigned short* _p_uwVisibilityValue, unsigned short* _p_uwWorkValue, int _lTypeOfChange, int _lChangingMode, unsigned short _uwFlag)
{
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 85 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 90 @ +0x000 */
    /*   line 94 @ +0x000 */
    /* TODO: decompile from asm/... */
}
