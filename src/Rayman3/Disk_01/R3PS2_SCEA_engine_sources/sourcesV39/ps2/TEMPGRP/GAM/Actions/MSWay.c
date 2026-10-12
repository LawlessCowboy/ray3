/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\MSWay.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/GEO.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/WP.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct stMorphData stMorphData;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;

typedef enum e_ucListViewport_ {
    CAM_e_NoViewport = -1,
} e_ucListViewport_;

typedef enum e_ucCameraStates_ {
    CAM_e_State_GoToOptimal = 0,
    CAM_e_State_GoToComputedOptimal = 1,
    CAM_e_State_FailureVisibility = 2,
    CAM_e_State_FailureVisibilityWithoutCut = 3,
    CAM_e_TempState_GhostMode = 4,
    CAM_e_TempState_ApexMode = 5,
} e_ucCameraStates_;

typedef enum anon_enum_0084606a {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0084606a;

struct tdstSubAnimInUse_ {
    tdstSubAnimInUse_* hNextBrotherDyn; /* +0x0 */
    tdstSubAnimInUse_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn* hFatherDyn; /* +0x8 */
    tdstSubAnim_* p_stTheSubAnim; /* +0xc */
    int d_ucEventActivation; /* +0x10 */
    unsigned int ulStartFrame; /* +0x14 */
    unsigned int ulCustombit; /* +0x18 */
    unsigned int ulLoop; /* +0x1c */
    float xFrameNumber; /* +0x20 */
    unsigned char ucNextEvent; /* +0x24 */
    unsigned char bStop; /* +0x25 */
    unsigned char bMerge; /* +0x26 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct tdstFrame3d_ {
    tdstElement3d_* p_stArrayOfElts3d; /* +0x0 */
    MTH3D_tdstMatrix_* p_stAngularSpeedMatrix; /* +0x4 */
    MTH3D_tdstVector_* p_stLinearSpeedVector; /* +0x8 */
    tdstPLA_Hierarchy_ stHierarchy; /* +0xc */
    tdstPLA_Deformation_ stDeformation; /* +0x14 */
    tdstAnim3d_* p_stAnim; /* +0x1c */
    unsigned short uwFrameNumber; /* +0x20 */
    unsigned char ucMatrixUpdated; /* +0x22 */
    unsigned char ucCacheEntry; /* +0x23 */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    MAT_tdstTransformation_ stGLIObjectMatrix; /* +0x20 */
    MAT_tdstTransformation_* p_stGLIObjectAbsoluteMatrix; /* +0x80 */
    float xCurrentFrame; /* +0x84 */
    unsigned char ucRepeatAnimation; /* +0x88 */
    unsigned char ucNextEvent; /* +0x89 */
    int d_ucEventActivation; /* +0x8c */
    tdstCouple_* p_stCurrentHieCouples; /* +0x90 */
    unsigned short wCurrentHieNbCouples; /* +0x94 */
    unsigned short wSizeOfArrayOfElts3d; /* +0x96 */
    tdstState_* h_StateInLastFrame; /* +0x98 */
    tdstState_* h_WantedState; /* +0x9c */
    float xForcedFrame; /* +0xa0 */
    unsigned char ucFlagEndState; /* +0xa4 */
    unsigned char ucFlagEndOfAnim; /* +0xa5 */
    tdstAChannel_* hArrayOfChannels; /* +0xa8 */
    unsigned int ulNumberOfChannels; /* +0xac */
    tdstAChannel_* hFirstActiveChannel; /* +0xb0 */
    tdstFrame3d_ stFrame3d; /* +0xb4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphChannelList; /* +0xd8 */
    unsigned int ulStartTime; /* +0xdc */
    unsigned int ulTimeDelay; /* +0xe0 */
    unsigned int ulTimePreviousFrame; /* +0xe4 */
    float xLastFrame; /* +0xe8 */
    unsigned char bStateJustModified; /* +0xec */
    unsigned char bSkipCurrentFrame; /* +0xed */
    GLI_tdstMaterial_* p_stShadowVisualMaterial; /* +0xf0 */
    GLI_tdstTexture_* p_stShadowTexture; /* +0xf4 */
    float xShadowScaleX; /* +0xf8 */
    float xShadowScaleY; /* +0xfc */
    short xShadowQuality; /* +0x100 */
    unsigned short uwNbEngineFrameSinceLastMechEvent; /* +0x102 */
    unsigned char ucFrameRate; /* +0x104 */
    unsigned char ucFlagModifState; /* +0x105 */
    int lDrawMaskInit; /* +0x108 */
    int lDrawMask; /* +0x10c */
    int lLastComputeFrame; /* +0x110 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x114..0x11f */
    MAT_tdstTransformation_ stLastEventGlobalPosition; /* +0x120 */
    unsigned char bAnimMatrixChanged; /* +0x180 */
    unsigned char ucUserEventFlags; /* +0x181 */
    unsigned char ucBrainComputationFrequency; /* +0x182 */
    char cBrainCounter; /* +0x183 */
    unsigned short uwBrainMainCounter; /* +0x184 */
    unsigned char ucTransparency; /* +0x186 */
    unsigned char bDiscreetSpeed; /* +0x187 */
    MTH3D_tdstVector_ stLightDirForDynamicShadow; /* +0x188 */
    unsigned char ucIsShadowClosed; /* +0x194 */
    unsigned char ucShadowRecLevel; /* +0x195 */
    unsigned char ucLightComputationFrequency; /* +0x196 */
    char cLightCounter; /* +0x197 */
    MTH3D_tdstVector_ stSHWDeformationVector; /* +0x198 */
    float xSHWHeight; /* +0x1a4 */
    float xDistNoInterpol; /* +0x1a8 */
    float xDistNoMorphing; /* +0x1ac */
    float xDistNoDEnv; /* +0x1b0 */
    LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn hForSubAnimInUseArray; /* +0x1b4 */
    CINE_tdstCineActor_* h_CurrentCineActor; /* +0x1c0 */
    int hSkinMaterial[4]; /* +0x1c4 */
    unsigned int NbSkinMaterials; /* +0x1d4 */
    int xSkinIndex; /* +0x1d8 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct tdstStandardGame_ {
    int otObjectFamilyType; /* +0x0 */
    int otObjectModelType; /* +0x4 */
    int otObjectPersonalType; /* +0x8 */
    HIE_tdstSuperObject_* h_SuperObject; /* +0xc */
    unsigned char eInitFlagWhenOutOfZone; /* +0x10 */
    unsigned char eInitFlagWhenDeadOrTaken; /* +0x11 */
    unsigned int ulLastTrame; /* +0x14 */
    unsigned int ubf32Capabilities; /* +0x18 */
    unsigned char ucTractionFactor; /* +0x1c */
    unsigned char ucHitPoints; /* +0x1d */
    unsigned char ucHitPointsMax; /* +0x1e */
    unsigned char ucHitPointsMaxMax; /* +0x1f */
    unsigned int ulCustomBits; /* +0x20 */
    unsigned int ulAICustomBits; /* +0x24 */
    unsigned char ucPlatFormType; /* +0x28 */
    unsigned char ucMiscFlags; /* +0x29 */
    unsigned char ucTransparencyZoneMin; /* +0x2a */
    unsigned char ucTransparencyZoneMax; /* +0x2b */
    unsigned int ulSaveCustomBits; /* +0x2c */
    unsigned int ulSaveAICustomBits; /* +0x30 */
    unsigned char ucSaveHitPoints; /* +0x34 */
    unsigned char ucSaveHitPointsMax; /* +0x35 */
    unsigned char ucSaveMiscFlags; /* +0x36 */
    unsigned char ucTooFarLimit; /* +0x37 */
    unsigned char ucImportance; /* +0x38 */
    unsigned char ucOptional; /* +0x39 */
    float a_xCustomFloats[2]; /* +0x3c */
    int a_lCustomLongs[2]; /* +0x44 */
    MTH3D_tdstVector_ a_stCustomVectors[2]; /* +0x4c */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct anon_1 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct stMACDPID {
    float m_xData0; /* +0x0 */
    MTH3D_tdstVector_ m_stData1; /* +0x4 */
    MTH3D_tdstVector_ m_stData2; /* +0x10 */
    MTH3D_tdstVector_ m_stData3; /* +0x1c */
    float m_xData3; /* +0x28 */
    float m_xData4; /* +0x2c */
    float m_xData5; /* +0x30 */
    anon_0 m_stData6; /* +0x34 */
    anon_1 m_stData7; /* +0x44 */
    char m_cData8; /* +0x54 */
    unsigned short m_uwData9; /* +0x56 */
    MTH3D_tdstVector_ m_stData10; /* +0x58 */
    float m_xData11; /* +0x64 */
    MTH3D_tdstVector_ m_stData12; /* +0x68 */
    float m_xData13; /* +0x74 */
    unsigned char m_bData14; /* +0x78 */
};

struct DNM_stDynamicsComplexBlock {
    float m_xTiltIntensity; /* +0x0 */
    float m_xTiltInertia; /* +0x4 */
    float m_xTiltOrigin; /* +0x8 */
    float m_xTiltAngle; /* +0xc */
    float m_xHangingLimit; /* +0x10 */
    MTH3D_tdstVector_ m_stContact; /* +0x14 */
    MTH3D_tdstVector_ m_stFallTranslation; /* +0x20 */
    stMACDPID m_stExternalDatas; /* +0x2c */
    HIE_tdstSuperObject_* m_hPlatform; /* +0xa8 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_0084606a eUsedMechanics; /* +0x8 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
    tdstStandardGame_* h_StandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
    tdstBrain_* h_Brain; /* +0xc */
    tdstCineinfo_* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
    tdstMSWay_* h_MSWay; /* +0x18 */
    tdstMSLight_* h_MSLight; /* +0x1c */
    tdstSectInfo_* h_SectInfo; /* +0x20 */
    tdstMicro_* h_Micro; /* +0x24 */
    tdstMSSound_* h_MSSound; /* +0x28 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct tdstCineinfo_ {
    tdstInternalStructurCineinfo_* hInit; /* +0x0 */
    tdstInternalStructurCineinfo_* hCurrent; /* +0x4 */
    tdstInternalStructurCineinfo_* hVisibility; /* +0x8 */
    tdstInternalStructurCineinfo_* hWork; /* +0xc */
    MTH3D_tdstVector_ stLastFailedOrigin; /* +0x10 */
    MTH3D_tdstVector_ stLastFailedWanted; /* +0x1c */
    MTH3D_tdstVector_ stForceTarget; /* +0x28 */
    MTH3D_tdstVector_ stForcePosition; /* +0x34 */
    MTH3D_tdstVector_ stForceRefAxisY; /* +0x40 */
    MTH3D_tdstVector_ stForceRefAxisZ; /* +0x4c */
    float xApexRatio; /* +0x58 */
    float xLastDeltaCut; /* +0x5c */
    e_ucCameraStates_ eState; /* +0x60 */
    float xCounter1; /* +0x64 */
    float xCounter2; /* +0x68 */
    float xCounter3; /* +0x6c */
    float xCounter4; /* +0x70 */
    unsigned char ucVolIAFlags; /* +0x74 */
    unsigned char ucPerIAFlags; /* +0x75 */
    char cLastCutAngleSens; /* +0x76 */
    tdstAveragePosition_ AveragePosition; /* +0x78 */
    tdstSightAxisSystem_ stSightAxisSystem; /* +0x158 */
    unsigned char bCanDoBestPos; /* +0x17c */
    tdstTransparentSuperObjectForCamera_ a10_stTransparentSuperObjectForCamera[10]; /* +0x180 */
    short xNumberOfTransparentSuperObjectForCamera; /* +0x248 */
    float fTransparency; /* +0x24c */
    float fTransparencySpeed; /* +0x250 */
    unsigned char ucTransparencyFlag; /* +0x254 */
    unsigned char bCameraIsMirrored; /* +0x255 */
    unsigned char bLightComputation; /* +0x256 */
};

struct stColliderInfo_ {
    int a_stColliderActors[2]; /* +0x0 */
    MTH3D_tdstVector_ a_stColliderVectors[2]; /* +0x8 */
    float a_xColliderReals[2]; /* +0x20 */
    unsigned char ucColliderType; /* +0x28 */
    unsigned char ucColliderPriority; /* +0x29 */
    unsigned char a2_ucUnused[2]; /* +0x2a */
};

struct tdstCollSet_ {
    tdstZdxList_* hZddList; /* +0x0 */
    tdstZdxList_* hZdeList; /* +0x4 */
    tdstZdxList_* hZdmList; /* +0x8 */
    tdstZdxList_* hZdrList; /* +0xc */
    tdstCsaList_* hZddActivationList; /* +0x10 */
    tdstCsaList_* hZdeActivationList; /* +0x14 */
    tdstCsaList_* hZdmActivationList; /* +0x18 */
    tdstCsaList_* hZdrActivationList; /* +0x1c */
    tdstZoneSetList_* hZddCurrentActivation; /* +0x20 */
    tdstZoneSetList_* hZdeCurrentActivation; /* +0x24 */
    tdstZoneSetList_* hZdrCurrentActivation; /* +0x28 */
    tdstZoneSetList_* hZdmCurrentActivation; /* +0x2c */
    unsigned int ulFBZddPriviligedZones; /* +0x30 */
    unsigned int ulFBZdePriviligedZones; /* +0x34 */
    unsigned int ulFBZdmPriviligedZones; /* +0x38 */
    unsigned int ulFBZdrPriviligedZones; /* +0x3c */
    unsigned char ucCollComputeFrequency; /* +0x40 */
    unsigned char ucCharacterPriority; /* +0x41 */
    unsigned char ucCollisionFlag; /* +0x42 */
    stColliderInfo_ stColliderInfo; /* +0x44 */
};

struct CINE_tdstCine_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn hActorList; /* +0x0 */
    CINE_tdstCine_* hNextBrotherDyn; /* +0xc */
    CINE_tdstCine_* hPrevBrotherDyn; /* +0x10 */
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn* hFatherDyn; /* +0x14 */
    unsigned char bPlaying; /* +0x18 */
    int lGenerateEvent; /* +0x1c */
    char szName[255]; /* +0x20 */
};

struct tdstMSLight_ {
    unsigned char bLocalLight; /* +0x0 */
    unsigned char bOnlyLocalLight; /* +0x1 */
    unsigned char bGiroPhare; /* +0x2 */
    unsigned char bPulsing; /* +0x3 */
    MTH3D_tdstVector_ stOffsetVect; /* +0x4 */
    MTH3D_tdstVector_ stAngle; /* +0x10 */
    float xStepGiro; /* +0x1c */
    float xStepPulse; /* +0x20 */
    float xMaxRangePulse; /* +0x24 */
    float xGiroAngle; /* +0x28 */
    GLI_tdstLight_* p_stLight; /* +0x2c */
    GEO_tdstGeometricObject_* p_stVisuLight; /* +0x30 */
    SECT_tdstListOfDNMLights_* hLightInSector; /* +0x34 */
    unsigned char ucNbRLIUse; /* +0x38 */
    unsigned char ucFirstRLI; /* +0x39 */
    unsigned char ucSecondRLI; /* +0x3a */
    float ucBlendPercent; /* +0x3c */
};

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstInternalStructurCineinfo_ {
    MTH3D_tdstVector_ stShiftTarget; /* +0x0 */
    MTH3D_tdstVector_ stShiftPos; /* +0xc */
    float xDistMin; /* +0x18 */
    float xDistMax; /* +0x1c */
    float xBoundDistMin; /* +0x20 */
    float xBoundDistMax; /* +0x24 */
    float xAngleAlpha; /* +0x28 */
    float xAngleShiftAlpha; /* +0x2c */
    float xAngleTheta; /* +0x30 */
    float xAngleShiftTheta; /* +0x34 */
    float xLinearSpeed; /* +0x38 */
    float xLinearIncreaseSpeed; /* +0x3c */
    float xLinearDecreaseSpeed; /* +0x40 */
    float xAngularSpeed; /* +0x44 */
    float xAngularIncreaseSpeed; /* +0x48 */
    float xAngularDecreaseSpeed; /* +0x4c */
    float xTargetSpeed; /* +0x50 */
    float xTargetIncreaseSpeed; /* +0x54 */
    float xTargetDecreaseSpeed; /* +0x58 */
    float xFocal; /* +0x5c */
    float xZMin; /* +0x60 */
    float xZMax; /* +0x64 */
    HIE_tdstSuperObject_* hSuperObjectTargeted; /* +0x68 */
    HIE_tdstSuperObject_* hSecondSuperObjectTargeted; /* +0x6c */
    unsigned short uwDNMFlags; /* +0x70 */
    unsigned short uwIAFlags; /* +0x72 */
    e_ucListViewport_ eTypeOfViewport; /* +0x74 */
    char cChannel; /* +0x78 */
    unsigned char bIsActive; /* +0x79 */
    unsigned char bDebugCamera; /* +0x7a */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    int ucAlign; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    tdstEvent_* d_stAnimEvent; /* +0x4 */
    stMorphData* d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SECT_tdstSector_ {
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn stListOfCharacters; /* +0x0 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt stListOfStaticLights; /* +0xc */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn stListOfDNMLights; /* +0x14 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt stListOfSectorsInGraphicInteraction; /* +0x20 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt stListOfSectorsInCollisionInteraction; /* +0x28 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt stListOfSectorsInActivityInteraction; /* +0x30 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt stListOfSectorsInSoundInteraction; /* +0x38 */
    LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt stListOfSoundEvent; /* +0x40 */
    MTH3D_tdstVector_ stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    HIE_tdstSuperObject_* h_PreviousSectorInList; /* +0x70 */
    HIE_tdstSuperObject_* h_NextSectorInList; /* +0x74 */
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

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct CINE_tdstCineActor_ {
    tdstSubAnim_ stSubAnim; /* +0x0 */
    tdstSubAnimInUse_* hSubAnimInUse; /* +0x4 */
    char szAnimation[255]; /* +0x8 */
    tdstEngineObject_* p_stActor; /* +0x108 */
    tdstState_* p_stStateAfterCine; /* +0x10c */
    tdstState_* p_stStateDuringCine; /* +0x110 */
    tdstState_* p_stTmpStateForActor; /* +0x114 */
    unsigned char bSkipIA; /* +0x118 */
    unsigned char bSkipMeca; /* +0x119 */
    unsigned char bPreviousIAState; /* +0x11a */
    unsigned char bPreviousMecaState; /* +0x11b */
    unsigned char ucRepeatAnimation; /* +0x11c */
    signed char scSpeedAnim; /* +0x11d */
    unsigned char bMoveActorAtTheBegin; /* +0x11e */
    HIE_tdstSuperObject_* hSPORef; /* +0x120 */
    unsigned char bMoveActorAtTheEnd; /* +0x124 */
    unsigned short usChannel; /* +0x126 */
    unsigned char bPlayingAnim; /* +0x128 */
    unsigned char bIsASubAnim; /* +0x129 */
    unsigned char bChangeComportBegin; /* +0x12a */
    tdstComport_* p_stIntelBegin; /* +0x12c */
    unsigned char bChangeReflexBegin; /* +0x130 */
    tdstComport_* p_stReflexBegin; /* +0x134 */
    unsigned char bChangeComportEnd; /* +0x138 */
    tdstComport_* p_stIntelEnd; /* +0x13c */
    unsigned char bChangeReflexEnd; /* +0x140 */
    tdstComport_* p_stReflexEnd; /* +0x144 */
    unsigned char bUseSoundRequestBegin; /* +0x148 */
    unsigned char bUseVoiceRequestBegin; /* +0x149 */
    unsigned char bUseMusicRequestBegin; /* +0x14a */
    unsigned char bUseAmbianceRequestBegin; /* +0x14b */
    _SND_tdstBlockEvent* pSoundRequestBegin; /* +0x14c */
    _SND_tdstBlockEvent* pVoiceRequestBegin; /* +0x150 */
    _SND_tdstBlockEvent* pMusicRequestBegin; /* +0x154 */
    _SND_tdstBlockEvent* pAmbianceRequestBegin; /* +0x158 */
    unsigned char bUseSoundRequestEnd; /* +0x15c */
    unsigned char bUseVoiceRequestEnd; /* +0x15d */
    unsigned char bUseMusicRequestEnd; /* +0x15e */
    unsigned char bUseAmbianceRequestEnd; /* +0x15f */
    _SND_tdstBlockEvent* pSoundRequestEnd; /* +0x160 */
    _SND_tdstBlockEvent* pVoiceRequestEnd; /* +0x164 */
    _SND_tdstBlockEvent* pMusicRequestEnd; /* +0x168 */
    _SND_tdstBlockEvent* pAmbianceRequestEnd; /* +0x16c */
    CINE_tdstCine_* pCine; /* +0x170 */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn hChannelLink; /* +0x174 */
    CINE_tdstCineActor_* hNextBrotherDyn; /* +0x180 */
    CINE_tdstCineActor_* hPrevBrotherDyn; /* +0x184 */
    LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn* hFatherDyn; /* +0x188 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

unsigned char g_ucGameModuleId;

unsigned int fn_ulMSSoundSizeOf(void)
{
    return 0x10;
}

int WPG_fn_lGetLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int* p_lWeight);
int WPG_fn_lChangeLinkWeight(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, int lWeight);
int WPG_fn_lGetLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int* p_ulCapability);
int WPG_fn_lChangeLinkCapabilities(WP_tdstGraph_* hGraph, WP_tdstWayPoint_* hSrcWayPoint, WP_tdstWayPoint_* hDstWayPoint, unsigned int ulCapability, int lValue);
WP_tdstWayPoint_* MSWay_fn_hGetWayPointOfPath(tdstMSWay_* hWay, int iIndex);

int MSWay_fn_lChangeWeightForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex, int lWeight)
{
    int lNbOfElts;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstWayPoint_* hWayPoint1;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            iIndex %= lNbOfElts;
            if (iIndex < 0)
                iIndex += lNbOfElts;
        }
        if ((iIndex >= 0) && (iIndex < lNbOfElts))
        {
            hWayPoint1 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex);
            hWayPoint2 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex + 1);
            if (hWayPoint2 != NULL)
            {
                return WPG_fn_lChangeLinkWeight(hWay->m_hPath, hWayPoint1, hWayPoint2, lWeight);
            }
        }
    }
    return -1;
}

int MSWay_fn_lGetWeightForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex)
{
    int lNbOfElts;
    int lValue;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstWayPoint_* hWayPoint1;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            iIndex %= lNbOfElts;
            if (iIndex < 0)
                iIndex += lNbOfElts;
        }
        if ((iIndex >= 0) && (iIndex < lNbOfElts))
        {
            hWayPoint1 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex);
            hWayPoint2 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex + 1);
            if (hWayPoint2 != NULL)
            {
                return (WPG_fn_lGetLinkWeight(hWay->m_hPath, hWayPoint1, hWayPoint2, &lValue) == -1) ? 0 : lValue;
            }
        }
    }
    return 0;
}

int MSWay_fn_lChangeCapsForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex, unsigned int ulNewCaps, int lValue)
{
    int lNbOfElts;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstWayPoint_* hWayPoint1;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            iIndex %= lNbOfElts;
            if (iIndex < 0)
                iIndex += lNbOfElts;
        }
        if ((iIndex >= 0) && (iIndex < lNbOfElts))
        {
            hWayPoint1 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex);
            hWayPoint2 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex + 1);
            if (hWayPoint2 != NULL)
            {
                return WPG_fn_lChangeLinkCapabilities(hWay->m_hPath, hWayPoint1, hWayPoint2, ulNewCaps, lValue);
            }
        }
    }
    return -1;
}

unsigned int MSWay_fn_ulGetCapsForNextWayPointOfPath(tdstMSWay_* hWay, int iIndex)
{
    int lNbOfElts;
    unsigned int ulNewCaps;
    WP_tdstWayPoint_* hWayPoint2;
    WP_tdstWayPoint_* hWayPoint1;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            iIndex %= lNbOfElts;
            if (iIndex < 0)
                iIndex += lNbOfElts;
        }
        if ((iIndex >= 0) && (iIndex < lNbOfElts))
        {
            hWayPoint1 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex);
            hWayPoint2 = MSWay_fn_hGetWayPointOfPath(hWay, iIndex + 1);
            if (hWayPoint2 != NULL)
            {
                return (WPG_fn_lGetLinkCapabilities(hWay->m_hPath, hWayPoint1, hWayPoint2, &ulNewCaps) == -1) ? 0 : ulNewCaps;
            }
        }
    }
    return 0;
}

WP_tdstWayPoint_* MSWay_fn_hGetWayPointOfPath(tdstMSWay_* hWay, int iIndex)
{
    int lNbOfElts;
    WP_tdstGraphNode_* hElement;
    int i;
    int k;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            if (lNbOfElts == 0)
                return NULL;
            iIndex %= lNbOfElts;
            if (iIndex < 0)
                iIndex += lNbOfElts;
        }
        else
        {
            if ((iIndex < 0) || (iIndex >= lNbOfElts))
                return NULL;
        }
        k = lNbOfElts - iIndex - 1;
        for (i = 0, hElement = hWay->m_hPath->m_hListOfNode.hFirstElementDyn; i < k; i++, hElement = hElement->hNextBrotherDyn) ;
        return hElement->m_hWayPoint;
    }
    return NULL;
}

int MSWay_fn_lIncrementCurrentIndexInPath(tdstMSWay_* hWay, int iStep)
{
    int lNbOfElts;

    if (hWay == NULL)
        return -1;

    if (hWay->m_hPath != NULL)
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            hWay->m_lIndex += iStep;
            hWay->m_lIndex %= lNbOfElts;
            if (hWay->m_lIndex < 0)
                hWay->m_lIndex += lNbOfElts;
            return hWay->m_lIndex;
        }

        if ((hWay->m_lIndex + iStep >= 0) && (hWay->m_lIndex + iStep < lNbOfElts))
        {
            hWay->m_lIndex += iStep;
            return hWay->m_lIndex;
        }
    }

    return -1;
}

int MSWay_fn_lLookForWPInMSWay(tdstMSWay_* _hWay, WP_tdstWayPoint_* _hWayPoint)
{
{
    int lNbOfElts;
    int iIndex;
    WP_tdstGraphNode_* hElement;
    if ((_hWay != NULL) && (_hWay->m_hPath != NULL))
    {
        lNbOfElts = _hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        for (iIndex = 0, hElement = _hWay->m_hPath->m_hListOfNode.hFirstElementDyn; hElement != NULL; hElement = hElement->hNextBrotherDyn, iIndex++)
        {
            if (_hWayPoint == hElement->m_hWayPoint)
                return lNbOfElts - iIndex - 1;
        }
    }
    return -1;
}
}

int MSWay_fn_lSetCurrentIndexInPath(tdstMSWay_* hWay, int _lIndex)
{
    int lNbOfElts;

    if ((hWay != NULL) && (hWay->m_hPath != NULL))
    {
        lNbOfElts = hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
        if (hWay->m_bIsCircular)
        {
            _lIndex %= lNbOfElts;
            if (_lIndex < 0)
                _lIndex += lNbOfElts;
        }
        if (_lIndex >= lNbOfElts)
            _lIndex = lNbOfElts - 1;
        if (_lIndex < 0)
            _lIndex = 0;
        hWay->m_lIndex = _lIndex;
        return hWay->m_lIndex;
    }
    return -1;
}

int MSWay_fn_lGetFirstIndexInPath(tdstMSWay_* hWay)
{
    if (hWay != NULL)
    {
        if (hWay->m_hPath != NULL)
            return 0;
    }
    return -1;
}

int MSWay_fn_lGetLastIndexInPath(tdstMSWay_* hWay)
{
    if (hWay != NULL)
    {
        if (hWay->m_hPath != NULL)
            return hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn - 1;
    }
    return -1;
}

int MSWay_fn_lGetCurrentIndexInPath(tdstMSWay_* hWay)
{
    if (hWay != NULL)
    {
        if (hWay->m_hPath != NULL)
            return hWay->m_lIndex;
    }
    return -1;
}

int MSWay_fn_lGetNumberWayPointInPath(tdstMSWay_* hWay)
{
    if (hWay != NULL)
    {
        if (hWay->m_hPath != NULL)
            return hWay->m_hPath->m_hListOfNode.lNumberOfElementsDyn;
    }
    return -1;
}

void MSWay_fn_vSetPath(tdstMSWay_* hWay, WP_tdstGraph_* hPath, char _bIsCircular)
{
    if ((hWay != 0) && (hPath != 0)) {
        if (hWay->m_hPath != 0) {
            WPG_fn_vDestroy(hWay->m_hPath);
        }
        hWay->m_hPath = hPath;
        hWay->m_lIndex = 0;
        hWay->m_bIsCircular = _bIsCircular;
    }
}

void MSWay_fn_vDesinitPath(tdstMSWay_* hWay)
{
    if (hWay)
    {


        if (fn_bScriptTransitionDeallocationCondition())
        {
            if (hWay->m_hPath)
            {



                WPG_fn_vDestroy(hWay->m_hPath);
            }
        }
        hWay->m_hPath = NULL;
        hWay->m_lIndex = -1;
        hWay->m_bIsCircular = 0;
    }
}

/* Statement-macro form of MSWay_fn_vDesinitPath: retail expands it on one
 * source line in fn_vMSWayDesinit, fn_vMSWayFree and fn_vMSWayCopyClone,
 * while other callers call the function. */
#define MSWay_M_vDesinitPath(_hWay)                                            \
    {                                                                          \
        tdstMSWay_* _hMacroWay = (_hWay);                                      \
        if (_hMacroWay)                                                        \
        {                                                                      \
            if (fn_bScriptTransitionDeallocationCondition())                   \
            {                                                                  \
                if (_hMacroWay->m_hPath)                                       \
                    WPG_fn_vDestroy(_hMacroWay->m_hPath);                      \
            }                                                                  \
            _hMacroWay->m_hPath = NULL;                                        \
            _hMacroWay->m_lIndex = -1;                                         \
            _hMacroWay->m_bIsCircular = 0;                                     \
        }                                                                      \
    }

void fn_vMSWayCopyClone(tdstEngineObject_* _p_stObjectDest, tdstEngineObject_* _p_stObjectSrc)
{
    MSWay_M_vDesinitPath(_p_stObjectDest->h_MSWay);

    memcpy(_p_stObjectDest->h_MSWay, _p_stObjectSrc->h_MSWay, sizeof(tdstMSWay_));

    MSWay_fn_vDesinitPath(_p_stObjectDest->h_MSWay);
}

void fn_vMSWayDesinit(tdstEngineObject_* p_stObject)
{
    tdstMSWay_* hMSWay;

    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    hMSWay = p_stObject->h_MSWay;
    if (!hMSWay) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
    MSWay_M_vDesinitPath(hMSWay);
}

void fn_vMSWayInit(tdstEngineObject_* p_stObject)
{
    tdstMSWay_* hMSWay;

    fn_vPushAllocModeAccordingToEngineObject(p_stObject);

    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    hMSWay = p_stObject->h_MSWay;
    if (!hMSWay) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }

    MSWay_fn_vDesinitPath(hMSWay);

    GAM_fn_vPopAllocMode();
}

void fn_vMSWayFree(tdstEngineObject_* p_stObject)
{
    tdstMSWay_* hMSWay;

    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    hMSWay = p_stObject->h_MSWay;
    if (!hMSWay) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 15, -1, 255, 255, NULL);
    }
    MSWay_M_vDesinitPath(hMSWay);
}

void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);

void fn_vMSWayAlloc(tdstEngineObject_* p_stObject)
{
    if (!p_stObject) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 14, -1, 255, 255, NULL);
    }
    if (p_stObject->h_MSWay) {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(48, g_ucGameModuleId, 0, 13, -1, 255, 255, NULL);
    }

    {
        tdstMSWay_* hMSWay = (tdstMSWay_*)HMU_fn_p_vMalloc(sizeof(tdstMSWay_), 0);
        MSWay_fn_vDesinitPath(hMSWay);
        p_stObject->h_MSWay = hMSWay;
    }
}
