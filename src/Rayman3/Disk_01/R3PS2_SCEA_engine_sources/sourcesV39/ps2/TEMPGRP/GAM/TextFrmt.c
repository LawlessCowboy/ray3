/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c */
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
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct stMorphData stMorphData;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct stTfmtStatus_ stTfmtStatus_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct stTfmtLineResults_ stTfmtLineResults_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct stInfoTextAffiche_ stInfoTextAffiche_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstDefaultValuesForCharacter_ tdstDefaultValuesForCharacter_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct tdstCouple_ tdstCouple_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct tdstDynam_ tdstDynam_;
typedef struct _RollOffParam _RollOffParam;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamics DNM_stDynamics;

typedef enum anon_enum_007d7546 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_007d7546;

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

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

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

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    SECT_tdstListOfDNMLights_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfDNMLights_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn* hFatherDyn; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
    tdstObjectsTableElement_* d_stInitObjectsTable; /* +0x4 */
    unsigned short wNumberOfElement; /* +0x8 */
    unsigned short wZDxUsed; /* +0xa */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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
    tdstObjectsTablesList_* hSourceObjectTable; /* +0x28 */
    char cJustificationMode; /* +0x2c */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
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

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
};

struct stTfmtLineResults_ {
    short wStartChar; /* +0x0 */
    short wEndChar; /* +0x2 */
    MTH3D_tdstVector_ stLineOrigin; /* +0x4 */
};

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
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
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct WP_tdstGraphNode_ {
    WP_tdstGraphNode_* hNextBrotherDyn; /* +0x0 */
    WP_tdstGraphNode_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToWP_tdhGraphNodeDyn* hFatherDyn; /* +0x8 */
    WP_tdstWayPoint_* m_hWayPoint; /* +0xc */
    int m_lTypeOfWP; /* +0x10 */
    int m_lTypeOfWPInit; /* +0x14 */
    WP_tdstListOfArc_* m_hListOfArc; /* +0x18 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
    unsigned short usEventNumberInTBL; /* +0x4 */
    unsigned short uwFrameNumber; /* +0x6 */
    unsigned short uwChannelNumber; /* +0x8 */
    unsigned short uwIsLocalized; /* +0xa */
};

struct tdstSectInfo_ {
    HIE_tdstSuperObject_* hCurrentSector; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNodeInSector; /* +0x4 */
    MTH3D_tdstVector_ stPreviousPosition; /* +0x8 */
    HIE_tdstSuperObject_* hSectorSynchroCharacter; /* +0x14 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct stInfoTextAffiche_ {
    int bFirstInit; /* +0x0 */
    unsigned int ulCurrentDelay; /* +0x4 */
    unsigned int ulTimer; /* +0x8 */
    unsigned int ulEvent; /* +0xc */
    short wCurrentLetterInString; /* +0x10 */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn {
    CINE_tdstChannelLink_* hFirstElementDyn; /* +0x0 */
    CINE_tdstChannelLink_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct tdstDefaultValuesForCharacter_ {
    float m_xCharWidth; /* +0x0 */
    float m_xLineHeight; /* +0x4 */
    float m_xCharZoom; /* +0x8 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstDynam_ {
    DNM_stDynamics* p_stDynamics; /* +0x0 */
    DNM_stParsingDatas* p_stParsingDatas; /* +0x4 */
    anon_enum_007d7546 eUsedMechanics; /* +0x8 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
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

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
};

static unsigned int gs_hRandomHandleForTFMT;
int OffsetObjectTable;
tdstDefaultValuesForCharacter_ g_stDefaultValuesForCharacter;
unsigned int TFMT_ga_ulNbScale;
float TFMT_ga_fLetterScale[50];
float TFMT_ga_fLetterSpacing[256];
int g_bFreeTextAfficheBlocs[30];
int gp_SuperObjPersoGenerated[30];
stInfoTextAffiche_ g_stInfoTextAffiche[30];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 172–172 */
/* addr: 0x00268360  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 172
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstAnim3d_* fn_p_stGetAnimInState(tdstState_* h_State)
{
    /* tdstState_ is still opaque; the target reads its first pointer field. */
    return *(tdstAnim3d_**)h_State;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1220–1235 */
/* addr: 0x00268370  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1220
 *   +0x0004 -> line 1224
 *   +0x0008 -> line 1220
 *   +0x000c -> line 1224
 *   +0x0010 -> line 1220
 *   +0x0018 -> line 1224
 *   +0x0024 -> line 1225
 *   +0x0038 -> line 1226
 *   +0x003c -> line 1225
 *   +0x0050 -> line 1227
 *   +0x0058 -> line 1228
 *   +0x0068 -> line 1229
 *   +0x0070 -> line 1230
 *   +0x009c -> line 1231
 *   +0x00a0 -> line 1230
 *   +0x00a8 -> line 1231
 *   +0x00ac -> line 1233
 *   +0x00c0 -> line 1234
 *   +0x00c4 -> line 1235
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_vUpdateScaleTable(char* szText)
{
    int i;
    char* szCur;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1204–1218 */
/* addr: 0x00268450  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1204
 *   +0x0004 -> line 1208
 *   +0x0008 -> line 1204
 *   +0x000c -> line 1208
 *   +0x0010 -> line 1204
 *   +0x0018 -> line 1208
 *   +0x0024 -> line 1209
 *   +0x0038 -> line 1210
 *   +0x003c -> line 1209
 *   +0x0050 -> line 1211
 *   +0x0058 -> line 1212
 *   +0x0068 -> line 1213
 *   +0x0070 -> line 1214
 *   +0x009c -> line 1215
 *   +0x00a0 -> line 1214
 *   +0x00a8 -> line 1215
 *   +0x00ac -> line 1217
 *   +0x00c0 -> line 1218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_vUpdateSpacingTable(char* szText)
{
    int i;
    char* szCur;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1176–1190 */
/* addr: 0x00268530  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1176
 *   +0x0004 -> line 1179
 *   +0x0008 -> line 1176
 *   +0x000c -> line 1179
 *   +0x0010 -> line 1176
 *   +0x0018 -> line 1179
 *   +0x0020 -> line 1181
 *   +0x002c -> line 1183
 *   +0x0044 -> line 1184
 *   +0x0048 -> line 1183
 *   +0x004c -> line 1185
 *   +0x0050 -> line 1184
 *   +0x0054 -> line 1185
 *   +0x0074 -> line 1186
 *   +0x0078 -> line 1187
 *   +0x0084 -> line 1189
 *   +0x0098 -> line 1190
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_ucClearNumberOfCurrentTextAffiche(HIE_tdstSuperObject_* p_SuperObjPersoTreated)
{
    unsigned char i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1156–1168 */
/* addr: 0x002685e0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1156
 *   +0x0014 -> line 1158
 *   +0x0020 -> line 1160
 *   +0x0028 -> line 1161
 *   +0x0030 -> line 1163
 *   +0x0034 -> line 1161
 *   +0x0038 -> line 1163
 *   +0x0050 -> line 1168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char TFMT_ucSetNumber4CurrentTextAffiche(void)
{
    unsigned char i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1136–1146 */
/* addr: 0x00268640  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1136
 *   +0x0014 -> line 1138
 *   +0x0020 -> line 1140
 *   +0x0028 -> line 1142
 *   +0x002c -> line 1140
 *   +0x0030 -> line 1142
 *   +0x0048 -> line 1146
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char TFMT_ucNumberOfCurrentTextAffiche(HIE_tdstSuperObject_* p_SuperObjPersoTreated)
{
    unsigned char i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1116–1126 */
/* addr: 0x00268690  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1116
 *   +0x0020 -> line 1117
 *   +0x0024 -> line 1121
 *   +0x0040 -> line 1123
 *   +0x0044 -> line 1122
 *   +0x0048 -> line 1123
 *   +0x004c -> line 1122
 *   +0x0050 -> line 1123
 *   +0x0054 -> line 1125
 *   +0x0058 -> line 1123
 *   +0x005c -> line 1124
 *   +0x0070 -> line 1125
 *   +0x007c -> line 1126
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_vInitTextAfficheStructure(void)
{
    int iCpt;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 1068–1106 */
/* addr: 0x00268730  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1068
 *   +0x0020 -> line 1077
 *   +0x0028 -> line 1078
 *   +0x002c -> line 1079
 *   +0x0030 -> line 1083
 *   +0x0034 -> line 1078
 *   +0x0038 -> line 1083
 *   +0x0048 -> line 1086
 *   +0x004c -> line 1083
 *   +0x0050 -> line 1086
 *   +0x005c -> line 1089
 *   +0x0064 -> line 1092
 *   +0x006c -> line 1093
 *   +0x0070 -> line 1092
 *   +0x0074 -> line 1093
 *   +0x0080 -> line 1096
 *   +0x00a4 -> line 1104
 *   +0x00a8 -> line 1103
 *   +0x00ac -> line 1104
 *   +0x00b0 -> line 1103
 *   +0x00b4 -> line 1104
 *   +0x00bc -> line 1103
 *   +0x00c0 -> line 1104
 *   +0x00c4 -> line 1103
 *   +0x00cc -> line 1104
 *   +0x00d0 -> line 1103
 *   +0x00d4 -> line 1104
 *   +0x00f4 -> line 1106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_vChangeLetter(HIE_tdstSuperObject_* hSuperObjPerso, unsigned char ucPosLetter, unsigned char ucLetter)
{
    unsigned char ucTemp;
    short wNbObjectsInSourceTable;
    short wSourceObject;
    tdstObjectsTableElement_* d_stCurrentObjectsTable;
    tdstAChannel_* p_stChannel;
    tdstAChannel_* hChannelArray;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 935–1054 */
/* addr: 0x00268840  size: 720 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 935
 *   +0x0048 -> line 942
 *   +0x004c -> line 946
 *   +0x0050 -> line 942
 *   +0x0054 -> line 952
 *   +0x0058 -> line 954
 *   +0x0074 -> line 957
 *   +0x0084 -> line 959
 *   +0x0090 -> line 962
 *   +0x0094 -> line 965
 *   +0x0098 -> line 962
 *   +0x009c -> line 965
 *   +0x00a8 -> line 968
 *   +0x00ac -> line 967
 *   +0x00b0 -> line 976
 *   +0x00b8 -> line 973
 *   +0x00bc -> line 972
 *   +0x00c0 -> line 976
 *   +0x0130 -> line 978
 *   +0x0134 -> line 983
 *   +0x013c -> line 986
 *   +0x0148 -> line 994
 *   +0x0184 -> line 998
 *   +0x0190 -> line 1001
 *   +0x0194 -> line 998
 *   +0x0198 -> line 1001
 *   +0x01a4 -> line 1004
 *   +0x01b0 -> line 1007
 *   +0x01bc -> line 1008
 *   +0x01cc -> line 1009
 *   +0x01d0 -> line 1011
 *   +0x01f0 -> line 1014
 *   +0x01f8 -> line 1015
 *   +0x0200 -> line 1022
 *   +0x0210 -> line 1024
 *   +0x0234 -> line 1025
 *   +0x0238 -> line 1029
 *   +0x025c -> line 1041
 *   +0x0260 -> line 1043
 *   +0x0264 -> line 1042
 *   +0x0268 -> line 1041
 *   +0x026c -> line 1042
 *   +0x0270 -> line 1041
 *   +0x0274 -> line 1042
 *   +0x0278 -> line 1043
 *   +0x0280 -> line 1045
 *   +0x0298 -> line 1053
 *   +0x02a0 -> line 1054
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int TFMT_wPositionModulesAccordingToText2(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszText, int _lStart, int _lEnd, unsigned char* bFirstTimeZ, short* pwCurrentChar, unsigned int* ulDelay)
{
    unsigned char ucTemp;
    short wNbObjectsInSourceTable;
    short wSourceObject;
    unsigned char ucChar;
    unsigned char bLineBreak;
    char* pszEndText;
    int bDisplayFullString;
    unsigned int ulEvent;
    unsigned short uwIndexOfChar;
    unsigned short uwLenOfString;
    short wCurrentChar4Channels;
    short wCurrentChar;
    tdst3dData_* h_Current3dData;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 862–923 */
/* addr: 0x00268b10  size: 700 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 862
 *   +0x0048 -> line 864
 *   +0x0060 -> line 865
 *   +0x0064 -> line 866
 *   +0x0068 -> line 865
 *   +0x006c -> line 868
 *   +0x0074 -> line 870
 *   +0x0128 -> line 873
 *   +0x0130 -> line 870
 *   +0x0134 -> line 873
 *   +0x0140 -> line 876
 *   +0x0144 -> line 873
 *   +0x014c -> line 870
 *   +0x0150 -> line 873
 *   +0x0154 -> line 870
 *   +0x0158 -> line 876
 *   +0x015c -> line 878
 *   +0x0164 -> line 883
 *   +0x0170 -> line 881
 *   +0x0174 -> line 883
 *   +0x0190 -> line 884
 *   +0x0194 -> line 883
 *   +0x01a4 -> line 886
 *   +0x01ac -> line 888
 *   +0x01b8 -> line 891
 *   +0x01c0 -> line 909
 *   +0x01c8 -> line 896
 *   +0x01cc -> line 909
 *   +0x0208 -> line 910
 *   +0x020c -> line 909
 *   +0x0210 -> line 910
 *   +0x022c -> line 913
 *   +0x0238 -> line 910
 *   +0x0240 -> line 913
 *   +0x0250 -> line 910
 *   +0x025c -> line 913
 *   +0x0264 -> line 919
 *   +0x0268 -> line 920
 *   +0x026c -> line 919
 *   +0x0270 -> line 920
 *   +0x027c -> line 923
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vImplementChannelUpdate(HIE_tdstSuperObject_* _hSuperObjPerso, short _wCurrentChar4Channels, short _wSourceObject, float _xBaseCharX, float _xBaseCharZ, float _xCurCharWidth, float _xRandomPosRadius, float _xCurCharZoom)
{
    MTH3D_tdstVector_ stTransformation;
    HIE_tdstSuperObject_* p_stSO_Child;
    tdstAChannel_* hChannelArray;
    tdstObjectsTableElement_* d_stCurrentObjectsTable;
    tdst3dData_* h_Current3dData;
    tdstAChannel_* p_stChannel;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 628–823 */
/* addr: 0x00268dd0  size: 1488 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 628
 *   +0x0024 -> line 631
 *   +0x0028 -> line 628
 *   +0x0058 -> line 632
 *   +0x0068 -> line 633
 *   +0x006c -> line 636
 *   +0x0070 -> line 641
 *   +0x007c -> line 646
 *   +0x0080 -> line 647
 *   +0x0084 -> line 646
 *   +0x0088 -> line 647
 *   +0x0094 -> line 648
 *   +0x0098 -> line 651
 *   +0x009c -> line 648
 *   +0x00a4 -> line 651
 *   +0x00ac -> line 653
 *   +0x00bc -> line 656
 *   +0x00dc -> line 658
 *   +0x00e8 -> line 660
 *   +0x0108 -> line 661
 *   +0x012c -> line 662
 *   +0x0134 -> line 667
 *   +0x013c -> line 670
 *   +0x0140 -> line 673
 *   +0x0148 -> line 674
 *   +0x0154 -> line 675
 *   +0x015c -> line 680
 *   +0x0160 -> line 681
 *   +0x0164 -> line 680
 *   +0x017c -> line 681
 *   +0x0190 -> line 684
 *   +0x01b0 -> line 685
 *   +0x01d4 -> line 688
 *   +0x01dc -> line 689
 *   +0x01e8 -> line 690
 *   +0x01f0 -> line 693
 *   +0x0218 -> line 696
 *   +0x023c -> line 697
 *   +0x0254 -> line 699
 *   +0x0268 -> line 702
 *   +0x0288 -> line 705
 *   +0x0290 -> line 706
 *   +0x029c -> line 707
 *   +0x02a4 -> line 711
 *   +0x02c4 -> line 712
 *   +0x02d4 -> line 714
 *   +0x02e8 -> line 718
 *   +0x02f0 -> line 722
 *   +0x02f4 -> line 720
 *   +0x02f8 -> line 722
 *   +0x0304 -> line 724
 *   +0x0314 -> line 725
 *   +0x0320 -> line 728
 *   +0x0324 -> line 730
 *   +0x033c -> line 732
 *   +0x0348 -> line 733
 *   +0x0370 -> line 735
 *   +0x0378 -> line 737
 *   +0x037c -> line 739
 *   +0x0398 -> line 742
 *   +0x03a0 -> line 745
 *   +0x03ac -> line 746
 *   +0x03c4 -> line 747
 *   +0x03c8 -> line 750
 *   +0x03d4 -> line 751
 *   +0x03e0 -> line 753
 *   +0x03ec -> line 754
 *   +0x03f8 -> line 757
 *   +0x03fc -> line 758
 *   +0x0400 -> line 759
 *   +0x0404 -> line 760
 *   +0x0408 -> line 761
 *   +0x040c -> line 762
 *   +0x0410 -> line 763
 *   +0x0428 -> line 764
 *   +0x0430 -> line 765
 *   +0x043c -> line 766
 *   +0x0444 -> line 773
 *   +0x0454 -> line 775
 *   +0x0458 -> line 776
 *   +0x0460 -> line 778
 *   +0x0478 -> line 779
 *   +0x0488 -> line 783
 *   +0x048c -> line 784
 *   +0x04a4 -> line 786
 *   +0x04b0 -> line 787
 *   +0x04d8 -> line 789
 *   +0x04e0 -> line 791
 *   +0x04e4 -> line 793
 *   +0x04f0 -> line 795
 *   +0x04fc -> line 796
 *   +0x0504 -> line 799
 *   +0x0508 -> line 802
 *   +0x0524 -> line 804
 *   +0x0528 -> line 805
 *   +0x0530 -> line 808
 *   +0x053c -> line 809
 *   +0x0558 -> line 811
 *   +0x055c -> line 812
 *   +0x0560 -> line 811
 *   +0x0564 -> line 815
 *   +0x056c -> line 816
 *   +0x0578 -> line 818
 *   +0x0584 -> line 821
 *   +0x058c -> line 822
 *   +0x0590 -> line 823
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_pszReadNextChar2(stTfmtStatus_* _p_stStatus, char* _pszCurrentChar, unsigned char* _p_ucReturnedChar, unsigned char* _p_bLineBreak, int bDisplayFullString, short* wCurrentChar, unsigned int* ulEvent, unsigned int** ulDelay, short* wCurrentChar4Channels, unsigned short* p_uwIndexOfChar)
{
    unsigned char ucTemp;
    int i;
    unsigned char bStartLine;
    float xZoom;
    float xWidth;
    float xPrevWidth;
    float xPrevZoom;
    int lNbChar;
    unsigned short uwLenString;
    unsigned char ucChar;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 567–608 */
/* addr: 0x002693a0  size: 380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 567
 *   +0x0020 -> line 568
 *   +0x0024 -> line 567
 *   +0x0028 -> line 569
 *   +0x002c -> line 570
 *   +0x0030 -> line 572
 *   +0x0038 -> line 574
 *   +0x0048 -> line 576
 *   +0x0060 -> line 577
 *   +0x006c -> line 579
 *   +0x0074 -> line 580
 *   +0x0078 -> line 583
 *   +0x0080 -> line 586
 *   +0x0084 -> line 587
 *   +0x009c -> line 589
 *   +0x00a8 -> line 590
 *   +0x00d0 -> line 592
 *   +0x00d8 -> line 595
 *   +0x00f4 -> line 597
 *   +0x0100 -> line 598
 *   +0x0108 -> line 601
 *   +0x0114 -> line 602
 *   +0x0138 -> line 604
 *   +0x013c -> line 606
 *   +0x014c -> line 607
 *   +0x015c -> line 608
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TEXT_vComputeLengthOgString(char* p_szString, stTfmtStatus_* p_stStatus)
{
    unsigned char ucTemp;
    unsigned char bStartLine;
    unsigned char bLineBreak;
    float xMaxScreenWidth;
    float xZoom;
    int lNbChar;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 495–559 */
/* addr: 0x00269520  size: 468 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 495
 *   +0x0004 -> line 501
 *   +0x0008 -> line 495
 *   +0x0020 -> line 501
 *   +0x00b4 -> line 505
 *   +0x00b8 -> line 506
 *   +0x00c0 -> line 511
 *   +0x00ec -> line 512
 *   +0x00f4 -> line 516
 *   +0x00fc -> line 517
 *   +0x0100 -> line 518
 *   +0x0108 -> line 519
 *   +0x0114 -> line 520
 *   +0x011c -> line 525
 *   +0x0148 -> line 526
 *   +0x0150 -> line 531
 *   +0x017c -> line 532
 *   +0x0184 -> line 536
 *   +0x0190 -> line 539
 *   +0x0198 -> line 555
 *   +0x019c -> line 556
 *   +0x01a0 -> line 557
 *   +0x01b4 -> line 558
 *   +0x01b8 -> line 559
 *   +0x01bc -> line 558
 *   +0x01c0 -> line 559
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int TFMT_lProcessFormater(stTfmtStatus_* p_stStatus, char* szString, unsigned char* p_bLineBreak, unsigned char* p_bStartLine)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 340–482 */
/* addr: 0x00269700  size: 1316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x0030 -> line 342
 *   +0x0034 -> line 340
 *   +0x0054 -> line 343
 *   +0x0058 -> line 342
 *   +0x005c -> line 343
 *   +0x0064 -> line 344
 *   +0x0070 -> line 346
 *   +0x008c -> line 350
 *   +0x0090 -> line 346
 *   +0x0094 -> line 350
 *   +0x010c -> line 353
 *   +0x0114 -> line 356
 *   +0x0124 -> line 358
 *   +0x0128 -> line 356
 *   +0x012c -> line 358
 *   +0x014c -> line 360
 *   +0x0150 -> line 361
 *   +0x015c -> line 362
 *   +0x0164 -> line 364
 *   +0x0168 -> line 365
 *   +0x018c -> line 366
 *   +0x0194 -> line 368
 *   +0x0198 -> line 369
 *   +0x019c -> line 370
 *   +0x01a0 -> line 373
 *   +0x01b8 -> line 374
 *   +0x01c8 -> line 377
 *   +0x01d0 -> line 383
 *   +0x01e8 -> line 385
 *   +0x01f0 -> line 387
 *   +0x0200 -> line 390
 *   +0x0208 -> line 393
 *   +0x0214 -> line 394
 *   +0x0224 -> line 395
 *   +0x0228 -> line 397
 *   +0x0230 -> line 398
 *   +0x0234 -> line 397
 *   +0x0238 -> line 398
 *   +0x0258 -> line 407
 *   +0x0270 -> line 409
 *   +0x02b0 -> line 410
 *   +0x02b8 -> line 421
 *   +0x02bc -> line 414
 *   +0x02c0 -> line 421
 *   +0x0300 -> line 422
 *   +0x0304 -> line 421
 *   +0x030c -> line 422
 *   +0x0324 -> line 425
 *   +0x0328 -> line 422
 *   +0x032c -> line 425
 *   +0x0334 -> line 422
 *   +0x0350 -> line 425
 *   +0x036c -> line 431
 *   +0x0378 -> line 432
 *   +0x0380 -> line 431
 *   +0x0388 -> line 432
 *   +0x0390 -> line 437
 *   +0x039c -> line 438
 *   +0x03c0 -> line 440
 *   +0x03d8 -> line 442
 *   +0x03ec -> line 448
 *   +0x0400 -> line 452
 *   +0x040c -> line 454
 *   +0x041c -> line 457
 *   +0x0420 -> line 461
 *   +0x043c -> line 462
 *   +0x0448 -> line 463
 *   +0x0450 -> line 466
 *   +0x0460 -> line 467
 *   +0x0468 -> line 471
 *   +0x0480 -> line 472
 *   +0x048c -> line 473
 *   +0x04a8 -> line 475
 *   +0x04b0 -> line 477
 *   +0x04c4 -> line 478
 *   +0x04d0 -> line 479
 *   +0x04ec -> line 481
 *   +0x04f0 -> line 482
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short TFMT_wPositionModulesAccordingToText(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszText, int _lStart, int _lEnd, float _xScreenWidth, stTfmtLineResults_* _d_stLineResults, short _wNbLines)
{
    unsigned char ucChar;
    unsigned char bLineBreak;
    MTH3D_tdstVector_ stTransformation;
    unsigned char ucTemp;
    short wNbObjectsInSourceTable;
    short wSourceObject;
    char* pszEndText;
    char* pszInitText;
    short wNbObjectsInTargetTable;
    short wCurrentLine;
    short wCurrentChar;
    short wNbCharsInCurrentLine;
    float xJustificationShift;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 289–323 */
/* addr: 0x00269c30  size: 420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 289
 *   +0x0008 -> line 296
 *   +0x000c -> line 289
 *   +0x002c -> line 292
 *   +0x0030 -> line 289
 *   +0x0034 -> line 294
 *   +0x0038 -> line 296
 *   +0x0048 -> line 294
 *   +0x0050 -> line 299
 *   +0x0054 -> line 296
 *   +0x00a0 -> line 299
 *   +0x00a8 -> line 300
 *   +0x00b0 -> line 305
 *   +0x00c8 -> line 306
 *   +0x00d4 -> line 308
 *   +0x00dc -> line 309
 *   +0x00ec -> line 312
 *   +0x00f0 -> line 311
 *   +0x00f4 -> line 313
 *   +0x0100 -> line 315
 *   +0x0108 -> line 317
 *   +0x0114 -> line 319
 *   +0x0118 -> line 322
 *   +0x011c -> line 319
 *   +0x017c -> line 321
 *   +0x0180 -> line 323
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned short TFMT_uwGetNbCharsFillingALine(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszText, float* _p_xActualWidth)
{
    float xNewWidth;
    float xScreenWidth;
    float xCurrentWidth;
    unsigned char bLineBreak;
    short wCharIndex;
    unsigned char ucCurrentChar;
    stTfmtStatus_ stTfmtStatusSave;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 151–275 */
/* addr: 0x00269de0  size: 1020 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 151
 *   +0x0038 -> line 155
 *   +0x0050 -> line 158
 *   +0x0058 -> line 160
 *   +0x0118 -> line 164
 *   +0x0120 -> line 165
 *   +0x0128 -> line 166
 *   +0x0134 -> line 167
 *   +0x013c -> line 170
 *   +0x0140 -> line 171
 *   +0x0144 -> line 172
 *   +0x0170 -> line 173
 *   +0x0178 -> line 177
 *   +0x017c -> line 178
 *   +0x01a8 -> line 179
 *   +0x01b0 -> line 183
 *   +0x01b4 -> line 184
 *   +0x01e0 -> line 185
 *   +0x01e8 -> line 189
 *   +0x0210 -> line 193
 *   +0x0218 -> line 197
 *   +0x021c -> line 198
 *   +0x0224 -> line 199
 *   +0x022c -> line 202
 *   +0x0230 -> line 203
 *   +0x0238 -> line 204
 *   +0x0240 -> line 209
 *   +0x024c -> line 210
 *   +0x0250 -> line 212
 *   +0x0254 -> line 210
 *   +0x0270 -> line 212
 *   +0x0278 -> line 214
 *   +0x0280 -> line 219
 *   +0x0288 -> line 223
 *   +0x028c -> line 227
 *   +0x02ac -> line 228
 *   +0x02b0 -> line 230
 *   +0x02bc -> line 231
 *   +0x02c0 -> line 232
 *   +0x02d0 -> line 235
 *   +0x02f4 -> line 236
 *   +0x0318 -> line 240
 *   +0x0328 -> line 243
 *   +0x0334 -> line 245
 *   +0x0350 -> line 248
 *   +0x0358 -> line 254
 *   +0x035c -> line 255
 *   +0x036c -> line 256
 *   +0x0378 -> line 257
 *   +0x0384 -> line 259
 *   +0x0388 -> line 261
 *   +0x0398 -> line 262
 *   +0x03b0 -> line 265
 *   +0x03b8 -> line 269
 *   +0x03bc -> line 271
 *   +0x03c0 -> line 269
 *   +0x03c4 -> line 271
 *   +0x03cc -> line 273
 *   +0x03d0 -> line 274
 *   +0x03d4 -> line 275
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_pszReadNextChar(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszCurrentChar, unsigned char* _p_ucReturnedChar, unsigned char* _p_bLineBreak)
{
    unsigned char ucTemp;
    float xZoom;
    int lValue;
    unsigned char ucChar;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c lines 99–106 */
/* addr: 0x0026a1e0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0008 -> line 100
 *   +0x0018 -> line 101
 *   +0x0020 -> line 102
 *   +0x0038 -> line 103
 *   +0x0044 -> line 105
 *   +0x0080 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TFMT_vSetDefaultValuesCharacter(float _xCharWidth, float _xLineHeight, float _xCharZoom)
{
    /* TODO: decompile from asm/... */
}
