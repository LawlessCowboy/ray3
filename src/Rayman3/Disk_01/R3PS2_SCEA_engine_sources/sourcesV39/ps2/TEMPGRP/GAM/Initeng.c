/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c */
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
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct _SND_tdstInitStruct _SND_tdstInitStruct;
typedef struct tdstBrain_ tdstBrain_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstDataOfElement_ GLI_tdstDataOfElement_;
typedef struct anon_0 anon_0;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct LST2_tdstAnchorTotdxHandleToTransitionOpt LST2_tdstAnchorTotdxHandleToTransitionOpt;
typedef struct LST2_tdstAnchorTotdxHandleToProhibitOpt LST2_tdstAnchorTotdxHandleToProhibitOpt;
typedef struct tdstState_ tdstState_;
typedef struct tdstAlwaysActiveCharacter_ tdstAlwaysActiveCharacter_;
typedef struct tdstLanguageStructure_ tdstLanguageStructure_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct _stIDisplay _stIDisplay;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct stDynSpoInitialPosition stDynSpoInitialPosition;
typedef struct tdstMicro_ tdstMicro_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct tdstTransition_ tdstTransition_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct FIL_tdstFileNameListElement_ FIL_tdstFileNameListElement_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct stMorphData stMorphData;
typedef struct stFile_ stFile_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef struct tdstGraphChainedListNode_ tdstGraphChainedListNode_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct tdstProhibit_ tdstProhibit_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn;
typedef struct FIL_tdstFileNameList_ FIL_tdstFileNameList_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_2 anon_2;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct _RollOffParam _RollOffParam;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdstNodeMainCharacter_ tdstNodeMainCharacter_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct anon_1 anon_1;
typedef struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct tdstNodeCamera_ tdstNodeCamera_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct CINE_Manager_ CINE_Manager_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct _stTimerCount _stTimerCount;
typedef struct tdstEngineTimerStructure_ tdstEngineTimerStructure_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstSpecificAttributesFor3D_ GLI_tdstSpecificAttributesFor3D_;
typedef struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn LST2_tdstAnchorTotdxHandleToNodeCameraDyn;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct tdstEngineStructure_ tdstEngineStructure_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstCollideZdxList_ tdstCollideZdxList_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstZdxIndexList_ tdstZdxIndexList_;
typedef struct _tdstFixInfo _tdstFixInfo;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstStructureHandleFunction_ tdstStructureHandleFunction_;

typedef enum tdeSOL_ObjType_ {
    eSOL_Error = 0,
    eSOL_SPO = 1,
    eSOL_Character = 2,
    eSOL_Waypoint = 3,
} tdeSOL_ObjType_;

typedef enum tdeSOL_ObjPersistence_ {
    eSOL_UnknownPersistence = 0,
    eSOL_Persistent = 1,
    eSOL_NonPersistent = 2,
} tdeSOL_ObjPersistence_;

typedef enum anon_enum_007728c2 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_007728c2;

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

typedef enum tdeObjectTreeInit_ {
    OTI_WhenGameStart = 0,
    OTI_MapLoaded = 1,
    OTI_ReinitTheMap = 2,
    OTI_LoadSavedGame = 3,
    OTI_PlayerDead = 4,
    OTI_WhenGoOutOfZone = 4,
    OTI_Always = 4,
    OTI_AlwaysCreated = 5,
} tdeObjectTreeInit_;

struct _SND_tdstInitStruct {
    int iNbIrxPath; /* +0x0 */
    int ppchIrxPath; /* +0x4 */
    int iNbIrxName; /* +0x8 */
    int ppchIrxName; /* +0xc */
    _stIDisplay* pstIDisp; /* +0x10 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GLI_tdstDataOfElement_ {
    MTH3D_tdstVector_ stHit;
    float xDistance;
    short xElements;
    short xIndexOfFace;
    short xIndexOfEdge;
    short xIndexOfPoint;
};

struct anon_0 {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
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

struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt {
    tdstZdxIndexList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZoneSetList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt hZdxIndexList; /* +0x0 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
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

struct tdstAlwaysActiveCharacter_ {
    tdstAlwaysActiveCharacter_* hNextBrotherDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn* hFatherDyn; /* +0x8 */
    HIE_tdstSuperObject_* hAlwActSuperObject; /* +0xc */
    unsigned char bDynamicAlwaysActive; /* +0x10 */
};

struct tdstLanguageStructure_ {
    char szLanguageCode[20]; /* +0x0 */
    char szLanguageText[20]; /* +0x14 */
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

struct _stIDisplay {
    int (*pfn_iGsInitialize)(unsigned short, unsigned short, unsigned short); /* +0x0 */
    void (*pfn_vStartLoop)(void); /* +0x4 */
    void (*pfn_vEndLoop)(void); /* +0x8 */
    void (*pfn_vTextDisplay)(int, int, char*); /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct LST2_tdstAnchorTotdxHandleToAlwaysActiveCharacterNodeDyn {
    tdstAlwaysActiveCharacter_* hFirstElementDyn; /* +0x0 */
    tdstAlwaysActiveCharacter_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct stDynSpoInitialPosition {
    HIE_tdstSuperObject_* hDynSpo; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
};

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstTransition_ {
    tdstState_* h_TargetState; /* +0x0 */
    tdstState_* h_StateToGo; /* +0x4 */
    unsigned char ucLinkingType; /* +0x8 */
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

struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn {
    CINE_tdstCineActor_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCineActor_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct FIL_tdstFileNameListElement_ {
    FIL_tdstFileNameListElement_* hNextBrotherDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn* hFatherDyn; /* +0x8 */
    int szFileName; /* +0xc */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct stFile_ {
    stFile_* pChild; /* +0x0 */
    unsigned int sector; /* +0x4 */
    unsigned int length; /* +0x8 */
    char name[16]; /* +0xc */
    unsigned int nb_sons; /* +0x1c */
};

struct tdstSuperObjectLinks_ {
    HIE_tdstSuperObject_* h_SPORef; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ POS_SPO_Init; /* +0x10 */
    unsigned int ulNbLinkedObjects; /* +0x70 */
    unsigned int ulNbLinksAllocated; /* +0x74 */
    int LinkedObj; /* +0x78 */
    tdeSOL_ObjType_* eTypeOfLinkedObj; /* +0x7c */
    MAT_tdstTransformation_* POS_InitOfLinkedObj; /* +0x80 */
    tdeSOL_ObjPersistence_* ePersistenceOfLinkedObj; /* +0x84 */
};

struct tdstGraphChainedListNode_ {
    WP_tdstGraph_* GraphChainedListNodeInfo; /* +0x0 */
    tdstGraphChainedListNode_* p_NextGraphChainedListNode; /* +0x4 */
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

struct tdstProhibit_ {
    tdstState_* h_ProhibitedState; /* +0x0 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn {
    FIL_tdstFileNameListElement_* hFirstElementDyn; /* +0x0 */
    FIL_tdstFileNameListElement_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct FIL_tdstFileNameList_ {
    LST2_tdstAnchorToFIL_tdxHandleToFileNameListElementDyn hFileNameListAnchor; /* +0x0 */
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

struct anon_2 {
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
    anon_2 m_stData6; /* +0x34 */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt {
    tdstCollideZdxList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZdxList_ {
    LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
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

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstNodeMainCharacter_ {
    HIE_tdstSuperObject_* hNewCharacterForTheNextFrame; /* +0x0 */
    HIE_tdstSuperObject_* hCharacter; /* +0x4 */
    tdstNodeMainCharacter_* hNextBrotherDyn; /* +0x8 */
    tdstNodeMainCharacter_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn* hFatherDyn; /* +0x10 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
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

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

struct LST2_tdstAnchorToMC_tdxHandleToMainCharacterNodeDyn {
    tdstNodeMainCharacter_* hFirstElementDyn; /* +0x0 */
    tdstNodeMainCharacter_* hLastElementDyn; /* +0x4 */
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

struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt {
    tdstZoneSetEncapsulation_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCsaList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt hZoneSetEncapsulationList; /* +0x0 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstNodeCamera_ {
    HIE_tdstSuperObject_* p_stSuperObjectCamera; /* +0x0 */
    tdstNodeCamera_* hNextBrotherDyn; /* +0x4 */
    tdstNodeCamera_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorTotdxHandleToNodeCameraDyn* hFatherDyn; /* +0xc */
};

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
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

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct CINE_Manager_ {
    LST2_tdstAnchorToCINE_tdxHandleToCineDyn hCineList; /* +0x0 */
    MAT_tdstTransformation_ gp_stFixedCameraMatrix; /* +0x10 */
    HIE_tdstSuperObject_* gp_stSPOHandleCamera; /* +0x70 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct _stTimerCount {
    unsigned long m_ulLowPart; /* +0x0 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x4..0x7 */
    unsigned long m_ulHighPart; /* +0x8 */
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

struct GLI_tdstSpecificAttributesFor3D_ {
    GLI_tdstCamera_* p_stCam; /* +0x0 */
    float xNear; /* +0x4 */
};

struct LST2_tdstAnchorTotdxHandleToNodeCameraDyn {
    tdstNodeCamera_* hFirstElementDyn; /* +0x0 */
    tdstNodeCamera_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
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

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
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

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_007728c2 eUsedMechanics; /* +0x8 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
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

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstCollideZdxList_ {
    COL_tdstCollideObject_* hGeoObj; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstZdxIndexList_ {
    unsigned short uwZdxIndex; /* +0x0 */
};

struct _tdstFixInfo {
    unsigned int ulNbObject; /* +0x0 */
    int a20_stObjects[20]; /* +0x4 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct tdstZoneSetEncapsulation_ {
    tdstZoneSetList_* p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hCamera; /* +0x0 */
    HIE_tdstSuperObject_* hTempCamera; /* +0x4 */
    GLI_tdstCamera_* p_stCamera; /* +0x8 */
    unsigned char bValid; /* +0xc */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstStructureHandleFunction_ {
    void (*p_fn_vCopyCloneMSFunction)(tdstEngineObject_*, tdstEngineObject_*); /* +0x0 */
    unsigned int (*p_fn_ulSizeOfFunction)(void); /* +0x4 */
    void (*p_fn_vAllocFunction)(tdstEngineObject_*); /* +0x8 */
    void (*p_fn_vFreeFunction)(tdstEngineObject_*); /* +0xc */
    void (*p_fn_vInitFunction)(tdstEngineObject_*, tdeObjectTreeInit_); /* +0x10 */
    void (*p_fn_vDesinitFunction)(tdstEngineObject_*, tdeObjectTreeInit_); /* +0x14 */
};

unsigned char g_xA3bOff;
int g_hLoadedSuperObjectRoot;
int bFirst;
unsigned char g_bBeginMapSoundEventFlag;
unsigned char g_bFrozenWhenStart;
int g_iCurrentSpo;
int g_bMinimalLoading;
unsigned int g_FixMemHasBeenSet;
int g_JustForSPR;
MAT_tdstTransformation_ g_hCamLocalMatrix;
MAT_tdstTransformation_ g_hCamMatrix;
MAT_tdstTransformation_ g_hMCLocalMatrix;
MAT_tdstTransformation_ g_hMCMatrix;
int g_iLinkNumberA;
_tdstFixInfo g_stFixInfo;
stDynSpoInitialPosition g_a50_stDynSpoInitialPos[300];
tdstEngineStructure_ g_stEngineStructure;
int g_iNbPersoOfFixInDynamicHierarchy;
int gp_stDynamicWorld;
int gp_stPersoInDynamicHierarchy;
int gp_stActualWorld;
unsigned char g_bLoadNewLevel;
int g_a_hSOCurrentMainSector[4];
int SECT_hFatherSector;
char GLI_cGlobalFogIsOn;
int g_a_pfnDynamicFunction[2];
_SND_tduRefEvt g_stBeginMapSoundEvent;
int g_lSoundObjectTypeMusic;
unsigned char g_bInGameMenu;
int g_AlphabetCharacterPointer;
unsigned char GLI_g_bSaveFog;
unsigned char g_bLevelHasTransitionMemory;
unsigned char g_bLevelHadTransitionMemory;
unsigned char g_ucGameModuleId;
anon_1 last_video_fd;
int g_hMaterialForText;
unsigned int __text_end;
unsigned int __text_start;
tdstStructureHandleFunction_ g_a_stStructureHandleFunction;
int g_iArraySizes;
stFile_ ax_FileCache[2048];
unsigned char g_ucDebugCamera;
int iNumLoop;
int g_lSoundObjectTypeAnim;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 13–114 */
/* addr: 0x00262c30  size: 760 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 13
 *   +0x0030 -> line 21
 *   +0x003c -> line 24
 *   +0x004c -> line 27
 *   +0x005c -> line 30
 *   +0x0060 -> line 31
 *   +0x0068 -> line 36
 *   +0x00a4 -> line 40
 *   +0x00ac -> line 43
 *   +0x00b0 -> line 44
 *   +0x00b8 -> line 47
 *   +0x00bc -> line 48
 *   +0x00c4 -> line 51
 *   +0x00c8 -> line 52
 *   +0x00d0 -> line 55
 *   +0x00d4 -> line 56
 *   +0x00dc -> line 59
 *   +0x00e0 -> line 64
 *   +0x00f4 -> line 71
 *   +0x00f8 -> line 74
 *   +0x0100 -> line 85
 *   +0x0104 -> line 74
 *   +0x0108 -> line 85
 *   +0x0110 -> line 87
 *   +0x016c -> line 88
 *   +0x0170 -> line 87
 *   +0x0178 -> line 88
 *   +0x0180 -> line 87
 *   +0x0190 -> line 88
 *   +0x0198 -> line 90
 *   +0x019c -> line 93
 *   +0x01ac -> line 94
 *   +0x01b4 -> line 97
 *   +0x01c8 -> line 90
 *   +0x01cc -> line 97
 *   +0x01d0 -> line 90
 *   +0x01d4 -> line 93
 *   +0x01d8 -> line 97
 *   +0x01dc -> line 90
 *   +0x01e0 -> line 93
 *   +0x01e4 -> line 90
 *   +0x01ec -> line 91
 *   +0x0200 -> line 93
 *   +0x0220 -> line 94
 *   +0x0244 -> line 95
 *   +0x0270 -> line 97
 *   +0x0278 -> line 100
 *   +0x0284 -> line 103
 *   +0x02a4 -> line 107
 *   +0x02b4 -> line 109
 *   +0x02c0 -> line 111
 *   +0x02d0 -> line 114
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vGetScrollSpeedMatCollided(HIE_tdstSuperObject_* p_stSuperObj, MTH3D_tdstVector_* p_stVector, unsigned int ulObstacleType, int ulMTIndex)
{
    MAT_tdstTransformation_ mGlobalToObst;
    MTH3D_tdstVector_ vV12;
    MTH3D_tdstVector_ vPt2;
    MTH3D_tdstVector_ vPt1;
    MTH3D_tdstVector_ vNorm;
    MTH3D_tdstVector_ vContact;
    short xNbFaceCollided;
    GLI_tdstDataOfElement_ stElement;
    MAT_tdstTransformation_ mGlobalToPerso;
    MTH3D_tdstVector_ vGlobalSpeed;
    MTH3D_tdstVector_ vXYZSpeed;
    GEO_tdstGeometricObject_* hObject;
    HIE_tdstSuperObject_* p_stObjectCollided;
    DNM_stObstacle* p_stObstacle;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    DNM_stReport* p_stDynamReport;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1418–1419 */
/* addr: 0x002647d0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1418
 *   +0x0004 -> line 1419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char EngineIsFrozen(void)
{
    return *(unsigned char*)0x539e74;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1378–1387 */
/* addr: 0x002647e0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1378
 *   +0x0004 -> line 1382
 *   +0x0008 -> line 1378
 *   +0x000c -> line 1382
 *   +0x0010 -> line 1378
 *   +0x001c -> line 1382
 *   +0x0028 -> line 1383
 *   +0x0034 -> line 1385
 *   +0x00a8 -> line 1386
 *   +0x00b8 -> line 1387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReinitTheStaticHierarchie(HIE_tdstSuperObject_* hSuperObject)
{
    HIE_tdstSuperObject_* hChild;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1235–1364 */
/* addr: 0x002648b0  size: 808 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1235
 *   +0x0004 -> line 1243
 *   +0x0008 -> line 1235
 *   +0x0010 -> line 1243
 *   +0x0028 -> line 1246
 *   +0x0030 -> line 1249
 *   +0x0038 -> line 1254
 *   +0x0040 -> line 1257
 *   +0x0048 -> line 1259
 *   +0x0054 -> line 1260
 *   +0x0060 -> line 1261
 *   +0x0064 -> line 1262
 *   +0x006c -> line 1263
 *   +0x0074 -> line 1264
 *   +0x007c -> line 1265
 *   +0x0084 -> line 1267
 *   +0x00f8 -> line 1270
 *   +0x0100 -> line 1272
 *   +0x0118 -> line 1273
 *   +0x0150 -> line 1274
 *   +0x0160 -> line 1276
 *   +0x0168 -> line 1278
 *   +0x0180 -> line 1279
 *   +0x0188 -> line 1280
 *   +0x0198 -> line 1282
 *   +0x01a0 -> line 1287
 *   +0x01c8 -> line 1291
 *   +0x01d0 -> line 1293
 *   +0x01dc -> line 1295
 *   +0x01e8 -> line 1296
 *   +0x0204 -> line 1299
 *   +0x020c -> line 1303
 *   +0x0214 -> line 1310
 *   +0x0218 -> line 1313
 *   +0x021c -> line 1310
 *   +0x0234 -> line 1316
 *   +0x023c -> line 1318
 *   +0x0244 -> line 1324
 *   +0x024c -> line 1337
 *   +0x0290 -> line 1339
 *   +0x0298 -> line 1340
 *   +0x02a4 -> line 1342
 *   +0x02ac -> line 1343
 *   +0x02b8 -> line 1347
 *   +0x02c0 -> line 1349
 *   +0x02cc -> line 1353
 *   +0x02dc -> line 1354
 *   +0x02ec -> line 1355
 *   +0x02fc -> line 1358
 *   +0x0304 -> line 1360
 *   +0x030c -> line 1361
 *   +0x0314 -> line 1364
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vReinitTheMap(void)
{
    unsigned char uc_ViewPortIndex;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 1136–1152 */
/* addr: 0x00264be0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1136
 *   +0x0008 -> line 1144
 *   +0x0010 -> line 1146
 *   +0x0018 -> line 1147
 *   +0x0020 -> line 1152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDesInitDeadLoop(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 998–1122 */
/* addr: 0x00264c10  size: 896 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 998
 *   +0x0004 -> line 1002
 *   +0x0008 -> line 998
 *   +0x000c -> line 1007
 *   +0x0010 -> line 998
 *   +0x0018 -> line 1002
 *   +0x001c -> line 1003
 *   +0x0024 -> line 1004
 *   +0x0028 -> line 1007
 *   +0x0030 -> line 1011
 *   +0x0038 -> line 1013
 *   +0x0040 -> line 1014
 *   +0x00b8 -> line 1017
 *   +0x00c0 -> line 1019
 *   +0x00d8 -> line 1020
 *   +0x0110 -> line 1021
 *   +0x0120 -> line 1023
 *   +0x0128 -> line 1025
 *   +0x0140 -> line 1026
 *   +0x0148 -> line 1027
 *   +0x0158 -> line 1032
 *   +0x0180 -> line 1034
 *   +0x0188 -> line 1036
 *   +0x01a4 -> line 1042
 *   +0x01b8 -> line 1044
 *   +0x01cc -> line 1046
 *   +0x01d4 -> line 1047
 *   +0x01dc -> line 1052
 *   +0x01e4 -> line 1053
 *   +0x01ec -> line 1056
 *   +0x01f4 -> line 1057
 *   +0x01fc -> line 1059
 *   +0x020c -> line 1062
 *   +0x0214 -> line 1064
 *   +0x0260 -> line 1071
 *   +0x0270 -> line 1073
 *   +0x02bc -> line 1080
 *   +0x02c0 -> line 1091
 *   +0x02c4 -> line 1080
 *   +0x02c8 -> line 1085
 *   +0x02e4 -> line 1092
 *   +0x02ec -> line 1096
 *   +0x0304 -> line 1106
 *   +0x0324 -> line 1108
 *   +0x0330 -> line 1109
 *   +0x034c -> line 1112
 *   +0x0354 -> line 1114
 *   +0x035c -> line 1116
 *   +0x036c -> line 1122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitDeadLoop(void)
{
    HIE_tdstSuperObject_* hMaincharacter;
    unsigned char uc_ViewPortIndex;
    _SND_tduRefEvt uSoundEvent;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Initeng.c lines 415–458 */
/* addr: 0x00264f90  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 415
 *   +0x0004 -> line 416
 *   +0x0008 -> line 415
 *   +0x0010 -> line 418
 *   +0x0018 -> line 425
 *   +0x0020 -> line 426
 *   +0x0028 -> line 429
 *   +0x0038 -> line 431
 *   +0x0048 -> line 432
 *   +0x0050 -> line 433
 *   +0x0058 -> line 435
 *   +0x0068 -> line 437
 *   +0x0070 -> line 438
 *   +0x0078 -> line 441
 *   +0x0080 -> line 447
 *   +0x0088 -> line 449
 *   +0x0090 -> line 452
 *   +0x0098 -> line 454
 *   +0x00a0 -> line 456
 *   +0x00a8 -> line 458
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitGameLoop(void)
{
    unsigned char eCallingMode;
    /* TODO: decompile from asm/... */
}
