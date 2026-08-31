/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstComport_ tdstComport_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstState_ tdstState_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef union anon_0 anon_0;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct _JFFTXT_ _JFFTXT_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct WP_tdstArc_ WP_tdstArc_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct MTH_stMove MTH_stMove;
typedef struct tdstBrain_ tdstBrain_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct stMACDPID stMACDPID;
typedef struct tdstMacro_ tdstMacro_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct anon_1 anon_1;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct anon_2 anon_2;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstActionTable_ tdstActionTable_;
typedef struct anon_3 anon_3;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct anon_4 anon_4;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct _tdstFont _tdstFont;
typedef struct _RollOffParam _RollOffParam;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct stMorphData stMorphData;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct tdstActionParam_ tdstActionParam_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct DNM_stReport DNM_stReport;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct RGBAComponent_ RGBAComponent_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef union RGBAStruct_ RGBAStruct_;

struct tdstComport_ {
    int p_stRules; /* +0x0 */
    int p_stSchedule; /* +0x4 */
    unsigned char ucNbRules; /* +0x8 */
};

struct tdstMSWay_ {
    int m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct tdstZoneSetList_ {
    /* aggregate */ int hZdxIndexList; /* +0x0 */
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

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    /* aggregate */ int stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    /* aggregate */ int stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    /* aggregate */ int xInter_Min_Pos; /* +0xc8 */
    /* aggregate */ int xExter_Min_Pos; /* +0xd4 */
    /* aggregate */ int xInter_Max_Pos; /* +0xe0 */
    /* aggregate */ int xExter_Max_Pos; /* +0xec */
    /* aggregate */ int xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

union anon_0 {
    /* aggregate */ int uId; /* +0x0 */
    /* aggregate */ int uParam; /* +0x0 */
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

struct _JFFTXT_ {
    int pString; /* +0x0 */
    float a3_Pos[3]; /* +0x4 */
    float xTempSize; /* +0x10 */
    unsigned int ulColor; /* +0x14 */
    unsigned char ucTransparency; /* +0x18 */
    unsigned char bFrozenDisplay; /* +0x19 */
    unsigned char bOther; /* +0x1a */
    int EffectParameter; /* +0x1c */
    unsigned char ucForcedColor; /* +0x20 */
    unsigned char DestinationViewport; /* +0x21 */
    unsigned char ucDrawThisStringDuringPauseGame; /* +0x22 */
    unsigned char ucDrawThisStringDuringPauseInventory; /* +0x23 */
    unsigned char ucDrawThisStringDuringSaveGame; /* +0x24 */
};

struct tdstSectInfo_ {
    int hCurrentSector; /* +0x0 */
    int hNodeInSector; /* +0x4 */
    /* aggregate */ int stPreviousPosition; /* +0x8 */
    int hSectorSynchroCharacter; /* +0x14 */
};

struct SECT_tdstListOfDNMLights_ {
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct tdstMicro_ {
    int hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    int hMechaCharacter; /* +0xc */
};

struct MTH_stMove {
    /* aggregate */ int m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
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

struct WP_tdstGraph_ {
    /* aggregate */ int m_hListOfNode; /* +0x0 */
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

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstZdxList_ {
    /* aggregate */ int hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct WP_tdstWayPoint_ {
    /* aggregate */ int m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    int m_hSuperObject; /* +0x10 */
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

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    int p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    int hFirstElementDyn; /* +0x0 */
    int hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstCsaList_ {
    /* aggregate */ int hZoneSetEncapsulationList; /* +0x0 */
};

struct anon_2 {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstScriptAI_ {
    int p_stComport; /* +0x0 */
    unsigned int ulNbComport; /* +0x4 */
    unsigned int ulNoComportInitDefault; /* +0x8 */
    unsigned char ucActionTableNbEntry; /* +0xc */
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

struct tdstProhibit_ {
    int h_ProhibitedState; /* +0x0 */
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

struct tdstActionTable_ {
    int p_stEntry; /* +0x0 */
    unsigned char ucNbEntries; /* +0x4 */
    unsigned char ucNbEntriesUsed; /* +0x5 */
    unsigned char ucCurrentEntry; /* +0x6 */
};

struct anon_3 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct tdstDsgMem_ {
    int p_p_stDsgVar; /* +0x0 */
    int p_cDsgMemBufferInit; /* +0x4 */
    int p_cDsgMemBuffer; /* +0x8 */
};

struct anon_4 {
    int pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_3 st_UVStaticPos; /* +0xc */
    anon_3 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
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

struct _tdstFont {
    /* array */ int TabOfCharacter[256]; /* +0x0 */
    /* array */ int TabOfKerningPairsNotNull[200]; /* +0xe00 */
    unsigned short uwNbKerning; /* +0x12b0 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    /* aggregate */ int m_stNorm; /* +0x4 */
    /* aggregate */ int m_stContact; /* +0x10 */
    int hMyMaterial; /* +0x1c */
    int hCollidedMaterial; /* +0x20 */
    int mp_stSupObj; /* +0x24 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct tdstGraphChainedListNode_ {
    int GraphChainedListNodeInfo; /* +0x0 */
    int p_NextGraphChainedListNode; /* +0x4 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct tdstZoneSetEncapsulation_ {
    int p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
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

struct tdstSubAnim_ {
    int p_stSubAnim; /* +0x0 */
};

struct CINE_Manager_ {
    /* aggregate */ int hCineList; /* +0x0 */
    /* aggregate */ int gp_stFixedCameraMatrix; /* +0x10 */
    int gp_stSPOHandleCamera; /* +0x70 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    /* aggregate */ int m_stAxis; /* +0x4 */
};

struct tdstActionParam_ {
    /* array */ int a_uParam[8]; /* +0x0 */
};

struct tdstDynam_ {
    int p_stDynamics; /* +0x0 */
    int p_stParsingDatas; /* +0x4 */
    /* aggregate */ int eUsedMechanics; /* +0x8 */
};

struct tdstEvent_ {
    int p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct RGBAComponent_ {
    unsigned char Red; /* +0x0 */
    unsigned char Green; /* +0x1 */
    unsigned char Blue; /* +0x2 */
    unsigned char Alpha; /* +0x3 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
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

union RGBAStruct_ {
    int Color; /* +0x0 */
    RGBAComponent_ Component; /* +0x0 */
};

unsigned char TXT_g_EndCode[2];
float TXT_g_CurrentHeightRatio;
float TXT_g_CurrentWidthRatio;
int TXT_g_GettingExtents;
float g_fInterLetterRatio;
float g_fOOTexWidth;
float g_fOOTexHeight;
int g_hMaterialForText;
int TXT_g_WeirdThing;
static int TXT_bFirstAlert;
float TXT_Time;
unsigned char g_ucPreviousChar;
GEO_tdstColor_ g_stCurrentColor;
GEO_tdstColor_ g_stColor;
float g_fLetterHeightMax;
unsigned char g_szTmpStringToDisplay[300];
int g_p_stVpt;
int g_p_TextData;
float g_fCurrentSizeFontH;
float g_fCurrentSizeFontW;
unsigned char g_ucCurrentNumFont;
unsigned char g_ucCurrentNumTextureFont;
unsigned int TXT_g_ulDefaultColor;
_JFFTXT_ g_JFFTXT[200];
float TXT_g_StringExtents[4];
char g_GLI_bForceAAAColor;
char g_bCanResize2DSpriteWithPercentAccordingToViewportRatio;
/* aggregate */ int g_stEngineStructure;
_tdstFont g_ListOfFonts;
unsigned char TXT_g_EndCode[2];
/* array */ int g_TabBitmapFont;
unsigned char g_ucCurrentViewport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 81–86 */
/* addr: 0x003236a0  size: 56 bytes */
void fn_vInitFont(void)
{
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 86 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1956–2043 */
/* addr: 0x003236e0  size: 1068 bytes */
void TXT_vAfficheSpecialWithTransparency(char* String, float* a3_Pos, float f0_255Transparency, /* function pointer */ int p_stVpt, _JFFTXT_* p)
{
    float x2[3];
    float x1[3];
    /* aggregate */ int stVpt;
    _JFFTXT_ DummyString;
    /* line map: */
    /*   line 1959 @ +0x000 */
    /*   line 1957 @ +0x000 */
    /*   line 1956 @ +0x000 */
    /*   line 1962 @ +0x000 */
    /*   line 1965 @ +0x000 */
    /*   line 1969 @ +0x000 */
    /*   line 1977 @ +0x000 */
    /*   line 1972 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1875–1948 */
/* addr: 0x00323b10  size: 972 bytes */
void TXT_vRedrawStringByNumber(int Num, /* function pointer */ int p_stVpt, _JFFTXT_* p)
{
    float x2[3];
    float x1[3];
    /* aggregate */ int stVpt;
    /* line map: */
    /*   line 1875 @ +0x000 */
    /*   line 1875 @ +0x000 */
    /*   line 1875 @ +0x000 */
    /*   line 1875 @ +0x000 */
    /*   line 1875 @ +0x000 */
    /*   line 1877 @ +0x000 */
    /*   line 1877 @ +0x000 */
    /*   line 1886 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1866–1869 */
/* addr: 0x00323ee0  size: 168 bytes */
void TXT_vAfficheSimpleWithShadow(/* function pointer */ int stVpt, char* String, float x, float y, float z, unsigned int ulTextColor)
{
    /* line map: */
    /*   line 1866 @ +0x000 */
    /*   line 1866 @ +0x000 */
    /*   line 1866 @ +0x000 */
    /*   line 1866 @ +0x000 */
    /*   line 1866 @ +0x000 */
    /*   line 1869 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1856–1860 */
/* addr: 0x00323f90  size: 108 bytes */
void TXT_vAfficheSimpleWithColor(/* function pointer */ int stVpt, char* String, float x, float y, float z, unsigned int ulTextColor)
{
    unsigned int ulOldDefaultColor;
    /* line map: */
    /*   line 1859 @ +0x000 */
    /*   line 1856 @ +0x000 */
    /*   line 1860 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1830–1851 */
/* addr: 0x00324000  size: 88 bytes */
void TXT_vAfficheSimple(/* function pointer */ int stVpt, char* String, float x, float y, float z, _JFFTXT_* p)
{
    _JFFTXT_ DummyString;
    /* line map: */
    /*   line 1830 @ +0x000 */
    /*   line 1833 @ +0x000 */
    /*   line 1835 @ +0x000 */
    /*   line 1837 @ +0x000 */
    /*   line 1840 @ +0x000 */
    /*   line 1846 @ +0x000 */
    /*   line 1851 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1737–1823 */
/* addr: 0x00324060  size: 1008 bytes */
void TXT_vAfficheSpecial(char* String, float* a3_Pos, /* function pointer */ int p_stVpt, _JFFTXT_* p)
{
    float x2[3];
    float x1[3];
    /* aggregate */ int stVpt;
    _JFFTXT_ DummyString;
    /* line map: */
    /*   line 1740 @ +0x000 */
    /*   line 1738 @ +0x000 */
    /*   line 1737 @ +0x000 */
    /*   line 1743 @ +0x000 */
    /*   line 1746 @ +0x000 */
    /*   line 1749 @ +0x000 */
    /*   line 1752 @ +0x000 */
    /*   line 1752 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1728–1730 */
/* addr: 0x00324450  size: 32 bytes */
void TXT_vReinitStates(void)
{
    /* line map: */
    /*   line 1728 @ +0x000 */
    /*   line 1728 @ +0x000 */
    /*   line 1730 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1694–1707 */
/* addr: 0x00324470  size: 180 bytes */
void TXT_GetBoundingBox(int Index, int* x1, int* y1f, int* x2, int* y2, /* function pointer */ int p_stVpt, _JFFTXT_* p)
{
    /* line map: */
    /*   line 1694 @ +0x000 */
    /*   line 1694 @ +0x000 */
    /*   line 1699 @ +0x000 */
    /*   line 1703 @ +0x000 */
    /*   line 1707 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1633–1689 */
/* addr: 0x00324530  size: 852 bytes */
void TXT_GetBoundingBox2(/* function pointer */ int p_stVpt, unsigned char* String, int* x1, int* y1f, int* x2, int* y2, int XPosText, int YPosText)
{
    float fRatioVpt;
    float H;
    float W;
    /* line map: */
    /*   line 1633 @ +0x000 */
    /*   line 1642 @ +0x000 */
    /*   line 1641 @ +0x000 */
    /*   line 1644 @ +0x000 */
    /*   line 1648 @ +0x000 */
    /*   line 1654 @ +0x000 */
    /*   line 1659 @ +0x000 */
    /*   line 1663 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1484–1624 */
/* addr: 0x00324890  size: 1528 bytes */
void TXT_vDrawString(/* function pointer */ int p_stVpt, _JFFTXT_* p)
{
    float Lp;
    unsigned short L;
    unsigned char* szDisplayString;
    unsigned char g_ucFormatCenter;
    float H;
    float fRatioVpt;
    float fX;
    float fY;
    unsigned char* pDest;
    unsigned char* szString;
    /* line map: */
    /*   line 1484 @ +0x000 */
    /*   line 1484 @ +0x000 */
    /*   line 1484 @ +0x000 */
    /*   line 1488 @ +0x000 */
    /*   line 1484 @ +0x000 */
    /*   line 1486 @ +0x000 */
    /*   line 1489 @ +0x000 */
    /*   line 1494 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1327–1467 */
/* addr: 0x00324e90  size: 3292 bytes */
void ComputePixelWidthAndHeightOfString(unsigned char* szText, float* W, float* H, unsigned short L, unsigned short i, unsigned char szNum[5], unsigned char* szTmp2, unsigned char* szTmp, unsigned char ucCurrentNumFont, float fCurrentSizeFontH, float fCurrentSizeFontW, float fHeightMax, float fHeightMax2, float fPixelSize, float fWidthMax)
{
    /* line map: */
    /*   line 1332 @ +0x000 */
    /*   line 1327 @ +0x000 */
    /*   line 1335 @ +0x000 */
    /*   line 1329 @ +0x000 */
    /*   line 1337 @ +0x000 */
    /*   line 1340 @ +0x000 */
    /*   line 1342 @ +0x000 */
    /*   line 1344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 1117–1296 */
/* addr: 0x00325b70  size: 4240 bytes */
void TXT_vDrawAStringOnLine(float fX, float fY, unsigned char* szText, _JFFTXT_* p)
{
    char Str[100];
    float sintime;
    char Str[100];
    char Str[100];
    char Str[100];
    char Str[100];
    char Str[100];
    unsigned short i;
    unsigned short L;
    float fCurX;
    unsigned char szNum[5];
    unsigned char* szTmp2;
    unsigned char* szTmp;
    /* line map: */
    /*   line 1117 @ +0x000 */
    /*   line 1120 @ +0x000 */
    /*   line 1123 @ +0x000 */
    /*   line 1125 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /*   line 1128 @ +0x000 */
    /*   line 1131 @ +0x000 */
    /*   line 1134 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00326c00  size: 8 bytes */
void TXT_fn_fComputePixelLengthOfString(char* _szText, float* W, float* H)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 969–1070 */
/* addr: 0x00326c10  size: 1972 bytes */
float fn_fDrawAChar(float fX, float fY, unsigned char cChar)
{
    float alphaval;
    float dy2;
    float dy1;
    float dx2;
    float dx1;
    float fKerning;
    /* aggregate */ int stDefC;
    float fWidth;
    float fHeight;
    float fV;
    float fU;
    float fVorigin;
    float fUorigin;
    /* line map: */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /*   line 969 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 916–918 */
/* addr: 0x003273d0  size: 92 bytes */
void TXT_ChangeDefaultColor(float xR, float xG, float xB)
{
    /* line map: */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 918 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 852–868 */
/* addr: 0x00327430  size: 112 bytes */
void TXT_vInit(void)
{
    int i;
    unsigned char ucInitOnlyOnce;
    /* line map: */
    /*   line 852 @ +0x000 */
    /*   line 853 @ +0x000 */
    /*   line 854 @ +0x000 */
    /*   line 856 @ +0x000 */
    /*   line 858 @ +0x000 */
    /*   line 861 @ +0x000 */
    /*   line 863 @ +0x000 */
    /*   line 866 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 741–842 */
/* addr: 0x003274a0  size: 1232 bytes */
void TXT_vAffiche(/* function pointer */ int p_stVpt, float fFrameLenght, _JFFTXT_* p)
{
    float x2[3];
    float x1[3];
    int trsp;
    int trsp;
    unsigned char ucDrawThisString;
    int i;
    /* line map: */
    /*   line 741 @ +0x000 */
    /*   line 743 @ +0x000 */
    /*   line 755 @ +0x000 */
    /*   line 759 @ +0x000 */
    /*   line 763 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 767 @ +0x000 */
    /*   line 770 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 455–460 */
/* addr: 0x00327970  size: 60 bytes */
void JFFTXT_vModifyCaracter(int StringNumber, int Position, int newcar)
{
    /* line map: */
    /*   line 455 @ +0x000 */
    /*   line 460 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 365–438 */
/* addr: 0x003279b0  size: 468 bytes */
void JFFTXT_vExtendText(int StringNumber, int ID, float xParameter, _JFFTXT_* p)
{
    /* line map: */
    /*   line 365 @ +0x000 */
    /*   line 371 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 379 @ +0x000 */
    /*   line 382 @ +0x000 */
    /*   line 387 @ +0x000 */
    /*   line 390 @ +0x000 */
    /*   line 396 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 336–342 */
/* addr: 0x00327b90  size: 72 bytes */
void TXT_vSetFrameMode(int StringNumber, unsigned char bOnOff, _JFFTXT_* param2)
{
    /* line map: */
    /*   line 336 @ +0x000 */
    /*   line 338 @ +0x000 */
    /*   line 342 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 325–325 */
/* addr: 0x00327be0  size: 48 bytes */
void TXT_vDoFadeOut(int StringNumber)
{
    /* line map: */
    /*   line 325 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 311–313 */
/* addr: 0x00327c10  size: 52 bytes */
void TXT_vDoFadeIn(int StringNumber, _JFFTXT_* param1)
{
    /* line map: */
    /*   line 311 @ +0x000 */
    /*   line 311 @ +0x000 */
    /*   line 313 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 299–299 */
/* addr: 0x00327c50  size: 44 bytes */
void TXT_vSetTransparence(int StringNumber, unsigned int ulTransparence)
{
    /* line map: */
    /*   line 299 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 287–287 */
/* addr: 0x00327c80  size: 64 bytes */
void TXT_vSetColor(int StringNumber, unsigned int ulRed, unsigned int ulGreen, unsigned int ulBlue)
{
    /* line map: */
    /*   line 287 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 265–277 */
/* addr: 0x00327cc0  size: 104 bytes */
void JFFTXT_vAddText(int StringNumber, /* function pointer */ int p_stPosition, unsigned char* pszString, unsigned char ucParameter, _JFFTXT_* p)
{
    /* line map: */
    /*   line 265 @ +0x000 */
    /*   line 265 @ +0x000 */
    /*   line 266 @ +0x000 */
    /*   line 268 @ +0x000 */
    /*   line 270 @ +0x000 */
    /*   line 272 @ +0x000 */
    /*   line 274 @ +0x000 */
    /*   line 277 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 237–253 */
/* addr: 0x00327d30  size: 120 bytes */
void MJ_JFFTXT_vAddText3D(int ViewportNumber, int StringNumber, /* function pointer */ int p_stPosition, float xSize, unsigned char* pszString, unsigned char ucParameter, _JFFTXT_* p)
{
    /* line map: */
    /*   line 237 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 239 @ +0x000 */
    /*   line 241 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 249 @ +0x000 */
    /*   line 253 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 183–202 */
/* addr: 0x00327db0  size: 112 bytes */
void MJ_JFFTXT_vAddText(int ViewportNumber, int StringNumber, /* function pointer */ int p_stPosition, unsigned char* pszString, unsigned char ucParameter, _JFFTXT_* p)
{
    /* line map: */
    /*   line 183 @ +0x000 */
    /*   line 185 @ +0x000 */
    /*   line 187 @ +0x000 */
    /*   line 189 @ +0x000 */
    /*   line 192 @ +0x000 */
    /*   line 195 @ +0x000 */
    /*   line 202 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\TXT\DisplayText.c lines 170–174 */
/* addr: 0x00327e20  size: 68 bytes */
void TXT_PauseInvIWantToDrawThisStringNumber(int _iStringNumber)
{
    /* line map: */
    /*   line 170 @ +0x000 */
    /*   line 174 @ +0x000 */
    /* TODO: decompile from asm/... */
}
