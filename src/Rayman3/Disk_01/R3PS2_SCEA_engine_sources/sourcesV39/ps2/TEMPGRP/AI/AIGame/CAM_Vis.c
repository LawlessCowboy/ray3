/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _RollOffParam _RollOffParam;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstState_ tdstState_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstComport_ tdstComport_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct stMACDPID stMACDPID;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef union anon_0 anon_0;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct stMorphData stMorphData;
typedef struct anon_1 anon_1;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct CAM_tdstComputedPosition_ CAM_tdstComputedPosition_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct DNM_stReport DNM_stReport;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct _stTimerCount _stTimerCount;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct MTH_stMove MTH_stMove;
typedef struct SECT_tdstSector_ SECT_tdstSector_;

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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
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

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_3 {
    /* aggregate */ int stDir; /* +0x0 */
    float xPound; /* +0xc */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct CAM_tdstComputedPosition_ {
    /* aggregate */ int stTarget; /* +0x0 */
    /* aggregate */ int stMovePos; /* +0xc */
    /* aggregate */ int stRefAxisZ; /* +0x18 */
    float xLinearSpeed; /* +0x24 */
    float xAngularSpeed; /* +0x28 */
    float xTargetSpeed; /* +0x2c */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
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

unsigned short guw_NbVectorArrayCpt;
char cCanTestStatic;
/* aggregate */ int gst_Ideal;
anon_3 gast_VectorArrayCpt[256];
char cJustBetterPos;
/* aggregate */ int CAM_g_stCameraConstants;
/* aggregate */ int g_stEngineStructure;
int (*CAM_fni_ComparePositions)(void*, void*);
char (*CAM_fn_cCameraCantSee)(/* function pointer */ int, /* function pointer */ int, /* function pointer */ int);
char (*CAM_fn_cCameraCantGoFailure)(/* function pointer */ int, /* function pointer */ int, /* function pointer */ int);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 49–57 */
/* addr: 0x0020b220  size: 96 bytes */
void CAM_memcpy(void* dest, void* src, int size)
{
    int lsize;
    int* pdest;
    int* psrc;
    /* line map: */
    /*   line 49 @ +0x000 */
    /*   line 51 @ +0x000 */
    /*   line 51 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 57 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1746–1774 */
/* addr: 0x0020b280  size: 392 bytes */
void CAM_fn_vCheckForABetterPos(/* function pointer */ int _p_stStruct)
{
    char cRes;
    /* aggregate */ int stComputeVector;
    /* line map: */
    /*   line 1746 @ +0x000 */
    /*   line 1746 @ +0x000 */
    /*   line 1746 @ +0x000 */
    /*   line 1750 @ +0x000 */
    /*   line 1756 @ +0x000 */
    /*   line 1760 @ +0x000 */
    /*   line 1764 @ +0x000 */
    /*   line 1766 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1658–1701 */
/* addr: 0x0020b410  size: 252 bytes */
char CAM_fn_cCanResetConstraintMoveVisFailure(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stWanted)
{
    /* line map: */
    /*   line 1658 @ +0x000 */
    /*   line 1664 @ +0x000 */
    /*   line 1671 @ +0x000 */
    /*   line 1684 @ +0x000 */
    /*   line 1692 @ +0x000 */
    /*   line 1692 @ +0x000 */
    /*   line 1701 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1589–1631 */
/* addr: 0x0020b510  size: 268 bytes */
void CAM_fn_vMakeAsNewIdealPosition(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stPosition)
{
    /* line map: */
    /*   line 1589 @ +0x000 */
    /*   line 1600 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /*   line 1610 @ +0x000 */
    /*   line 1617 @ +0x000 */
    /*   line 1619 @ +0x000 */
    /*   line 1629 @ +0x000 */
    /*   line 1631 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1573–1577 */
/* addr: 0x0020b620  size: 232 bytes */
void CAM_fn_vComputeCineinfoCurrentForAPosition(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stPosition, /* function pointer */ int p_stMemo)
{
    /* line map: */
    /*   line 1575 @ +0x000 */
    /*   line 1573 @ +0x000 */
    /*   line 1575 @ +0x000 */
    /*   line 1577 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1543–1567 */
/* addr: 0x0020b710  size: 208 bytes */
void CAM_fn_vComputeCineinfoWorkForAPosition(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stPosition)
{
    float xThetaAngle;
    float xAlphaAngle;
    /* aggregate */ int stCamTargetVector;
    /* aggregate */ int stDir;
    /* line map: */
    /*   line 1543 @ +0x000 */
    /*   line 1547 @ +0x000 */
    /*   line 1547 @ +0x000 */
    /*   line 1563 @ +0x000 */
    /*   line 1565 @ +0x000 */
    /*   line 1567 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1468–1512 */
/* addr: 0x0020b7e0  size: 340 bytes */
void CAM_fn_vTestOppositeCollision(/* function pointer */ int _p_stStruct)
{
    char cMode;
    /* aggregate */ int stCameraMove;
    /* line map: */
    /*   line 1468 @ +0x000 */
    /*   line 1484 @ +0x000 */
    /*   line 1495 @ +0x000 */
    /*   line 1506 @ +0x000 */
    /*   line 1509 @ +0x000 */
    /*   line 1512 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1344–1447 */
/* addr: 0x0020b940  size: 1620 bytes */
void CAM_fn_vTestBadVisibility(/* function pointer */ int _p_stStruct)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int stVectorNull;
    /* aggregate */ int stTempVector;
    /* aggregate */ int stComputeVector;
    /* line map: */
    /*   line 1344 @ +0x000 */
    /*   line 1359 @ +0x000 */
    /*   line 1366 @ +0x000 */
    /*   line 1366 @ +0x000 */
    /*   line 1373 @ +0x000 */
    /*   line 1378 @ +0x000 */
    /*   line 1389 @ +0x000 */
    /*   line 1389 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1264–1326 */
/* addr: 0x0020bfa0  size: 688 bytes */
void CAM_fn_vTestBadDistance(/* function pointer */ int _p_stStruct)
{
    char cMode;
    /* aggregate */ int stComputeVector;
    /* line map: */
    /*   line 1264 @ +0x000 */
    /*   line 1280 @ +0x000 */
    /*   line 1292 @ +0x000 */
    /*   line 1305 @ +0x000 */
    /*   line 1316 @ +0x000 */
    /*   line 1319 @ +0x000 */
    /*   line 1323 @ +0x000 */
    /*   line 1326 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1221–1234 */
/* addr: 0x0020c250  size: 132 bytes */
void CAM_fn_vComputeFailureVisibility(/* function pointer */ int _p_stStruct)
{
    /* line map: */
    /*   line 1221 @ +0x000 */
    /*   line 1221 @ +0x000 */
    /*   line 1228 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /*   line 1234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1194–1211 */
/* addr: 0x0020c2e0  size: 132 bytes */
void CAM_fn_vForceFailureVisibility(/* function pointer */ int _p_stStruct)
{
    char cMode;
    /* aggregate */ int stComputeVector;
    /* line map: */
    /*   line 1195 @ +0x000 */
    /*   line 1194 @ +0x000 */
    /*   line 1195 @ +0x000 */
    /*   line 1198 @ +0x000 */
    /*   line 1211 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 1097–1166 */
/* addr: 0x0020c370  size: 508 bytes */
char CAM_fn_cFindNewGoodIdealPos(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stComputeVector, char _cMode, /* function pointer */ int p_stDir)
{
    float xPoundRef;
    /* aggregate */ int stTempVector;
    unsigned int ulCounter;
    /* line map: */
    /*   line 1104 @ +0x000 */
    /*   line 1104 @ +0x000 */
    /*   line 1104 @ +0x000 */
    /*   line 1097 @ +0x000 */
    /*   line 1106 @ +0x000 */
    /*   line 1109 @ +0x000 */
    /*   line 1114 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 960–1073 */
/* addr: 0x0020c570  size: 1604 bytes */
void CAM_fn_vFillVectorArray(/* function pointer */ int _p_stStruct, char _cMode, /* function pointer */ int p_stDir)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int eState;
    /* aggregate */ int stStruct;
    /* aggregate */ int stTemp;
    unsigned int ulAngle;
    unsigned int ulMax;
    unsigned int ulCounter;
    float xSaveTheta;
    float xAngle;
    /* aggregate */ int stAxis;
    /* line map: */
    /*   line 960 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 961 @ +0x000 */
    /*   line 963 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 976 @ +0x000 */
    /*   line 989 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 937–939 */
/* addr: 0x0020cbc0  size: 64 bytes */
int CAM_fni_ComparePositions(void* _pv_Elem1, void* _pv_Elem2)
{
    float xPound2;
    float xPound1;
    /* line map: */
    /*   line 937 @ +0x000 */
    /*   line 939 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 865–922 */
/* addr: 0x0020cc00  size: 380 bytes */
char CAM_fnc_IsDirectionCorrect(/* function pointer */ int _p_stStruct, /* function pointer */ int _pst_Dir, float _x_Pound, float _x_PoundRef, char _c_Mode)
{
    /* aggregate */ int stTempVector;
    /* line map: */
    /*   line 865 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 865 @ +0x000 */
    /*   line 869 @ +0x000 */
    /*   line 872 @ +0x000 */
    /*   line 874 @ +0x000 */
    /*   line 878 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 787–837 */
/* addr: 0x0020cd80  size: 760 bytes */
float CAM_fnx_ComputePosPound(/* function pointer */ int _pst_Struct, /* function pointer */ int _pst_Dir, /* function pointer */ int pst_Memo)
{
    /* aggregate */ int st_Temp;
    float x_P3;
    float x_P2;
    float x_P1;
    float x_Pound;
    /* line map: */
    /*   line 799 @ +0x000 */
    /*   line 793 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 800 @ +0x000 */
    /*   line 795 @ +0x000 */
    /*   line 787 @ +0x000 */
    /*   line 797 @ +0x000 */
    /*   line 808 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 686–720 */
/* addr: 0x0020d080  size: 320 bytes */
char CAM_fn_cIsWantedPosIncorrect(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stWantedPos, char _cMode)
{
    char cCant;
    /* line map: */
    /*   line 686 @ +0x000 */
    /*   line 688 @ +0x000 */
    /*   line 701 @ +0x000 */
    /*   line 704 @ +0x000 */
    /*   line 713 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 720 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 650–653 */
/* addr: 0x0020d1c0  size: 116 bytes */
char CAM_fn_cCameraCantSee(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stSourcePos, /* function pointer */ int _p_stTargetPos)
{
    /* line map: */
    /*   line 650 @ +0x000 */
    /*   line 653 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 618–626 */
/* addr: 0x0020d240  size: 328 bytes */
char CAM_fn_cCameraCantGoFailure(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stSourcePos, /* function pointer */ int _p_stTargetPos)
{
    float xNorm;
    float xNorm;
    /* aggregate */ int stTempVector;
    /* line map: */
    /*   line 618 @ +0x000 */
    /*   line 620 @ +0x000 */
    /*   line 620 @ +0x000 */
    /*   line 622 @ +0x000 */
    /*   line 622 @ +0x000 */
    /*   line 626 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 429–488 */
/* addr: 0x0020d390  size: 848 bytes */
char CAM_fn_cSendMultiSegment(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stSourcePos, /* function pointer */ int _p_stTargetPos, float _xRadiusCamera, float _xRadiusTarget, int _lNbRay, tdstCineinfo_* _hCineinfo)
{
    float xNorm;
    float xNorm;
    int i;
    /* aggregate */ int stVector;
    MTH_stRotation stRotation;
    /* aggregate */ int stPositionTarget1;
    /* aggregate */ int stPositionSource1;
    /* aggregate */ int stDirection;
    /* line map: */
    /*   line 429 @ +0x000 */
    /*   line 429 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 447 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 460 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Vis.c lines 186–397 */
/* addr: 0x0020d6e0  size: 1052 bytes */
char CAM_fn_cSendSegment(/* function pointer */ int _p_stStruct, /* function pointer */ int _p_stSource, /* function pointer */ int _p_stDest, tdstCineinfo_* _hCineinfo, /* function pointer */ int hCurrentSectorCamera, /* function pointer */ int hCurrentSectorPerso, /* function pointer */ int hCamera, /* function pointer */ int hPersoTargeted, /* function pointer */ int hList)
{
    char cVisibilityWithDynWorld;
    /* aggregate */ int stDest;
    /* aggregate */ int stSource;
    int i;
    /* aggregate */ int stTempVector;
    /* line map: */
    /*   line 186 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 198 @ +0x000 */
    /*   line 202 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 198 @ +0x000 */
    /* TODO: decompile from asm/... */
}
