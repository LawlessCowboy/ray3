/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstArray_ tdstArray_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstList_ tdstList_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstState_ tdstState_;
typedef struct stTfmtStatus_ stTfmtStatus_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct tdstFogParams_ tdstFogParams_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct stMACDPID stMACDPID;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstMacro_ tdstMacro_;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct _stTimerCount _stTimerCount;
typedef struct anon_2 anon_2;
typedef struct stMorphData stMorphData;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct DNM_stReport DNM_stReport;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct _stMenuPause _stMenuPause;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef union anon_3 anon_3;
typedef union RGBAStruct_ RGBAStruct_;
typedef struct anon_4 anon_4;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct MTH_stMove MTH_stMove;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;

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

struct tdstGetSetParam_ {
    anon_6 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstArray_ {
    /* aggregate */ int eType; /* +0x0 */
    unsigned char ucMaxSize; /* +0x4 */
    /* array */ int d_ArrayElement[255]; /* +0x8 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
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

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
};

struct tdstBrain_ {
    int p_stMind; /* +0x0 */
    int hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct DNM_stDynamics {
    /* aggregate */ int m_tdstDynamicsBaseBlock; /* +0x0 */
    /* aggregate */ int m_tdstDynamicsAdvancedBlock; /* +0x170 */
    /* aggregate */ int m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstList_ {
    unsigned char ucNbElt; /* +0x0 */
    unsigned char ucMaxSize; /* +0x1 */
    int p_hTabElt; /* +0x4 */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
};

struct AI_tdstMind_ {
    int p_stAIModel; /* +0x0 */
    int p_stIntelligence; /* +0x4 */
    int p_stReflex; /* +0x8 */
    int p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct stTfmtStatus_ {
    float xScreenWidth; /* +0x0 */
    float xBaseCharX; /* +0x4 */
    float xBaseCharZ; /* +0x8 */
    float xBaseToAddX; /* +0xc */
    float xRandomPosRadius; /* +0x10 */
    float xCharWidth; /* +0x14 */
    float xLineHeight; /* +0x18 */
    float xCharZoom; /* +0x1c */
    float xCurCharZoom; /* +0x20 */
    float xCurCharWidth; /* +0x24 */
    int hSourceObjectTable; /* +0x28 */
    char cJustificationMode; /* +0x2c */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct tdstFogParams_ {
    float xDepthStart; /* +0x0 */
    float xDepthEnd; /* +0x4 */
    float xInfinite; /* +0x8 */
    float xBlendStart; /* +0xc */
    float xBlendEnd; /* +0x10 */
    GEO_tdstColor_ stColor; /* +0x14 */
};

struct tdstDsgVar_ {
    int p_cDsgMemDefaultInit; /* +0x0 */
    int p_stDsgVarInfo; /* +0x4 */
    unsigned int ulSize; /* +0x8 */
    unsigned char ucNbDsgVar; /* +0xc */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

union GEO_tduVSObject_ {
    int p_stGeometricObject; /* +0x0 */
    int p_stMorphObject; /* +0x0 */
};

struct tdstMacro_ {
    int p_stInitTree; /* +0x0 */
    int p_stCurrentTree; /* +0x4 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
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

struct CINE_tdstCine_ {
    /* aggregate */ int hActorList; /* +0x0 */
    int hNextBrotherDyn; /* +0xc */
    int hPrevBrotherDyn; /* +0x10 */
    int hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstListOfMacro_ {
    int p_stMacro; /* +0x0 */
    unsigned char ucNbMacro; /* +0x4 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
};

struct anon_2 {
    int iMagicPoints4Ray; /* +0x0 */
    int iMagicPointsMax4Ray; /* +0x4 */
    float xAirPoints4Ray; /* +0x8 */
    float xAirPointsMax4Ray; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct _stMenuPause {
    int pauseEnabled; /* +0x0 */
    int lIAmInTheInventory; /* +0x4 */
    int NumeroVp; /* +0x8 */
    float xXXXTransparency; /* +0xc */
    unsigned int ulTimer; /* +0x10 */
    int iVmsStringNumber; /* +0x14 */
    /* aggregate */ int stVmsPosition; /* +0x18 */
    float xVmsParameterInit; /* +0x24 */
    float xVmsParameter; /* +0x28 */
    int pszVmsString; /* +0x2c */
    char szVmsStringToDraw[256]; /* +0x30 */
    long lVmsPad; /* +0x130 */
    int iPadStringNumber; /* +0x138 */
    /* aggregate */ int stPadPosition; /* +0x13c */
    float xPadParameterInit; /* +0x148 */
    float xPadParameter; /* +0x14c */
    char pszPadString[256]; /* +0x150 */
    char szPadStringToDraw[256]; /* +0x250 */
    int pszMultitapString; /* +0x350 */
    int iDemoStringNumber; /* +0x354 */
    /* aggregate */ int stDemoPosition; /* +0x358 */
    float xDemoParameterInit; /* +0x364 */
    float xDemoParameter; /* +0x368 */
    int pszDemoString; /* +0x36c */
    char szDemoStringToDraw[256]; /* +0x370 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

union anon_3 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
};

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

struct anon_4 {
    int hPersoToMove; /* +0x0 */
    int hRefPerso; /* +0x4 */
    unsigned char ucRefChannel; /* +0x8 */
    /* aggregate */ int stShift; /* +0xc */
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

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct anon_5 {
    int hPerso; /* +0x0 */
    /* aggregate */ int stImposedAxis; /* +0x4 */
    /* aggregate */ int stProposedAxis; /* +0x10 */
    unsigned short uwMode; /* +0x1c */
    unsigned char bGlobalVectors; /* +0x1e */
};

struct anon_6 {
    /* aggregate */ int uParam; /* +0x0 */
};

unsigned char AI_g_ucLastMarioPadUsed;
unsigned char g_DoAutoSaveWhenChangeMap;
char TEXT_gc_ViewportFixed;
unsigned int g_bNoInterpolationForThisSPOMove;
unsigned int g_lNbListOfCheapCharacterList;
unsigned char g_bNoSpeedForIntermAnim;
int iNumLoop;
int AGO_g_SuperObjectForAGOs;
unsigned char g_bInGameMenu;
int g_PauseStringNumber;
/* aggregate */ int GlobalLoopInit;
/* aggregate */ int GlobalLoopTree;
int GlobalLoopCpt[50];
/* array */ int g_aListOfCheapCharacterList[10];
float TEXT_gaf_FloatParameters[10];
int TEXT_gai_IntParameters[10];
static unsigned short AI_gs_uwNbrBatchOrder;
static /* array */ int AI_gs_a_stBatchSetPersoTab[20];
_stMenuPause myMenuPause;
int g_iFalseTime;
int MC_ManagmentState;
int GLI_g_bWideScreenMode;
/* aggregate */ int g_stEngineStructure;
char g_CurrentSaveName;
unsigned short GAM_g_uwLoadingLevel;
int bChangedGamedataDirectory;
unsigned char g_bSectorDisplayPriorityFixed;
unsigned char g_a4_ucSectorDisplayPriority[4];
signed char INO_aJoyUsedByAI;
/* array */ int g_axPadMapping;
int g_GameHasNotStartedTheFirstBootCheck;
int AGO_g_iIndexOfClippedSprite;
int HIE_gs_lCurrentFrame;
int (*fni_CompareFloatLess)(void*, void*);
int (*fni_CompareFloatGreater)(void*, void*);
int (*fni_CompareIntegerLess)(void*, void*);
int (*fni_CompareIntegerGreater)(void*, void*);
anon_2 stExtendDatas4Ray;
float MEC_g_xClimbSpeedLimit;
int COLANTIBUG_hHandleOfCharacter;
float MEC_g_xWalkCoeff;
float MEC_g_xBaseCoeff;
char GLI_cGlobalFogIsOn;
unsigned char GLI_g_bSaveFog;
tdstFogParams_ GLI_g_stSaveFog;
float GLI_xFogBlendFar;
float GLI_xFogBlendNear;
float GLI_xFogInfinite;
float GLI_xFogFar;
float GLI_xFogNear;
GEO_tdstColor_ GLI_stFogColor;
int gp_stDynamicWorld;
unsigned char g_ucUseDefaultActionReturn;
unsigned char g_ucNewActionReturn;
char SAV2_g_LevelNameToSave[20];
int GLI_g_PerformAutosaveAfterVideo;
unsigned int g_ulOverRideRayTraceSpoMask;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 107–185 */
/* addr: 0x00223710  size: 704 bytes */
void fn_p_stScalarOperator(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char ucIsThereFloat;
    /* aggregate */ int eOperatorId;
    tdstGetSetParam_ stParam2;
    /* line map: */
    /*   line 111 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 118 @ +0x000 */
    /*   line 124 @ +0x000 */
    /*   line 132 @ +0x000 */
    /*   line 138 @ +0x000 */
    /*   line 142 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6955–6964 */
/* addr: 0x002239d0  size: 148 bytes */
void fn_p_stAllowNormalsRecomputing(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6955 @ +0x000 */
    /*   line 6955 @ +0x000 */
    /*   line 6955 @ +0x000 */
    /*   line 6958 @ +0x000 */
    /*   line 6963 @ +0x000 */
    /*   line 6964 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6917–6940 */
/* addr: 0x00223a70  size: 172 bytes */
void fn_p_st2DMenuProcedure(/* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6919 @ +0x000 */
    /*   line 6917 @ +0x000 */
    /*   line 6922 @ +0x000 */
    /*   line 6925 @ +0x000 */
    /*   line 6928 @ +0x000 */
    /*   line 6931 @ +0x000 */
    /*   line 6934 @ +0x000 */
    /*   line 6940 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00223b20  size: 8 bytes */
void fn_p_stGcResetToIpl(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6879–6879 */
/* addr: 0x00223b30  size: 28 bytes */
/*type_0x00*/ int fn_p_stGcSetActiveMcSlot(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6879 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6857–6866 */
/* addr: 0x00223b50  size: 72 bytes */
void fn_p_stSFX_ActivateWaterCircles(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6857 @ +0x000 */
    /*   line 6857 @ +0x000 */
    /*   line 6866 @ +0x000 */
    /*   line 6866 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6839–6848 */
/* addr: 0x00223ba0  size: 72 bytes */
void fn_p_stSFX_ActivateLightReflection(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6839 @ +0x000 */
    /*   line 6839 @ +0x000 */
    /*   line 6848 @ +0x000 */
    /*   line 6848 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6761–6777 */
/* addr: 0x00223bf0  size: 112 bytes */
void fn_p_stWaterEffect_GenerateSplash(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6761 @ +0x000 */
    /*   line 6761 @ +0x000 */
    /*   line 6769 @ +0x000 */
    /*   line 6777 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6742–6742 */
/* addr: 0x00223c60  size: 28 bytes */
void fn_p_stWaterEffect_GenerateImpulse(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6742 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6720–6733 */
/* addr: 0x00223c80  size: 128 bytes */
void fn_p_stWaterEffect_SetRandomPerturbationGeneration(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6720 @ +0x000 */
    /*   line 6720 @ +0x000 */
    /*   line 6720 @ +0x000 */
    /*   line 6724 @ +0x000 */
    /*   line 6733 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6651–6693 */
/* addr: 0x00223d00  size: 112 bytes */
void fn_p_stSetCurrentValueAsInit(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 6651 @ +0x000 */
    /*   line 6693 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6613–6629 */
/* addr: 0x00223d70  size: 60 bytes */
void fn_p_stDemoProc(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6617 @ +0x000 */
    /*   line 6613 @ +0x000 */
    /*   line 6620 @ +0x000 */
    /*   line 6629 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6592–6609 */
/* addr: 0x00223db0  size: 68 bytes */
void fn_p_stBulletTimeProc(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6596 @ +0x000 */
    /*   line 6592 @ +0x000 */
    /*   line 6599 @ +0x000 */
    /*   line 6609 @ +0x000 */
    /*   line 6609 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6570–6588 */
/* addr: 0x00223e00  size: 68 bytes */
void fn_p_stMCProc(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6575 @ +0x000 */
    /*   line 6570 @ +0x000 */
    /*   line 6578 @ +0x000 */
    /*   line 6588 @ +0x000 */
    /*   line 6588 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6520–6564 */
/* addr: 0x00223e50  size: 148 bytes */
void fn_p_stScreenProc(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6523 @ +0x000 */
    /*   line 6520 @ +0x000 */
    /*   line 6527 @ +0x000 */
    /*   line 6534 @ +0x000 */
    /*   line 6542 @ +0x000 */
    /*   line 6542 @ +0x000 */
    /*   line 6549 @ +0x000 */
    /*   line 6564 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6499–6509 */
/* addr: 0x00223ef0  size: 96 bytes */
void fn_p_stAddMemoryCardString(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    char* pszString;
    int pos;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6499 @ +0x000 */
    /*   line 6499 @ +0x000 */
    /*   line 6499 @ +0x000 */
    /*   line 6503 @ +0x000 */
    /*   line 6506 @ +0x000 */
    /*   line 6509 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6479–6489 */
/* addr: 0x00223f50  size: 52 bytes */
void fn_p_stValidateMemoryCard(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6479 @ +0x000 */
    /*   line 6489 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6462–6470 */
/* addr: 0x00223f90  size: 140 bytes */
void fn_p_stTobySetMaterial(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6462 @ +0x000 */
    /*   line 6462 @ +0x000 */
    /*   line 6462 @ +0x000 */
    /*   line 6466 @ +0x000 */
    /*   line 6466 @ +0x000 */
    /*   line 6470 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6449–6454 */
/* addr: 0x00224020  size: 108 bytes */
void fn_p_stTobyDestroy(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6449 @ +0x000 */
    /*   line 6449 @ +0x000 */
    /*   line 6449 @ +0x000 */
    /*   line 6452 @ +0x000 */
    /*   line 6454 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6432–6440 */
/* addr: 0x00224090  size: 140 bytes */
void fn_p_stTobySetTransparency(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6432 @ +0x000 */
    /*   line 6432 @ +0x000 */
    /*   line 6432 @ +0x000 */
    /*   line 6435 @ +0x000 */
    /*   line 6435 @ +0x000 */
    /*   line 6440 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6412–6423 */
/* addr: 0x00224120  size: 200 bytes */
void fn_p_stAddSegmentToToby(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int stPt2;
    /* aggregate */ int stPt1;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6412 @ +0x000 */
    /*   line 6412 @ +0x000 */
    /*   line 6412 @ +0x000 */
    /*   line 6415 @ +0x000 */
    /*   line 6418 @ +0x000 */
    /*   line 6418 @ +0x000 */
    /*   line 6418 @ +0x000 */
    /*   line 6421 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6394–6403 */
/* addr: 0x002241f0  size: 208 bytes */
void fn_p_stCreateToby(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    long ID;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6394 @ +0x000 */
    /*   line 6394 @ +0x000 */
    /*   line 6394 @ +0x000 */
    /*   line 6397 @ +0x000 */
    /*   line 6397 @ +0x000 */
    /*   line 6400 @ +0x000 */
    /*   line 6403 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6381–6383 */
/* addr: 0x002242c0  size: 104 bytes */
void fn_p_stMonitoringStop(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6381 @ +0x000 */
    /*   line 6381 @ +0x000 */
    /*   line 6381 @ +0x000 */
    /*   line 6383 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6372–6374 */
/* addr: 0x00224330  size: 104 bytes */
void fn_p_stMonitoringStart(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6372 @ +0x000 */
    /*   line 6372 @ +0x000 */
    /*   line 6372 @ +0x000 */
    /*   line 6374 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6349–6364 */
/* addr: 0x002243a0  size: 84 bytes */
void fn_p_stHandleActorDynamicLoad(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stEngineObject)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6349 @ +0x000 */
    /*   line 6355 @ +0x000 */
    /*   line 6364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6327–6342 */
/* addr: 0x00224400  size: 84 bytes */
void fn_p_stHandleFamilyDynamicLoad(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hFamily)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6327 @ +0x000 */
    /*   line 6333 @ +0x000 */
    /*   line 6342 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6241–6320 */
/* addr: 0x00224460  size: 460 bytes */
void fn_p_stFFBProcedures(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    unsigned int ulCurrentTime;
    unsigned char ucPadNumber;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6244 @ +0x000 */
    /*   line 6246 @ +0x000 */
    /*   line 6241 @ +0x000 */
    /*   line 6246 @ +0x000 */
    /*   line 6252 @ +0x000 */
    /*   line 6256 @ +0x000 */
    /*   line 6262 @ +0x000 */
    /*   line 6262 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00224630  size: 8 bytes */
void fn_p_stLogFileProcedure(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6144–6158 */
/* addr: 0x00224640  size: 88 bytes */
void fn_p_stPortalActivationProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int param2)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 6144 @ +0x000 */
    /*   line 6150 @ +0x000 */
    /*   line 6158 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 6104–6138 */
/* addr: 0x002246a0  size: 172 bytes */
void fn_p_stSCT_UltraProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 6104 @ +0x000 */
    /*   line 6115 @ +0x000 */
    /*   line 6121 @ +0x000 */
    /*   line 6127 @ +0x000 */
    /*   line 6138 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5900–6099 */
/* addr: 0x00224750  size: 1500 bytes */
void fn_p_stSAV2SaveProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int p_stResultOwnerPerso, tdstArray_* p_stArray, AI_tdstMind_* p_stMind)
{
    /* aggregate */ int eDataType;
    unsigned int ulMyVarSize;
    unsigned char ucArrayId;
    unsigned int i;
    unsigned char bSave;
    unsigned char bStatic;
    /* aggregate */ int ucType;
    char* p_szElementOptions;
    char* p_szElementName;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5916 @ +0x000 */
    /*   line 5902 @ +0x000 */
    /*   line 5900 @ +0x000 */
    /*   line 5922 @ +0x000 */
    /*   line 5926 @ +0x000 */
    /*   line 5931 @ +0x000 */
    /*   line 5931 @ +0x000 */
    /*   line 5933 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5873–5888 */
/* addr: 0x00224d30  size: 84 bytes */
void fn_p_stDoNotLoadTextures(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 5873 @ +0x000 */
    /*   line 5877 @ +0x000 */
    /*   line 5888 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5852–5866 */
/* addr: 0x00224d90  size: 96 bytes */
void fn_p_stSetGameMode(/* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5852 @ +0x000 */
    /*   line 5856 @ +0x000 */
    /*   line 5859 @ +0x000 */
    /*   line 5866 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5815–5845 */
/* addr: 0x00224df0  size: 92 bytes */
void fn_p_stDataPath(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    char* pszChar;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5819 @ +0x000 */
    /*   line 5815 @ +0x000 */
    /*   line 5823 @ +0x000 */
    /*   line 5826 @ +0x000 */
    /*   line 5836 @ +0x000 */
    /*   line 5845 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5774–5800 */
/* addr: 0x00224e50  size: 200 bytes */
void fn_p_stLoadingLevel(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5778 @ +0x000 */
    /*   line 5774 @ +0x000 */
    /*   line 5782 @ +0x000 */
    /*   line 5782 @ +0x000 */
    /*   line 5785 @ +0x000 */
    /*   line 5789 @ +0x000 */
    /*   line 5792 @ +0x000 */
    /*   line 5800 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5727–5767 */
/* addr: 0x00224f20  size: 196 bytes */
void fn_p_stStartCine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, CINE_tdstCine_* hCine)
{
    /* aggregate */ int eProcedureId;
    char* p_szString;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5729 @ +0x000 */
    /*   line 5727 @ +0x000 */
    /*   line 5732 @ +0x000 */
    /*   line 5735 @ +0x000 */
    /*   line 5737 @ +0x000 */
    /*   line 5741 @ +0x000 */
    /*   line 5744 @ +0x000 */
    /*   line 5747 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5710–5713 */
/* addr: 0x00224ff0  size: 40 bytes */
void fn_p_stEndTransitionProcedure(/* function pointer */ int p_stTree)
{
    /* line map: */
    /*   line 5710 @ +0x000 */
    /*   line 5713 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5668–5683 */
/* addr: 0x00225020  size: 92 bytes */
void fn_p_stDisplaySegment(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5676 @ +0x000 */
    /*   line 5668 @ +0x000 */
    /*   line 5679 @ +0x000 */
    /*   line 5683 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5640–5663 */
/* addr: 0x00225080  size: 100 bytes */
void fn_p_stBrainActivationProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstBrain_* h_Brain)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5640 @ +0x000 */
    /*   line 5640 @ +0x000 */
    /*   line 5644 @ +0x000 */
    /*   line 5648 @ +0x000 */
    /*   line 5663 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5618–5627 */
/* addr: 0x002250f0  size: 96 bytes */
void fn_p_stSetVSyncWait(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5621 @ +0x000 */
    /*   line 5618 @ +0x000 */
    /*   line 5624 @ +0x000 */
    /*   line 5624 @ +0x000 */
    /*   line 5627 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5569–5600 */
/* addr: 0x00225150  size: 432 bytes */
void fn_p_stVideoProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    char cCanInterrupt;
    char* p_szVideoName;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5571 @ +0x000 */
    /*   line 5569 @ +0x000 */
    /*   line 5574 @ +0x000 */
    /*   line 5576 @ +0x000 */
    /*   line 5576 @ +0x000 */
    /*   line 5578 @ +0x000 */
    /*   line 5578 @ +0x000 */
    /*   line 5583 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5515–5549 */
/* addr: 0x00225300  size: 608 bytes */
void fn_p_stRLIProcedure2(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    unsigned int ulDuration;
    unsigned char ucValue;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 5517 @ +0x000 */
    /*   line 5515 @ +0x000 */
    /*   line 5520 @ +0x000 */
    /*   line 5520 @ +0x000 */
    /*   line 5522 @ +0x000 */
    /*   line 5524 @ +0x000 */
    /*   line 5524 @ +0x000 */
    /*   line 5527 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5359–5485 */
/* addr: 0x00225560  size: 948 bytes */
void fn_p_stMultiPlayerProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    unsigned int a2_ulPos[2];
    unsigned int a2_ulSize[2];
    unsigned char ucVpNum;
    unsigned char unNumberOfColumns;
    unsigned char ucNumberOfPlayers;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5364 @ +0x000 */
    /*   line 5359 @ +0x000 */
    /*   line 5368 @ +0x000 */
    /*   line 5373 @ +0x000 */
    /*   line 5382 @ +0x000 */
    /*   line 5384 @ +0x000 */
    /*   line 5387 @ +0x000 */
    /*   line 5387 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5308–5332 */
/* addr: 0x00225920  size: 512 bytes */
void fn_p_stJFFTXTGetBdBox(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int p_stResultOwnerPerso)
{
    int* x2;
    int* y1f;
    int* x1;
    tdstGetSetParam_ stParam;
    long StringNumber;
    unsigned char ucVarId;
    /* line map: */
    /*   line 5308 @ +0x000 */
    /*   line 5308 @ +0x000 */
    /*   line 5308 @ +0x000 */
    /*   line 5317 @ +0x000 */
    /*   line 5312 @ +0x000 */
    /*   line 5317 @ +0x000 */
    /*   line 5317 @ +0x000 */
    /*   line 5319 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5208–5280 */
/* addr: 0x00225b20  size: 328 bytes */
void fn_p_stJFFTXTSettings(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    unsigned long ulGreen;
    unsigned long ulRed;
    int StringNumber;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 5213 @ +0x000 */
    /*   line 5208 @ +0x000 */
    /*   line 5214 @ +0x000 */
    /*   line 5222 @ +0x000 */
    /*   line 5224 @ +0x000 */
    /*   line 5226 @ +0x000 */
    /*   line 5226 @ +0x000 */
    /*   line 5234 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5198–5202 */
/* addr: 0x00225c70  size: 68 bytes */
void fn_vSetMenuPausePad(void)
{
    /* line map: */
    /*   line 5198 @ +0x000 */
    /*   line 5200 @ +0x000 */
    /*   line 5200 @ +0x000 */
    /*   line 5200 @ +0x000 */
    /*   line 5202 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 5037–5186 */
/* addr: 0x00225cc0  size: 1188 bytes */
void fn_vTXTAffichePause(int _lVMSOrPad, int DeconenctedPadId)
{
    char PadStr[4];
    unsigned int ulTimer;
    char cPort;
    long lPad;
    /* line map: */
    /*   line 5037 @ +0x000 */
    /*   line 5037 @ +0x000 */
    /*   line 5037 @ +0x000 */
    /*   line 5037 @ +0x000 */
    /*   line 5037 @ +0x000 */
    /*   line 5044 @ +0x000 */
    /*   line 5047 @ +0x000 */
    /*   line 5051 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4976–5026 */
/* addr: 0x00226170  size: 428 bytes */
void PS2_fn_vSetControllerMessage(void)
{
    /* line map: */
    /*   line 4976 @ +0x000 */
    /*   line 4981 @ +0x000 */
    /*   line 4984 @ +0x000 */
    /*   line 4988 @ +0x000 */
    /*   line 4994 @ +0x000 */
    /*   line 4997 @ +0x000 */
    /*   line 5003 @ +0x000 */
    /*   line 5007 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4530–4954 */
/* addr: 0x00226320  size: 2892 bytes */
void fn_p_stJFFTXTProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int Position;
    float xSqDistance;
    /* aggregate */ int stOffset;
    float xFar;
    float xNear;
    float xSize;
    int NumeroVp;
    /* aggregate */ int stOffset;
    int NumeroVp;
    int NumeroVp;
    char* pszString;
    int ID;
    float xParameter;
    /* aggregate */ int stPosition;
    int StringNumber;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 4545 @ +0x000 */
    /*   line 4530 @ +0x000 */
    /*   line 4552 @ +0x000 */
    /*   line 4552 @ +0x000 */
    /*   line 4556 @ +0x000 */
    /*   line 4560 @ +0x000 */
    /*   line 4561 @ +0x000 */
    /*   line 4562 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00226e70  size: 8 bytes */
void fn_p_stCheatCodeProcedure(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4451–4473 */
/* addr: 0x00226e80  size: 140 bytes */
void fn_p_stInGameMenuProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    unsigned char s_ucPreviousNumberOfColumns;
    unsigned char s_ucPreviousNumberOfPlayers;
    /* line map: */
    /*   line 4455 @ +0x000 */
    /*   line 4451 @ +0x000 */
    /*   line 4458 @ +0x000 */
    /*   line 4462 @ +0x000 */
    /*   line 4464 @ +0x000 */
    /*   line 4464 @ +0x000 */
    /*   line 4466 @ +0x000 */
    /*   line 4473 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4391–4421 */
/* addr: 0x00226f10  size: 84 bytes */
void fn_p_stTakePictureProcedure(/* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 4393 @ +0x000 */
    /*   line 4391 @ +0x000 */
    /*   line 4398 @ +0x000 */
    /*   line 4421 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 4013–4365 */
/* addr: 0x00226f70  size: 2532 bytes */
void fn_p_stAGOProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hVisualMaterial, /* function pointer */ int hVisualMaterial1, /* function pointer */ int hVisualMaterial)
{
    /* aggregate */ int stDirection;
    /* aggregate */ int stPosition;
    unsigned int dwPartNumber;
    tdstGetSetParam_ stParam;
    float fRate;
    int lBottom;
    int lLeft;
    int lTop;
    char* p_ucFilenameOrMemoryAddress;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect1;
    int NumeroBitmap;
    int NumeroVp;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect1;
    int NumeroGauge;
    int NumeroVp;
    /* aggregate */ int stVect2;
    /* aggregate */ int stVect1;
    int NumeroIcone;
    int NumeroVp;
    unsigned int PartType;
    /* aggregate */ int stDirection;
    /* aggregate */ int stPosition;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 4021 @ +0x000 */
    /*   line 4013 @ +0x000 */
    /*   line 4032 @ +0x000 */
    /*   line 4032 @ +0x000 */
    /*   line 4036 @ +0x000 */
    /*   line 4040 @ +0x000 */
    /*   line 4042 @ +0x000 */
    /*   line 4040 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3963–3967 */
/* addr: 0x00227960  size: 56 bytes */
void fn_p_stDummy(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 3964 @ +0x000 */
    /*   line 3963 @ +0x000 */
    /*   line 3967 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3934–3949 */
/* addr: 0x002279a0  size: 120 bytes */
void fn_p_stBreakKeyword(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int lValue;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 3934 @ +0x000 */
    /*   line 3942 @ +0x000 */
    /*   line 3946 @ +0x000 */
    /*   line 3949 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3919–3925 */
/* addr: 0x00227a20  size: 96 bytes */
void fn_p_stEndLoopKeyWord(/* function pointer */ int p_stTree)
{
    /* line map: */
    /*   line 3919 @ +0x000 */
    /*   line 3922 @ +0x000 */
    /*   line 3925 @ +0x000 */
    /*   line 3925 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3900–3914 */
/* addr: 0x00227a80  size: 148 bytes */
void fn_p_stLoopKeyWord(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stTreeInit)
{
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 3904 @ +0x000 */
    /*   line 3904 @ +0x000 */
    /*   line 3906 @ +0x000 */
    /*   line 3900 @ +0x000 */
    /*   line 3906 @ +0x000 */
    /*   line 3908 @ +0x000 */
    /*   line 3911 @ +0x000 */
    /*   line 3914 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3860–3892 */
/* addr: 0x00227b20  size: 152 bytes */
void fn_p_stSkipLoop(/* function pointer */ int p_stTreeInit, /* function pointer */ int p_stTree)
{
    int iLevel;
    /* line map: */
    /*   line 3860 @ +0x000 */
    /*   line 3866 @ +0x000 */
    /*   line 3875 @ +0x000 */
    /*   line 3879 @ +0x000 */
    /*   line 3882 @ +0x000 */
    /*   line 3889 @ +0x000 */
    /*   line 3892 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3804–3834 */
/* addr: 0x00227bc0  size: 216 bytes */
void fn_p_st_ACT_SetDrawFlag(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdst3dData_* h3dData, /* function pointer */ int hCharact)
{
    int lDrawMask;
    int lType;
    int lMask;
    int lBit;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3804 @ +0x000 */
    /*   line 3804 @ +0x000 */
    /*   line 3806 @ +0x000 */
    /*   line 3806 @ +0x000 */
    /*   line 3807 @ +0x000 */
    /*   line 3812 @ +0x000 */
    /*   line 3815 @ +0x000 */
    /*   line 3814 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3750–3775 */
/* addr: 0x00227ca0  size: 180 bytes */
void fn_p_st_SPO_SetEngineDisplayModeFlag(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int lType;
    int lMask;
    int lBit;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3750 @ +0x000 */
    /*   line 3750 @ +0x000 */
    /*   line 3750 @ +0x000 */
    /*   line 3752 @ +0x000 */
    /*   line 3759 @ +0x000 */
    /*   line 3762 @ +0x000 */
    /*   line 3766 @ +0x000 */
    /*   line 3775 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3668–3725 */
/* addr: 0x00227d60  size: 188 bytes */
void fn_p_st_SPO_SetDrawFlag(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hSpo)
{
    int lDrawMask;
    int lType;
    int lMask;
    int lBit;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3668 @ +0x000 */
    /*   line 3668 @ +0x000 */
    /*   line 3668 @ +0x000 */
    /*   line 3672 @ +0x000 */
    /*   line 3672 @ +0x000 */
    /*   line 3703 @ +0x000 */
    /*   line 3705 @ +0x000 */
    /*   line 3708 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3614–3641 */
/* addr: 0x00227e20  size: 216 bytes */
void fn_p_st_SinusEffect_SetState(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    char cFlag;
    char cState;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3614 @ +0x000 */
    /*   line 3614 @ +0x000 */
    /*   line 3614 @ +0x000 */
    /*   line 3619 @ +0x000 */
    /*   line 3626 @ +0x000 */
    /*   line 3629 @ +0x000 */
    /*   line 3631 @ +0x000 */
    /*   line 3634 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3540–3551 */
/* addr: 0x00227fb0  size: 128 bytes */
void fn_p_st_SinusEffect_SetAmplitude(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int stAmp;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3540 @ +0x000 */
    /*   line 3543 @ +0x000 */
    /*   line 3542 @ +0x000 */
    /*   line 3542 @ +0x000 */
    /*   line 3542 @ +0x000 */
    /*   line 3544 @ +0x000 */
    /*   line 3551 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3506–3518 */
/* addr: 0x00228030  size: 120 bytes */
void fn_p_st_SinusEffect_SetPreMultiplier(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    float Y;
    float X;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3506 @ +0x000 */
    /*   line 3506 @ +0x000 */
    /*   line 3506 @ +0x000 */
    /*   line 3510 @ +0x000 */
    /*   line 3515 @ +0x000 */
    /*   line 3515 @ +0x000 */
    /*   line 3518 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3448–3482 */
/* addr: 0x002280b0  size: 264 bytes */
void fn_p_st_SinusEffect_SetFreq(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int lZFreq;
    int lYFreq;
    int lXFreq;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 3453 @ +0x000 */
    /*   line 3448 @ +0x000 */
    /*   line 3454 @ +0x000 */
    /*   line 3455 @ +0x000 */
    /*   line 3455 @ +0x000 */
    /*   line 3460 @ +0x000 */
    /*   line 3460 @ +0x000 */
    /*   line 3466 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3353–3383 */
/* addr: 0x002281c0  size: 112 bytes */
void fn_p_stMenuAndVignetteProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    char* p_szString;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 3358 @ +0x000 */
    /*   line 3353 @ +0x000 */
    /*   line 3361 @ +0x000 */
    /*   line 3364 @ +0x000 */
    /*   line 3371 @ +0x000 */
    /*   line 3383 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3230–3347 */
/* addr: 0x00228230  size: 888 bytes */
void fn_p_stVisualMaterialProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stTreeOrg, /* function pointer */ int hVisualMaterial)
{
    int lValue;
    GEO_tdstColor_ stColor;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 3239 @ +0x000 */
    /*   line 3233 @ +0x000 */
    /*   line 3230 @ +0x000 */
    /*   line 3240 @ +0x000 */
    /*   line 3244 @ +0x000 */
    /*   line 3251 @ +0x000 */
    /*   line 3254 @ +0x000 */
    /*   line 3260 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3087–3226 */
/* addr: 0x002285b0  size: 660 bytes */
void fn_p_stTransparenceProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hModule, /* function pointer */ int hNewSuperObjPerso)
{
    unsigned short uwChannelNumber;
    unsigned short uwChannelNumber;
    unsigned char bModule;
    int lValue;
    float xValue;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 3098 @ +0x000 */
    /*   line 3092 @ +0x000 */
    /*   line 3087 @ +0x000 */
    /*   line 3102 @ +0x000 */
    /*   line 3119 @ +0x000 */
    /*   line 3131 @ +0x000 */
    /*   line 3136 @ +0x000 */
    /*   line 3140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3038–3079 */
/* addr: 0x00228850  size: 436 bytes */
void fn_p_stSkinMaterialProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso, /* function pointer */ int hMaterial)
{
    short xIndex;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 3038 @ +0x000 */
    /*   line 3050 @ +0x000 */
    /*   line 3054 @ +0x000 */
    /*   line 3055 @ +0x000 */
    /*   line 3064 @ +0x000 */
    /*   line 3067 @ +0x000 */
    /*   line 3079 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 3020–3029 */
/* addr: 0x00228a10  size: 128 bytes */
void fn_vUpdateCharacterSkinList(tdst3dData_* h_3dData, /* function pointer */ int hMaterial, short _xSkinIndex)
{
    unsigned int i;
    /* line map: */
    /*   line 3020 @ +0x000 */
    /*   line 3023 @ +0x000 */
    /*   line 3026 @ +0x000 */
    /*   line 3027 @ +0x000 */
    /*   line 3027 @ +0x000 */
    /*   line 3027 @ +0x000 */
    /*   line 3029 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2936–2961 */
/* addr: 0x00228a90  size: 136 bytes */
void fn_p_stDisplayProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    /* line map: */
    /*   line 2936 @ +0x000 */
    /*   line 2946 @ +0x000 */
    /*   line 2951 @ +0x000 */
    /*   line 2961 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2904–2928 */
/* addr: 0x00228b20  size: 168 bytes */
void fn_p_stChangeActionRandomProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, tdstState_* h_WantedState)
{
    void* hIdCard;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2904 @ +0x000 */
    /*   line 2904 @ +0x000 */
    /*   line 2904 @ +0x000 */
    /*   line 2909 @ +0x000 */
    /*   line 2912 @ +0x000 */
    /*   line 2915 @ +0x000 */
    /*   line 2918 @ +0x000 */
    /*   line 2925 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2764–2894 */
/* addr: 0x00228bd0  size: 584 bytes */
void fn_p_stChangeActionProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, /* function pointer */ int hNewSuperObjPerso, tdstState_* h_WantedState)
{
    void* hIdCard;
    /* aggregate */ int eProcedureId;
    unsigned char bProportional;
    float xNLParameter;
    unsigned int ulNbFramesForMerging;
    unsigned char bHandleSkippedEventsIfRelevant;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2766 @ +0x000 */
    /*   line 2764 @ +0x000 */
    /*   line 2768 @ +0x000 */
    /*   line 2773 @ +0x000 */
    /*   line 2815 @ +0x000 */
    /*   line 2825 @ +0x000 */
    /*   line 2828 @ +0x000 */
    /*   line 2836 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2680–2745 */
/* addr: 0x00228e20  size: 652 bytes */
void fn_p_stTurnPersoProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso, /* function pointer */ int p_stAimedObject, DNM_stDynamics* p_stDynamic, tdstDynam_* h_Dynam)
{
    /* aggregate */ int eProcedureId;
    /* aggregate */ int stVertex1;
    /* aggregate */ int stVertexDirection;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2680 @ +0x000 */
    /*   line 2690 @ +0x000 */
    /*   line 2697 @ +0x000 */
    /*   line 2700 @ +0x000 */
    /*   line 2705 @ +0x000 */
    /*   line 2705 @ +0x000 */
    /*   line 2715 @ +0x000 */
    /*   line 2715 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2624–2665 */
/* addr: 0x00239400  size: 328 bytes */
void fn_p_stTurnProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso, tdstDynam_* hDynam, DNM_stDynamics* p_stDynamics)
{
    /* aggregate */ int eProcedureId;
    float xAngle;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2624 @ +0x000 */
    /*   line 2637 @ +0x000 */
    /*   line 2637 @ +0x000 */
    /*   line 2640 @ +0x000 */
    /*   line 2643 @ +0x000 */
    /*   line 2647 @ +0x000 */
    /*   line 2650 @ +0x000 */
    /*   line 2650 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2577–2614 */
/* addr: 0x00239550  size: 184 bytes */
void fn_p_stChangeMyComportIntelligenceAndReflexProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstComport_* p_stReflex, tdstComport_* p_stIntell, AI_tdstMind_* p_stMind)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2584 @ +0x000 */
    /*   line 2577 @ +0x000 */
    /*   line 2585 @ +0x000 */
    /*   line 2584 @ +0x000 */
    /*   line 2603 @ +0x000 */
    /*   line 2603 @ +0x000 */
    /*   line 2614 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2537–2569 */
/* addr: 0x00239610  size: 128 bytes */
void fn_p_stChangeMyComportReflexProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, AI_tdstMind_* p_stMind)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2537 @ +0x000 */
    /*   line 2561 @ +0x000 */
    /*   line 2561 @ +0x000 */
    /*   line 2569 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2499–2530 */
/* addr: 0x00239690  size: 132 bytes */
void fn_p_stChangeMyComportIntelligenceProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, AI_tdstMind_* p_stMind)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2499 @ +0x000 */
    /*   line 2522 @ +0x000 */
    /*   line 2530 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2459–2492 */
/* addr: 0x00239720  size: 188 bytes */
void fn_p_stChangeComportReflexProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, AI_tdstMind_* p_stMind, /* function pointer */ int p_stAimedObject)
{
    unsigned char bTest;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2459 @ +0x000 */
    /*   line 2459 @ +0x000 */
    /*   line 2464 @ +0x000 */
    /*   line 2464 @ +0x000 */
    /*   line 2464 @ +0x000 */
    /*   line 2484 @ +0x000 */
    /*   line 2492 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2404–2444 */
/* addr: 0x002397e0  size: 220 bytes */
void fn_p_stChangeComportIntelligenceProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, AI_tdstMind_* p_stMind, /* function pointer */ int p_stAimedObject)
{
    unsigned char bTest;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 2404 @ +0x000 */
    /*   line 2404 @ +0x000 */
    /*   line 2408 @ +0x000 */
    /*   line 2412 @ +0x000 */
    /*   line 2414 @ +0x000 */
    /*   line 2414 @ +0x000 */
    /*   line 2419 @ +0x000 */
    /*   line 2444 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2349–2364 */
/* addr: 0x002398c0  size: 72 bytes */
void fn_vInternalChangeComportProcedure(/* function pointer */ int p_stAimedPersoIntelligenceOrReflex, tdstComport_* p_stComport, unsigned char _bContinueExecution)
{
    /* line map: */
    /*   line 2349 @ +0x000 */
    /*   line 2357 @ +0x000 */
    /*   line 2364 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2329–2335 */
/* addr: 0x00239910  size: 120 bytes */
void fn_p_stTraceProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stValue;
    int s_iActivated;
    /* line map: */
    /*   line 2329 @ +0x000 */
    /*   line 2329 @ +0x000 */
    /*   line 2332 @ +0x000 */
    /*   line 2335 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00239990  size: 8 bytes */
void fn_p_stNoneProcedure(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 2283–2300 */
/* addr: 0x002399a0  size: 112 bytes */
void fn_p_stKeyboardProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int IPT_xHandle)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 2283 @ +0x000 */
    /*   line 2289 @ +0x000 */
    /*   line 2293 @ +0x000 */
    /*   line 2300 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1989–2142 */
/* addr: 0x00239a10  size: 912 bytes */
void fn_p_stPersoLightProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso, tdstMSLight_* h_MSLight)
{
    unsigned char bOnOff;
    unsigned char bOnOff;
    GEO_tdstColor_ stColor;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 1989 @ +0x000 */
    /*   line 2000 @ +0x000 */
    /*   line 2004 @ +0x000 */
    /*   line 2013 @ +0x000 */
    /*   line 2023 @ +0x000 */
    /*   line 2036 @ +0x000 */
    /*   line 2036 @ +0x000 */
    /*   line 2039 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1852–1983 */
/* addr: 0x00239da0  size: 748 bytes */
void fn_p_stFogProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    GEO_tdstColor_ stColor;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    char cGlobalFogIsOn;
    /* line map: */
    /*   line 1852 @ +0x000 */
    /*   line 1863 @ +0x000 */
    /*   line 1863 @ +0x000 */
    /*   line 1871 @ +0x000 */
    /*   line 1874 @ +0x000 */
    /*   line 1883 @ +0x000 */
    /*   line 1886 @ +0x000 */
    /*   line 1896 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1804–1827 */
/* addr: 0x0023a090  size: 168 bytes */
void fn_p_stChangeActivationChannelProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    /* aggregate */ int eProcedureId;
    unsigned short uwChannelNumber;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1804 @ +0x000 */
    /*   line 1815 @ +0x000 */
    /*   line 1818 @ +0x000 */
    /*   line 1822 @ +0x000 */
    /*   line 1827 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1760–1795 */
/* addr: 0x0023a140  size: 72 bytes */
void fn_p_stSaveGameProcedure(/* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 1762 @ +0x000 */
    /*   line 1760 @ +0x000 */
    /*   line 1765 @ +0x000 */
    /*   line 1795 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1705–1743 */
/* addr: 0x0023a190  size: 268 bytes */
void fn_p_stModuleControlProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    int lModuleId;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam1;
    /* line map: */
    /*   line 1705 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1705 @ +0x000 */
    /*   line 1706 @ +0x000 */
    /*   line 1711 @ +0x000 */
    /*   line 1717 @ +0x000 */
    /*   line 1721 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1589–1662 */
/* addr: 0x0023a2a0  size: 672 bytes */
void fn_p_stBuildObjectTableFromTableAndStringProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hSourceObjectTable)
{
    short wSourceObject;
    short wTargetObject;
    short wNbObjectsInSourceTable;
    short wNbObjectsInTargetTable;
    stTfmtStatus_ stStatus;
    int lStart;
    char* pszChar;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1592 @ +0x000 */
    /*   line 1589 @ +0x000 */
    /*   line 1593 @ +0x000 */
    /*   line 1602 @ +0x000 */
    /*   line 1602 @ +0x000 */
    /*   line 1604 @ +0x000 */
    /*   line 1606 @ +0x000 */
    /*   line 1606 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1516–1555 */
/* addr: 0x0023a540  size: 212 bytes */
void fn_p_stLinkTableProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hTable)
{
    unsigned char ucObj1;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1519 @ +0x000 */
    /*   line 1516 @ +0x000 */
    /*   line 1521 @ +0x000 */
    /*   line 1525 @ +0x000 */
    /*   line 1527 @ +0x000 */
    /*   line 1527 @ +0x000 */
    /*   line 1538 @ +0x000 */
    /*   line 1541 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1464–1506 */
/* addr: 0x0023a620  size: 252 bytes */
void fn_p_stListEnsembleProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstList_* p_stListC, tdstList_* p_stListB, tdstList_* p_stListA)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 1467 @ +0x000 */
    /*   line 1464 @ +0x000 */
    /*   line 1468 @ +0x000 */
    /*   line 1470 @ +0x000 */
    /*   line 1475 @ +0x000 */
    /*   line 1479 @ +0x000 */
    /*   line 1485 @ +0x000 */
    /*   line 1490 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1307–1447 */
/* addr: 0x0023a720  size: 1080 bytes */
void fn_p_stListProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstBrain_* hBrain, /* function pointer */ int p_stModel, /* function pointer */ int hPerso, /* function pointer */ int hFamily, /* function pointer */ int hPerso, /* function pointer */ int p_stModel, /* function pointer */ int hFamily, tdstList_* p_stList)
{
    unsigned char ucPos;
    unsigned char ucPos;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* line map: */
    /*   line 1310 @ +0x000 */
    /*   line 1307 @ +0x000 */
    /*   line 1313 @ +0x000 */
    /*   line 1319 @ +0x000 */
    /*   line 1324 @ +0x000 */
    /*   line 1327 @ +0x000 */
    /*   line 1332 @ +0x000 */
    /*   line 1332 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1276–1295 */
/* addr: 0x0023ab60  size: 292 bytes */
void fn_vFillListWithAllPersoOfAModel(tdstList_* _p_stList, /* function pointer */ int _hFather, /* function pointer */ int _p_stModel, tdstBrain_* hBrain, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 1276 @ +0x000 */
    /*   line 1282 @ +0x000 */
    /*   line 1285 @ +0x000 */
    /*   line 1292 @ +0x000 */
    /*   line 1295 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1253–1267 */
/* addr: 0x0023ac90  size: 268 bytes */
void fn_vFillListWithAllPersoOfAFamilly(tdstList_* _p_stList, /* function pointer */ int _hFather, /* function pointer */ int _hFamily, /* function pointer */ int hChild)
{
    /* line map: */
    /*   line 1253 @ +0x000 */
    /*   line 1258 @ +0x000 */
    /*   line 1264 @ +0x000 */
    /*   line 1267 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1150–1242 */
/* addr: 0x0023ada0  size: 412 bytes */
void fn_p_stListZDDZDEProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstList_* p_stList)
{
    unsigned short xMask;
    short xIndex;
    unsigned short xPersoMask;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 1153 @ +0x000 */
    /*   line 1150 @ +0x000 */
    /*   line 1163 @ +0x000 */
    /*   line 1168 @ +0x000 */
    /*   line 1173 @ +0x000 */
    /*   line 1173 @ +0x000 */
    /*   line 1180 @ +0x000 */
    /*   line 1186 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1097–1139 */
/* addr: 0x0023af40  size: 416 bytes */
void fn_p_stHitPointsMaxProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1099 @ +0x000 */
    /*   line 1097 @ +0x000 */
    /*   line 1104 @ +0x000 */
    /*   line 1112 @ +0x000 */
    /*   line 1117 @ +0x000 */
    /*   line 1123 @ +0x000 */
    /*   line 1139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1039–1088 */
/* addr: 0x0023b0e0  size: 452 bytes */
void fn_p_stHitPointsProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hPerso)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1041 @ +0x000 */
    /*   line 1039 @ +0x000 */
    /*   line 1046 @ +0x000 */
    /*   line 1055 @ +0x000 */
    /*   line 1055 @ +0x000 */
    /*   line 1055 @ +0x000 */
    /*   line 1058 @ +0x000 */
    /*   line 1063 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 1022–1022 */
/* addr: 0x0023b2b0  size: 28 bytes */
void fn_p_stLogWindowProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    tdstGetSetParam_ stParam;
    /* line map: */
    /*   line 1022 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 963–1007 */
/* addr: 0x0023b2d0  size: 244 bytes */
void fn_p_stDynamProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstCineinfo_* hCineinfo, /* function pointer */ int hNewSuperObjPerso)
{
    unsigned int ulIndex;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 963 @ +0x000 */
    /*   line 972 @ +0x000 */
    /*   line 978 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 987 @ +0x000 */
    /*   line 994 @ +0x000 */
    /*   line 996 @ +0x000 */
    /*   line 996 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 924–945 */
/* addr: 0x0023b3d0  size: 172 bytes */
void fn_p_stMiscMoreProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree)
{
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stParam2;
    tdstGetSetParam_ stParam1;
    /* line map: */
    /*   line 931 @ +0x000 */
    /*   line 924 @ +0x000 */
    /*   line 937 @ +0x000 */
    /*   line 945 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 734–915 */
/* addr: 0x0023b480  size: 876 bytes */
void fn_p_stMiscProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, DNM_stDynamics* p_stDynamic, tdstDynam_* hDynam, /* function pointer */ int hChild, /* function pointer */ int hStdGame, /* function pointer */ int p_stObj)
{
    char* pMapName;
    unsigned char bPlatform;
    unsigned char bFreeze;
    /* aggregate */ int eProcedureId;
    tdstGetSetParam_ stValue;
    /* line map: */
    /*   line 736 @ +0x000 */
    /*   line 734 @ +0x000 */
    /*   line 738 @ +0x000 */
    /*   line 746 @ +0x000 */
    /*   line 751 @ +0x000 */
    /*   line 759 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 773 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 630–704 */
/* addr: 0x0023b7f0  size: 704 bytes */
void fn_p_stKillPersoAndClearVariableProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int p_stResultOwnerPerso, /* function pointer */ int pCheapList, AI_tdstMind_* p_stMind, /* function pointer */ int hKilledObject)
{
    unsigned int i;
    unsigned char ucVarId;
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 639 @ +0x000 */
    /*   line 636 @ +0x000 */
    /*   line 630 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 642 @ +0x000 */
    /*   line 647 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0023bab0  size: 8 bytes */
void fn_p_stDeletePersoFromGameProcedure(/* function pointer */ int p_stTree)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 501–556 */
/* addr: 0x0023bac0  size: 296 bytes */
void fn_p_stMiscNoProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, DNM_stDynamics* p_stDynamics, tdstDynam_* h_Dynam, tdstComport_* p_stComport)
{
    void* hMecIdCard;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 502 @ +0x000 */
    /*   line 501 @ +0x000 */
    /*   line 506 @ +0x000 */
    /*   line 512 @ +0x000 */
    /*   line 515 @ +0x000 */
    /*   line 521 @ +0x000 */
    /*   line 529 @ +0x000 */
    /*   line 536 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\Procedur.c lines 432–492 */
/* addr: 0x0023bbf0  size: 420 bytes */
void fn_p_stMiscUltraProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, /* function pointer */ int hNewSuperObjPerso)
{
    tdstGetSetParam_ stParam;
    /* aggregate */ int eProcedureId;
    /* line map: */
    /*   line 432 @ +0x000 */
    /*   line 442 @ +0x000 */
    /*   line 448 @ +0x000 */
    /*   line 448 @ +0x000 */
    /*   line 456 @ +0x000 */
    /*   line 456 @ +0x000 */
    /*   line 463 @ +0x000 */
    /*   line 463 @ +0x000 */
    /* TODO: decompile from asm/... */
}
