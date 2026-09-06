/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct tdstKeyFrame_ tdstKeyFrame_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct anon_0 anon_0;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct stMorphData stMorphData;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct tdstMSLight_ tdstMSLight_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstChannel_ tdstChannel_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstNTTO_ tdstNTTO_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstA3dGENERAL_ForTransitions_ tdstA3dGENERAL_ForTransitions_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstOnlyFrame_ tdstOnlyFrame_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct tdstHierarchy_ tdstHierarchy_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct tdstDynam_ tdstDynam_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct tdstBrain_ tdstBrain_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct DNM_stReport DNM_stReport;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstDeformation_ tdstDeformation_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct AI_tdstMind_ AI_tdstMind_;

typedef enum anon_enum_008a3453 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_008a3453;

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

typedef enum MAT_tdeTranformationType_ {
    MAT_eTransform_Uninitialized = 0,
    MAT_eTransform_Identity = 1,
    MAT_eTransform_Translation = 2,
    MAT_eTransform_Zoom = 3,
    MAT_eTransform_Scale = 4,
    MAT_eTransform_Rotation = 5,
    MAT_eTransform_RotationZoom = 6,
    MAT_eTransform_RotationScale = 7,
    MAT_eTransform_ComplexRotationScale = 8,
    MAT_eTransform_Undefined = 9,
} MAT_tdeTranformationType_;

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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
};

struct tdstKeyFrame_ {
    unsigned short uwFrameNumber; /* +0x0 */
    unsigned short uwMask; /* +0x2 */
    unsigned short uwNumOfQuatOri; /* +0x4 */
    unsigned short uwNumOfQuatSca; /* +0x6 */
    unsigned short uwNumOfScaleValues; /* +0x8 */
    unsigned short uwNumOfPosition; /* +0xa */
    short swInterpolationParameter; /* +0xc */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
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

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstA3dGENERAL_ {
    unsigned short uwAnimationSpeed; /* +0x0 */
    unsigned short uwNumberOfVectors; /* +0x2 */
    unsigned short uwNumberOfQuaternions; /* +0x4 */
    unsigned short uwNumberOfHierarchies; /* +0x6 */
    unsigned short uwNumberOfNTTO; /* +0x8 */
    unsigned short uwNumberOfSavedFrames; /* +0xa */
    unsigned short uwNumberOfDeformations; /* +0xc */
    unsigned short uwNumberOfChannels; /* +0xe */
    unsigned short uwNumberOfFrames; /* +0x10 */
    unsigned int ulNumberOfKeyFrames; /* +0x14 */
    unsigned short uwNumberOfEvents; /* +0x18 */
    unsigned short uwNumOfFirstPosition; /* +0x1a */
    unsigned short uwStartFrame; /* +0x1c */
    unsigned short uwEndFrame; /* +0x1e */
    unsigned short uwFakeAnimSpeed; /* +0x20 */
    unsigned short uwFlags; /* +0x22 */
    unsigned short uwNumOfAnimationTranslationOffset; /* +0x24 */
    unsigned short uwNumOfAnimationRotationOffset; /* +0x26 */
    unsigned short uwNumberOfMorphData; /* +0x28 */
    unsigned short uwNumOfFirstVector; /* +0x2a */
    unsigned short uwNumOfFirstQuaternion; /* +0x2c */
    unsigned short uwNumOfFirstHierarchy; /* +0x2e */
    unsigned short uwNumOfFirstNTTO; /* +0x30 */
    unsigned short uwNumOfFirstDeformation; /* +0x32 */
    unsigned short uwNumOfFirstOnlyFrame; /* +0x34 */
    unsigned short uwNumOfFirstChannel; /* +0x36 */
    unsigned short uwNumOfFirstEvent; /* +0x38 */
    unsigned short uwNumOfFirstMorphData; /* +0x3a */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    IPO_tdstInstanciatedPhysicalObject_* p_stInstanciatedPhysicalObject; /* +0x0 */
    SECT_tdstSector_* p_stSector; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    GLI_tdstLight_* p_stLight; /* +0x0 */
    HIE_tdstModifierObject_* p_stModifierObject; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstElementDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastElementDyn; /* +0xc */
    int lNumberOfElementsDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
    MAT_tdstTransformation_* hLocalMatrix; /* +0x20 */
    MAT_tdstTransformation_* hGlobalMatrix; /* +0x24 */
    int lLastComputeFrame; /* +0x28 */
    int lDrawModeMask; /* +0x2c */
    unsigned int ulFlags; /* +0x30 */
    int hVisualBoundingVolume; /* +0x34 */
    int hCollideBoundingVolume; /* +0x38 */
    MTH3D_tdstVector_ stSemiLookAtVector; /* +0x3c */
    float fTransparenceLevel; /* +0x48 */
    unsigned int ulOutlineColor; /* +0x4c */
    int lDisplayPrioriry; /* +0x50 */
    int lIL_Status; /* +0x54 */
    MTH3D_tdstVector_ stIL_AmbientColor; /* +0x58 */
    MTH3D_tdstVector_ stIL_ParallelDirection; /* +0x64 */
    MTH3D_tdstVector_ stIL_ParallelColor; /* +0x70 */
    unsigned char ucSuperImposedOnWhichViewport; /* +0x7c */
    unsigned char bIsSPO; /* +0x7d */
    unsigned char xTransition; /* +0x7e */
};

struct tdstChannel_ {
    unsigned short uwNumberOfKeys; /* +0x0 */
    unsigned short uwChannelNumber; /* +0x2 */
    unsigned short uwNumOfLocalPivotPos; /* +0x4 */
    unsigned short uwNumOfFirstFrame; /* +0x6 */
    unsigned int ulNumOfFirstFrameKF; /* +0x8 */
    unsigned int ulNumOfFirstKeyFrame; /* +0xc */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct tdstNTTO_ {
    unsigned short uwTypeOfObject; /* +0x0 */
    unsigned short ucNumberInTable; /* +0x2 */
    unsigned char ucTransparency; /* +0x4 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct tdstA3dGENERAL_ForTransitions_ {
    unsigned short uwPrevious; /* +0x0 */
    unsigned short uwNext; /* +0x2 */
    unsigned short uwPreviousFrame; /* +0x4 */
    unsigned short uwNextFrame; /* +0x6 */
    unsigned short uwNumberOfMorphData; /* +0x8 */
    unsigned short uwNoSpeed; /* +0xa */
    float xNLParameter; /* +0xc */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct DNM_stDynamicsBaseBlock {
    int m_lObjectType; /* +0x0 */
    int m_pCurrentIdCard; /* +0x4 */
    unsigned int ulFlags; /* +0x8 */
    unsigned int ulEndFlags; /* +0xc */
    float m_xGravity; /* +0x10 */
    float m_xSlopeLimit; /* +0x14 */
    float m_xCosSlope; /* +0x18 */
    float m_xSlide; /* +0x1c */
    float m_xRebound; /* +0x20 */
    MTH3D_tdstVector_ m_stImposeSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stProposeSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stPreviousSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stScale; /* +0x48 */
    MTH3D_tdstVector_ m_stSpeedAnim; /* +0x54 */
    MTH3D_tdstVector_ m_stSafeTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stAddTranslation; /* +0x6c */
    MAT_tdstTransformation_ m_stPreviousMatrix; /* +0x80 */
    MAT_tdstTransformation_ m_stCurrentMatrix; /* +0xe0 */
    MTH3D_tdstMatrix_ m_stImposeRotationMatrix; /* +0x140 */
    unsigned char m_ucNbFrame; /* +0x164 */
    DNM_stReport* m_pstReport; /* +0x168 */
};

struct DNM_stDynamicsAdvancedBlock {
    float m_xInertiaX; /* +0x0 */
    float m_xInertiaY; /* +0x4 */
    float m_xInertiaZ; /* +0x8 */
    float m_xStreamPrority; /* +0xc */
    float m_xStreamFactor; /* +0x10 */
    float m_xSlideFactorX; /* +0x14 */
    float m_xSlideFactorY; /* +0x18 */
    float m_xSlideFactorZ; /* +0x1c */
    float m_xPreviousSlide; /* +0x20 */
    MTH3D_tdstVector_ m_stMaxSpeed; /* +0x24 */
    MTH3D_tdstVector_ m_stStreamSpeed; /* +0x30 */
    MTH3D_tdstVector_ m_stAddSpeed; /* +0x3c */
    MTH3D_tdstVector_ m_stLimit; /* +0x48 */
    MTH3D_tdstVector_ m_stCollisionTranslation; /* +0x54 */
    MTH3D_tdstVector_ m_stInertiaTranslation; /* +0x60 */
    MTH3D_tdstVector_ m_stGroundNormal; /* +0x6c */
    MTH3D_tdstVector_ m_stWallNormal; /* +0x78 */
    char m_cCollideCounter; /* +0x84 */
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
    anon_1 m_stData6; /* +0x34 */
    anon_0 m_stData7; /* +0x44 */
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
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstOnlyFrame_ {
    unsigned short uwNumOfAngularSpeedQuat; /* +0x0 */
    unsigned short uwNumOfSpeedVector; /* +0x2 */
    unsigned short uwHierarchyNbCouples; /* +0x4 */
    unsigned short uwNumOfFirstHierarchyCouple; /* +0x6 */
    unsigned short uwDeformationNb; /* +0x8 */
    unsigned short uwNumOfFirstDeformation; /* +0xa */
    unsigned short uwNumOfSavedFrame; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct GEO_tdstGeometricObject_ {
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x0 */
    MTH3D_tdstVector_* d_stListOfPointsNormals; /* +0x4 */
    int d_dfVertexTransparency; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    GEO_tdstEdge_* d_stListOfEdges; /* +0x14 */
    GEO_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    unsigned int ulType; /* +0x1c */
    short xNbPoints; /* +0x20 */
    short xNbElements; /* +0x22 */
    short xNbEdges; /* +0x24 */
    short xNbParallelBoxes; /* +0x26 */
    float xBoudingSphereRadius; /* +0x28 */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x30 */
    GEO_tdstDoubledIndex_* d_stListOfEdgesDI; /* +0x40 */
    short xNbEdgesDI; /* +0x44 */
    short xNbOctreeEdges; /* +0x46 */
    int bUsedForShadowDrawing; /* +0x48 */
    int bUsedForShadowCreating; /* +0x4c */
    int pSDC_Data; /* +0x50 */
    unsigned int bIsStatic; /* +0x54 */
    unsigned int glDisplayList; /* +0x58 */
    unsigned char bVTForSinus; /* +0x5c */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstHierarchy_ {
    unsigned short uwChild; /* +0x0 */
    unsigned short uwFather; /* +0x2 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstAChannel_ {
    HIE_tdstSuperObject_* hSupObject; /* +0x0 */
    HIE_tdstSuperObject_* hZoomSupObject; /* +0x4 */
    tdstAChannel_* p_stNextActiveChannel; /* +0x8 */
    tdstAChannel_* p_stFatherChannel; /* +0xc */
    stInterpolatedPosition ax_InterpolatedPositions[2]; /* +0x10 */
    unsigned char ucNbInterpolatedPositions; /* +0x88 */
    unsigned char bControlledChannel; /* +0x89 */
    unsigned char bLipsChannel; /* +0x8a */
    unsigned char bActiveChannel; /* +0x8b */
};

struct tdst3dData_ {
    tdstState_* h_InitialState; /* +0x0 */
    tdstState_* h_CurrentState; /* +0x4 */
    tdstState_* h_FirstStateOfAction; /* +0x8 */
    tdstObjectsTablesList_* h_InitialObjectsTable; /* +0xc */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    tdstFamilyList_* h_Family; /* +0x14 */
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
    short xSkinIndex[4]; /* +0x1d8 */
};

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
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

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_008a3453 eUsedMechanics; /* +0x8 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct tdstDeformation_ {
    unsigned short uwChannel1; /* +0x0 */
    unsigned short uwFrontier1; /* +0x2 */
    unsigned short uwChannel2; /* +0x4 */
    unsigned short uwFrontier2; /* +0x6 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

float a4_xQuater1[4];
MTH3D_tdstVector_ g_stTempoVector;
int gp_stNTTO;
int gp_FramesNumOfNTTO;
int gp_stOnlyFrames;
int gp_stChannels;
int gp_a3_xVectors;
int gp_stKeyFrames;
int gp_FramesKFIndex;
int gp_a4_xQuaternions;
unsigned char g_bNoSpeedForIntermAnim;
int gp_stHierarchies;
int gp_stDeformations;
int gp_stMorphData;
int gp_stEvents;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 45–58 */
/* addr: 0x0027c260  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 45
 *   +0x0018 -> line 47
 *   +0x0020 -> line 48
 *   +0x00ac -> line 49
 *   +0x00b8 -> line 50
 *   +0x0144 -> line 53
 *   +0x0150 -> line 55
 *   +0x0190 -> line 56
 *   +0x0194 -> line 55
 *   +0x01a4 -> line 56
 *   +0x01bc -> line 58
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_v_InitSinTab(void)
{
    int slCnt1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 2025–2099 */
/* addr: 0x0027c440  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2025
 *   +0x001c -> line 2045
 *   +0x0028 -> line 2052
 *   +0x0030 -> line 2053
 *   +0x0040 -> line 2056
 *   +0x0050 -> line 2061
 *   +0x0054 -> line 2067
 *   +0x0058 -> line 2061
 *   +0x0060 -> line 2060
 *   +0x0068 -> line 2061
 *   +0x0074 -> line 2060
 *   +0x0078 -> line 2061
 *   +0x0088 -> line 2067
 *   +0x0090 -> line 2072
 *   +0x00d0 -> line 2088
 *   +0x0120 -> line 2091
 *   +0x0128 -> line 2098
 *   +0x012c -> line 2096
 *   +0x0130 -> line 2098
 *   +0x014c -> line 2099
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeFinalFrameMatrixForInterAnim(HIE_tdstSuperObject_* p_stSuperObject, tdstAnim3d_* _p_stAnim3d)
{
    unsigned char bHierarchized;
    unsigned short uwCnt1;
    unsigned short uwPreviousT_NTTO;
    tdstChannel_* p_stPreviousChannel;
    tdstA3dGENERAL_* p_stPreviousA3dGeneral;
    tdstA3dGENERAL_ForTransitions_* p_stA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1959–2018 */
/* addr: 0x0027c5b0  size: 444 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1959
 *   +0x0004 -> line 1970
 *   +0x0008 -> line 1959
 *   +0x000c -> line 1970
 *   +0x0010 -> line 1959
 *   +0x0014 -> line 1970
 *   +0x0018 -> line 1959
 *   +0x001c -> line 1970
 *   +0x0020 -> line 1959
 *   +0x0028 -> line 1970
 *   +0x006c -> line 1973
 *   +0x0078 -> line 1975
 *   +0x0080 -> line 1976
 *   +0x0088 -> line 1980
 *   +0x0090 -> line 1986
 *   +0x0094 -> line 1980
 *   +0x0098 -> line 1986
 *   +0x00a0 -> line 1988
 *   +0x00a4 -> line 1986
 *   +0x00a8 -> line 1988
 *   +0x00ac -> line 1989
 *   +0x00b4 -> line 1988
 *   +0x00bc -> line 1989
 *   +0x00d8 -> line 1993
 *   +0x00e0 -> line 1997
 *   +0x0120 -> line 2009
 *   +0x0170 -> line 2012
 *   +0x0178 -> line 2017
 *   +0x017c -> line 2016
 *   +0x0180 -> line 2017
 *   +0x019c -> line 2018
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeFinalFrameMatrix(HIE_tdstSuperObject_* p_stSuperObject, tdstAnim3d_* _p_stAnim3d, float _xFrame)
{
    unsigned short uwT_NTTO;
    unsigned char bHierarchized;
    tdstChannel_* p_stCurrentChannel;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    unsigned short uwCnt1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1784–1952 */
/* addr: 0x0027c770  size: 1976 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1784
 *   +0x0004 -> line 1791
 *   +0x0008 -> line 1784
 *   +0x0028 -> line 1791
 *   +0x0034 -> line 1792
 *   +0x004c -> line 1795
 *   +0x0068 -> line 1796
 *   +0x0080 -> line 1799
 *   +0x0094 -> line 1802
 *   +0x00a4 -> line 1808
 *   +0x00b4 -> line 1810
 *   +0x011c -> line 1814
 *   +0x0164 -> line 1818
 *   +0x0170 -> line 1819
 *   +0x0178 -> line 1822
 *   +0x01f4 -> line 1828
 *   +0x0204 -> line 1829
 *   +0x020c -> line 1833
 *   +0x021c -> line 1835
 *   +0x0230 -> line 1839
 *   +0x0238 -> line 1842
 *   +0x0254 -> line 1845
 *   +0x02bc -> line 1849
 *   +0x0304 -> line 1853
 *   +0x0310 -> line 1854
 *   +0x0318 -> line 1857
 *   +0x0394 -> line 1863
 *   +0x03a4 -> line 1864
 *   +0x03ac -> line 1868
 *   +0x03bc -> line 1870
 *   +0x03d0 -> line 1874
 *   +0x03d8 -> line 1878
 *   +0x03dc -> line 1881
 *   +0x03e0 -> line 1878
 *   +0x03e4 -> line 1879
 *   +0x03e8 -> line 1878
 *   +0x03ec -> line 1880
 *   +0x03f0 -> line 1881
 *   +0x03fc -> line 1878
 *   +0x0408 -> line 1879
 *   +0x0418 -> line 1881
 *   +0x041c -> line 1879
 *   +0x0428 -> line 1880
 *   +0x0444 -> line 1881
 *   +0x0498 -> line 1885
 *   +0x04e0 -> line 1889
 *   +0x04ec -> line 1890
 *   +0x04f4 -> line 1893
 *   +0x05d4 -> line 1903
 *   +0x05e4 -> line 1904
 *   +0x05ec -> line 1908
 *   +0x0600 -> line 1912
 *   +0x0610 -> line 1914
 *   +0x0624 -> line 1926
 *   +0x0628 -> line 1927
 *   +0x0630 -> line 1928
 *   +0x0634 -> line 1930
 *   +0x0638 -> line 1928
 *   +0x063c -> line 1930
 *   +0x0648 -> line 1932
 *   +0x064c -> line 1933
 *   +0x065c -> line 1935
 *   +0x0670 -> line 1936
 *   +0x0684 -> line 1937
 *   +0x0698 -> line 1939
 *   +0x069c -> line 1937
 *   +0x06a0 -> line 1939
 *   +0x06bc -> line 1940
 *   +0x06c4 -> line 1944
 *   +0x06ec -> line 1946
 *   +0x0754 -> line 1947
 *   +0x075c -> line 1950
 *   +0x0798 -> line 1952
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_v_MergePositions(tdstChannel_* p_stChannel, tdstAChannel_* p_stCurrentChannel, unsigned char bHierarchized)
{
    float xRatio;
    MAT_tdstTransformation_ stTempTransform;
    MTH3D_tdstVector_ stVector2;
    MTH3D_tdstVector_ stVector;
    float a4_xQuat[4];
    unsigned char i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1592–1775 */
/* addr: 0x0027cf30  size: 2056 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1592
 *   +0x004c -> line 1604
 *   +0x005c -> line 1608
 *   +0x0060 -> line 1609
 *   +0x0064 -> line 1608
 *   +0x0068 -> line 1609
 *   +0x0070 -> line 1604
 *   +0x0074 -> line 1609
 *   +0x0078 -> line 1608
 *   +0x007c -> line 1609
 *   +0x00b8 -> line 1613
 *   +0x00bc -> line 1609
 *   +0x00d4 -> line 1613
 *   +0x00dc -> line 1625
 *   +0x011c -> line 1633
 *   +0x0124 -> line 1640
 *   +0x0130 -> line 1633
 *   +0x0144 -> line 1640
 *   +0x0164 -> line 1644
 *   +0x0174 -> line 1646
 *   +0x017c -> line 1653
 *   +0x0180 -> line 1655
 *   +0x0184 -> line 1653
 *   +0x018c -> line 1655
 *   +0x0190 -> line 1653
 *   +0x01a0 -> line 1655
 *   +0x01f4 -> line 1656
 *   +0x0200 -> line 1660
 *   +0x0204 -> line 1662
 *   +0x0210 -> line 1672
 *   +0x0220 -> line 1673
 *   +0x0230 -> line 1675
 *   +0x0274 -> line 1676
 *   +0x0278 -> line 1679
 *   +0x029c -> line 1682
 *   +0x02a8 -> line 1683
 *   +0x02b0 -> line 1682
 *   +0x02c0 -> line 1683
 *   +0x02d0 -> line 1689
 *   +0x030c -> line 1691
 *   +0x031c -> line 1692
 *   +0x0320 -> line 1704
 *   +0x0358 -> line 1712
 *   +0x036c -> line 1714
 *   +0x0398 -> line 1717
 *   +0x03a4 -> line 1718
 *   +0x03ac -> line 1717
 *   +0x03c8 -> line 1718
 *   +0x03e4 -> line 1719
 *   +0x03ec -> line 1720
 *   +0x03f0 -> line 1721
 *   +0x03fc -> line 1722
 *   +0x0404 -> line 1721
 *   +0x0420 -> line 1722
 *   +0x043c -> line 1723
 *   +0x0444 -> line 1724
 *   +0x0448 -> line 1725
 *   +0x0454 -> line 1726
 *   +0x045c -> line 1725
 *   +0x0478 -> line 1726
 *   +0x0494 -> line 1727
 *   +0x049c -> line 1728
 *   +0x04a0 -> line 1729
 *   +0x04ac -> line 1730
 *   +0x04b4 -> line 1729
 *   +0x04d0 -> line 1730
 *   +0x04ec -> line 1731
 *   +0x04f4 -> line 1732
 *   +0x04f8 -> line 1733
 *   +0x04fc -> line 1734
 *   +0x0500 -> line 1733
 *   +0x051c -> line 1734
 *   +0x053c -> line 1737
 *   +0x0540 -> line 1738
 *   +0x054c -> line 1740
 *   +0x0588 -> line 1743
 *   +0x0594 -> line 1744
 *   +0x059c -> line 1743
 *   +0x05b8 -> line 1744
 *   +0x05d4 -> line 1745
 *   +0x05dc -> line 1746
 *   +0x05e0 -> line 1747
 *   +0x05ec -> line 1748
 *   +0x05f4 -> line 1747
 *   +0x0610 -> line 1748
 *   +0x062c -> line 1749
 *   +0x0634 -> line 1750
 *   +0x0638 -> line 1751
 *   +0x0644 -> line 1752
 *   +0x064c -> line 1751
 *   +0x0668 -> line 1752
 *   +0x0684 -> line 1753
 *   +0x068c -> line 1754
 *   +0x0690 -> line 1755
 *   +0x069c -> line 1756
 *   +0x06a4 -> line 1755
 *   +0x06c0 -> line 1756
 *   +0x06dc -> line 1757
 *   +0x06e4 -> line 1758
 *   +0x06e8 -> line 1759
 *   +0x06ec -> line 1760
 *   +0x06f0 -> line 1759
 *   +0x070c -> line 1760
 *   +0x072c -> line 1763
 *   +0x0730 -> line 1765
 *   +0x0738 -> line 1767
 *   +0x073c -> line 1768
 *   +0x0740 -> line 1767
 *   +0x075c -> line 1768
 *   +0x077c -> line 1769
 *   +0x0780 -> line 1770
 *   +0x07a4 -> line 1771
 *   +0x07a8 -> line 1774
 *   +0x07ac -> line 1773
 *   +0x07b0 -> line 1774
 *   +0x07cc -> line 1775
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrameMatrixForSubAnim(void* _p_stSuperObject, tdstAnim3d_* _p_stAnim3d, float _xFrame, tdstAChannel_* d_stChannelArray, unsigned char bMergeWithMainAnim)
{
    float xTmp;
    float xDT;
    tdstKeyFrame_* p_stOldKeyFrame;
    tdstKeyFrame_* p_stCurrentKeyFrame;
    unsigned short* p_CurrentFrameNumOfNTTO;
    unsigned char bHierarchized;
    unsigned short uwCnt1;
    unsigned short uwT_NTTO;
    tdstChannel_* p_stCurrentChannel;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1521–1584 */
/* addr: 0x0027d740  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1521
 *   +0x0020 -> line 1531
 *   +0x0030 -> line 1537
 *   +0x0038 -> line 1535
 *   +0x003c -> line 1539
 *   +0x0040 -> line 1537
 *   +0x0044 -> line 1539
 *   +0x0048 -> line 1535
 *   +0x004c -> line 1539
 *   +0x0060 -> line 1537
 *   +0x0068 -> line 1535
 *   +0x006c -> line 1537
 *   +0x0070 -> line 1539
 *   +0x0074 -> line 1537
 *   +0x0078 -> line 1535
 *   +0x007c -> line 1537
 *   +0x0084 -> line 1539
 *   +0x008c -> line 1549
 *   +0x0094 -> line 1544
 *   +0x00a0 -> line 1548
 *   +0x00a4 -> line 1549
 *   +0x00a8 -> line 1544
 *   +0x00b0 -> line 1549
 *   +0x00b8 -> line 1551
 *   +0x00cc -> line 1556
 *   +0x00d8 -> line 1559
 *   +0x0118 -> line 1561
 *   +0x0120 -> line 1563
 *   +0x0130 -> line 1565
 *   +0x0150 -> line 1567
 *   +0x0170 -> line 1569
 *   +0x0178 -> line 1572
 *   +0x019c -> line 1573
 *   +0x01a4 -> line 1574
 *   +0x01b4 -> line 1575
 *   +0x01b8 -> line 1576
 *   +0x01bc -> line 1579
 *   +0x01c4 -> line 1580
 *   +0x01c8 -> line 1581
 *   +0x01cc -> line 1579
 *   +0x01d0 -> line 1581
 *   +0x01e8 -> line 1583
 *   +0x01ec -> line 1582
 *   +0x01f0 -> line 1583
 *   +0x020c -> line 1584
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrameForSubAnim(tdstFrame3d_* _p_stFrame, tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame, unsigned char _ucAnimLevel)
{
    unsigned short* p_CurrentFrameNumOfNTTO;
    tdstElement3d_* p_stCurrentElement3d;
    unsigned short uwCnt2;
    unsigned short uwCnt1;
    unsigned short uwT_NTTO;
    tdstChannel_* p_stCurrentChannel;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1328–1514 */
/* addr: 0x0027d970  size: 872 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1328
 *   +0x002c -> line 1362
 *   +0x003c -> line 1363
 *   +0x004c -> line 1367
 *   +0x0058 -> line 1368
 *   +0x0064 -> line 1367
 *   +0x0068 -> line 1370
 *   +0x0074 -> line 1368
 *   +0x0078 -> line 1370
 *   +0x0084 -> line 1372
 *   +0x0090 -> line 1383
 *   +0x00bc -> line 1385
 *   +0x00cc -> line 1387
 *   +0x00d4 -> line 1395
 *   +0x00ec -> line 1397
 *   +0x00f8 -> line 1402
 *   +0x0100 -> line 1410
 *   +0x0108 -> line 1414
 *   +0x010c -> line 1413
 *   +0x0114 -> line 1414
 *   +0x012c -> line 1417
 *   +0x0138 -> line 1418
 *   +0x0144 -> line 1420
 *   +0x0154 -> line 1418
 *   +0x0158 -> line 1420
 *   +0x0160 -> line 1422
 *   +0x016c -> line 1433
 *   +0x0198 -> line 1435
 *   +0x01a8 -> line 1437
 *   +0x01b0 -> line 1445
 *   +0x01c8 -> line 1447
 *   +0x01d0 -> line 1452
 *   +0x01d8 -> line 1460
 *   +0x01e0 -> line 1464
 *   +0x01e4 -> line 1463
 *   +0x01ec -> line 1464
 *   +0x0204 -> line 1467
 *   +0x020c -> line 1494
 *   +0x025c -> line 1497
 *   +0x0264 -> line 1499
 *   +0x0298 -> line 1502
 *   +0x02a0 -> line 1504
 *   +0x0318 -> line 1510
 *   +0x0320 -> line 1512
 *   +0x0324 -> line 1510
 *   +0x0328 -> line 1512
 *   +0x0344 -> line 1513
 *   +0x0348 -> line 1514
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_bTestSamePosition(tdstAnim3d_* p_stPreviousAnim, tdstAnim3d_* p_stNextAnim, unsigned short uwPreviousFrame, unsigned short uwNextFrame)
{
    unsigned short uwCnt1;
    int a256_p_stNextKeyFrames[256];
    int a256_p_stPrevKeyFrames[256];
    tdstKeyFrame_* p_stNextKeyFrame;
    tdstKeyFrame_* p_stPreviousKeyFrame;
    tdstKeyFrame_* p_stNewKeyFrame;
    tdstKeyFrame_* p_stOldKeyFrame;
    tdstChannel_* param0;
    tdstChannel_* p_stPreviousChannel;
    tdstA3dGENERAL_* p_stNextA3dGeneral;
    tdstA3dGENERAL_* p_stPreviousA3dGeneral;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1319–1324 */
/* addr: 0x0027dce0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1319
 *   +0x0008 -> line 1322
 *   +0x0010 -> line 1324
 *   +0x0014 -> line 1323
 *   +0x0018 -> line 1324
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short fn_uwGetFrameInNextAnimForIntermAnim(tdstAnim3d_* p_stTempoAnim)
{
    tdstA3dGENERAL_ForTransitions_* p_stA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1310–1315 */
/* addr: 0x0027dd00  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1310
 *   +0x000c -> line 1311
 *   +0x0018 -> line 1312
 *   +0x002c -> line 1313
 *   +0x0034 -> line 1314
 *   +0x0040 -> line 1315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDeleteIntermediateAnimation(tdstAnim3d_* p_stTempoAnim)
{
    fn_vReleaseMergeA3dGeneral(p_stTempoAnim->uwNumOfA3dGENERAL);
    if (p_stTempoAnim->d_stMorphDataArray != NULL)
        HMU_fn_vFree(&p_stTempoAnim->d_stMorphDataArray, 1);
    HMU_fn_vFree(&p_stTempoAnim, 1);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1172–1306 */
/* addr: 0x0027dd50  size: 800 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1172
 *   +0x0004 -> line 1188
 *   +0x0008 -> line 1172
 *   +0x0048 -> line 1188
 *   +0x0054 -> line 1195
 *   +0x005c -> line 1200
 *   +0x006c -> line 1203
 *   +0x0080 -> line 1206
 *   +0x0090 -> line 1207
 *   +0x0098 -> line 1214
 *   +0x00a0 -> line 1218
 *   +0x00a4 -> line 1230
 *   +0x00a8 -> line 1219
 *   +0x00ac -> line 1234
 *   +0x00b0 -> line 1235
 *   +0x00b4 -> line 1236
 *   +0x00c4 -> line 1219
 *   +0x00c8 -> line 1220
 *   +0x00d0 -> line 1221
 *   +0x00d4 -> line 1225
 *   +0x00d8 -> line 1230
 *   +0x00dc -> line 1228
 *   +0x00e0 -> line 1232
 *   +0x00e4 -> line 1234
 *   +0x00e8 -> line 1228
 *   +0x00ec -> line 1230
 *   +0x00f8 -> line 1228
 *   +0x00fc -> line 1230
 *   +0x0100 -> line 1232
 *   +0x0104 -> line 1234
 *   +0x0108 -> line 1228
 *   +0x010c -> line 1232
 *   +0x0110 -> line 1234
 *   +0x0114 -> line 1230
 *   +0x0118 -> line 1234
 *   +0x0120 -> line 1230
 *   +0x0124 -> line 1234
 *   +0x0128 -> line 1230
 *   +0x012c -> line 1234
 *   +0x0130 -> line 1236
 *   +0x013c -> line 1242
 *   +0x0140 -> line 1243
 *   +0x0144 -> line 1242
 *   +0x0148 -> line 1246
 *   +0x014c -> line 1242
 *   +0x0154 -> line 1243
 *   +0x0158 -> line 1242
 *   +0x015c -> line 1243
 *   +0x0160 -> line 1246
 *   +0x0164 -> line 1243
 *   +0x0168 -> line 1246
 *   +0x01b8 -> line 1251
 *   +0x01c0 -> line 1253
 *   +0x01c4 -> line 1255
 *   +0x01c8 -> line 1253
 *   +0x01cc -> line 1254
 *   +0x01d0 -> line 1260
 *   +0x01d4 -> line 1257
 *   +0x01dc -> line 1259
 *   +0x01e0 -> line 1254
 *   +0x01f8 -> line 1255
 *   +0x01fc -> line 1259
 *   +0x0200 -> line 1255
 *   +0x0204 -> line 1256
 *   +0x0208 -> line 1257
 *   +0x020c -> line 1260
 *   +0x0228 -> line 1264
 *   +0x022c -> line 1262
 *   +0x0230 -> line 1263
 *   +0x0234 -> line 1264
 *   +0x0258 -> line 1265
 *   +0x0260 -> line 1266
 *   +0x0268 -> line 1269
 *   +0x0288 -> line 1270
 *   +0x0294 -> line 1271
 *   +0x029c -> line 1275
 *   +0x02a0 -> line 1283
 *   +0x02ac -> line 1284
 *   +0x02b4 -> line 1286
 *   +0x02bc -> line 1287
 *   +0x02c8 -> line 1288
 *   +0x02cc -> line 1289
 *   +0x02d0 -> line 1291
 *   +0x02d4 -> line 1292
 *   +0x02dc -> line 1293
 *   +0x02e0 -> line 1295
 *   +0x02e8 -> line 1304
 *   +0x02ec -> line 1306
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stCreateIntermediateAnimation(tdstAnim3d_* p_stPreviousAnim, tdstAnim3d_* p_stNextAnim, unsigned short uwPreviousFrame, unsigned short uwNextFrame, unsigned int ulNumberOfFramesForIntermAnim, float xNLParameter)
{
    unsigned short* p_NextFrameNumOfNTTO;
    unsigned short* p_CurrentFrameNumOfNTTO;
    unsigned short uwCnt2;
    unsigned short uwCnt1;
    int iNbMorphTask;
    unsigned short uwT_NextNTTO;
    unsigned short uwT_CurrentNTTO;
    tdstChannel_* p_stNextChannel;
    tdstChannel_* p_stCurrentChannel;
    stMorphData ax_stTempoMorphArray[64];
    tdstA3dGENERAL_* p_stNextA3dGENERAL;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    tdstA3dGENERAL_ForTransitions_* p_stA3dGENERAL;
    tdstAnim3d_* p_stNewAnim;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 1149–1168 */
/* addr: 0x0027e070  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1149
 *   +0x0004 -> line 1154
 *   +0x0008 -> line 1149
 *   +0x0018 -> line 1154
 *   +0x0028 -> line 1155
 *   +0x0030 -> line 1158
 *   +0x003c -> line 1160
 *   +0x005c -> line 1162
 *   +0x0064 -> line 1164
 *   +0x0070 -> line 1165
 *   +0x0084 -> line 1167
 *   +0x0088 -> line 1168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stGetHierarchy(tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame, unsigned int* p_ulNewNbCouples)
{
    tdstOnlyFrame_* p_stCurrentOnlyFrame;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 970–1145 */
/* addr: 0x0027e110  size: 1000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 970
 *   +0x004c -> line 988
 *   +0x005c -> line 992
 *   +0x0070 -> line 997
 *   +0x0078 -> line 1004
 *   +0x0080 -> line 1005
 *   +0x0090 -> line 1008
 *   +0x00a0 -> line 1013
 *   +0x00a4 -> line 1019
 *   +0x00a8 -> line 1013
 *   +0x00ac -> line 1014
 *   +0x00b0 -> line 1013
 *   +0x00b4 -> line 1012
 *   +0x00bc -> line 1013
 *   +0x00c0 -> line 1014
 *   +0x00c4 -> line 1013
 *   +0x00cc -> line 1014
 *   +0x00d0 -> line 1013
 *   +0x00d4 -> line 1012
 *   +0x00d8 -> line 1013
 *   +0x00dc -> line 1012
 *   +0x00e0 -> line 1013
 *   +0x00e8 -> line 1019
 *   +0x00f0 -> line 1036
 *   +0x0130 -> line 1047
 *   +0x0138 -> line 1054
 *   +0x0148 -> line 1047
 *   +0x0158 -> line 1054
 *   +0x0164 -> line 1047
 *   +0x0168 -> line 1054
 *   +0x017c -> line 1056
 *   +0x018c -> line 1058
 *   +0x0194 -> line 1065
 *   +0x01ac -> line 1067
 *   +0x01b8 -> line 1072
 *   +0x01c0 -> line 1087
 *   +0x01e8 -> line 1089
 *   +0x01f8 -> line 1091
 *   +0x0200 -> line 1098
 *   +0x0218 -> line 1100
 *   +0x0220 -> line 1105
 *   +0x0228 -> line 1112
 *   +0x0268 -> line 1114
 *   +0x0280 -> line 1116
 *   +0x029c -> line 1117
 *   +0x02a0 -> line 1122
 *   +0x02dc -> line 1125
 *   +0x02e8 -> line 1126
 *   +0x02f8 -> line 1127
 *   +0x02fc -> line 1131
 *   +0x0300 -> line 1127
 *   +0x0304 -> line 1131
 *   +0x0308 -> line 1128
 *   +0x030c -> line 1131
 *   +0x033c -> line 1138
 *   +0x0344 -> line 1139
 *   +0x0348 -> line 1138
 *   +0x0364 -> line 1139
 *   +0x0384 -> line 1140
 *   +0x0388 -> line 1144
 *   +0x038c -> line 1142
 *   +0x0390 -> line 1143
 *   +0x0394 -> line 1144
 *   +0x03ac -> line 1145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrameMatrixForInterAnim(void* _p_stSuperObject, tdstFrame3d_* _p_stFrame, tdstAnim3d_* _p_stAnim3d, float _xFrame, unsigned char ucForceUpdate, tdstAChannel_* d_stChannelArray)
{
    tdstKeyFrame_ CurrentKeyFrame2;
    tdstKeyFrame_ OldKeyFrame2;
    float xDT;
    tdstKeyFrame_* p_stOldKeyFrame;
    tdstKeyFrame_* p_stCurrentKeyFrame;
    tdstKeyFrame_* p_stNextKeyFrame;
    tdstKeyFrame_* p_stPreviousKeyFrame;
    unsigned short* p_PreviousFrameNumOfNTTO;
    unsigned char bHierarchized;
    unsigned short uwCnt1;
    unsigned short uwPreviousT_NTTO;
    tdstChannel_* p_stNextChannel;
    tdstChannel_* p_stPreviousChannel;
    tdstA3dGENERAL_* p_stNextA3dGeneral;
    tdstA3dGENERAL_* p_stPreviousA3dGeneral;
    tdstA3dGENERAL_ForTransitions_* p_stA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 829–961 */
/* addr: 0x0027e500  size: 792 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 829
 *   +0x001c -> line 844
 *   +0x0020 -> line 829
 *   +0x0028 -> line 844
 *   +0x0038 -> line 848
 *   +0x0050 -> line 853
 *   +0x0054 -> line 854
 *   +0x0058 -> line 858
 *   +0x0060 -> line 859
 *   +0x0070 -> line 864
 *   +0x0074 -> line 869
 *   +0x0078 -> line 864
 *   +0x007c -> line 859
 *   +0x0080 -> line 863
 *   +0x0084 -> line 864
 *   +0x0088 -> line 863
 *   +0x008c -> line 864
 *   +0x0094 -> line 863
 *   +0x0098 -> line 864
 *   +0x00a4 -> line 869
 *   +0x00a8 -> line 865
 *   +0x00ac -> line 869
 *   +0x00c0 -> line 872
 *   +0x00cc -> line 875
 *   +0x00d4 -> line 878
 *   +0x00dc -> line 884
 *   +0x00e8 -> line 887
 *   +0x00f4 -> line 889
 *   +0x010c -> line 890
 *   +0x0118 -> line 895
 *   +0x0134 -> line 898
 *   +0x013c -> line 901
 *   +0x0158 -> line 906
 *   +0x0164 -> line 908
 *   +0x0174 -> line 909
 *   +0x017c -> line 911
 *   +0x0180 -> line 912
 *   +0x0188 -> line 916
 *   +0x0190 -> line 918
 *   +0x019c -> line 919
 *   +0x01b4 -> line 921
 *   +0x01b8 -> line 925
 *   +0x01e4 -> line 930
 *   +0x01f8 -> line 934
 *   +0x0204 -> line 937
 *   +0x0234 -> line 939
 *   +0x023c -> line 941
 *   +0x024c -> line 943
 *   +0x026c -> line 945
 *   +0x028c -> line 947
 *   +0x0298 -> line 950
 *   +0x02a8 -> line 951
 *   +0x02b0 -> line 952
 *   +0x02c0 -> line 953
 *   +0x02c4 -> line 954
 *   +0x02c8 -> line 955
 *   +0x02cc -> line 956
 *   +0x02d0 -> line 960
 *   +0x02d4 -> line 958
 *   +0x02d8 -> line 959
 *   +0x02dc -> line 960
 *   +0x02f4 -> line 961
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrameForInterAnim(tdstFrame3d_* _p_stFrame, tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame)
{
    unsigned short* p_CurrentFrameNumOfNTTO;
    float a4_xQuatOri[4];
    tdstElement3d_* p_stCurrentElement3d;
    unsigned short uwCnt1;
    unsigned short uwT_NTTO;
    unsigned short uwNumOfA3dGENERAL;
    tdstChannel_* p_stCurrentChannel;
    tdstOnlyFrame_* p_stCurrentOnlyFrame;
    tdstA3dGENERAL_* p_stPreviousA3dGeneral;
    tdstA3dGENERAL_ForTransitions_* p_stA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 762–820 */
/* addr: 0x0027e820  size: 696 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 762
 *   +0x0004 -> line 773
 *   +0x0008 -> line 762
 *   +0x0024 -> line 773
 *   +0x0034 -> line 774
 *   +0x003c -> line 779
 *   +0x0044 -> line 780
 *   +0x0054 -> line 781
 *   +0x0058 -> line 780
 *   +0x005c -> line 781
 *   +0x0064 -> line 786
 *   +0x0068 -> line 785
 *   +0x0074 -> line 786
 *   +0x007c -> line 785
 *   +0x0080 -> line 786
 *   +0x0084 -> line 785
 *   +0x008c -> line 786
 *   +0x0090 -> line 785
 *   +0x0094 -> line 789
 *   +0x0104 -> line 791
 *   +0x011c -> line 793
 *   +0x0138 -> line 798
 *   +0x0154 -> line 800
 *   +0x0164 -> line 801
 *   +0x016c -> line 804
 *   +0x0190 -> line 807
 *   +0x01ac -> line 809
 *   +0x01b8 -> line 810
 *   +0x01c0 -> line 813
 *   +0x01e4 -> line 816
 *   +0x01e8 -> line 819
 *   +0x01ec -> line 816
 *   +0x01f8 -> line 819
 *   +0x01fc -> line 816
 *   +0x0214 -> line 817
 *   +0x021c -> line 816
 *   +0x0228 -> line 817
 *   +0x0230 -> line 816
 *   +0x0238 -> line 817
 *   +0x0250 -> line 818
 *   +0x0258 -> line 817
 *   +0x0264 -> line 818
 *   +0x0268 -> line 817
 *   +0x026c -> line 818
 *   +0x0270 -> line 817
 *   +0x0274 -> line 818
 *   +0x0298 -> line 820
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stGetLinearSpeedVectorForInterAnim(tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame)
{
    MTH3D_tdstVector_ stNextSpeed;
    MTH3D_tdstVector_ stPreviousSpeed;
    float fRatio;
    tdstOnlyFrame_* param0;
    tdstOnlyFrame_* p_stPreviousOnlyFrame;
    tdstA3dGENERAL_* p_stNextA3dGeneral;
    tdstA3dGENERAL_* p_stPreviousA3dGeneral;
    tdstA3dGENERAL_ForTransitions_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 713–749 */
/* addr: 0x0027eae0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 713
 *   +0x0014 -> line 718
 *   +0x0028 -> line 719
 *   +0x0030 -> line 724
 *   +0x0038 -> line 728
 *   +0x003c -> line 738
 *   +0x0044 -> line 728
 *   +0x004c -> line 738
 *   +0x0070 -> line 739
 *   +0x0078 -> line 744
 *   +0x008c -> line 745
 *   +0x0098 -> line 747
 *   +0x009c -> line 749
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stGetAngularSpeedMatrix(tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame, MTH3D_tdstMatrix_* p_stMatrix)
{
    float a4_xQuatOri[4];
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 667–703 */
/* addr: 0x0027eb90  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 667
 *   +0x000c -> line 672
 *   +0x0018 -> line 674
 *   +0x0028 -> line 677
 *   +0x003c -> line 678
 *   +0x0044 -> line 683
 *   +0x004c -> line 687
 *   +0x0050 -> line 698
 *   +0x0058 -> line 687
 *   +0x0060 -> line 698
 *   +0x00a0 -> line 703
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_p_stGetLinearSpeedVector(tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame)
{
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 517–654 */
/* addr: 0x0027ec40  size: 972 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 517
 *   +0x0038 -> line 526
 *   +0x0044 -> line 528
 *   +0x004c -> line 529
 *   +0x0054 -> line 536
 *   +0x005c -> line 542
 *   +0x0070 -> line 544
 *   +0x0078 -> line 546
 *   +0x0098 -> line 551
 *   +0x009c -> line 554
 *   +0x00a0 -> line 551
 *   +0x00a4 -> line 552
 *   +0x00ac -> line 551
 *   +0x00b4 -> line 552
 *   +0x00cc -> line 554
 *   +0x00dc -> line 555
 *   +0x00e8 -> line 557
 *   +0x00ec -> line 561
 *   +0x00f8 -> line 573
 *   +0x0138 -> line 581
 *   +0x0144 -> line 588
 *   +0x0150 -> line 581
 *   +0x015c -> line 588
 *   +0x017c -> line 592
 *   +0x018c -> line 594
 *   +0x0194 -> line 601
 *   +0x0198 -> line 603
 *   +0x019c -> line 601
 *   +0x01a0 -> line 603
 *   +0x01a4 -> line 601
 *   +0x01b8 -> line 603
 *   +0x020c -> line 604
 *   +0x0218 -> line 608
 *   +0x021c -> line 610
 *   +0x0228 -> line 620
 *   +0x0238 -> line 621
 *   +0x0248 -> line 623
 *   +0x028c -> line 624
 *   +0x0290 -> line 627
 *   +0x02b4 -> line 629
 *   +0x02c0 -> line 630
 *   +0x02c8 -> line 629
 *   +0x02d8 -> line 630
 *   +0x02e8 -> line 639
 *   +0x0324 -> line 642
 *   +0x0330 -> line 649
 *   +0x0338 -> line 650
 *   +0x033c -> line 649
 *   +0x0358 -> line 650
 *   +0x0378 -> line 653
 *   +0x037c -> line 652
 *   +0x0380 -> line 653
 *   +0x039c -> line 654
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrameMatrix(void* _p_stSuperObject, tdstFrame3d_* _p_stFrame, tdstAnim3d_* _p_stAnim3d, float _xFrame, unsigned char ucForceUpdate, tdstAChannel_* d_stChannelArray)
{
    float xTmp;
    float xDT;
    tdstKeyFrame_* p_stOldKeyFrame;
    tdstKeyFrame_* p_stCurrentKeyFrame;
    unsigned short* p_CurrentFrameNumOfNTTO;
    float xNoInterpol;
    unsigned char bHierarchized;
    unsigned short uwCnt1;
    unsigned short uwT_NTTO;
    tdstChannel_* p_stCurrentChannel;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 355–505 */
/* addr: 0x0027f010  size: 804 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 355
 *   +0x0020 -> line 364
 *   +0x002c -> line 366
 *   +0x0034 -> line 367
 *   +0x003c -> line 377
 *   +0x0050 -> line 381
 *   +0x0068 -> line 387
 *   +0x006c -> line 392
 *   +0x0070 -> line 388
 *   +0x0074 -> line 392
 *   +0x007c -> line 400
 *   +0x0080 -> line 406
 *   +0x0084 -> line 401
 *   +0x0088 -> line 392
 *   +0x008c -> line 401
 *   +0x0090 -> line 400
 *   +0x0098 -> line 401
 *   +0x00b8 -> line 402
 *   +0x00bc -> line 406
 *   +0x00c4 -> line 409
 *   +0x00d4 -> line 412
 *   +0x00e0 -> line 415
 *   +0x00e8 -> line 418
 *   +0x00f0 -> line 424
 *   +0x00fc -> line 427
 *   +0x0108 -> line 429
 *   +0x0120 -> line 430
 *   +0x012c -> line 433
 *   +0x0134 -> line 438
 *   +0x0144 -> line 441
 *   +0x014c -> line 444
 *   +0x0168 -> line 449
 *   +0x0174 -> line 451
 *   +0x0184 -> line 452
 *   +0x018c -> line 454
 *   +0x0190 -> line 455
 *   +0x0198 -> line 460
 *   +0x01a0 -> line 462
 *   +0x01ac -> line 463
 *   +0x01c4 -> line 465
 *   +0x01c8 -> line 469
 *   +0x01f4 -> line 474
 *   +0x0208 -> line 478
 *   +0x0214 -> line 481
 *   +0x0244 -> line 483
 *   +0x024c -> line 485
 *   +0x025c -> line 487
 *   +0x027c -> line 489
 *   +0x029c -> line 491
 *   +0x02a8 -> line 494
 *   +0x02b8 -> line 495
 *   +0x02c0 -> line 496
 *   +0x02d0 -> line 497
 *   +0x02d4 -> line 498
 *   +0x02d8 -> line 499
 *   +0x02dc -> line 500
 *   +0x02e0 -> line 504
 *   +0x02e4 -> line 502
 *   +0x02e8 -> line 503
 *   +0x02ec -> line 504
 *   +0x0304 -> line 505
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vUpdateFrame(void* _p_stSuperObject, tdstFrame3d_* _p_stFrame, tdstAnim3d_* _p_stAnim3d, unsigned short _uwFrame)
{
    unsigned short* p_CurrentFrameNumOfNTTO;
    float a4_xQuatOri[4];
    tdstElement3d_* p_stCurrentElement3d;
    unsigned short uwNumOfA3dGENERAL;
    unsigned short uwCnt1;
    unsigned short uwT_NTTO;
    tdstChannel_* p_stCurrentChannel;
    tdstOnlyFrame_* p_stCurrentOnlyFrame;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\Interpol\a3x_intn.c lines 303–303 */
/* addr: 0x0027f340  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 303
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstEvent_* fn_p_GetEventsAddress(tdstAnim3d_* _p_stAnim3d)
{
    /* TODO: decompile from asm/... */
}
