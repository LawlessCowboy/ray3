/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct stMACDPID stMACDPID;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct anon_0 anon_0;
typedef struct tdstCouple_ tdstCouple_;
typedef struct anon_1 anon_1;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stMove MTH_stMove;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct DNM_stReport DNM_stReport;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstState_ tdstState_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct _stTimerCount _stTimerCount;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct anon_0 anon_0;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct anon_1 anon_1;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union _tduRefRes _tduRefRes;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct anon_4 anon_4;
typedef struct MTH_stMove MTH_stMove;
typedef struct stMACDPID stMACDPID;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct anon_5 anon_5;
typedef struct stMorphData stMorphData;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct anon_6 anon_6;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct anon_7 anon_7;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct anon_8 anon_8;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEvent_ tdstEvent_;
typedef union anon_11 anon_11;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstDynam_ tdstDynam_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct _RollOffParam _RollOffParam;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct anon_0 {
    int rDelta; /* +0x0 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
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

struct anon_1 {
    _tduRefRes uResource; /* +0x0 */
    anon_0 stDeTune; /* +0x4 */
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

union _tduRefRes {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct anon_2 {
    _SND_tduRefEvt uEvt; /* +0x0 */
};

struct anon_3 {
    _SND_tduRefEvt uEvtStop; /* +0x0 */
    _SND_tduRefEvt uEvtGo; /* +0x4 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct anon_4 {
    _SND_tduRefEvt uEvtStop; /* +0x0 */
    _SND_tduRefEvt uEvtGo; /* +0x4 */
    int iTime; /* +0x8 */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    /* aggregate */ int m_stData1; /* +0x4 */
    /* aggregate */ int m_stData2; /* +0x10 */
    /* aggregate */ int m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_7 m_stData6; /* +0x34 */
    anon_8 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    /* aggregate */ int m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    /* aggregate */ int m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct anon_5 {
    _tduRefRes uResource; /* +0x0 */
    int CoefA; /* +0x4 */
    int CoefB; /* +0x8 */
    anon_0 stDeTune; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct anon_6 {
    _tduRefRes uResource; /* +0x0 */
    int rtCoefPitch; /* +0x4 */
    int rtCoefVol; /* +0x8 */
    int rtCoefPan; /* +0xc */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct anon_7 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct anon_8 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct anon_9 {
    int iIdEffect; /* +0x0 */
};

struct anon_10 {
    int bConcernWithObjectType; /* +0x0 */
    int lNewVolume; /* +0x4 */
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

union anon_11 {
    anon_1 stPlay; /* +0x0 */
    anon_2 stStop; /* +0x0 */
    anon_3 stStopNGo; /* +0x0 */
    anon_4 stStopNGoFade; /* +0x0 */
    anon_5 stExtraParam; /* +0x0 */
    anon_6 stExtraAll; /* +0x0 */
    anon_9 stEffect; /* +0x0 */
    anon_10 stChangeVolume; /* +0x0 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
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

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

int g_p_stCurrentGraphNode;
/* aggregate */ int g_stNewMCMatrix;
int g_hLoadedSuperObjectRoot;
/* aggregate */ int g_a_hSOCurrentMainSector;
int gp_stNewActualWorld;
int gp_stNewInactiveDynamicWorld;
int gp_stNewDynamicWorld;
int gp_stActualWorld;
int gp_stInactiveDynamicWorld;
int gp_stDynamicWorld;
int gp_stLight;
unsigned int gl_DEMO_ConstantSpeed;
int gp_DEMO_AllocatedMemory;
int gp_DEMO_CurrentPosInMemory;
int g_iFrameTimeOffset;
int g_hDemoSOList;
int g_iFirstAlwaysNumber;
int g_iNbMoveModule;
unsigned short g_DEMO_KeybTest;
int g_iNbFramesToWaitBeforePlaying;
unsigned int g_ulFlagFrameNumber;
unsigned short g_DEMO_FirstInitFlag;
unsigned short g_DEMO_AutoPlay;
unsigned short g_DEMO_LoadDemo;
unsigned short g_DEMO_RecordDemo;
int g_bTestInputDuringDemo;
int g_as32DemoAGOTable[32];
/* aggregate */ int a_hTemporaryStateCorrespondance;
char g_szDemoToLoad[20];
char g_szMapNameToLoadWhenDemoFinished[20];
/* aggregate */ int g_aRemindedMoveModule;
float gf_CompressionRate2;
float gf_CompressionRate1;
float gf_CompressionRate0;
float g_xInterpolCoef;
unsigned int g_ulDEMO_StartDEMO_EngineTimerCount;
unsigned int g_ulDEMO_DeltaTimerCount;
unsigned int g_ulDEMO_ElapsedDemoTimerCount;
unsigned int gl_DEMO_CurrentFrame;
unsigned int gl_DEMO_NumberOfFrames;
unsigned int g_DEMO_u32FirstEngineFrameOffset;
unsigned int g_DEMO_u32PlayMode;
/* aggregate */ int g_stEngineStructure;
/* aggregate */ int g_st_3DOS_EntryActions;
int g_bAnimConstantSpeed;
int gp_stDynamicWorld;
int HIE_gs_lCurrentFrame;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 68–100 */
/* addr: 0x00282bb0  size: 492 bytes */
void fn_vDisplayFix(unsigned char _ucVPIndex)
{
    int bEnabledWrite;
    /* line map: */
    /*   line 68 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 87 @ +0x000 */
    /*   line 91 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 100 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 7521–7549 */
/* addr: 0x00282da0  size: 356 bytes */
void DEMO_fn_vReadDemoTableFile(void)
{
    int ret;
    int i;
    unsigned int u32FileSize;
    char* p;
    char FileName[128];
    char LevelName[128];
    char buffer[1024];
    int fh;
    /* line map: */
    /*   line 7521 @ +0x000 */
    /*   line 7521 @ +0x000 */
    /*   line 7521 @ +0x000 */
    /*   line 7529 @ +0x000 */
    /*   line 7532 @ +0x000 */
    /*   line 7534 @ +0x000 */
    /*   line 7539 @ +0x000 */
    /*   line 7541 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00282f10  size: 8 bytes */
void DEMO_fn_vDesInitGame(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 7193–7409 */
/* addr: 0x00282f20  size: 552 bytes */
unsigned char DEMO_fn_bUpdateDynamicHierarchy(void)
{
    int iEndOfUpdate;
    int iNewFrameInRecord;
    unsigned int ulDEMO_ElapsedEngineTimerCount;
    /* line map: */
    /*   line 7193 @ +0x000 */
    /*   line 7196 @ +0x000 */
    /*   line 7250 @ +0x000 */
    /*   line 7253 @ +0x000 */
    /*   line 7259 @ +0x000 */
    /*   line 7262 @ +0x000 */
    /*   line 7272 @ +0x000 */
    /*   line 7277 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 7054–7169 */
/* addr: 0x00283150  size: 592 bytes */
void DEMO_fn_vMoveModuleDelayedHandling(/* function pointer */ int hChild, /* function pointer */ int p_stListElement)
{
    char* p_cCurrentDemoPosition;
    int ii;
    /* aggregate */ int stTranslationVector;
    /* aggregate */ int stCompressedTransform;
    unsigned char ucChannelNumber;
    unsigned short wSO_Number;
    unsigned short Demo_Flag;
    /* line map: */
    /*   line 7054 @ +0x000 */
    /*   line 7054 @ +0x000 */
    /*   line 7054 @ +0x000 */
    /*   line 7054 @ +0x000 */
    /*   line 7058 @ +0x000 */
    /*   line 7062 @ +0x000 */
    /*   line 7062 @ +0x000 */
    /*   line 7063 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 6826–7028 */
/* addr: 0x002833a0  size: 760 bytes */
void DEMO_fn_vReadOneCompleteStateUpdate(/* function pointer */ int param0, /* function pointer */ int p_stListElement)
{
    unsigned char ucCurrentSO_Number;
    int bSuperimposedSO;
    unsigned short Demo_Flag;
    unsigned short wCurrentSO_Number;
    /* line map: */
    /*   line 6826 @ +0x000 */
    /*   line 6889 @ +0x000 */
    /*   line 6892 @ +0x000 */
    /*   line 6894 @ +0x000 */
    /*   line 6898 @ +0x000 */
    /*   line 6906 @ +0x000 */
    /*   line 6913 @ +0x000 */
    /*   line 6918 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 6045–6440 */
/* addr: 0x002836a0  size: 2360 bytes */
void DEMO_fn_vGetACompleteCharacterPosition(/* function pointer */ int hSO, tdstAnim3d_* p_stAnim, tdstState_* p_stTmpState, tdst3dData_* h_Current3dData)
{
    int bSavedValue;
    unsigned char bNoDisplay;
    char szOutputMsg[8];
    char a3_cCoef[3];
    unsigned char ucSO_Number;
    unsigned char bIsCamera;
    unsigned short Demo_Flag;
    float xForcedFrame;
    unsigned short uwForcedFrame;
    unsigned short wSO_Number;
    short wStateNumber;
    /* aggregate */ int stDeltaTranslation;
    /* aggregate */ int stTranslation;
    /* aggregate */ int stNewlyReadTransform;
    /* aggregate */ int stCompressedTransform;
    /* line map: */
    /*   line 6073 @ +0x000 */
    /*   line 6045 @ +0x000 */
    /*   line 6063 @ +0x000 */
    /*   line 6073 @ +0x000 */
    /*   line 6091 @ +0x000 */
    /*   line 6091 @ +0x000 */
    /*   line 6091 @ +0x000 */
    /*   line 6095 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 5928–6018 */
/* addr: 0x00284020  size: 392 bytes */
void DEMO_fn_vReadAlwaysActivationDesactivation(/* function pointer */ int hSO)
{
    short wAlwaysNumber;
    /* aggregate */ int p_stPosMatrix;
    /* aggregate */ int stTempVector;
    int otObjectModelType;
    unsigned short Demo_Flag;
    unsigned short wSO_Number;
    /* line map: */
    /*   line 5928 @ +0x000 */
    /*   line 5938 @ +0x000 */
    /*   line 5949 @ +0x000 */
    /*   line 5949 @ +0x000 */
    /*   line 5949 @ +0x000 */
    /*   line 5952 @ +0x000 */
    /*   line 5952 @ +0x000 */
    /*   line 5955 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 5761–5839 */
/* addr: 0x002841b0  size: 528 bytes */
void DEMO_fn_vReadAndChangeActivationDesactivation(/* function pointer */ int hSO, /* function pointer */ int p_stObj)
{
    unsigned char ucChannelNumber;
    unsigned short Demo_Flag;
    unsigned short wSO_Number;
    /* line map: */
    /*   line 5761 @ +0x000 */
    /*   line 5761 @ +0x000 */
    /*   line 5761 @ +0x000 */
    /*   line 5767 @ +0x000 */
    /*   line 5767 @ +0x000 */
    /*   line 5767 @ +0x000 */
    /*   line 5785 @ +0x000 */
    /*   line 5785 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 4627–5742 */
/* addr: 0x002843c0  size: 7368 bytes */
void DEMO_fn_vReadAndTreatAllExtendedFlag(unsigned short Demo_Flag, CINE_tdstCine_* hCine, CINE_tdstCine_* hCine, tdstState_* h_ResultState, /* function pointer */ int hSO, /* function pointer */ int p_stListElement, /* function pointer */ int p_stListElement, /* function pointer */ int hStdGame, /* function pointer */ int p_stListElement, /* function pointer */ int param9, /* function pointer */ int hSpo, /* function pointer */ int p_stListElement, /* function pointer */ int hSector, /* function pointer */ int p_SuperObjPersoTreated, tdstMSLight_* h_MSLight, /* function pointer */ int p_stListElement, /* function pointer */ int hFamily, /* function pointer */ int hObjectTable, /* function pointer */ int p_stListElement, /* function pointer */ int p_stListElement, /* function pointer */ int hVisualMaterial, /* function pointer */ int hSkinVisualMaterial)
{
    short s16CineNumber;
    short s16CineNumber;
    unsigned int ulNbFramesForIntermAnim;
    unsigned short uwFirstFrameInWantedState;
    short s16CompressedNLParameter;
    unsigned short u16NbFrames;
    unsigned short u16WantedStateNumber;
    unsigned short uwPreviousFrame;
    unsigned short u16PreviousStateNumber;
    unsigned short u16TmpStateId;
    unsigned short wSO_Number;
    unsigned char ucMode;
    unsigned char ucIndex;
    short wSO_Number;
    unsigned short uwBlockId;
    short wSO_Number;
    unsigned int ulCurrentBits;
    unsigned int ulMask;
    unsigned char bSetOrClear;
    unsigned char ucBitIndex;
    short wSO_Number;
    char* pcNewPosition;
    unsigned char bActivate;
    unsigned char ucCharIndex;
    unsigned char ucListIndex;
    /* aggregate */ int stPosition;
    short* param0;
    short a3_fCompressedVector[3];
    unsigned char ucListIndex;
    unsigned char u8Max;
    short wSO_Number;
    unsigned short u16SubAnim;
    short wSO_Number;
    unsigned int ulLoop;
    unsigned char bMerge;
    short s16Frame;
    unsigned short u16LoopAndFlags;
    unsigned short u16SubAnim;
    short wSO_Number;
    /* aggregate */ int stTranslationVector;
    short wSO_Number;
    /* aggregate */ int stRotationMatrix;
    short s16CompressedFloat;
    unsigned short u16Type;
    short wSO_Number;
    /* aggregate */ int stTranslationVector;
    short wSO_Number;
    short bOnlyLocal;
    short bLocal;
    short wSO_Number;
    short bOnOff;
    short wSO_Number;
    GEO_tdstColor_ stColor;
    short wSO_Number;
    int bFrameMode;
    int iStringNumber;
    int iStringNumber;
    int iStringNumber;
    unsigned int ulTransparence;
    int iStringNumber;
    unsigned int ulBlue;
    unsigned int ulGreen;
    unsigned int ulRed;
    int iStringNumber;
    char* szTableString;
    int hText;
    int NumeroVp;
    float xParameter;
    char* p_szString;
    unsigned int ulStringLen;
    /* aggregate */ int stPosition;
    int iStringNumber;
    unsigned char ucObj2;
    unsigned char ucObj1;
    short wSO_Number;
    unsigned short uwFamilyIndex;
    unsigned short uwTableIndex;
    short wSO_Number;
    int i;
    unsigned short uwTableIndex;
    short wSO_Number;
    unsigned int ulFlag;
    short wSO_Number;
    unsigned char ucSet;
    unsigned int ulMask;
    unsigned int ulFlags;
    unsigned int ulFlagId;
    short wSO_Number;
    float x3;
    float x2;
    float x1;
    /* aggregate */ int stV;
    int l3;
    int l2;
    int l1;
    char cChar;
    unsigned char ucSubCommand;
    int temposwitch;
    short wSO_Number;
    int lSoundObjetType;
    _SND_tduRefEvt uRefEvt;
    int iTranslatedAGOHandle;
    int iAGOHandle;
    int iTranslatedAGOHandle;
    unsigned short uwShort;
    short* param0;
    short a3_fCompressedVector[3];
    unsigned short uwBlockId;
    /* aggregate */ int stDirection;
    /* aggregate */ int stPosition;
    unsigned int PartType;
    /* aggregate */ int stTranslationVector;
    /* aggregate */ int stCompressedTransform;
    unsigned char ucChannelNumber;
    unsigned short wSO_Number;
    int lValue;
    unsigned char ucChannelNumber;
    unsigned short wSO_Number;
    unsigned char ucTransparencyValue;
    unsigned char ucChannelNumber;
    unsigned short wSO_Number;
    unsigned char a10_ucParam[10];
    char szOutputMsg[8];
    char* pcFormerNewPosition;
    /* line map: */
    /*   line 4627 @ +0x000 */
    /*   line 4627 @ +0x000 */
    /*   line 4640 @ +0x000 */
    /*   line 4639 @ +0x000 */
    /*   line 4640 @ +0x000 */
    /*   line 4648 @ +0x000 */
    /*   line 4658 @ +0x000 */
    /*   line 4658 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 2027–2029 */
/* addr: 0x00286090  size: 48 bytes */
void DEMO_fn_vSetMapToLoadWhenDemoFinished(char* _szMapName)
{
    /* line map: */
    /*   line 2027 @ +0x000 */
    /*   line 2027 @ +0x000 */
    /*   line 2029 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002860c0  size: 8 bytes */
void DEMO_fn_vSetTestInputDuringDemo(int _bTestInput)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1964–1966 */
/* addr: 0x002860d0  size: 176 bytes */
void DEMO_fn_vLoadDemoIfNeeded(void)
{
    /* line map: */
    /*   line 1964 @ +0x000 */
    /*   line 1966 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1957–1959 */
/* addr: 0x00286180  size: 44 bytes */
void DEMO_fn_vAskToLoadDemo(char* pcDemoName)
{
    /* line map: */
    /*   line 1957 @ +0x000 */
    /*   line 1957 @ +0x000 */
    /*   line 1959 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1878–1921 */
/* addr: 0x002861b0  size: 168 bytes */
void DEMO_fn_vLoadFromFile(char* szDemoName)
{
    unsigned int Length;
    char* p_cFilename;
    char szFilename[256];
    /* line map: */
    /*   line 1878 @ +0x000 */
    /*   line 1884 @ +0x000 */
    /*   line 1891 @ +0x000 */
    /*   line 1896 @ +0x000 */
    /*   line 1896 @ +0x000 */
    /*   line 1899 @ +0x000 */
    /*   line 1921 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1801–1801 */
/* addr: 0x00286260  size: 16 bytes */
void DEMO_fn_pcGetAddressForEventOffset(unsigned int u32Offset)
{
    /* line map: */
    /*   line 1801 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1795–1795 */
/* addr: 0x00286270  size: 20 bytes */
unsigned int DEMO_fn_u32GetCurrentEventOffset(void)
{
    /* line map: */
    /*   line 1795 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1741–1780 */
/* addr: 0x00286290  size: 296 bytes */
void DEMO_fn_pcBuildDemoPath(char* szFilename)
{
    char ax_cName[256];
    char* p_cFilename;
    int lSubMapNumber;
    /* line map: */
    /*   line 1741 @ +0x000 */
    /*   line 1745 @ +0x000 */
    /*   line 1749 @ +0x000 */
    /*   line 1760 @ +0x000 */
    /*   line 1762 @ +0x000 */
    /*   line 1768 @ +0x000 */
    /*   line 1771 @ +0x000 */
    /*   line 1780 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002863c0  size: 8 bytes */
void DEMO_fn_vCloseFirstInit(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1368–1372 */
/* addr: 0x002863d0  size: 60 bytes */
void DEMO_fn_vPrepareForRead(int _iNbFramesToWait)
{
    /* line map: */
    /*   line 1368 @ +0x000 */
    /*   line 1369 @ +0x000 */
    /*   line 1372 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1324–1364 */
/* addr: 0x00286410  size: 204 bytes */
void DEMO_fn_vPrepareForReadNow(void)
{
    /* aggregate */ int stDir;
    /* aggregate */ int stPos;
    /* line map: */
    /*   line 1324 @ +0x000 */
    /*   line 1324 @ +0x000 */
    /*   line 1339 @ +0x000 */
    /*   line 1339 @ +0x000 */
    /*   line 1340 @ +0x000 */
    /*   line 1340 @ +0x000 */
    /*   line 1338 @ +0x000 */
    /*   line 1327 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 1266–1266 */
/* addr: 0x002864e0  size: 16 bytes */
void DEMO_fn_vAllocateMemory(void)
{
    /* line map: */
    /*   line 1266 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 892–1066 */
/* addr: 0x002864f0  size: 4600 bytes */
void fn_vDemoReadCompressedTransform(/* function pointer */ int _p_stCompressedTransform, /* function pointer */ int p_stVector, /* function pointer */ int p_stVector)
{
    /* aggregate */ int stMatrix;
    /* aggregate */ int stMatrix;
    unsigned short uwFormerType;
    short* p_coef;
    /* line map: */
    /*   line 892 @ +0x000 */
    /*   line 892 @ +0x000 */
    /*   line 892 @ +0x000 */
    /*   line 901 @ +0x000 */
    /*   line 909 @ +0x000 */
    /*   line 914 @ +0x000 */
    /*   line 914 @ +0x000 */
    /*   line 918 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\Demos.c lines 440–482 */
/* addr: 0x002876f0  size: 72 bytes */
float fn_fUncompressNumber(short n)
{
    unsigned int mantissa;
    unsigned int expf;
    unsigned int sign_bit;
    unsigned int ulValue;
    /* line map: */
    /*   line 440 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 460 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 477 @ +0x000 */
    /*   line 482 @ +0x000 */
    /* TODO: decompile from asm/... */
}
