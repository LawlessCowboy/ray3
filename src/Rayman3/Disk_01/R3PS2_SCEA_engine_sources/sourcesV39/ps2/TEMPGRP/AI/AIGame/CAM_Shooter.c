/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstState_ tdstState_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct CAM_Shooter_ CAM_Shooter_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstComport_ tdstComport_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct stMorphData stMorphData;
typedef struct tdstMacro_ tdstMacro_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef union RGBAStruct_ RGBAStruct_;
typedef union anon_0 anon_0;
typedef struct tdstElement3d_ tdstElement3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct _stTimerCount _stTimerCount;

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
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

struct CAM_Shooter_ {
    /* aggregate */ int aiExternDsgVarInt; /* +0x0 */
    /* aggregate */ int axExternDsgVarFloat; /* +0x14 */
    /* aggregate */ int apExternDsgVarPerso; /* +0x28 */
    /* aggregate */ int abExternDsgVarBoolean; /* +0x3c */
    /* aggregate */ int avExternDsgVarVector; /* +0x50 */
    int pCamera; /* +0x64 */
    int pTargetActor; /* +0x68 */
    int pTargetSkin; /* +0x6c */
    int pMultiControl; /* +0x70 */
    /* aggregate */ int apMainActors; /* +0x74 */
    /* aggregate */ int apSkins; /* +0x84 */
    short iNumberOfMainActors; /* +0x94 */
    int p_stViewport; /* +0x98 */
    int hCineInfo; /* +0x9c */
    int pLockedActor; /* +0xa0 */
    int pTargetActor_position; /* +0xa4 */
    int pTargetActor_speed; /* +0xa8 */
    /* aggregate */ int vStartProjectilePosition; /* +0xac */
    /* aggregate */ int vViewFinderPosition; /* +0xb8 */
    /* aggregate */ int v2DViewFinderPosition; /* +0xc4 */
    /* aggregate */ int vRefAxis; /* +0xd0 */
    /* aggregate */ int vDirection; /* +0xdc */
    /* aggregate */ int vNormalCollision; /* +0xe8 */
    /* aggregate */ int vCollisionPoint; /* +0xf4 */
    /* aggregate */ int vCheckCollisionShift; /* +0x100 */
    /* aggregate */ int vCheckCollisionShift1; /* +0x10c */
    /* aggregate */ int vCollisionPointWall; /* +0x118 */
    /* aggregate */ int vRayCastCeiling; /* +0x124 */
    /* aggregate */ int vNormalCollisionWall; /* +0x130 */
    /* aggregate */ int vTheoreticalPosition; /* +0x13c */
    /* aggregate */ int vOldPosition; /* +0x148 */
    /* aggregate */ int vProposedSpeed; /* +0x154 */
    /* aggregate */ int vActualSpeed; /* +0x160 */
    /* aggregate */ int vCollisionDirectionV; /* +0x16c */
    /* aggregate */ int vCollisionDirectionH; /* +0x178 */
    /* aggregate */ int vRayCastOrigin; /* +0x184 */
    /* aggregate */ int vRayCastDirection; /* +0x190 */
    /* aggregate */ int vCameraSighting; /* +0x19c */
    /* aggregate */ int vOldSighting; /* +0x1a8 */
    int vCameraPosition; /* +0x1b4 */
    int iIndexSector; /* +0x1b8 */
    float xTheta_Default; /* +0x1bc */
    float xTheta_Min; /* +0x1c0 */
    float xTheta_Max; /* +0x1c4 */
    float xTheta_Current; /* +0x1c8 */
    float xTheta_User; /* +0x1cc */
    float xDeltaTheta_User; /* +0x1d0 */
    float xTheta_Imposed; /* +0x1d4 */
    float xAlpha_User; /* +0x1d8 */
    float xDistMax_Default; /* +0x1dc */
    float xDistMax; /* +0x1e0 */
    float xOldDistMax; /* +0x1e4 */
    float xTargetAngle; /* +0x1e8 */
    float xShift; /* +0x1ec */
    float xAlphaLock; /* +0x1f0 */
    float xThetaLock; /* +0x1f4 */
    float xStartAlignAngle; /* +0x1f8 */
    int pMAComport_Climb; /* +0x1fc */
    int pMAComport_Fall; /* +0x200 */
    int pMAComport_Reborn; /* +0x204 */
    int pMAComport_Heli; /* +0x208 */
    int pMAComport_Hang; /* +0x20c */
    int pMAComport_Wait; /* +0x210 */
    int pMAComport_Victory; /* +0x214 */
    int pMAComport_Run; /* +0x218 */
    int bWasClimbing; /* +0x21c */
    int bMouseDriven; /* +0x220 */
    int bIsDigitalInput; /* +0x224 */
    int bAlignCamera; /* +0x228 */
    int bStartAlignCamera; /* +0x22c */
    int bAutoAlign; /* +0x230 */
    int bCollision; /* +0x234 */
    int bCollisionAlign; /* +0x238 */
    int bSideCollision; /* +0x23c */
    int bVerticalCollision; /* +0x240 */
    int bObstacleCollision; /* +0x244 */
    int bIsJumpFalling; /* +0x248 */
    int bFastAlign; /* +0x24c */
    int bLowCeiling; /* +0x250 */
    int bIsBot; /* +0x254 */
    int bRaiseCamera; /* +0x258 */
    int bAutoAim; /* +0x25c */
    float xFastAlign_StartDistance; /* +0x260 */
    unsigned int ulDelayTime; /* +0x264 */
    unsigned int ulAlignDelayTime; /* +0x268 */
    unsigned int ulZeroPadStartTime; /* +0x26c */
    unsigned int iTime; /* +0x270 */
    unsigned int iTimeToRaiseCamera; /* +0x274 */
    unsigned int iViewFinderIconId; /* +0x278 */
    int iViewportIndex; /* +0x27c */
    unsigned char iMode; /* +0x280 */
    /* aggregate */ int vCeilingCollisionPoint; /* +0x284 */
    long iOldInputAxisZ; /* +0x290 */
    long iAxisVThreshold; /* +0x298 */
    unsigned long m_ulOldButtons; /* +0x2a0 */
    unsigned long m_ulJustPressedButtons; /* +0x2a8 */
    int hWaterGMT; /* +0x2b0 */
    float xViewFinderWidth_2; /* +0x2b4 */
    float xViewFinderHeight_2; /* +0x2b8 */
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

struct tdstGetSetParam_ {
    anon_3 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
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

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
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

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_3 {
    /* aggregate */ int uParam; /* +0x0 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

float xMouseSensitivityFactor[4];
int bGCubeVersion;
float xCameraDelayAlign;
int hCineInfo;
int lInputAxisV;
int lInputAxisZ;
int lInputAxisY;
int lInputAxisX;
int bMovedCameraY;
int bMovedCameraX;
int bMovedY;
int bMovedX;
/* aggregate */ int stCamShooter_CV;
CAM_Shooter_ a_stCamShooter[4];
/* aggregate */ int g_stCollideResultPoint;
int g_hColMatHit;
/* aggregate */ int vVectorZ;
/* aggregate */ int g_stEngineStructure;
int g_hSuperObjectHit;
/* aggregate */ int g_stCollideResultVector;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 128–139 */
/* addr: 0x00241990  size: 320 bytes */
void LNK_fn_p_InitAll(/* function pointer */ int p_stTree)
{
    int k;
    /* line map: */
    /*   line 128 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 128 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 139 @ +0x000 */
    /*   line 139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3668–3782 */
/* addr: 0x00241ad0  size: 6128 bytes */
unsigned char fn_StrafeLockMode(CAM_Shooter_* pcs)
{
    float xNorm;
    float xNorm;
    float xNorm;
    float xD2r;
    /* aggregate */ int vTemp2;
    /* aggregate */ int vTemp1;
    /* line map: */
    /*   line 3668 @ +0x000 */
    /*   line 3672 @ +0x000 */
    /*   line 3675 @ +0x000 */
    /*   line 3679 @ +0x000 */
    /*   line 3681 @ +0x000 */
    /*   line 3684 @ +0x000 */
    /*   line 3681 @ +0x000 */
    /*   line 3683 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3413–3458 */
/* addr: 0x002432c0  size: 1160 bytes */
void fn_InitStrafeLockMode(CAM_Shooter_* pcs)
{
    float xNorm;
    /* aggregate */ int vTemp1;
    /* aggregate */ int vShiftPos;
    /* line map: */
    /*   line 3413 @ +0x000 */
    /*   line 3415 @ +0x000 */
    /*   line 3415 @ +0x000 */
    /*   line 3413 @ +0x000 */
    /*   line 3413 @ +0x000 */
    /*   line 3416 @ +0x000 */
    /*   line 3418 @ +0x000 */
    /*   line 3420 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1183–1213 */
/* addr: 0x00243750  size: 712 bytes */
void fn_InitBackMode(CAM_Shooter_* pcs)
{
    /* aggregate */ int vShiftPos;
    /* line map: */
    /*   line 1183 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1185 @ +0x000 */
    /*   line 1187 @ +0x000 */
    /*   line 1189 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1943–1982 */
/* addr: 0x00243a20  size: 856 bytes */
void fn_InitMarioMode(CAM_Shooter_* pcs)
{
    /* aggregate */ int vShiftPos;
    /* line map: */
    /*   line 1943 @ +0x000 */
    /*   line 1943 @ +0x000 */
    /*   line 1943 @ +0x000 */
    /*   line 1943 @ +0x000 */
    /*   line 1945 @ +0x000 */
    /*   line 1947 @ +0x000 */
    /*   line 1949 @ +0x000 */
    /*   line 1953 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 3319–3398 */
/* addr: 0x00243d80  size: 10052 bytes */
unsigned char fn_MarioMode(CAM_Shooter_* pcs)
{
    float xAngularSpeed;
    /* line map: */
    /*   line 3319 @ +0x000 */
    /*   line 3322 @ +0x000 */
    /*   line 3327 @ +0x000 */
    /*   line 3331 @ +0x000 */
    /*   line 3339 @ +0x000 */
    /*   line 3347 @ +0x000 */
    /*   line 3352 @ +0x000 */
    /*   line 3355 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2830–2837 */
/* addr: 0x002464d0  size: 272 bytes */
void fn_CreateRaycastDirection(CAM_Shooter_* pcs, /* function pointer */ int vRayCastDirection, /* function pointer */ int vCentralSegment)
{
    /* aggregate */ int vTemp;
    float xNorm;
    /* line map: */
    /*   line 2830 @ +0x000 */
    /*   line 2833 @ +0x000 */
    /*   line 2835 @ +0x000 */
    /*   line 2837 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2701–2767 */
/* addr: 0x002465e0  size: 840 bytes */
void fn_PutCameraAgainstWall(CAM_Shooter_* pcs, float xDistanceToTarget)
{
    /* aggregate */ int vHorizon;
    /* aggregate */ int vRayCast;
    float xFactor;
    float xAngle;
    float xTheoreticalDistance;
    float xNewTheta;
    float xMultiplier;
    /* line map: */
    /*   line 2701 @ +0x000 */
    /*   line 2701 @ +0x000 */
    /*   line 2701 @ +0x000 */
    /*   line 2702 @ +0x000 */
    /*   line 2706 @ +0x000 */
    /*   line 2709 @ +0x000 */
    /*   line 2717 @ +0x000 */
    /*   line 2715 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 2483–2507 */
/* addr: 0x00246930  size: 664 bytes */
void fn_GetTheoreticalPosition_UsingRealPosition(/* function pointer */ int vTPosition, CAM_Shooter_* pcs, unsigned int iMode)
{
    float xNorm;
    /* aggregate */ int vHorizon;
    /* aggregate */ int vDiff;
    /* line map: */
    /*   line 2483 @ +0x000 */
    /*   line 2483 @ +0x000 */
    /*   line 2487 @ +0x000 */
    /*   line 2483 @ +0x000 */
    /*   line 2487 @ +0x000 */
    /*   line 2491 @ +0x000 */
    /*   line 2493 @ +0x000 */
    /*   line 2498 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 1854–1915 */
/* addr: 0x00246bd0  size: 8388 bytes */
unsigned char fn_BackMode(CAM_Shooter_* pcs)
{
    /* aggregate */ int vPos;
    /* line map: */
    /*   line 1854 @ +0x000 */
    /*   line 1858 @ +0x000 */
    /*   line 1861 @ +0x000 */
    /*   line 1866 @ +0x000 */
    /*   line 1870 @ +0x000 */
    /*   line 1873 @ +0x000 */
    /*   line 1876 @ +0x000 */
    /*   line 1878 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 737–875 */
/* addr: 0x00248ca0  size: 716 bytes */
void fn_ChangeCameraRealParameter(tdstCineinfo_* hCineInfo, /* aggregate */ int eProcedureId, int lTypeOfChange, int lChangingMode, float xValue)
{
    float* p_xWorkValue;
    float* p_xVisibilityValue;
    float* p_xCurrentValue;
    float* p_xInitialValue;
    /* line map: */
    /*   line 737 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 746 @ +0x000 */
    /*   line 748 @ +0x000 */
    /*   line 746 @ +0x000 */
    /*   line 748 @ +0x000 */
    /*   line 753 @ +0x000 */
    /*   line 755 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 708–730 */
/* addr: 0x00248f70  size: 120 bytes */
void fn_ChangeCameraVectorParameter(tdstCineinfo_* hCineInfo, /* aggregate */ int eProcedureId, int lTypeOfChange, int lChangingMode, /* function pointer */ int p_stValue, /* function pointer */ int p_vWorkVectorValue, /* function pointer */ int p_vVisibilityVectorValue, /* function pointer */ int p_vCurrentVectorValue, /* function pointer */ int p_vInitialVectorValue)
{
    /* line map: */
    /*   line 708 @ +0x000 */
    /*   line 710 @ +0x000 */
    /*   line 717 @ +0x000 */
    /*   line 719 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 726 @ +0x000 */
    /*   line 723 @ +0x000 */
    /*   line 726 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 661–691 */
/* addr: 0x00248ff0  size: 368 bytes */
/*type_0x00*/ int fn_InitCSH_Common(void)
{
    /* line map: */
    /*   line 661 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 662 @ +0x000 */
    /*   line 663 @ +0x000 */
    /*   line 663 @ +0x000 */
    /*   line 667 @ +0x000 */
    /*   line 668 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 635–643 */
/* addr: 0x00249160  size: 76 bytes */
void fn_p_SetGCubeVersion(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 635 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 641 @ +0x000 */
    /*   line 643 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 600–622 */
/* addr: 0x002491b0  size: 220 bytes */
void fn_p_SetSkin(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int pSkin, CAM_Shooter_* pcs)
{
    int iSkinIndex;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 600 @ +0x000 */
    /*   line 600 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 610 @ +0x000 */
    /*   line 606 @ +0x000 */
    /*   line 606 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 569–587 */
/* addr: 0x00249290  size: 244 bytes */
void fn_p_RemoveMainActor(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int pMainActor, CAM_Shooter_* pcs)
{
    int bFound;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 569 @ +0x000 */
    /*   line 569 @ +0x000 */
    /*   line 572 @ +0x000 */
    /*   line 576 @ +0x000 */
    /*   line 574 @ +0x000 */
    /*   line 577 @ +0x000 */
    /*   line 579 @ +0x000 */
    /*   line 581 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 538–550 */
/* addr: 0x00249390  size: 192 bytes */
void fn_p_AddMainActor(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int pMainActor, CAM_Shooter_* pcs)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 538 @ +0x000 */
    /*   line 538 @ +0x000 */
    /*   line 541 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 543 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 550 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 401–449 */
/* addr: 0x00249450  size: 684 bytes */
void fn_p_RegisterDesignVar(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int hCamera, AI_tdstMind_* param4, CAM_Shooter_* pCamShooter)
{
    /* aggregate */ int eProcedureId;
    unsigned char ucVarId;
    unsigned char iCSVarId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 401 @ +0x000 */
    /*   line 408 @ +0x000 */
    /*   line 413 @ +0x000 */
    /*   line 410 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 416 @ +0x000 */
    /*   line 424 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 378–385 */
/* addr: 0x00249700  size: 80 bytes */
void fn_p_GetViewFinderVMT(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 378 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 385 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 358–365 */
/* addr: 0x00249750  size: 212 bytes */
void fn_p_GetViewFinderDistance(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int hCamera, CAM_Shooter_* pcs)
{
    /* line map: */
    /*   line 358 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 365 @ +0x000 */
    /*   line 365 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 317–339 */
/* addr: 0x00249830  size: 284 bytes */
void fn_p_GetMainActorComports(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hCamera, CAM_Shooter_* pcs)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 317 @ +0x000 */
    /*   line 321 @ +0x000 */
    /*   line 319 @ +0x000 */
    /*   line 323 @ +0x000 */
    /*   line 324 @ +0x000 */
    /*   line 327 @ +0x000 */
    /*   line 330 @ +0x000 */
    /*   line 333 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 298–301 */
/* addr: 0x00249950  size: 124 bytes */
void fn_p_StrafeLockMode(tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 300 @ +0x000 */
    /*   line 300 @ +0x000 */
    /*   line 298 @ +0x000 */
    /*   line 301 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 284–292 */
/* addr: 0x002499d0  size: 1232 bytes */
void fn_p_InitStrafeLockMode(/* function pointer */ int hCamera, /* function pointer */ int p_stTree, CAM_Shooter_* pcs)
{
    /* line map: */
    /*   line 284 @ +0x000 */
    /*   line 286 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 286 @ +0x000 */
    /*   line 286 @ +0x000 */
    /*   line 286 @ +0x000 */
    /*   line 284 @ +0x000 */
    /*   line 284 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 269–272 */
/* addr: 0x00249ea0  size: 124 bytes */
void fn_p_MarioMode(/* function pointer */ int hCamera, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 271 @ +0x000 */
    /*   line 271 @ +0x000 */
    /*   line 269 @ +0x000 */
    /*   line 272 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 254–261 */
/* addr: 0x00249f20  size: 932 bytes */
void fn_p_InitMarioMode(/* function pointer */ int hCamera, /* function pointer */ int p_stTree, CAM_Shooter_* pcs)
{
    /* line map: */
    /*   line 255 @ +0x000 */
    /*   line 255 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 254 @ +0x000 */
    /*   line 254 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 259 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 240–244 */
/* addr: 0x0024a2d0  size: 124 bytes */
void fn_p_BackMode(/* function pointer */ int hCamera, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 244 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\CAM_Shooter.c lines 223–232 */
/* addr: 0x0024a350  size: 788 bytes */
void fn_p_InitBackMode(/* function pointer */ int hCamera, /* function pointer */ int p_stTree, CAM_Shooter_* pcs)
{
    /* line map: */
    /*   line 224 @ +0x000 */
    /*   line 224 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /* TODO: decompile from asm/... */
}
