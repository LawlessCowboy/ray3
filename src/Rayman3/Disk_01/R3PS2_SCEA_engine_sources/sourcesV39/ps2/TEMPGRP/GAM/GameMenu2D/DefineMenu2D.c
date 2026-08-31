/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct anon_0 anon_0;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef union SAV2_tduData_ SAV2_tduData_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct stMorphData stMorphData;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdst_Album_ tdst_Album_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct anon_1 anon_1;
typedef struct _tdstBinarizedDataForMenu _tdstBinarizedDataForMenu;
typedef struct MTH_stMove MTH_stMove;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct _stTimerCount _stTimerCount;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct _RollOffParam _RollOffParam;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstGameOptions_ tdstGameOptions_;
typedef struct anon_2 anon_2;
typedef struct tdstMenu2DPages_ tdstMenu2DPages_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct SAV2_tdstHeader_ SAV2_tdstHeader_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct stMACDPID stMACDPID;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct SAV2_tdstList_ SAV2_tdstList_;
typedef struct anon_3 anon_3;

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

union SAV2_tduData_ {
    unsigned char u8Data; /* +0x0 */
    unsigned short u16Data; /* +0x0 */
    unsigned int u32Data; /* +0x0 */
    float fFloat; /* +0x0 */
    int p_stVector; /* +0x0 */
    int p_szString; /* +0x0 */
    int p_vArray; /* +0x0 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdst_Album_ {
    float fPicturePercentage; /* +0x0 */
    int bMoveForward; /* +0x4 */
    int bMoveBackward; /* +0x8 */
    char szFileName[256]; /* +0xc */
    int lPreviousNextInc; /* +0x10c */
    int lSnapID; /* +0x110 */
    int lSnapID2; /* +0x114 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct anon_1 {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
};

struct _tdstBinarizedDataForMenu {
    int hText; /* +0x0 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
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

struct tdstGameOptions_ {
    char szDefaultFileName[256]; /* +0x0 */
    char szCurrentFileName[256]; /* +0x100 */
    /* array */ int a_stSaveGameSlots[1]; /* +0x200 */
    unsigned int ulNbOfSlots; /* +0x208 */
    unsigned int ulCurrentSlot; /* +0x20c */
    unsigned int ulDetails; /* +0x210 */
    unsigned int ulScreenSize; /* +0x214 */
    unsigned int ulPal60; /* +0x218 */
    unsigned int ulScreenSizeLoad; /* +0x21c */
    int s32VolumeSound; /* +0x220 */
    int s32VolumeVoice; /* +0x224 */
    int s32VolumeMusic; /* +0x228 */
    int s32VolumeAmbiance; /* +0x22c */
    int s32VolumeMenu; /* +0x230 */
};

struct anon_2 {
    unsigned int ulNbCage; /* +0x0 */
    unsigned int ulScore; /* +0x4 */
};

struct tdstMenu2DPages_ {
    int hMaterial; /* +0x0 */
    /* aggregate */ int eTypePage; /* +0x4 */
    char Title[50]; /* +0x8 */
    char aText[10][50]; /* +0x3a */
    char abGrayed[10]; /* +0x22e */
    char aValue[10]; /* +0x238 */
    unsigned int NbSelection; /* +0x244 */
    unsigned int NbEntry; /* +0x248 */
    unsigned int CurrentFirstEntry; /* +0x24c */
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

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct SAV2_tdstHeader_ {
    anon_2 aEnvValue[10]; /* +0x0 */
    unsigned int aForKeyAlgo[4]; /* +0x50 */
    int EndOfGameIsDone; /* +0x60 */
    int MaxIndCurrentEnv; /* +0x64 */
    /* aggregate */ int stMenuOptions; /* +0x68 */
    unsigned int ulWarnedUserAboutAutoSave; /* +0x74 */
    int RevisitMode; /* +0x78 */
    int RevisitEnvScore; /* +0x7c */
    int RevisitGlobalScore; /* +0x80 */
    int RevisitEnvironment; /* +0x84 */
    int RevisitOriginEnvironment; /* +0x88 */
    char szLevelName[20]; /* +0x8c */
    char szLevelNameAfterRevisit[20]; /* +0xa0 */
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

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_3 m_stData6; /* +0x34 */
    anon_0 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct SAV2_tdstList_ {
    SAV2_tdstHeader_ stListHeader; /* +0x0 */
    /* aggregate */ int SAV2_ListAnchor; /* +0xb4 */
};

struct anon_3 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

int g_InGameMenu2DActivated;
int g_GotoRight;
int g_LoadingGame;
int g_CurrentIndSubMenu;
int g_NbColForSelection;
int g_NbLineForSelection;
int g_FirstCineNameText;
int g_FirstArcadeNameText;
unsigned char g_NbCharForSaveName;
int g_IsSaveOK;
int g_2DMenuID;
int g_MenuVibrationEffect;
int g_PreviousVideoMode;
int g_MustCheckMC;
int MNU_g_SavingScreenshot;
int g_AlbumHadMemoryCardAtInit;
int GLI_g_PerformAutosaveAfterVideo;
int g_hBGMaterialForMenu2D;
int g_hFixMaterialForMenu2D;
int g_hSelectedFrameMaterialForMenu2D;
int g_hFixMaterialForSelectedFilms;
int g_hFixMaterialForArcadeAndFilms;
/* aggregate */ int g_hFixMaterialForAlbum;
int g_NbMenu2DPages;
int g_CurrentMenu2DPage;
int g_NextPage;
int g_IndCurrentEnv;
int g_MaxIndCurrentEnv;
int g_EndRevisit;
/* aggregate */ int g_CurrentActionMenu2D;
unsigned int g_CurrentSelection;
int g_RevisitMode;
int g_RevisitEnvScoreAtBeginingOfLevel;
int g_RevisitCurrentEnvScore;
int g_RevisitGlobalScoreAtBeginingOfLevel;
int g_RevisitCurrentGlobalScore;
int g_RevisitIndCurrentEnv;
int g_RevisitIndEnvironementFromWhereWeCome;
int g_GlobalScoreAtBeginingOfLevel;
int g_CurrentEnvScoreAtBeginingOfLevel;
int g_CurrentEnvInit;
int g_ExitForbidden;
int g_EndOfGameIsDone;
int g_NotRight;
int g_NotLeft;
int g_NoBonusShortcut;
int g_NoGameShortcut;
int g_NoValidate;
int g_BonusWithExit;
int MENU_g_bVibration;
int MENU_g_bInversionHor;
int MENU_g_bInversionVert;
/* aggregate */ int g_aCinematicName;
/* aggregate */ int g_aXtraVideoName;
/* aggregate */ int g_aBonusMapName;
char g_szLevelForBonusMenu[9];
/* aggregate */ int g_aMapName;
int g_Menu2D_IsInterrupted;
int MENU_g_bVibrationSaved;
int MENU_g_bInversionHorSaved;
int MENU_g_bInversionVertSaved;
unsigned int g_aForKeyAlgo[4];
_tdstBinarizedDataForMenu g_aBinDataForMenu[105];
int gStereoMode_Saved;
unsigned char g_aNbGradOnSaved[3];
anon_2 g_aEnvValue[10];
unsigned int PS2MC_g_NbFilesFound;
anon_1 g_aFileEntryArray[100];
unsigned int g_NbSaveFile;
unsigned int g_SelectedTime;
float GLI_g_ScreenPos_DY_Saved;
float GLI_g_ScreenPos_DX_Saved;
int g_aSubMenuReturn[4];
int g_RecapMenuPage;
int g_PhotoMenuPage;
int g_StartMenuPage;
int g_VideoOptionPage;
int g_AudioOptionPage;
int g_ControlOptionPage;
int g_HallOfFamePage;
int g_AlbumPage;
int g_XTraPage;
int g_CinematicPage;
int g_BonusPage;
int g_PScanPage3;
int g_PScanPage2;
int g_PScanPage1;
int g_PAL60Page3;
int g_PAL60Page2;
int g_PAL60Page1;
int g_ArcadePage;
int g_GamePage;
int g_OptionsPage;
int g_CenterScreenPage;
int g_SavePage;
int g_LoadPage;
tdstMenu2DPages_ aMenu2DPages[35];
float GLI_g_ScreenPos_DY;
float GLI_g_ScreenPos_DX;
unsigned char g_aNbGradOn[3];
/* aggregate */ int g_stEngineStructure;
/* aggregate */ int g_st_3DOS_EntryActions;
int g_bAlbumInitialized;
tdst_Album_ g_stAlbum;
int g_CurrentLanguage;
int g_CurrentSelectedCharNumber;
char g_CurrentNameForSavePage;
int g_CurrentLineForSelection;
int g_CurrentColForSelection;
int GLI_g_50_or_60_HzMode;
char g_CurrentSaveName;
char SAV2_g_LevelNameToSave[20];
int GLI_g_bWideScreenMode;
tdstGameOptions_ g_stGameOptions;
int g_szAreYouSureQuestion;
unsigned char g_NbArcadeOpen;
unsigned char g_NbCinematicOpen;
int g_szHelp;
char SAV2_g_LevelNameAfterReinitToSave[20];
int g_bAlbumLoadInProgress;
int g_bAlbumIsWorking;
float g_XTextLeft;
float g_XText;
int g_bAlbumLoadSucess;
int g_bCurrentMaterialBuffer;
SAV2_tdstList_ SAV2_g_stList;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 161–206 */
/* addr: 0x00296710  size: 640 bytes */
void fn_vDisplayScrollTextMenu2D(float X, float Y, float W, char* szText, unsigned int ulTextColor)
{
    char szTmp[30];
    int N;
    float fH;
    float fL;
    /* line map: */
    /*   line 161 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 165 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 179 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 2032–2966 */
/* addr: 0x00296990  size: 10476 bytes */
void fn_vManageMenu2D(void)
{
    /* line map: */
    /*   line 2032 @ +0x000 */
    /*   line 2045 @ +0x000 */
    /*   line 2048 @ +0x000 */
    /*   line 2051 @ +0x000 */
    /*   line 2057 @ +0x000 */
    /*   line 2065 @ +0x000 */
    /*   line 2071 @ +0x000 */
    /*   line 2073 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1907–1982 */
/* addr: 0x00299280  size: 508 bytes */
void fn_vChangeCurrentValue(char Value)
{
    /* line map: */
    /*   line 1907 @ +0x000 */
    /*   line 1907 @ +0x000 */
    /*   line 1907 @ +0x000 */
    /*   line 1910 @ +0x000 */
    /*   line 1917 @ +0x000 */
    /*   line 1930 @ +0x000 */
    /*   line 1937 @ +0x000 */
    /*   line 1942 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1814–1821 */
/* addr: 0x00299480  size: 60 bytes */
void fn_vInterruptMenu2D(int bPauseMenu)
{
    /* line map: */
    /*   line 1814 @ +0x000 */
    /*   line 1818 @ +0x000 */
    /*   line 1821 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1722–1800 */
/* addr: 0x002994c0  size: 1116 bytes */
void ReturnFromSubMenu(void)
{
    /* line map: */
    /*   line 1722 @ +0x000 */
    /*   line 1722 @ +0x000 */
    /*   line 1732 @ +0x000 */
    /*   line 1738 @ +0x000 */
    /*   line 1751 @ +0x000 */
    /*   line 1753 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1659–1713 */
/* addr: 0x00299920  size: 580 bytes */
void fn_vGotoSubMenu(int SubPage)
{
    /* line map: */
    /*   line 1659 @ +0x000 */
    /*   line 1666 @ +0x000 */
    /*   line 1666 @ +0x000 */
    /*   line 1663 @ +0x000 */
    /*   line 1666 @ +0x000 */
    /*   line 1666 @ +0x000 */
    /*   line 1667 @ +0x000 */
    /*   line 1669 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1626–1654 */
/* addr: 0x00299b70  size: 304 bytes */
void fn_vPreviousSelection(void)
{
    /* line map: */
    /*   line 1626 @ +0x000 */
    /*   line 1629 @ +0x000 */
    /*   line 1634 @ +0x000 */
    /*   line 1636 @ +0x000 */
    /*   line 1640 @ +0x000 */
    /*   line 1645 @ +0x000 */
    /*   line 1650 @ +0x000 */
    /*   line 1654 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1594–1620 */
/* addr: 0x00299ca0  size: 252 bytes */
void fn_vNextSelection(void)
{
    /* line map: */
    /*   line 1594 @ +0x000 */
    /*   line 1594 @ +0x000 */
    /*   line 1597 @ +0x000 */
    /*   line 1602 @ +0x000 */
    /*   line 1606 @ +0x000 */
    /*   line 1610 @ +0x000 */
    /*   line 1615 @ +0x000 */
    /*   line 1620 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1559–1587 */
/* addr: 0x00299da0  size: 404 bytes */
void fn_vPreviousSelectionNoWrap(void)
{
    unsigned int u32Sound2Play;
    /* line map: */
    /*   line 1559 @ +0x000 */
    /*   line 1565 @ +0x000 */
    /*   line 1574 @ +0x000 */
    /*   line 1578 @ +0x000 */
    /*   line 1583 @ +0x000 */
    /*   line 1587 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1523–1551 */
/* addr: 0x00299f40  size: 428 bytes */
void fn_vNextSelectionNoWrap(void)
{
    unsigned int u32Sound2Play;
    /* line map: */
    /*   line 1523 @ +0x000 */
    /*   line 1523 @ +0x000 */
    /*   line 1529 @ +0x000 */
    /*   line 1534 @ +0x000 */
    /*   line 1542 @ +0x000 */
    /*   line 1547 @ +0x000 */
    /*   line 1551 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1446–1465 */
/* addr: 0x0029a0f0  size: 256 bytes */
void fn_vReinitGrayedEntries(int PageNumber)
{
    int i;
    /* line map: */
    /*   line 1446 @ +0x000 */
    /*   line 1450 @ +0x000 */
    /*   line 1454 @ +0x000 */
    /*   line 1465 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1404–1407 */
/* addr: 0x0029a1f0  size: 44 bytes */
void fn_vInitInGameMenu2D(void)
{
    /* line map: */
    /*   line 1404 @ +0x000 */
    /*   line 1407 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 1145–1394 */
/* addr: 0x0029a220  size: 4360 bytes */
void fn_vInitMenuPages(void)
{
    int IndSubMenuPage;
    int i;
    /* line map: */
    /*   line 1145 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1145 @ +0x000 */
    /*   line 1149 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1165 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 901–975 */
/* addr: 0x0029b330  size: 1780 bytes */
void fn_vInitMaterialForMenu(void)
{
    /* line map: */
    /*   line 901 @ +0x000 */
    /*   line 906 @ +0x000 */
    /*   line 912 @ +0x000 */
    /*   line 921 @ +0x000 */
    /*   line 923 @ +0x000 */
    /*   line 925 @ +0x000 */
    /*   line 927 @ +0x000 */
    /*   line 929 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 842–886 */
/* addr: 0x0029ba30  size: 440 bytes */
void DesinitGameMenu2D(void)
{
    /* line map: */
    /*   line 846 @ +0x000 */
    /*   line 846 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 851 @ +0x000 */
    /*   line 856 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 859 @ +0x000 */
    /*   line 860 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 625–644 */
/* addr: 0x0029bbf0  size: 104 bytes */
void CloseInGameMenu2D(void)
{
    unsigned int ulCurrentTime;
    /* line map: */
    /*   line 625 @ +0x000 */
    /*   line 628 @ +0x000 */
    /*   line 638 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 640 @ +0x000 */
    /*   line 644 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 586–605 */
/* addr: 0x0029bc60  size: 232 bytes */
void ActivateInGameMenu2D(void)
{
    /* line map: */
    /*   line 590 @ +0x000 */
    /*   line 590 @ +0x000 */
    /*   line 586 @ +0x000 */
    /*   line 588 @ +0x000 */
    /*   line 590 @ +0x000 */
    /*   line 594 @ +0x000 */
    /*   line 603 @ +0x000 */
    /*   line 605 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 544–576 */
/* addr: 0x0029bd50  size: 292 bytes */
void ActivateInGameMenu2DStart(void)
{
    /* line map: */
    /*   line 553 @ +0x000 */
    /*   line 544 @ +0x000 */
    /*   line 553 @ +0x000 */
    /*   line 545 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 553 @ +0x000 */
    /*   line 571 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 511–535 */
/* addr: 0x0029be80  size: 452 bytes */
void ActivateInGameMenu2DPhoto(void)
{
    /* line map: */
    /*   line 511 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 512 @ +0x000 */
    /*   line 514 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 518 @ +0x000 */
    /*   line 524 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 490–505 */
/* addr: 0x0029c050  size: 228 bytes */
void M2D_fn_vDisplayEndOfGameRecapPage(void)
{
    /* line map: */
    /*   line 490 @ +0x000 */
    /*   line 494 @ +0x000 */
    /*   line 491 @ +0x000 */
    /*   line 493 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 497 @ +0x000 */
    /*   line 503 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 467–484 */
/* addr: 0x0029c140  size: 304 bytes */
void ActivateInGameMenu2DBonus(int WithExit)
{
    /* line map: */
    /*   line 474 @ +0x000 */
    /*   line 474 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 473 @ +0x000 */
    /*   line 472 @ +0x000 */
    /*   line 476 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029c270  size: 8 bytes */
void fn_vR3SetNbCineOpen(unsigned int ulNum)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029c280  size: 8 bytes */
void fn_vR3SetNbBonusOpen(unsigned int ulNum)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 395–402 */
/* addr: 0x0029c290  size: 72 bytes */
void fn_vR3SetCurrentEnvNumber(unsigned int ulNum)
{
    /* line map: */
    /*   line 395 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 402 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029c2e0  size: 96 bytes */
void fn_vUpdatePlayerGameName(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 370–381 */
/* addr: 0x0029c340  size: 1016 bytes */
void fn_vR3ReInitScore(void)
{
    /* line map: */
    /*   line 370 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 375 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 380 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 381 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 337–357 */
/* addr: 0x0029c740  size: 2372 bytes */
void fn_vR3StoreInitScore(void)
{
    /* line map: */
    /*   line 337 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 340 @ +0x000 */
    /*   line 344 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 357 @ +0x000 */
    /*   line 357 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 328–328 */
/* addr: 0x0029d090  size: 24 bytes */
unsigned int fn_ulR3GetEnvNbCage(unsigned int ulIndE)
{
    /* line map: */
    /*   line 328 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 312–322 */
/* addr: 0x0029d0b0  size: 712 bytes */
unsigned int fn_ulR3GetEnvScoreWithRevisit(unsigned int ulIndE)
{
    /* line map: */
    /*   line 312 @ +0x000 */
    /*   line 322 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 303–303 */
/* addr: 0x0029d380  size: 360 bytes */
unsigned int fn_ulR3GetEnvScore(unsigned int ulIndE)
{
    /* line map: */
    /*   line 303 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 295–295 */
/* addr: 0x0029d4f0  size: 36 bytes */
void fn_vR3SetEnvNbCage(unsigned int ulIndE, unsigned int ulNbCage)
{
    /* line map: */
    /*   line 295 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 270–289 */
/* addr: 0x0029d520  size: 736 bytes */
void fn_vR3SetEnvScoreWithRevisit(unsigned int ulIndE, unsigned int ulScore)
{
    /* line map: */
    /*   line 270 @ +0x000 */
    /*   line 274 @ +0x000 */
    /*   line 279 @ +0x000 */
    /*   line 285 @ +0x000 */
    /*   line 289 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 252–255 */
/* addr: 0x0029d800  size: 320 bytes */
void fn_vR3RecomputeGlobalScore(void)
{
    int i;
    /* line map: */
    /*   line 252 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 255 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 227–227 */
/* addr: 0x0029d940  size: 36 bytes */
unsigned int M2D_fn_ulGetRevisitEnvironmentNumber(void)
{
    /* line map: */
    /*   line 227 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\GameMenu2D\DefineMenu2D.c lines 215–215 */
/* addr: 0x0029d970  size: 12 bytes */
void M2D_fn_vForbidExitFromMenu(void)
{
    /* line map: */
    /*   line 215 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0029d980  size: 8 bytes */
void fn_vR3SetEndOfGame(unsigned int ulValue)
{
    /* TODO: decompile from asm/... */
}
