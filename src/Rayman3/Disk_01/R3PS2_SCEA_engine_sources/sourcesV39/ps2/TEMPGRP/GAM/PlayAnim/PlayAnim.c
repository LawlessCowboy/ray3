/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c */
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
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct type_0x38 type_0x38;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct stSwapInfo_ stSwapInfo_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstA3dGENERAL_ tdstA3dGENERAL_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct GEO_tdstElementDeformationSetInfo_ GEO_tdstElementDeformationSetInfo_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstTransition_ tdstTransition_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct stDeformationMatricesInfo_ stDeformationMatricesInfo_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct stMorphData stMorphData;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstA3dGENERAL_ForTransitions_ tdstA3dGENERAL_ForTransitions_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct GEO_tdstDeformationVertex_ GEO_tdstDeformationVertex_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct tdstCollideZdxList_ tdstCollideZdxList_;
typedef struct GEO_tdstDeformationInfluence_ GEO_tdstDeformationInfluence_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstZdxIndexList_ tdstZdxIndexList_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct GEO_tdstDeformationBorder_ GEO_tdstDeformationBorder_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct DNM_stReport DNM_stReport;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

typedef enum anon_enum_00886545 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_00886545;

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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x2c..0x2f */
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

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
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

struct stSwapInfo_ {
    GEO_tdstGeometricObject_ stGeoObjTemp; /* +0x0 */
    GEO_tdstGeometricObject_ stGeoObjTempSHW; /* +0x60 */
    int ax_pstGeoObjTemp[2]; /* +0xc0 */
    PO_tdstPhysicalObject_** pp_stPhysicalObject; /* +0xc8 */
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0xcc */
    PO_tdstPhysicalObject_ stPhysicalObject; /* +0xd0 */
    GEO_tdstVisualSet_ stVisualSet; /* +0xe0 */
    HIE_tdstSuperObject_* p_stSuperObject; /* +0xf8 */
};

struct LST2_tdstAnchorTotdxHandleToStateOpt {
    tdstState_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimOpt {
    tdstSubAnim_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt {
    tdstObjectsTablesList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstFamilyList_ {
    tdstFamilyList_* hNextBrotherDyn; /* +0x0 */
    tdstFamilyList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn* hFatherDyn; /* +0x8 */
    int otObjectFamilyType; /* +0xc */
    LST2_tdstAnchorTotdxHandleToStateOpt hForStateArray; /* +0x10 */
    LST2_tdstAnchorTotdxHandleToSubAnimOpt hForSubAnimArray; /* +0x18 */
    tdstObjectsTablesList_* h_DefaultObjectsTable; /* +0x20 */
    LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt hForObjectsTablesList; /* +0x24 */
    COL_tdstBoundingSphere_* hBoundingSphere; /* +0x2c */
    tdstLipsSynchValue_* ax_stLipsSynchValues; /* +0x30 */
    unsigned int ulNumberLipSynchValues; /* +0x34 */
    unsigned int ulLipsChannel; /* +0x38 */
    unsigned int ulNumberOfChannels; /* +0x3c */
    unsigned char ucPriority; /* +0x40 */
    unsigned char ucOptimized; /* +0x41 */
    unsigned char ucStorageBank; /* +0x42 */
    unsigned char ucProperties; /* +0x43 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
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

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct tdstPLA_Hierarchy_ {
    unsigned int ulNbOfCouples; /* +0x0 */
    tdstCouple_* d_stCouples; /* +0x4 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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
    short xSkinIndex[4]; /* +0x1d8 */
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

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct GEO_tdstElementDeformationSetInfo_ {
    GEO_tdstDeformationVertex_* p_stDeformationVertexTable; /* +0x0 */
    GEO_tdstDeformationBorder_* p_stBorderTable; /* +0x4 */
    short xNumberOfDeformationVertex; /* +0x8 */
    unsigned char ucNumberOfLinks; /* +0xa */
    unsigned char Align; /* +0xb */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToTransitionOpt {
    tdstTransition_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToProhibitOpt {
    tdstProhibit_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstState_ {
    tdstAnim3d_* p_stAnim; /* +0x0 */
    LST2_tdstAnchorTotdxHandleToTransitionOpt hForTransitionArray; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToProhibitOpt hForProhibitArray; /* +0xc */
    tdstState_* h_NextState; /* +0x14 */
    int h_LinkedMechanicsIdCard; /* +0x18 */
    int szLevelList; /* +0x1c */
    int szAnimationSectionName; /* +0x20 */
    unsigned char ucRepeatAnimation; /* +0x24 */
    signed char scSpeedAnim; /* +0x25 */
    unsigned char ucTransitionStatusFlag; /* +0x26 */
    unsigned char ucCustomBits; /* +0x27 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt {
    tdstZdxIndexList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZoneSetList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt hZdxIndexList; /* +0x0 */
};

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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
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

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct stDeformationMatricesInfo_ {
    unsigned char bUsed; /* +0x0 */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    MAT_tdstTransformation_ stMatrixForNormalsInverted; /* +0x70 */
    MAT_tdstTransformation_ stMatrixForNormals; /* +0xd0 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
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
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
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

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct GEO_tdstDeformationVertex_ {
    GEO_tdstDeformationInfluence_* p_stInfluenceTable; /* +0x0 */
    short xVertexIndex; /* +0x4 */
    unsigned char ucNumberOfInfluences; /* +0x6 */
    unsigned char Align; /* +0x7 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
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

struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt {
    tdstZoneSetEncapsulation_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCsaList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt hZoneSetEncapsulationList; /* +0x0 */
};

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt {
    tdstCollideZdxList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZdxList_ {
    LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    FIL_tdstFileNameListElement_* hFirstElementDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
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

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x5c..0x5f */
    _stTimerCount stRealTimeCount; /* +0x60 */
    _stTimerCount stPauseTime; /* +0x70 */
    unsigned int ulTickPerMS; /* +0x80 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct tdstCollideZdxList_ {
    COL_tdstCollideObject_* hGeoObj; /* +0x0 */
};

struct GEO_tdstDeformationInfluence_ {
    unsigned short uwInfluence; /* +0x0 */
    unsigned char ucLinkNumber; /* +0x2 */
    unsigned char Align; /* +0x3 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct tdstZdxIndexList_ {
    unsigned short uwZdxIndex; /* +0x0 */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct tdstZoneSetEncapsulation_ {
    tdstZoneSetList_* p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct GEO_tdstDeformationBorder_ {
    MTH3D_tdstVector_ stLinkNeutralPosition; /* +0x0 */
    MTH3D_tdstMatrix_ stLinkNeutralOrientation; /* +0xc */
    int p_xVertexTable; /* +0x30 */
    unsigned short uwNumberOfVertices; /* +0x34 */
    unsigned char ucLinkIndex; /* +0x36 */
    unsigned char Align; /* +0x37 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_00886545 eUsedMechanics; /* +0x8 */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
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

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstEngineStructure_ {
    unsigned char eEngineMode; /* +0x0 */
    char szLevelName[30]; /* +0x1 */
    char szNextLevelName[30]; /* +0x1f */
    char szFirstLevelName[30]; /* +0x3d */
    unsigned char eInputMode; /* +0x5b */
    unsigned char eDisplayFixMode; /* +0x5c */
    unsigned int ulDisplayMode; /* +0x60 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x64..0x67 */
    tdstEngineTimerStructure_ stEngineTimer; /* +0x68 */
    unsigned char ucNumberOfPlayersInMultiMode; /* +0xf0 */
    unsigned char ucNumberOfColumnsInMultiMode; /* +0xf1 */
    unsigned char ucMiniScreenRatioInMultiMode; /* +0xf2 */
    int a_hSO_CurrentMainPlayers[4]; /* +0xf4 */
    short hGLDDevice; /* +0x104 */
    short a_hGLDViewport[5]; /* +0x106 */
    GLD_tdstViewportAttributes_ a_stViewportAttr[5]; /* +0x110 */
    int a_p_stGameViewportCamera[5]; /* +0x340 */
    short a_hGLDFixViewport[5]; /* +0x354 */
    GLD_tdstViewportAttributes_ a_stFixViewportAttr[5]; /* +0x360 */
    GLI_tdstSpecificAttributesFor3D_ a_stFixAttributes3D[5]; /* +0x590 */
    int a_p_stFixCamera[5]; /* +0x5b8 */
    GLI_tdstSpecificAttributesFor3D_ a_stGameAttributes3D[5]; /* +0x5cc */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn hCameraList; /* +0x5f8 */
    int hDrawSem; /* +0x604 */
    LST2_tdstAnchorTotdxHandleToFamilyListDyn hFamilyList; /* +0x608 */
    LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn hAlwaysActiveCharactersList; /* +0x614 */
    LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn hMainCharacterList; /* +0x620 */
    HIE_tdstSuperObject_* h_StdCamCaracter; /* +0x62c */
    HIE_tdstSuperObject_* h_DbgCamCharacter; /* +0x630 */
    tdstLanguageStructure_* p_stLanguageTable; /* +0x634 */
    FIL_tdstFileNameList_* hLevelNameList; /* +0x638 */
    unsigned char _extractor_padding_01[4]; /* implicitly added by extractor; +0x63c..0x63f */
    MAT_tdstTransformation_ stMainCharacterPosition; /* +0x640 */
    MAT_tdstTransformation_ stMainCameraPosition; /* +0x6a0 */
    int lSubMapNumber; /* +0x700 */
    unsigned char bEngineIsInPaused; /* +0x704 */
    unsigned char bEngineHasInPaused; /* +0x705 */
    unsigned char bEngineIsInSaveGamePart; /* +0x706 */
    char a_szLevelName[150][30]; /* +0x707 */
    char a_szDemoName[30][12]; /* +0x189b */
    char a_szDemoLevelName[30][12]; /* +0x1a03 */
    unsigned char ucNumberOfDemos; /* +0x1b6b */
    unsigned char ucNumberOfLevels; /* +0x1b6c */
    unsigned char ucCurrentLevel; /* +0x1b6d */
    unsigned char ucPreviousLevel; /* +0x1b6e */
    unsigned char ucExitIdToQuitPrevLevel; /* +0x1b6f */
    unsigned char ucLevelGlobalCounter; /* +0x1b70 */
    unsigned char xDemoMode; /* +0x1b71 */
    unsigned char ucCurrentLanguage; /* +0x1b72 */
    unsigned char ucNbLanguages; /* +0x1b73 */
    unsigned char bEngineFrozen; /* +0x1b74 */
    unsigned char bResurection; /* +0x1b75 */
    char cCameraMode; /* +0x1b76 */
    unsigned char ucCurrentImportance; /* +0x1b77 */
    unsigned int ulNumberOfSOLAllocated; /* +0x1b78 */
    unsigned int ulNumberOfSOLLoaded; /* +0x1b7c */
    unsigned int ulNumberOfNonPersitentLinksPerSOL; /* +0x1b80 */
    tdstSuperObjectLinks_** p_hSOL; /* +0x1b84 */
    tdstGraphChainedListNode_* p_GraphChainedList; /* +0x1b88 */
    CINE_Manager_* stCineManager; /* +0x1b8c */
};

int g_bAnimConstantSpeed;
unsigned char gbUseDeformation;
static int gp_stActorSO;
static unsigned int gulNumberOfChannels;
int gh_st3dData;
static unsigned int gulSwapAllocationIndex;
static unsigned int gulVectorAllocationIndex;
static stSwapInfo_ gax_stSwapInfo[256];
/*type_0x38*/ int stVectorStack;
static int PLA_g_d_stMatrixHeap;
static unsigned int PLA_g_ulNbAllocInSupObjHeap;
static unsigned int PLA_g_ulCurrentPosInSupObjHeap;
static unsigned short PLA_g_a_wStateOfSupObjHeap[1024];
static int PLA_g_d_stSupObjHeap;
unsigned int PLA_g_ulMaxOccupationOfChannels;
unsigned int PLA_g_ulMaxOccupationOfSupObjHeap;
unsigned int g_Randomhandle;
tdstEngineStructure_ g_stEngineStructure;
unsigned int GLI_g_ForceDestructAllSDLs;
float g_fGlobalAccelerationFactorForAnims;
int gp_stMorphData;
int HIE_gs_lCurrentFrame;
/* fn_iCompareMorphData is declared by its recovered definition below. */

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 25–31 */
/* addr: 0x00274d10  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 25
 *   +0x0008 -> line 26
 *   +0x0010 -> line 29
 *   +0x001c -> line 30
 *   +0x0024 -> line 31
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ANI_fn_vFreeze(HIE_tdstSuperObject_* hSuperObjPerso)
{
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 4450–4597 */
/* addr: 0x00274d40  size: 700 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4450
 *   +0x0048 -> line 4452
 *   +0x004c -> line 4457
 *   +0x0068 -> line 4464
 *   +0x0070 -> line 4469
 *   +0x0074 -> line 4475
 *   +0x007c -> line 4469
 *   +0x0080 -> line 4474
 *   +0x0084 -> line 4475
 *   +0x008c -> line 4477
 *   +0x009c -> line 4484
 *   +0x00a4 -> line 4487
 *   +0x00b4 -> line 4494
 *   +0x00bc -> line 4497
 *   +0x00cc -> line 4504
 *   +0x00d4 -> line 4507
 *   +0x00e4 -> line 4508
 *   +0x00f8 -> line 4515
 *   +0x0100 -> line 4519
 *   +0x0114 -> line 4520
 *   +0x011c -> line 4521
 *   +0x0134 -> line 4528
 *   +0x013c -> line 4538
 *   +0x017c -> line 4539
 *   +0x0184 -> line 4540
 *   +0x0188 -> line 4543
 *   +0x01a4 -> line 4546
 *   +0x01ac -> line 4547
 *   +0x01b4 -> line 4550
 *   +0x01bc -> line 4551
 *   +0x01c4 -> line 4558
 *   +0x0204 -> line 4559
 *   +0x020c -> line 4560
 *   +0x0210 -> line 4564
 *   +0x021c -> line 4565
 *   +0x0224 -> line 4572
 *   +0x022c -> line 4574
 *   +0x0234 -> line 4575
 *   +0x023c -> line 4577
 *   +0x0248 -> line 4580
 *   +0x0250 -> line 4581
 *   +0x0258 -> line 4588
 *   +0x025c -> line 4592
 *   +0x0260 -> line 4589
 *   +0x0264 -> line 4594
 *   +0x0268 -> line 4590
 *   +0x0274 -> line 4591
 *   +0x0280 -> line 4592
 *   +0x0288 -> line 4597
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstState_* fn_hMergeAnimForInterpolation(tdstAnim3d_* p_stPreviousAnim, unsigned short uwPreviousFrame, tdstState_* h_WantedState, unsigned short uwFirstFrameInWantedState, HIE_tdstSuperObject_* p_stSuperObject, unsigned int ulNbFramesForIntermAnim, float xNLParameter)
{
    unsigned char bBTLevel;
    tdstAnim3d_* p_stIntermediateAnim;
    unsigned int ulNewNbCouples;
    tdst3dData_* h_Current3dData;
    tdstCouple_* p_stNewCouples;
    tdstAnim3d_* p_stNextAnim;
    tdstState_* h_Result;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 4008–4220 */
/* addr: 0x00275000  size: 1336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4008
 *   +0x0004 -> line 4023
 *   +0x0008 -> line 4008
 *   +0x000c -> line 4023
 *   +0x0010 -> line 4008
 *   +0x0038 -> line 4023
 *   +0x0040 -> line 4029
 *   +0x0044 -> line 4023
 *   +0x0048 -> line 4030
 *   +0x004c -> line 4023
 *   +0x0050 -> line 4030
 *   +0x0058 -> line 4031
 *   +0x0064 -> line 4034
 *   +0x017c -> line 4035
 *   +0x0184 -> line 4037
 *   +0x0188 -> line 4048
 *   +0x01a0 -> line 4059
 *   +0x01b4 -> line 4066
 *   +0x01d4 -> line 4071
 *   +0x01e0 -> line 4072
 *   +0x01e8 -> line 4073
 *   +0x01f4 -> line 4074
 *   +0x0200 -> line 4077
 *   +0x0204 -> line 4078
 *   +0x020c -> line 4079
 *   +0x0210 -> line 4082
 *   +0x0234 -> line 4086
 *   +0x023c -> line 4087
 *   +0x0244 -> line 4088
 *   +0x0258 -> line 4089
 *   +0x0268 -> line 4093
 *   +0x0278 -> line 4096
 *   +0x0280 -> line 4114
 *   +0x0288 -> line 4102
 *   +0x028c -> line 4112
 *   +0x0290 -> line 4113
 *   +0x0298 -> line 4114
 *   +0x02a0 -> line 4116
 *   +0x02bc -> line 4120
 *   +0x02cc -> line 4121
 *   +0x02d0 -> line 4122
 *   +0x02e0 -> line 4126
 *   +0x02e8 -> line 4136
 *   +0x0300 -> line 4140
 *   +0x0304 -> line 4141
 *   +0x030c -> line 4142
 *   +0x0310 -> line 4160
 *   +0x0314 -> line 4164
 *   +0x031c -> line 4160
 *   +0x032c -> line 4164
 *   +0x0388 -> line 4165
 *   +0x0390 -> line 4168
 *   +0x0398 -> line 4169
 *   +0x03a4 -> line 4173
 *   +0x03b0 -> line 4174
 *   +0x03b4 -> line 4173
 *   +0x03c4 -> line 4174
 *   +0x0434 -> line 4175
 *   +0x0438 -> line 4174
 *   +0x043c -> line 4175
 *   +0x04a0 -> line 4179
 *   +0x04c8 -> line 4191
 *   +0x04e0 -> line 4198
 *   +0x04e8 -> line 4207
 *   +0x04f0 -> line 4209
 *   +0x04f8 -> line 4215
 *   +0x04fc -> line 4216
 *   +0x0508 -> line 4220
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vComputeGeometricJobs(HIE_tdstSuperObject_* p_stActorSO)
{
    tdstPLA_Deformation_ stDeformation;
    unsigned int Found;
    unsigned int index;
    PO_tdstPhysicalObject_* hPhysicalObject;
    GEO_tdstGeometricObject_* p_GeoObjToChange;
    short xMorphTask;
    unsigned char bDeformationInAnim;
    unsigned short uwCurrentChannel;
    unsigned int ulNbVertices;
    PO_tdstPhysicalObject_** pp_stPhysicalObject;
    HIE_tdstSuperObject_* p_stWorkSO;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3627–3648 */
/* addr: 0x00275540  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3627
 *   +0x0004 -> line 3631
 *   +0x0010 -> line 3633
 *   +0x0028 -> line 3637
 *   +0x0030 -> line 3639
 *   +0x0044 -> line 3640
 *   +0x0058 -> line 3642
 *   +0x0064 -> line 3643
 *   +0x007c -> line 3644
 *   +0x0088 -> line 3645
 *   +0x0094 -> line 3646
 *   +0x0098 -> line 3647
 *   +0x00b4 -> line 3648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vGetDeformationInfoForChannel(unsigned int ulChannelNumber, tdstPLA_Deformation_* p_stDeformation)
{
    unsigned int ulIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3595–3597 */
/* addr: 0x00275600  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3595
 *   +0x0004 -> line 3597
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vClearPlayanimTempGeometricObjects(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3574–3585 */
/* addr: 0x00275610  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3574
 *   +0x0014 -> line 3584
 *   +0x0018 -> line 3577
 *   +0x001c -> line 3583
 *   +0x0020 -> line 3577
 *   +0x003c -> line 3579
 *   +0x005c -> line 3583
 *   +0x0068 -> line 3584
 *   +0x0078 -> line 3585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vPutBackOldGeometricObjectsBeforeAnimPlayer(void)
{
    unsigned int ulCount;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3043–3051 */
/* addr: 0x00275690  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3043
 *   +0x000c -> line 3047
 *   +0x0028 -> line 3051
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_bTestIfActorIsInSmoothAnim(HIE_tdstSuperObject_* p_stSuperObject)
{
    tdstState_* pState;
    pState = p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData->h_CurrentState;
    if (pState == 0)
        return 0;
    return pState->p_stAnim->ucFlagMergeAnim;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3035–3037 */
/* addr: 0x002756c0  size: 20 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3035
 *   +0x000c -> line 3037
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_bTestIfEndOfAnim(HIE_tdstSuperObject_* p_stSuperObject)
{
    return p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData->ucFlagEndOfAnim != 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 3023–3031 */
/* addr: 0x002756e0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3023
 *   +0x0008 -> line 3025
 *   +0x0024 -> line 3028
 *   +0x002c -> line 3030
 *   +0x0030 -> line 3031
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_bTestIfEndOfAction(HIE_tdstSuperObject_* p_stSuperObject)
{
    tdst3dData_* param0;
    param0 = p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData;
    if (param0->ucFlagEndState != 0) {
        if (param0->h_CurrentState == param0->h_WantedState)
            return 1;
    }
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2991–3019 */
/* addr: 0x00275720  size: 688 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2991
 *   +0x0004 -> line 2998
 *   +0x0008 -> line 2991
 *   +0x000c -> line 2998
 *   +0x0010 -> line 2991
 *   +0x0018 -> line 2998
 *   +0x001c -> line 2991
 *   +0x0020 -> line 2997
 *   +0x0024 -> line 2991
 *   +0x0028 -> line 2998
 *   +0x0058 -> line 3000
 *   +0x0060 -> line 3002
 *   +0x0068 -> line 3004
 *   +0x0080 -> line 3008
 *   +0x0088 -> line 3009
 *   +0x008c -> line 3008
 *   +0x00c8 -> line 3009
 *   +0x00d0 -> line 3011
 *   +0x00e4 -> line 3013
 *   +0x01f4 -> line 3014
 *   +0x01f8 -> line 3013
 *   +0x0254 -> line 3015
 *   +0x0258 -> line 3016
 *   +0x0280 -> line 3018
 *   +0x0290 -> line 3019
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstMatrix_* PLA_fn_stGetAngularSpeedMatrix(HIE_tdstSuperObject_* p_stSuperObject, float xLastFrame)
{
    MTH3D_tdstMatrix_ Mtemp;
    MTH3D_tdstMatrix_ stMatrix;
    unsigned short uwLastFrame;
    unsigned char bSpeedMatrix;
    int i;
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    MTH3D_tdstMatrix_ stSpeedMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2896–2985 */
/* addr: 0x002759d0  size: 1452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2896
 *   +0x0024 -> line 2905
 *   +0x002c -> line 2902
 *   +0x0030 -> line 2905
 *   +0x0034 -> line 2902
 *   +0x0040 -> line 2907
 *   +0x0048 -> line 2909
 *   +0x0050 -> line 2912
 *   +0x005c -> line 2917
 *   +0x0060 -> line 2914
 *   +0x0064 -> line 2917
 *   +0x0068 -> line 2914
 *   +0x006c -> line 2917
 *   +0x0070 -> line 2914
 *   +0x0078 -> line 2917
 *   +0x0080 -> line 2919
 *   +0x0088 -> line 2920
 *   +0x0090 -> line 2922
 *   +0x00d4 -> line 2923
 *   +0x00d8 -> line 2924
 *   +0x0100 -> line 2926
 *   +0x0110 -> line 2927
 *   +0x0128 -> line 2928
 *   +0x0148 -> line 2931
 *   +0x014c -> line 2932
 *   +0x0154 -> line 2933
 *   +0x0158 -> line 2931
 *   +0x0160 -> line 2932
 *   +0x0164 -> line 2931
 *   +0x0168 -> line 2932
 *   +0x016c -> line 2931
 *   +0x0174 -> line 2932
 *   +0x0190 -> line 2933
 *   +0x01d4 -> line 2936
 *   +0x01f4 -> line 2937
 *   +0x0234 -> line 2938
 *   +0x0254 -> line 2941
 *   +0x0258 -> line 2942
 *   +0x0260 -> line 2943
 *   +0x0264 -> line 2941
 *   +0x026c -> line 2942
 *   +0x0270 -> line 2941
 *   +0x0274 -> line 2942
 *   +0x0278 -> line 2941
 *   +0x0280 -> line 2942
 *   +0x029c -> line 2943
 *   +0x02e0 -> line 2947
 *   +0x0364 -> line 2948
 *   +0x036c -> line 2956
 *   +0x0370 -> line 2954
 *   +0x0374 -> line 2956
 *   +0x0388 -> line 2957
 *   +0x0390 -> line 2959
 *   +0x03b0 -> line 2960
 *   +0x03b8 -> line 2963
 *   +0x03cc -> line 2967
 *   +0x03dc -> line 2969
 *   +0x03e4 -> line 2970
 *   +0x03ec -> line 2972
 *   +0x0430 -> line 2974
 *   +0x0458 -> line 2975
 *   +0x0460 -> line 2977
 *   +0x0464 -> line 2975
 *   +0x046c -> line 2977
 *   +0x0470 -> line 2975
 *   +0x0474 -> line 2977
 *   +0x04a8 -> line 2979
 *   +0x0574 -> line 2981
 *   +0x0580 -> line 2984
 *   +0x0584 -> line 2985
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_* PLA_fn_stGetLinearSpeedVector(HIE_tdstSuperObject_* p_stSuperObject, float xLastFrame)
{
    float xInvFramePassed;
    int iFramePassed;
    MTH3D_tdstVector_ stCopy;
    MTH3D_tdstVector_* p_stVector;
    float xRatio;
    short wLastFrame;
    int i;
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    MTH3D_tdstVector_ stSpeedVector;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2867–2870 */
/* addr: 0x00275f80  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2867
 *   +0x0010 -> line 2870
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_bTestCurrentAction(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_FirstStateOfAction)
{
    return h_FirstStateOfAction == p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData->h_FirstStateOfAction;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2838–2854 */
/* addr: 0x00275fa0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2838
 *   +0x0014 -> line 2839
 *   +0x001c -> line 2842
 *   +0x0030 -> line 2845
 *   +0x0038 -> line 2847
 *   +0x0040 -> line 2849
 *   +0x005c -> line 2850
 *   +0x0078 -> line 2853
 *   +0x007c -> line 2854
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_bTestNewState(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_WantedState)
{
    tdstTransition_* h_Transition;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2784–2827 */
/* addr: 0x00276030  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2784
 *   +0x001c -> line 2785
 *   +0x0024 -> line 2787
 *   +0x0034 -> line 2788
 *   +0x003c -> line 2790
 *   +0x0040 -> line 2791
 *   +0x0048 -> line 2795
 *   +0x004c -> line 2794
 *   +0x0050 -> line 2795
 *   +0x0054 -> line 2797
 *   +0x0058 -> line 2799
 *   +0x0064 -> line 2804
 *   +0x00a4 -> line 2805
 *   +0x00ac -> line 2806
 *   +0x00b0 -> line 2809
 *   +0x00c0 -> line 2811
 *   +0x00c8 -> line 2812
 *   +0x00d0 -> line 2814
 *   +0x00d8 -> line 2817
 *   +0x00e0 -> line 2821
 *   +0x00ec -> line 2823
 *   +0x0104 -> line 2824
 *   +0x0110 -> line 2825
 *   +0x011c -> line 2826
 *   +0x0120 -> line 2827
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PLA_fn_vInitNewState(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_State)
{
    unsigned char bBTLevel;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2771–2772 */
/* addr: 0x00276170  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2771
 *   +0x0010 -> line 2772
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short PLA_fn_uwGetNbFrameInCurrAnim(HIE_tdstSuperObject_* p_stSuperObject)
{
    return p_stSuperObject->hLinkedObject.p_stCharacter->h_3dData->h_CurrentState->p_stAnim->uwNumberOfFrames;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2704–2759 */
/* addr: 0x00276190  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2704
 *   +0x0004 -> line 2711
 *   +0x0008 -> line 2704
 *   +0x0024 -> line 2705
 *   +0x002c -> line 2711
 *   +0x0034 -> line 2706
 *   +0x0038 -> line 2707
 *   +0x003c -> line 2706
 *   +0x0044 -> line 2711
 *   +0x004c -> line 2713
 *   +0x0064 -> line 2714
 *   +0x006c -> line 2718
 *   +0x0074 -> line 2721
 *   +0x007c -> line 2722
 *   +0x008c -> line 2724
 *   +0x0094 -> line 2729
 *   +0x0098 -> line 2730
 *   +0x00a0 -> line 2732
 *   +0x00a4 -> line 2729
 *   +0x00a8 -> line 2730
 *   +0x00ac -> line 2729
 *   +0x00b0 -> line 2730
 *   +0x00c0 -> line 2732
 *   +0x00c4 -> line 2733
 *   +0x00cc -> line 2735
 *   +0x00d0 -> line 2738
 *   +0x00d8 -> line 2741
 *   +0x00e4 -> line 2742
 *   +0x00f0 -> line 2746
 *   +0x0124 -> line 2747
 *   +0x012c -> line 2748
 *   +0x0130 -> line 2749
 *   +0x0134 -> line 2750
 *   +0x0140 -> line 2755
 *   +0x0148 -> line 2750
 *   +0x014c -> line 2755
 *   +0x0150 -> line 2750
 *   +0x0154 -> line 2755
 *   +0x015c -> line 2758
 *   +0x0168 -> line 2759
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vSetCurrFrame(HIE_tdstSuperObject_* p_stSuperObject, short _wFrame)
{
    int lValue;
    unsigned char ucFrameRate2;
    unsigned short uwMaxFrame;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2658–2695 */
/* addr: 0x00276320  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2658
 *   +0x0018 -> line 2659
 *   +0x0020 -> line 2665
 *   +0x0034 -> line 2667
 *   +0x003c -> line 2670
 *   +0x0058 -> line 2671
 *   +0x0074 -> line 2686
 *   +0x0078 -> line 2676
 *   +0x007c -> line 2677
 *   +0x0080 -> line 2679
 *   +0x0088 -> line 2680
 *   +0x0090 -> line 2681
 *   +0x0094 -> line 2682
 *   +0x0098 -> line 2683
 *   +0x009c -> line 2686
 *   +0x00b8 -> line 2687
 *   +0x00e4 -> line 2688
 *   +0x00e8 -> line 2690
 *   +0x00ec -> line 2687
 *   +0x00f0 -> line 2688
 *   +0x00f8 -> line 2692
 *   +0x0104 -> line 2688
 *   +0x010c -> line 2689
 *   +0x0110 -> line 2690
 *   +0x0114 -> line 2692
 *   +0x011c -> line 2694
 *   +0x0120 -> line 2695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PLA_fn_bSetNewStateWithRandom(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_WantedState)
{
    unsigned short uwFrameNumber;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2467–2648 */
/* addr: 0x00276460  size: 2088 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2467
 *   +0x004c -> line 2468
 *   +0x0054 -> line 2475
 *   +0x0068 -> line 2476
 *   +0x0070 -> line 2478
 *   +0x0078 -> line 2480
 *   +0x0088 -> line 2492
 *   +0x0090 -> line 2499
 *   +0x01bc -> line 2508
 *   +0x01c0 -> line 2505
 *   +0x01c4 -> line 2508
 *   +0x01d8 -> line 2509
 *   +0x01e0 -> line 2510
 *   +0x01f4 -> line 2511
 *   +0x01fc -> line 2513
 *   +0x0204 -> line 2519
 *   +0x023c -> line 2520
 *   +0x0280 -> line 2521
 *   +0x0288 -> line 2522
 *   +0x028c -> line 2521
 *   +0x0298 -> line 2522
 *   +0x02a4 -> line 2523
 *   +0x02b4 -> line 2524
 *   +0x02bc -> line 2525
 *   +0x02c8 -> line 2530
 *   +0x030c -> line 2531
 *   +0x0310 -> line 2530
 *   +0x0314 -> line 2531
 *   +0x0318 -> line 2530
 *   +0x031c -> line 2531
 *   +0x0350 -> line 2532
 *   +0x0358 -> line 2533
 *   +0x035c -> line 2532
 *   +0x0368 -> line 2533
 *   +0x0374 -> line 2534
 *   +0x0388 -> line 2538
 *   +0x03b8 -> line 2540
 *   +0x03c0 -> line 2542
 *   +0x03c8 -> line 2546
 *   +0x03f0 -> line 2547
 *   +0x03f4 -> line 2548
 *   +0x03f8 -> line 2551
 *   +0x03fc -> line 2553
 *   +0x0400 -> line 2552
 *   +0x0404 -> line 2551
 *   +0x040c -> line 2553
 *   +0x0410 -> line 2552
 *   +0x0414 -> line 2551
 *   +0x0418 -> line 2553
 *   +0x041c -> line 2552
 *   +0x0420 -> line 2553
 *   +0x0430 -> line 2554
 *   +0x0434 -> line 2555
 *   +0x043c -> line 2556
 *   +0x0440 -> line 2557
 *   +0x0444 -> line 2559
 *   +0x0448 -> line 2561
 *   +0x04f4 -> line 2564
 *   +0x04f8 -> line 2566
 *   +0x0500 -> line 2570
 *   +0x0514 -> line 2571
 *   +0x051c -> line 2572
 *   +0x0530 -> line 2573
 *   +0x0538 -> line 2579
 *   +0x0540 -> line 2582
 *   +0x0548 -> line 2584
 *   +0x0550 -> line 2588
 *   +0x0554 -> line 2592
 *   +0x05b8 -> line 2594
 *   +0x05d8 -> line 2601
 *   +0x0610 -> line 2602
 *   +0x0658 -> line 2603
 *   +0x0670 -> line 2604
 *   +0x0680 -> line 2609
 *   +0x0684 -> line 2607
 *   +0x0694 -> line 2608
 *   +0x0698 -> line 2609
 *   +0x06a8 -> line 2610
 *   +0x06ac -> line 2611
 *   +0x06b4 -> line 2612
 *   +0x06b8 -> line 2613
 *   +0x06bc -> line 2615
 *   +0x06c0 -> line 2616
 *   +0x06c4 -> line 2618
 *   +0x0770 -> line 2620
 *   +0x0778 -> line 2623
 *   +0x077c -> line 2625
 *   +0x0780 -> line 2624
 *   +0x0784 -> line 2625
 *   +0x078c -> line 2629
 *   +0x0790 -> line 2631
 *   +0x0798 -> line 2633
 *   +0x079c -> line 2636
 *   +0x07a0 -> line 2633
 *   +0x07a4 -> line 2634
 *   +0x07a8 -> line 2635
 *   +0x07ac -> line 2636
 *   +0x07b0 -> line 2639
 *   +0x07bc -> line 2641
 *   +0x07d8 -> line 2645
 *   +0x07e8 -> line 2647
 *   +0x07ec -> line 2648
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PLA_fn_bSetNewState(HIE_tdstSuperObject_* p_stSuperObject, tdstState_* h_WantedState, unsigned char _bForce, unsigned char _bHandleSkippedEventsIfRelevant, unsigned char _bIgnoreTransitions, unsigned int ulNbFrameForIntermAnim, float xNLParameter, unsigned char bProportionnal)
{
    float xForcedFrame;
    int lNewStartTime;
    float xFirstFrameInTargetState;
    unsigned short uwFirstFrameInTargetState;
    tdstTransition_* h_Transition;
    tdstState_* h_ResultState;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2412–2429 */
/* addr: 0x00276c90  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2412
 *   +0x0010 -> line 2416
 *   +0x0058 -> line 2419
 *   +0x0064 -> line 2426
 *   +0x0070 -> line 2427
 *   +0x0084 -> line 2428
 *   +0x0088 -> line 2429
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vRefreshGlobalMatrixUnderCharacter(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2372–2401 */
/* addr: 0x00276d30  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2372
 *   +0x0010 -> line 2379
 *   +0x0020 -> line 2381
 *   +0x0034 -> line 2388
 *   +0x0040 -> line 2393
 *   +0x0044 -> line 2394
 *   +0x005c -> line 2395
 *   +0x0060 -> line 2396
 *   +0x0064 -> line 2397
 *   +0x0068 -> line 2399
 *   +0x0070 -> line 2400
 *   +0x0080 -> line 2401
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vRefreshGlobalMatrixOfAnimsHierarchy(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 2291–2361 */
/* addr: 0x00276dd0  size: 892 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2291
 *   +0x001c -> line 2294
 *   +0x0020 -> line 2297
 *   +0x0028 -> line 2300
 *   +0x002c -> line 2302
 *   +0x0038 -> line 2303
 *   +0x0040 -> line 2305
 *   +0x0044 -> line 2306
 *   +0x0048 -> line 2307
 *   +0x0050 -> line 2309
 *   +0x0058 -> line 2312
 *   +0x0074 -> line 2313
 *   +0x00b0 -> line 2316
 *   +0x00bc -> line 2319
 *   +0x0170 -> line 2321
 *   +0x01c4 -> line 2322
 *   +0x01c8 -> line 2325
 *   +0x01d4 -> line 2327
 *   +0x0288 -> line 2328
 *   +0x02dc -> line 2329
 *   +0x02e0 -> line 2331
 *   +0x02e4 -> line 2332
 *   +0x02ec -> line 2333
 *   +0x02f0 -> line 2336
 *   +0x02f8 -> line 2337
 *   +0x0308 -> line 2340
 *   +0x0310 -> line 2341
 *   +0x0314 -> line 2344
 *   +0x0320 -> line 2346
 *   +0x0324 -> line 2348
 *   +0x0330 -> line 2351
 *   +0x0338 -> line 2352
 *   +0x033c -> line 2355
 *   +0x0340 -> line 2357
 *   +0x0344 -> line 2356
 *   +0x0348 -> line 2357
 *   +0x034c -> line 2359
 *   +0x0354 -> line 2360
 *   +0x035c -> line 2361
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vDesInitAllChildOfCharacter(HIE_tdstSuperObject_* p_stSuperObject, tdstEngineObject_* p_stObject)
{
    tdstAChannel_* hArray;
    tdstAnim3d_* p_stCurrentAnim;
    tdstAChannel_* p_stChannel;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1997–2285 */
/* addr: 0x00277150  size: 2520 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1997
 *   +0x0034 -> line 2012
 *   +0x0040 -> line 2017
 *   +0x0044 -> line 2026
 *   +0x0048 -> line 2017
 *   +0x004c -> line 2018
 *   +0x0050 -> line 2019
 *   +0x0054 -> line 2018
 *   +0x0058 -> line 2023
 *   +0x005c -> line 2026
 *   +0x0064 -> line 2031
 *   +0x0068 -> line 2029
 *   +0x006c -> line 2031
 *   +0x0074 -> line 2034
 *   +0x00a4 -> line 2035
 *   +0x00ac -> line 2038
 *   +0x00b8 -> line 2041
 *   +0x00e8 -> line 2042
 *   +0x00f0 -> line 2045
 *   +0x00f8 -> line 2047
 *   +0x00fc -> line 2052
 *   +0x0104 -> line 2060
 *   +0x010c -> line 2063
 *   +0x0110 -> line 2064
 *   +0x0118 -> line 2067
 *   +0x011c -> line 2070
 *   +0x0120 -> line 2067
 *   +0x0124 -> line 2070
 *   +0x0128 -> line 2067
 *   +0x012c -> line 2069
 *   +0x0130 -> line 2067
 *   +0x0144 -> line 2070
 *   +0x014c -> line 2071
 *   +0x0150 -> line 2074
 *   +0x0154 -> line 2076
 *   +0x0158 -> line 2078
 *   +0x015c -> line 2077
 *   +0x0160 -> line 2078
 *   +0x0168 -> line 2081
 *   +0x016c -> line 2084
 *   +0x0170 -> line 2081
 *   +0x0174 -> line 2084
 *   +0x0178 -> line 2081
 *   +0x0184 -> line 2083
 *   +0x0188 -> line 2081
 *   +0x01b0 -> line 2084
 *   +0x01b8 -> line 2085
 *   +0x01c0 -> line 2088
 *   +0x01c4 -> line 2092
 *   +0x01dc -> line 2094
 *   +0x01e4 -> line 2098
 *   +0x01ec -> line 2101
 *   +0x01f0 -> line 2102
 *   +0x0220 -> line 2106
 *   +0x0224 -> line 2111
 *   +0x022c -> line 2113
 *   +0x0234 -> line 2119
 *   +0x0240 -> line 2122
 *   +0x024c -> line 2126
 *   +0x0258 -> line 2132
 *   +0x0268 -> line 2134
 *   +0x033c -> line 2135
 *   +0x0348 -> line 2138
 *   +0x0418 -> line 2144
 *   +0x041c -> line 2152
 *   +0x0420 -> line 2154
 *   +0x0428 -> line 2158
 *   +0x0430 -> line 2165
 *   +0x0434 -> line 2166
 *   +0x0464 -> line 2168
 *   +0x0470 -> line 2169
 *   +0x0488 -> line 2175
 *   +0x0494 -> line 2177
 *   +0x04a0 -> line 2180
 *   +0x04ac -> line 2183
 *   +0x04b8 -> line 2189
 *   +0x04c8 -> line 2191
 *   +0x059c -> line 2192
 *   +0x05a8 -> line 2195
 *   +0x0678 -> line 2198
 *   +0x0680 -> line 2203
 *   +0x0688 -> line 2206
 *   +0x0690 -> line 2211
 *   +0x0698 -> line 2213
 *   +0x069c -> line 2214
 *   +0x06a0 -> line 2219
 *   +0x06a4 -> line 2221
 *   +0x06ac -> line 2225
 *   +0x06b8 -> line 2232
 *   +0x06bc -> line 2233
 *   +0x06ec -> line 2235
 *   +0x06f8 -> line 2238
 *   +0x0708 -> line 2244
 *   +0x0714 -> line 2247
 *   +0x07c8 -> line 2248
 *   +0x081c -> line 2249
 *   +0x0820 -> line 2252
 *   +0x08d8 -> line 2253
 *   +0x092c -> line 2256
 *   +0x0934 -> line 2260
 *   +0x0938 -> line 2261
 *   +0x0940 -> line 2265
 *   +0x0948 -> line 2272
 *   +0x0950 -> line 2274
 *   +0x0960 -> line 2278
 *   +0x0964 -> line 2277
 *   +0x0968 -> line 2278
 *   +0x097c -> line 2280
 *   +0x0984 -> line 2282
 *   +0x0988 -> line 2283
 *   +0x098c -> line 2284
 *   +0x09a8 -> line 2285
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vInitAllChildInHeapNewAnim(HIE_tdstSuperObject_* p_stSuperObject, tdstAnim3d_* p_stCurrentAnim, unsigned short _uwFrameNumber)
{
    unsigned int i;
    int bHieChanged;
    tdstAChannel_* p_stLastFrameChannelForLink;
    tdstAChannel_* p_stLastFrameChannel;
    tdstAChannel_* hChannelArray;
    tdstCouple_* p_stOldCouples;
    tdstCouple_* p_stNewCouples;
    unsigned int ulNextChannelNumber;
    tdstAChannel_* p_stNewChannel;
    tdstElement3d_* p_stStopElt3d;
    tdstElement3d_* p_stElt3d;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1960–1983 */
/* addr: 0x00277b30  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1964
 *   +0x0004 -> line 1960
 *   +0x0008 -> line 1961
 *   +0x000c -> line 1964
 *   +0x0010 -> line 1961
 *   +0x0018 -> line 1964
 *   +0x001c -> line 1965
 *   +0x0024 -> line 1971
 *   +0x0028 -> line 1968
 *   +0x002c -> line 1971
 *   +0x003c -> line 1975
 *   +0x0044 -> line 1978
 *   +0x0050 -> line 1981
 *   +0x0054 -> line 1982
 *   +0x0060 -> line 1983
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vUpdateTransparencyForModules(HIE_tdstSuperObject_* p_stSuperObject)
{
    unsigned char bPersoTransparencyActive;
    HIE_tdstSuperObject_* p_stTargetSO;
    tdstAChannel_* p_stChannel;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1910–1935 */
/* addr: 0x00277ba0  size: 172 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1910
 *   +0x0018 -> line 1915
 *   +0x0020 -> line 1916
 *   +0x002c -> line 1920
 *   +0x0040 -> line 1921
 *   +0x004c -> line 1923
 *   +0x0060 -> line 1924
 *   +0x0064 -> line 1925
 *   +0x006c -> line 1927
 *   +0x0070 -> line 1928
 *   +0x0078 -> line 1929
 *   +0x007c -> line 1932
 *   +0x0080 -> line 1933
 *   +0x0090 -> line 1935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vCleanMorphTargets(tdstEngineObject_* p_stObject)
{
    PO_tdstPhysicalObject_* pPO;
    unsigned int i;
    unsigned int iNumOfElts;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1848–1863 */
/* addr: 0x00277c50  size: 100 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1848
 *   +0x0010 -> line 1856
 *   +0x0014 -> line 1848
 *   +0x0018 -> line 1856
 *   +0x001c -> line 1855
 *   +0x0020 -> line 1858
 *   +0x0024 -> line 1859
 *   +0x0030 -> line 1860
 *   +0x004c -> line 1863
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vReleaseAllObjectsInHeap(void)
{
    unsigned short* p_uwStateOfSupObj;
    HIE_tdstSuperObject_* p_stSO;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1778–1840 */
/* addr: 0x00277cc0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1778
 *   +0x000c -> line 1800
 *   +0x001c -> line 1803
 *   +0x0024 -> line 1804
 *   +0x002c -> line 1809
 *   +0x0030 -> line 1810
 *   +0x0034 -> line 1809
 *   +0x003c -> line 1810
 *   +0x0048 -> line 1811
 *   +0x004c -> line 1812
 *   +0x0070 -> line 1819
 *   +0x0074 -> line 1817
 *   +0x0078 -> line 1819
 *   +0x0080 -> line 1823
 *   +0x0088 -> line 1824
 *   +0x008c -> line 1827
 *   +0x00a0 -> line 1828
 *   +0x00a4 -> line 1835
 *   +0x0120 -> line 1836
 *   +0x0124 -> line 1835
 *   +0x012c -> line 1836
 *   +0x0130 -> line 1840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* PLA_fn_hFindNextFreeSupObj(void)
{
    HIE_tdstSuperObject_* p_stSO_Child;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1747–1761 */
/* addr: 0x00277e00  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1747
 *   +0x0004 -> line 1749
 *   +0x0008 -> line 1747
 *   +0x000c -> line 1749
 *   +0x0010 -> line 1747
 *   +0x0014 -> line 1749
 *   +0x0024 -> line 1750
 *   +0x0030 -> line 1751
 *   +0x0034 -> line 1750
 *   +0x0038 -> line 1751
 *   +0x006c -> line 1752
 *   +0x00b0 -> line 1753
 *   +0x00b4 -> line 1754
 *   +0x00b8 -> line 1761
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vCreateAndInitHeaps(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1735–1738 */
/* addr: 0x00277ed0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1735
 *   +0x0014 -> line 1736
 *   +0x0044 -> line 1737
 *   +0x0088 -> line 1738
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vInitHeaps(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1519–1618 */
/* addr: 0x00277f70  size: 824 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1519
 *   +0x001c -> line 1520
 *   +0x0024 -> line 1521
 *   +0x0028 -> line 1528
 *   +0x0030 -> line 1531
 *   +0x0034 -> line 1534
 *   +0x003c -> line 1537
 *   +0x0044 -> line 1549
 *   +0x00b8 -> line 1559
 *   +0x00f8 -> line 1562
 *   +0x0104 -> line 1568
 *   +0x01f4 -> line 1570
 *   +0x0224 -> line 1571
 *   +0x022c -> line 1576
 *   +0x0230 -> line 1577
 *   +0x0238 -> line 1578
 *   +0x023c -> line 1580
 *   +0x0244 -> line 1585
 *   +0x0248 -> line 1591
 *   +0x0274 -> line 1595
 *   +0x0278 -> line 1597
 *   +0x0280 -> line 1601
 *   +0x0284 -> line 1605
 *   +0x02cc -> line 1608
 *   +0x0304 -> line 1612
 *   +0x0308 -> line 1615
 *   +0x030c -> line 1617
 *   +0x0318 -> line 1618
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vComputeNextFrame(HIE_tdstSuperObject_* p_stSuperObject)
{
    float xNextFrameNumber;
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 1031–1512 */
/* addr: 0x002782b0  size: 4048 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1031
 *   +0x0040 -> line 1040
 *   +0x0044 -> line 1032
 *   +0x004c -> line 1033
 *   +0x0050 -> line 1051
 *   +0x0058 -> line 1056
 *   +0x0060 -> line 1062
 *   +0x006c -> line 1064
 *   +0x0070 -> line 1067
 *   +0x0078 -> line 1069
 *   +0x0080 -> line 1071
 *   +0x0084 -> line 1072
 *   +0x0090 -> line 1074
 *   +0x0094 -> line 1075
 *   +0x009c -> line 1078
 *   +0x00a8 -> line 1081
 *   +0x00b4 -> line 1084
 *   +0x00c0 -> line 1085
 *   +0x00cc -> line 1086
 *   +0x00f4 -> line 1088
 *   +0x00f8 -> line 1092
 *   +0x0124 -> line 1099
 *   +0x0130 -> line 1104
 *   +0x0138 -> line 1105
 *   +0x0140 -> line 1110
 *   +0x0150 -> line 1115
 *   +0x0168 -> line 1126
 *   +0x01d4 -> line 1135
 *   +0x0218 -> line 1137
 *   +0x0288 -> line 1141
 *   +0x02e4 -> line 1143
 *   +0x02ec -> line 1144
 *   +0x02f0 -> line 1145
 *   +0x02f4 -> line 1151
 *   +0x02f8 -> line 1149
 *   +0x02fc -> line 1151
 *   +0x0300 -> line 1153
 *   +0x0308 -> line 1154
 *   +0x0310 -> line 1161
 *   +0x031c -> line 1165
 *   +0x0328 -> line 1173
 *   +0x032c -> line 1189
 *   +0x0344 -> line 1193
 *   +0x0354 -> line 1197
 *   +0x0370 -> line 1198
 *   +0x0374 -> line 1201
 *   +0x0380 -> line 1203
 *   +0x03a4 -> line 1205
 *   +0x03b0 -> line 1212
 *   +0x03bc -> line 1213
 *   +0x045c -> line 1215
 *   +0x0464 -> line 1213
 *   +0x0474 -> line 1215
 *   +0x047c -> line 1216
 *   +0x0480 -> line 1217
 *   +0x04a4 -> line 1218
 *   +0x04a8 -> line 1221
 *   +0x04c8 -> line 1223
 *   +0x04d0 -> line 1230
 *   +0x04fc -> line 1237
 *   +0x053c -> line 1238
 *   +0x0544 -> line 1239
 *   +0x0548 -> line 1242
 *   +0x0558 -> line 1244
 *   +0x0560 -> line 1245
 *   +0x0568 -> line 1249
 *   +0x056c -> line 1253
 *   +0x0588 -> line 1259
 *   +0x05c8 -> line 1260
 *   +0x05d0 -> line 1261
 *   +0x05d4 -> line 1265
 *   +0x0608 -> line 1267
 *   +0x0610 -> line 1268
 *   +0x0618 -> line 1270
 *   +0x0620 -> line 1271
 *   +0x0628 -> line 1278
 *   +0x0634 -> line 1282
 *   +0x0640 -> line 1284
 *   +0x0644 -> line 1286
 *   +0x0648 -> line 1288
 *   +0x0650 -> line 1290
 *   +0x0658 -> line 1297
 *   +0x0664 -> line 1299
 *   +0x0678 -> line 1300
 *   +0x0680 -> line 1301
 *   +0x0688 -> line 1308
 *   +0x069c -> line 1310
 *   +0x06a8 -> line 1311
 *   +0x06c8 -> line 1312
 *   +0x06fc -> line 1313
 *   +0x0704 -> line 1316
 *   +0x071c -> line 1319
 *   +0x0728 -> line 1320
 *   +0x0730 -> line 1324
 *   +0x0738 -> line 1331
 *   +0x07a8 -> line 1334
 *   +0x07b4 -> line 1339
 *   +0x07cc -> line 1341
 *   +0x080c -> line 1344
 *   +0x0880 -> line 1346
 *   +0x08c0 -> line 1347
 *   +0x08c8 -> line 1348
 *   +0x08d0 -> line 1351
 *   +0x0910 -> line 1352
 *   +0x0920 -> line 1358
 *   +0x0928 -> line 1359
 *   +0x092c -> line 1362
 *   +0x0948 -> line 1367
 *   +0x094c -> line 1369
 *   +0x0954 -> line 1376
 *   +0x09c8 -> line 1377
 *   +0x09d0 -> line 1378
 *   +0x09d4 -> line 1379
 *   +0x09d8 -> line 1385
 *   +0x09dc -> line 1383
 *   +0x09e0 -> line 1385
 *   +0x09e4 -> line 1389
 *   +0x09ec -> line 1391
 *   +0x09f0 -> line 1393
 *   +0x09f4 -> line 1395
 *   +0x09f8 -> line 1400
 *   +0x0a1c -> line 1403
 *   +0x0ab0 -> line 1404
 *   +0x0b0c -> line 1406
 *   +0x0b18 -> line 1408
 *   +0x0b20 -> line 1409
 *   +0x0b2c -> line 1410
 *   +0x0b3c -> line 1413
 *   +0x0bd4 -> line 1418
 *   +0x0bd8 -> line 1413
 *   +0x0bec -> line 1418
 *   +0x0c28 -> line 1420
 *   +0x0c38 -> line 1421
 *   +0x0c40 -> line 1423
 *   +0x0c48 -> line 1424
 *   +0x0c50 -> line 1427
 *   +0x0c5c -> line 1429
 *   +0x0c6c -> line 1430
 *   +0x0c80 -> line 1432
 *   +0x0c8c -> line 1433
 *   +0x0c94 -> line 1436
 *   +0x0ca0 -> line 1441
 *   +0x0ce8 -> line 1443
 *   +0x0d80 -> line 1444
 *   +0x0d88 -> line 1445
 *   +0x0dbc -> line 1447
 *   +0x0dc8 -> line 1452
 *   +0x0e04 -> line 1454
 *   +0x0e9c -> line 1455
 *   +0x0ea8 -> line 1456
 *   +0x0edc -> line 1458
 *   +0x0ee0 -> line 1459
 *   +0x0f04 -> line 1462
 *   +0x0f10 -> line 1467
 *   +0x0f2c -> line 1472
 *   +0x0f3c -> line 1488
 *   +0x0f44 -> line 1494
 *   +0x0f4c -> line 1501
 *   +0x0f58 -> line 1503
 *   +0x0f60 -> line 1504
 *   +0x0f7c -> line 1507
 *   +0x0f88 -> line 1509
 *   +0x0f90 -> line 1511
 *   +0x0f94 -> line 1512
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PLA_fn_bDoAnimPlayerForCharacter(HIE_tdstSuperObject_* p_stSuperObject, unsigned char bNoDisplay, unsigned char _bHandleSkippedEventsIfRelevant)
{
    unsigned int ulAnimLength;
    unsigned char bBTLevel;
    int lValue;
    unsigned int ulAddFrame;
    unsigned char ucEventCount;
    int i;
    tdstEvent_* p_stEvent;
    unsigned char ucStateSpeed;
    tdstA3dGENERAL_* p_stCurrentA3dGENERAL;
    tdstSubAnimInUse_* hNextSubAnim;
    tdstSubAnimInUse_* hSubAnimInUse;
    float xAddFrames2;
    float xAddFrames;
    unsigned char bDidChangeState;
    tdstAnim3d_* p_stCurrentAnim;
    tdstState_* p_stCurrentState;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 948–1016 */
/* addr: 0x00279280  size: 732 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 948
 *   +0x001c -> line 957
 *   +0x0024 -> line 959
 *   +0x0028 -> line 960
 *   +0x0030 -> line 963
 *   +0x0034 -> line 964
 *   +0x003c -> line 968
 *   +0x0048 -> line 975
 *   +0x00e0 -> line 983
 *   +0x0120 -> line 985
 *   +0x020c -> line 986
 *   +0x0218 -> line 987
 *   +0x0220 -> line 990
 *   +0x0224 -> line 995
 *   +0x0250 -> line 999
 *   +0x0254 -> line 1001
 *   +0x025c -> line 1003
 *   +0x0260 -> line 1006
 *   +0x027c -> line 1007
 *   +0x0280 -> line 1010
 *   +0x02b8 -> line 1014
 *   +0x02bc -> line 1016
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vRefreshFrameNumber(HIE_tdstSuperObject_* p_stSuperObject)
{
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    float xNbFrames;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 872–942 */
/* addr: 0x00279560  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 872
 *   +0x0018 -> line 878
 *   +0x0020 -> line 879
 *   +0x0024 -> line 881
 *   +0x002c -> line 886
 *   +0x0034 -> line 888
 *   +0x0038 -> line 891
 *   +0x0040 -> line 892
 *   +0x0048 -> line 895
 *   +0x0054 -> line 896
 *   +0x005c -> line 898
 *   +0x0068 -> line 901
 *   +0x006c -> line 903
 *   +0x0078 -> line 907
 *   +0x0090 -> line 908
 *   +0x0098 -> line 909
 *   +0x009c -> line 910
 *   +0x00a0 -> line 911
 *   +0x00ac -> line 914
 *   +0x00b0 -> line 918
 *   +0x00b4 -> line 914
 *   +0x00b8 -> line 917
 *   +0x00bc -> line 918
 *   +0x00c4 -> line 921
 *   +0x00c8 -> line 925
 *   +0x00d4 -> line 927
 *   +0x00e0 -> line 929
 *   +0x0100 -> line 931
 *   +0x010c -> line 935
 *   +0x0110 -> line 937
 *   +0x0114 -> line 942
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PLA_fn_bSkipCurrentFrame(HIE_tdstSuperObject_* p_stSuperObject)
{
    int lValue;
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 366–862 */
/* addr: 0x00279690  size: 5212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 366
 *   +0x0004 -> line 381
 *   +0x0008 -> line 366
 *   +0x0050 -> line 388
 *   +0x0054 -> line 382
 *   +0x0058 -> line 381
 *   +0x005c -> line 388
 *   +0x0064 -> line 391
 *   +0x0068 -> line 393
 *   +0x006c -> line 391
 *   +0x0070 -> line 394
 *   +0x0074 -> line 397
 *   +0x007c -> line 394
 *   +0x0084 -> line 398
 *   +0x00a0 -> line 401
 *   +0x00ac -> line 403
 *   +0x00d8 -> line 404
 *   +0x00e8 -> line 406
 *   +0x00f0 -> line 407
 *   +0x010c -> line 409
 *   +0x0118 -> line 411
 *   +0x0128 -> line 414
 *   +0x0130 -> line 418
 *   +0x013c -> line 420
 *   +0x0168 -> line 421
 *   +0x0170 -> line 423
 *   +0x0174 -> line 424
 *   +0x0178 -> line 425
 *   +0x0180 -> line 426
 *   +0x0188 -> line 429
 *   +0x018c -> line 430
 *   +0x0190 -> line 429
 *   +0x0194 -> line 430
 *   +0x019c -> line 433
 *   +0x01a8 -> line 436
 *   +0x01ac -> line 437
 *   +0x01bc -> line 438
 *   +0x01c0 -> line 441
 *   +0x01e0 -> line 444
 *   +0x01ec -> line 445
 *   +0x01f0 -> line 454
 *   +0x0210 -> line 462
 *   +0x0214 -> line 468
 *   +0x0218 -> line 462
 *   +0x0220 -> line 465
 *   +0x0238 -> line 468
 *   +0x0244 -> line 470
 *   +0x0250 -> line 476
 *   +0x025c -> line 484
 *   +0x0260 -> line 486
 *   +0x0268 -> line 488
 *   +0x0338 -> line 494
 *   +0x0340 -> line 502
 *   +0x0348 -> line 503
 *   +0x0354 -> line 507
 *   +0x0380 -> line 509
 *   +0x0394 -> line 510
 *   +0x0398 -> line 513
 *   +0x03a0 -> line 518
 *   +0x03ac -> line 523
 *   +0x0460 -> line 526
 *   +0x04b4 -> line 527
 *   +0x04b8 -> line 532
 *   +0x04c4 -> line 535
 *   +0x04d0 -> line 536
 *   +0x04e0 -> line 539
 *   +0x04ec -> line 542
 *   +0x04f8 -> line 544
 *   +0x0500 -> line 545
 *   +0x0508 -> line 548
 *   +0x0518 -> line 549
 *   +0x0520 -> line 552
 *   +0x052c -> line 553
 *   +0x0544 -> line 555
 *   +0x0550 -> line 560
 *   +0x055c -> line 566
 *   +0x0618 -> line 567
 *   +0x063c -> line 568
 *   +0x0700 -> line 570
 *   +0x07d0 -> line 574
 *   +0x08f0 -> line 576
 *   +0x08fc -> line 577
 *   +0x0914 -> line 578
 *   +0x0920 -> line 585
 *   +0x094c -> line 588
 *   +0x0990 -> line 597
 *   +0x09c4 -> line 599
 *   +0x09f0 -> line 603
 *   +0x09f4 -> line 605
 *   +0x0a08 -> line 607
 *   +0x0a1c -> line 610
 *   +0x0a24 -> line 611
 *   +0x0a28 -> line 612
 *   +0x0a2c -> line 610
 *   +0x0a30 -> line 612
 *   +0x0a58 -> line 617
 *   +0x0a70 -> line 619
 *   +0x0a80 -> line 620
 *   +0x0a90 -> line 622
 *   +0x0a98 -> line 624
 *   +0x0ad8 -> line 625
 *   +0x0b14 -> line 626
 *   +0x0b18 -> line 625
 *   +0x0b20 -> line 626
 *   +0x0b24 -> line 625
 *   +0x0b34 -> line 626
 *   +0x0b4c -> line 628
 *   +0x0b70 -> line 635
 *   +0x0b7c -> line 638
 *   +0x0b84 -> line 639
 *   +0x0b94 -> line 640
 *   +0x0ba0 -> line 643
 *   +0x0bb8 -> line 645
 *   +0x0bc0 -> line 649
 *   +0x0bcc -> line 651
 *   +0x0bd0 -> line 652
 *   +0x0bd8 -> line 651
 *   +0x0bf0 -> line 652
 *   +0x0bf8 -> line 654
 *   +0x0c00 -> line 663
 *   +0x0c34 -> line 665
 *   +0x0c60 -> line 669
 *   +0x0c64 -> line 671
 *   +0x0c78 -> line 673
 *   +0x0c8c -> line 676
 *   +0x0c94 -> line 677
 *   +0x0c98 -> line 678
 *   +0x0c9c -> line 676
 *   +0x0ca0 -> line 678
 *   +0x0cc8 -> line 683
 *   +0x0ce0 -> line 685
 *   +0x0cf0 -> line 686
 *   +0x0d00 -> line 688
 *   +0x0d08 -> line 690
 *   +0x0d48 -> line 691
 *   +0x0d84 -> line 692
 *   +0x0d88 -> line 691
 *   +0x0d90 -> line 692
 *   +0x0d94 -> line 691
 *   +0x0da4 -> line 692
 *   +0x0dbc -> line 694
 *   +0x0dd8 -> line 701
 *   +0x0df0 -> line 704
 *   +0x0df8 -> line 707
 *   +0x0e04 -> line 708
 *   +0x0e20 -> line 712
 *   +0x0e24 -> line 715
 *   +0x0e30 -> line 725
 *   +0x0e38 -> line 727
 *   +0x0e40 -> line 729
 *   +0x0e4c -> line 731
 *   +0x0e54 -> line 732
 *   +0x0e5c -> line 733
 *   +0x0e60 -> line 737
 *   +0x0e98 -> line 743
 *   +0x0ea4 -> line 748
 *   +0x0f58 -> line 750
 *   +0x0fac -> line 751
 *   +0x0fb0 -> line 753
 *   +0x0fb8 -> line 754
 *   +0x0fc0 -> line 758
 *   +0x0fd4 -> line 761
 *   +0x0fe8 -> line 764
 *   +0x0ff8 -> line 765
 *   +0x0ffc -> line 766
 *   +0x1004 -> line 767
 *   +0x1010 -> line 770
 *   +0x1040 -> line 771
 *   +0x104c -> line 773
 *   +0x1058 -> line 776
 *   +0x105c -> line 778
 *   +0x1060 -> line 779
 *   +0x1088 -> line 784
 *   +0x108c -> line 785
 *   +0x10a0 -> line 787
 *   +0x10e4 -> line 788
 *   +0x1124 -> line 790
 *   +0x1140 -> line 793
 *   +0x114c -> line 795
 *   +0x1174 -> line 796
 *   +0x1180 -> line 799
 *   +0x1190 -> line 801
 *   +0x1194 -> line 804
 *   +0x11a0 -> line 806
 *   +0x11a8 -> line 807
 *   +0x11c0 -> line 809
 *   +0x11c8 -> line 813
 *   +0x11d0 -> line 814
 *   +0x11d8 -> line 816
 *   +0x11f4 -> line 819
 *   +0x1210 -> line 820
 *   +0x1218 -> line 821
 *   +0x1220 -> line 822
 *   +0x125c -> line 823
 *   +0x1264 -> line 824
 *   +0x1268 -> line 825
 *   +0x126c -> line 826
 *   +0x1278 -> line 828
 *   +0x127c -> line 829
 *   +0x1284 -> line 830
 *   +0x1288 -> line 834
 *   +0x1294 -> line 835
 *   +0x12a0 -> line 838
 *   +0x12ac -> line 843
 *   +0x12b8 -> line 848
 *   +0x12c4 -> line 849
 *   +0x12d8 -> line 852
 *   +0x12f4 -> line 853
 *   +0x12f8 -> line 852
 *   +0x12fc -> line 856
 *   +0x1300 -> line 852
 *   +0x1344 -> line 853
 *   +0x134c -> line 854
 *   +0x1350 -> line 853
 *   +0x135c -> line 854
 *   +0x1364 -> line 855
 *   +0x1368 -> line 854
 *   +0x1374 -> line 855
 *   +0x137c -> line 856
 *   +0x1380 -> line 855
 *   +0x138c -> line 856
 *   +0x1394 -> line 857
 *   +0x139c -> line 858
 *   +0x13a4 -> line 861
 *   +0x1418 -> line 862
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vDoFrame(tdstAnim3d_* p_stCurrentAnim, float xCurrentFrame, HIE_tdstSuperObject_* p_stSuperObject)
{
    HIE_tdstSuperObject_* hChild;
    CINE_tdstChannelLink_* hElement;
    int bFound;
    unsigned char uc2;
    unsigned char ucAmount2;
    unsigned char ucAmount1;
    float xMorphingInterpolationRatio;
    float axRatio[10];
    unsigned char uc;
    stMorphData* p_stMorphDataKF2;
    short xMorphTaskIndex;
    HIE_tdstSuperObject_* p_stSO_Child;
    tdstAChannel_* p_stLipsChannel;
    float xCurrentFrameForMorph;
    int iCameraChannel;
    unsigned short uwActualFrame;
    tdstAnim3d_* p_stActualAnim;
    tdstSubAnimInUse_* hSubAnimInUse;
    int i;
    PO_tdstPhysicalObject_* hPhysicalObject;
    short wElement;
    tdstObjectsTableElement_* p_stCurrentObjectsTableElement;
    tdstObjectsTableElement_* d_stCurrentObjectsTable;
    HIE_tdstSuperObject_* p_stTargetSO;
    tdst3dData_* h_Current3dData;
    tdstElement3d_* p_stElt3dStop;
    tdstElement3d_* p_stElt3d;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 313–328 */
/* addr: 0x0027aaf0  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 313
 *   +0x001c -> line 314
 *   +0x0024 -> line 315
 *   +0x002c -> line 319
 *   +0x004c -> line 322
 *   +0x0054 -> line 325
 *   +0x006c -> line 326
 *   +0x0080 -> line 328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLA_fn_vStopCurrentMorphAnim(HIE_tdstSuperObject_* p_stSuperObject)
{
    int i;
    tdstAnim3d_* p_stCurrentAnim;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 242–255 */
/* addr: 0x0027ab90  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 242
 *   +0x0014 -> line 243
 *   +0x001c -> line 244
 *   +0x0024 -> line 245
 *   +0x002c -> line 248
 *   +0x0040 -> line 249
 *   +0x0048 -> line 251
 *   +0x004c -> line 255
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_iCompareMorphData(stMorphData* p_stFirstElement, stMorphData* p_stSecondElement)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\PlayAnim\PlayAnim.c lines 226–238 */
/* addr: 0x0027abf0  size: 320 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 226
 *   +0x0004 -> line 228
 *   +0x0008 -> line 226
 *   +0x000c -> line 228
 *   +0x0010 -> line 226
 *   +0x0024 -> line 229
 *   +0x0028 -> line 228
 *   +0x002c -> line 229
 *   +0x0030 -> line 231
 *   +0x0038 -> line 233
 *   +0x00d0 -> line 234
 *   +0x00e0 -> line 235
 *   +0x00e8 -> line 236
 *   +0x0108 -> line 237
 *   +0x0120 -> line 238
 *   +0x012c -> line 237
 *   +0x0130 -> line 238
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PLA_bCheckDistForInterpol(HIE_tdstSuperObject_* p_stActorSO)
{
    tdst3dData_* h_Current3dData;
    float xResult;
    unsigned char i;
    /* TODO: decompile from asm/... */
}
