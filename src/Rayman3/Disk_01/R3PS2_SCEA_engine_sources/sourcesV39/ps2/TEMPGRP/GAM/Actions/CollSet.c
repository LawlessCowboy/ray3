/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c */
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
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct tdstComport_ tdstComport_;
typedef struct tdstDsgMem_ tdstDsgMem_;
typedef struct tdstDsgVar_ tdstDsgVar_;
typedef struct tdstIntelligence_ tdstIntelligence_;
typedef struct tdstListOfMacro_ tdstListOfMacro_;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstScriptAI_ tdstScriptAI_;
typedef struct tdstState_ tdstState_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct stColliderInfo_ stColliderInfo_;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstSightAxisSystem_ tdstSightAxisSystem_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef struct tdstTransparentSuperObjectForCamera_ tdstTransparentSuperObjectForCamera_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct MOR_stMorphVector_ MOR_stMorphVector_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt;
typedef struct tdstZdxList_ tdstZdxList_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct LST2_tdstAnchorToWP_tdhGraphNodeDyn LST2_tdstAnchorToWP_tdhGraphNodeDyn;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct WP_tdstGraphNode_ WP_tdstGraphNode_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct tdstAveragePosition_ tdstAveragePosition_;
typedef struct tdstCineinfo_ tdstCineinfo_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt;
typedef struct tdstCsaList_ tdstCsaList_;
typedef struct tdstInternalStructurCineinfo_ tdstInternalStructurCineinfo_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct _RollOffParam _RollOffParam;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct WP_tdstGraph_ WP_tdstGraph_;
typedef struct AI_tdstAIModel_ AI_tdstAIModel_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstMSSound_ tdstMSSound_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef union GEO_tduVSObject_ GEO_tduVSObject_;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct MOR_stMorphObject_ MOR_stMorphObject_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct tdstCouple_ tdstCouple_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstCollideZdxList_ tdstCollideZdxList_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstZdxIndexList_ tdstZdxIndexList_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct tdstZoneSetEncapsulation_ tdstZoneSetEncapsulation_;
typedef struct DNM_stParsingDatas DNM_stParsingDatas;

typedef enum anon_enum_0081aa75 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_0081aa75;

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

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct tdstSightAxisSystem_ {
    MTH3D_tdstVector_ SightAxis; /* +0x0 */
    MTH3D_tdstVector_ FirstComplementaryAxis; /* +0xc */
    MTH3D_tdstVector_ SecondComplementaryAxis; /* +0x18 */
};

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
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

struct tdstEvent_ {
    tdstEventInTable_* p_stfEventInTBL; /* +0x0 */
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

struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt {
    tdstZdxIndexList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZoneSetList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt hZdxIndexList; /* +0x0 */
};

struct tdstTransparentSuperObjectForCamera_ {
    HIE_tdstSuperObject_* hSuperObject; /* +0x0 */
    int lInitialDrawMask; /* +0x4 */
    float fInitialTransparenceLevel; /* +0x8 */
    float fCurrentTransparencyLevel; /* +0xc */
    unsigned char bIncrease; /* +0x10 */
};

struct tdstEventInTable_ {
    int p_xEvent; /* +0x0 */
    unsigned char ucTypeOfEvent; /* +0x4 */
    unsigned char ucPriority; /* +0x5 */
    unsigned char ucFirstCall; /* +0x6 */
    unsigned char ucPeriod; /* +0x7 */
    unsigned int u32SemaphoreId; /* +0x8 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

struct AI_tdstMind_ {
    AI_tdstAIModel_* p_stAIModel; /* +0x0 */
    tdstIntelligence_* p_stIntelligence; /* +0x4 */
    tdstIntelligence_* p_stReflex; /* +0x8 */
    tdstDsgMem_* p_stDsgMem; /* +0xc */
    unsigned char bDoingIntel; /* +0x10 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct MOR_stMorphVector_ {
    short xVertexIndex; /* +0x0 */
    MTH3D_tdstVector_ stDeformationVector; /* +0x4 */
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

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn {
    SECT_tdstListOfDNMLights_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfDNMLights_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt {
    tdstCollideZdxList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZdxList_ {
    LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
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

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToWP_tdhGraphNodeDyn {
    WP_tdstGraphNode_* hFirstElementDyn; /* +0x0 */
    WP_tdstGraphNode_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn {
    tdstSubAnimInUse_* hFirstElementDyn; /* +0x0 */
    tdstSubAnimInUse_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
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

struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
};

struct tdstAveragePosition_ {
    MTH3D_tdstVector_ a_CheckedSpeed[8]; /* +0x0 */
    MTH3D_tdstVector_ a_CheckedPos[8]; /* +0x60 */
    float a_CheckedTime[8]; /* +0xc0 */
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

struct LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt {
    tdstZoneSetEncapsulation_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCsaList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZoneSetEncapsulationOpt hZoneSetEncapsulationList; /* +0x0 */
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

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    int d_xThresholdsTable; /* +0x8 */
    GEO_tduVSObject_* d_p_stLodDefinitions; /* +0xc */
    int d_hRLI; /* +0x10 */
    int lNumberOfRLI; /* +0x14 */
};

struct WP_tdstWayPoint_ {
    MTH3D_tdstVector_ m_stVertex; /* +0x0 */
    float m_xRadius; /* +0xc */
    HIE_tdstSuperObject_* m_hSuperObject; /* +0x10 */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
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

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
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

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
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

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
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
    anon_enum_0081aa75 eUsedMechanics; /* +0x8 */
};

struct _RollOffParam {
    int rDistSatur; /* +0x0 */
    int rDistBackGround; /* +0x4 */
    unsigned char ucBackgroundVol; /* +0x8 */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
};

struct tdstMSWay_ {
    WP_tdstGraph_* m_hPath; /* +0x0 */
    int m_lIndex; /* +0x4 */
    char m_bIsCircular; /* +0x8 */
};

struct WP_tdstGraph_ {
    LST2_tdstAnchorToWP_tdhGraphNodeDyn m_hListOfNode; /* +0x0 */
};

struct AI_tdstAIModel_ {
    tdstScriptAI_* p_stScriptAIIntell; /* +0x0 */
    tdstScriptAI_* p_stScriptAIReflex; /* +0x4 */
    tdstDsgVar_* p_stDsgVar; /* +0x8 */
    tdstListOfMacro_* p_stListOfMacro; /* +0xc */
    unsigned char ucSecondPassDone; /* +0x10 */
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

struct tdstMicro_ {
    MAT_tdstTransformation_* hMicroMatrix; /* +0x0 */
    unsigned char bIsActive; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInGraphicInteraction_ {
    short wLevelOfDetail; /* +0x0 */
    char cDisplayMode; /* +0x2 */
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x4 */
};

struct tdstMSSound_ {
    _RollOffParam stRollOff; /* +0x0 */
    HIE_tdstSuperObject_* hMechaCharacter; /* +0xc */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

union GEO_tduVSObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    MOR_stMorphObject_* p_stMorphObject; /* +0x0 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct MOR_stMorphObject_ {
    GEO_tdstGeometricObject_* hBaseObject; /* +0x0 */
    unsigned int ulNbVectors; /* +0x4 */
    MOR_stMorphVector_* d_stMorphVector; /* +0x8 */
};

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    _SND_tdstBlockEvent* pstPtr; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt {
    SECT_tdstListOfSOSectorsInActivityInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt {
    SECT_tdstListOfSOSectorsInGraphicInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt {
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt {
    SCT_tdstListOfSoundEvent_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
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

struct tdstZdxIndexList_ {
    unsigned short uwZdxIndex; /* +0x0 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
};

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct tdstZoneSetEncapsulation_ {
    tdstZoneSetList_* p_stZoneSetList; /* +0x0 */
    unsigned short uwIndex; /* +0x4 */
};

struct DNM_stParsingDatas {
    MTH3D_tdstVector_ stPosition; /* +0x0 */
    float xOutAlpha; /* +0xc */
    MTH3D_tdstVector_ stVector; /* +0x10 */
};

unsigned char g_ucGameModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 75–121 */
/* addr: 0x0026e610  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 111
 *   +0x0004 -> line 75
 *   +0x0008 -> line 111
 *   +0x000c -> line 75
 *   +0x0010 -> line 119
 *   +0x0014 -> line 77
 *   +0x0018 -> line 119
 *   +0x001c -> line 77
 *   +0x0020 -> line 75
 *   +0x0024 -> line 121
 *   +0x0028 -> line 75
 *   +0x002c -> line 80
 *   +0x0030 -> line 76
 *   +0x0034 -> line 106
 *   +0x0038 -> line 76
 *   +0x003c -> line 121
 *   +0x0040 -> line 77
 *   +0x0044 -> line 80
 *   +0x0048 -> line 77
 *   +0x004c -> line 82
 *   +0x0050 -> line 78
 *   +0x0054 -> line 82
 *   +0x0058 -> line 78
 *   +0x005c -> line 121
 *   +0x0060 -> line 80
 *   +0x0068 -> line 82
 *   +0x0070 -> line 81
 *   +0x0074 -> line 84
 *   +0x0078 -> line 81
 *   +0x007c -> line 84
 *   +0x0080 -> line 91
 *   +0x0084 -> line 87
 *   +0x0088 -> line 91
 *   +0x008c -> line 84
 *   +0x0090 -> line 87
 *   +0x0094 -> line 84
 *   +0x0098 -> line 88
 *   +0x009c -> line 85
 *   +0x00a4 -> line 87
 *   +0x00a8 -> line 121
 *   +0x00ac -> line 87
 *   +0x00b0 -> line 121
 *   +0x00b4 -> line 88
 *   +0x00c0 -> line 92
 *   +0x00c4 -> line 89
 *   +0x00c8 -> line 92
 *   +0x00cc -> line 89
 *   +0x00d0 -> line 92
 *   +0x00d4 -> line 96
 *   +0x00d8 -> line 92
 *   +0x00dc -> line 93
 *   +0x00e8 -> line 95
 *   +0x00f8 -> line 96
 *   +0x00fc -> line 98
 *   +0x0100 -> line 96
 *   +0x0104 -> line 98
 *   +0x0108 -> line 99
 *   +0x010c -> line 98
 *   +0x0110 -> line 99
 *   +0x0114 -> line 101
 *   +0x0118 -> line 99
 *   +0x011c -> line 101
 *   +0x0120 -> line 102
 *   +0x0124 -> line 101
 *   +0x0128 -> line 102
 *   +0x012c -> line 103
 *   +0x0130 -> line 102
 *   +0x0134 -> line 103
 *   +0x0138 -> line 107
 *   +0x013c -> line 103
 *   +0x0140 -> line 104
 *   +0x0148 -> line 108
 *   +0x0154 -> line 112
 *   +0x0160 -> line 106
 *   +0x0164 -> line 114
 *   +0x0168 -> line 106
 *   +0x016c -> line 107
 *   +0x0174 -> line 113
 *   +0x017c -> line 109
 *   +0x0184 -> line 110
 *   +0x018c -> line 114
 *   +0x0194 -> line 116
 *   +0x019c -> line 117
 *   +0x01a0 -> line 121
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
typedef struct CAM_tdstCameraConstants_ {
    float xRayCameraSphereToGo1;
    float xRayCameraSphereToGo2;
    float xRayCameraSphereToSee1;
    float xRayCameraSphereToSee2;
    float xBaseAngleComputePosNormal;
    float xBaseAngleComputePosFailure;
    float xAverageForComputePos;
    float xAverageForComputeLinearSpeed;
    float xMinLinearSpeedCamera;
    float xMinLinearSpeedTgtPerso;
    float xMinAngularSpeedTgtPerso;
    float xEpsilonDynTgtAngle;
    float xEpsilonDynTgtFocalAngle;
    float xEpsilonForEqualVectors;
    float xOffsetMinDistPerso;
    float xDistanceForNoCut;
    short xNumRayCameraCanGo;
    short xNumRayCameraCanSee;
    short xTickTestVisibility;
    short xTickFindBetterPos;
    short xTickFindBetterPosIfNoMove;
    short xTickFailureCantSee;
    float xDynSpeed_LinearFactNorm;
    float xDynSpeed_LinearMax;
    float xDynSpeed_LinearMulPerso;
    float xDynSpeed_AngularFactNorm;
    float xDynSpeed_AngularMax;
    float xDynSpeed_AngularMulPerso;
    float xDynSpeed_TargetFactNorm;
    float xDynSpeed_TargetMax;
    float xDynSpeed_TargetMulPerso;
    float xBaseCutAngle;
    float xCutAngleFactorPos;
    float xCutAngleFactorTgt;
    short wFlags;
    short wAlign;
} CAM_tdstCameraConstants_;

extern CAM_tdstCameraConstants_ CAM_g_stCameraConstants;
extern CAM_tdstCameraConstants_ CAM_g_stCopyCameraConstants;

#pragma optimize_for_size off
void CAM_fn_vLoadCameraConstants(void)
{
    CAM_g_stCameraConstants.xRayCameraSphereToGo1 = 0.35f;
    CAM_g_stCameraConstants.xRayCameraSphereToGo2 = 0.35f;
    CAM_g_stCameraConstants.xRayCameraSphereToSee1 = 0.1f;
    CAM_g_stCameraConstants.xRayCameraSphereToSee2 = 0.1f;
    CAM_g_stCameraConstants.xBaseAngleComputePosNormal = 0.7853982f;
    CAM_g_stCameraConstants.xBaseAngleComputePosFailure = 0.3926991f;
    CAM_g_stCameraConstants.xAverageForComputePos = 0.4f;
    CAM_g_stCameraConstants.xAverageForComputeLinearSpeed = 0.4f;
    CAM_g_stCameraConstants.xMinLinearSpeedCamera = 0.005f;
    CAM_g_stCameraConstants.xMinLinearSpeedTgtPerso = 0.01f;
    CAM_g_stCameraConstants.xMinAngularSpeedTgtPerso = 0.01f;
    CAM_g_stCameraConstants.xEpsilonDynTgtAngle = 0.7853982f;
    CAM_g_stCameraConstants.xEpsilonDynTgtFocalAngle = 0.19634954f;
    CAM_g_stCameraConstants.xEpsilonForEqualVectors = 0.5f;
    CAM_g_stCameraConstants.xOffsetMinDistPerso = 0.05f;
    CAM_g_stCameraConstants.xDistanceForNoCut = 5.0f;
    CAM_g_stCameraConstants.xNumRayCameraCanGo = 3;
    CAM_g_stCameraConstants.xNumRayCameraCanSee = 1;
    CAM_g_stCameraConstants.xTickTestVisibility = 4;
    CAM_g_stCameraConstants.xTickFindBetterPos = 20;
    CAM_g_stCameraConstants.xTickFindBetterPosIfNoMove = 60;
    CAM_g_stCameraConstants.xTickFailureCantSee = 60;
    CAM_g_stCameraConstants.xDynSpeed_LinearFactNorm = 3.0f;
    CAM_g_stCameraConstants.xDynSpeed_LinearMax = 10.0f;
    CAM_g_stCameraConstants.xDynSpeed_LinearMulPerso = 1.5f;
    CAM_g_stCameraConstants.xDynSpeed_AngularFactNorm = 3.0f;
    CAM_g_stCameraConstants.xDynSpeed_AngularMax = 3.0f;
    CAM_g_stCameraConstants.xDynSpeed_AngularMulPerso = 0.0f;
    CAM_g_stCameraConstants.xDynSpeed_TargetFactNorm = 4.0f;
    CAM_g_stCameraConstants.xDynSpeed_TargetMax = 10.0f;
    CAM_g_stCameraConstants.xDynSpeed_TargetMulPerso = 1.0f;
    CAM_g_stCameraConstants.xBaseCutAngle = 0.3926991f;
    CAM_g_stCameraConstants.xCutAngleFactorPos = 1.0f;
    CAM_g_stCameraConstants.xCutAngleFactorTgt = 1.0f;
    CAM_g_stCameraConstants.wFlags = 0;
    memcpy(&CAM_g_stCopyCameraConstants, &CAM_g_stCameraConstants, sizeof(CAM_tdstCameraConstants_));
}
#pragma optimize_for_size reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 917–938 */
/* addr: 0x0026e7c0  size: 212 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 917
 *   +0x005c -> line 919
 *   +0x006c -> line 922
 *   +0x0080 -> line 925
 *   +0x0084 -> line 922
 *   +0x0090 -> line 925
 *   +0x00bc -> line 928
 *   +0x00c8 -> line 937
 *   +0x00cc -> line 938
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CS_fn_eGetPrivilegedActivationZone(unsigned char _ucZoneType, tdstCollSet_* _hCollSet, short _wIndex)
{
    unsigned int ulFB;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 889–908 */
/* addr: 0x0026e8a0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 889
 *   +0x0008 -> line 890
 *   +0x005c -> line 891
 *   +0x0088 -> line 894
 *   +0x009c -> line 895
 *   +0x00a4 -> line 897
 *   +0x00b4 -> line 898
 *   +0x00b8 -> line 897
 *   +0x00bc -> line 899
 *   +0x00c4 -> line 901
 *   +0x00d4 -> line 902
 *   +0x00d8 -> line 901
 *   +0x00dc -> line 902
 *   +0x00e0 -> line 907
 *   +0x012c -> line 908
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CS_fn_vSetPrivilegedActivationZone(unsigned char _ucZoneType, tdstCollSet_* _hCollSet, short _wIndex, unsigned char _ePrivilege)
{
    short wDecal;
    unsigned int ulFB;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 845–861 */
/* addr: 0x0026e9e0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 845
 *   +0x0034 -> line 848
 *   +0x003c -> line 851
 *   +0x0044 -> line 854
 *   +0x004c -> line 857
 *   +0x0054 -> line 861
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int CS_fn_ulGetPrivilegedActivationZoneInCollSet(unsigned char _ucZoneType, tdstCollSet_* _hCollSet)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 824–840 */
/* addr: 0x0026ea40  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 824
 *   +0x0034 -> line 827
 *   +0x003c -> line 830
 *   +0x0044 -> line 833
 *   +0x004c -> line 836
 *   +0x0054 -> line 840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstZoneSetList_* fn_hGetCurrentZoneSetOfType(unsigned char _ucZoneType, tdstCollSet_* _hCollSet)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 804–819 */
/* addr: 0x0026eaa0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 804
 *   +0x0034 -> line 808
 *   +0x003c -> line 811
 *   +0x0044 -> line 814
 *   +0x004c -> line 816
 *   +0x0050 -> line 819
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vSetCurrentZoneSetOfType(unsigned char _ucZoneType, tdstCollSet_* _hCollSet, tdstZoneSetList_* _hCurrentZoneSet)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 737–792 */
/* addr: 0x0026eb00  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 737
 *   +0x0020 -> line 738
 *   +0x002c -> line 748
 *   +0x0030 -> line 743
 *   +0x003c -> line 748
 *   +0x0040 -> line 749
 *   +0x0044 -> line 748
 *   +0x0048 -> line 749
 *   +0x0050 -> line 751
 *   +0x005c -> line 753
 *   +0x0068 -> line 755
 *   +0x0074 -> line 757
 *   +0x0080 -> line 759
 *   +0x008c -> line 761
 *   +0x0098 -> line 763
 *   +0x00a4 -> line 766
 *   +0x00c4 -> line 768
 *   +0x00e8 -> line 769
 *   +0x00f0 -> line 792
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCorrectAllActivationLists(tdstEngineObject_* _p_stObject)
{
    int bWarningZdr;
    int bWarningZdm;
    int bWarningZde;
    int bWarningZdd;
    int lNumberOfState;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 729–732 */
/* addr: 0x0026ec20  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 729
 *   +0x0014 -> line 731
 *   +0x003c -> line 732
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucCollSetGetCollComputeFrequencySO(HIE_tdstSuperObject_* hSuperObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 723–724 */
/* addr: 0x0026ec70  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 723
 *   +0x0010 -> line 724
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucCollSetGetCollComputeFrequency(tdstCollSet_* _hCollSet)
{
    int ucFrequency = 1;
    if (_hCollSet != NULL)
        ucFrequency = _hCollSet->ucCollComputeFrequency;
    return ucFrequency;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 718–718 */
/* addr: 0x0026ec90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 718
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCollComputeFrequency(tdstCollSet_* _hCollSet, unsigned char _ucFrequency)
{
    _hCollSet->ucCollComputeFrequency = _ucFrequency;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 708–711 */
/* addr: 0x0026eca0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 708
 *   +0x0014 -> line 710
 *   +0x002c -> line 711
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bGetCharacterForceCollisionWhenNotMoving(HIE_tdstSuperObject_* _hSuperObject)
{
    tdstCollSet_* hCollSet = _hSuperObject != NULL ? _hSuperObject->hLinkedObject.p_stCharacter->h_CollSet : NULL;
    unsigned int bResult = hCollSet != NULL ? hCollSet->ucCollisionFlag & 0x10 : 0;
    return bResult;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 702–704 */
/* addr: 0x0026ece0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 702
 *   +0x0018 -> line 703
 *   +0x0024 -> line 704
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionZdeWithProjectile(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 0x40;
    else
        _hCollSet->ucCollisionFlag &= 0xbf;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 695–697 */
/* addr: 0x0026ed10  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 695
 *   +0x0018 -> line 696
 *   +0x0024 -> line 697
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionWithOtherSectors(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 0x20;
    else
        _hCollSet->ucCollisionFlag &= 0xdf;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 689–691 */
/* addr: 0x0026ed40  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 689
 *   +0x0018 -> line 690
 *   +0x0024 -> line 691
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionWithMainCharacter(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 8;
    else
        _hCollSet->ucCollisionFlag &= 0xf7;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 683–685 */
/* addr: 0x0026ed70  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 683
 *   +0x0018 -> line 684
 *   +0x0024 -> line 685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionWithSecondaryCharacter(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 4;
    else
        _hCollSet->ucCollisionFlag &= 0xfb;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 677–679 */
/* addr: 0x0026eda0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 677
 *   +0x0018 -> line 678
 *   +0x0024 -> line 679
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionWithProjectile(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 2;
    else
        _hCollSet->ucCollisionFlag &= 0xfd;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 671–673 */
/* addr: 0x0026edd0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 671
 *   +0x0018 -> line 672
 *   +0x0024 -> line 673
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetCharacterNoCollisionWithMap(tdstCollSet_* _hCollSet, int _bValue)
{
    if (_bValue != 0)
        _hCollSet->ucCollisionFlag |= 1;
    else
        _hCollSet->ucCollisionFlag &= 0xfe;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 666–667 */
/* addr: 0x0026ee00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 666
 *   +0x0008 -> line 667
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionZdeWithProjectile(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 0x40;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 661–662 */
/* addr: 0x0026ee10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 661
 *   +0x0008 -> line 662
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionWithOtherSectors(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 0x20;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 656–657 */
/* addr: 0x0026ee20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 656
 *   +0x0008 -> line 657
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionWithMainCharacter(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 8;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 644–645 */
/* addr: 0x0026ee30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 644
 *   +0x0008 -> line 645
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 4;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 639–640 */
/* addr: 0x0026ee40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 639
 *   +0x0008 -> line 640
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionWithProjectile(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 2;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 634–635 */
/* addr: 0x0026ee50  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 634
 *   +0x0004 -> line 635
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bCollSetGetCharacterNoCollisionWithMap(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCollisionFlag & 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 625–625 */
/* addr: 0x0026ee60  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 625
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CS_fn_vSetCharacterPriority(tdstCollSet_* hCollSet, unsigned char _ucPriority)
{
    hCollSet->ucCharacterPriority = _ucPriority;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 620–620 */
/* addr: 0x0026ee70  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 620
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CS_fn_ucGetCharacterPriority(tdstCollSet_* _hCollSet)
{
    return _hCollSet->ucCharacterPriority;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 590–593 */
/* addr: 0x0026ee80  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 590
 *   +0x0018 -> line 592
 *   +0x0074 -> line 593
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstCsaList_* CS_fn_hGetActivationList(unsigned char ucZoneType, HIE_tdstSuperObject_* hSuperObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 566–586 */
/* addr: 0x0026ef00  size: 112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 566
 *   +0x0010 -> line 567
 *   +0x0018 -> line 568
 *   +0x0048 -> line 571
 *   +0x0050 -> line 574
 *   +0x0058 -> line 577
 *   +0x0060 -> line 580
 *   +0x0068 -> line 586
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstZdxList_* CS_fn_hGetZdxList(unsigned char ucZoneType, HIE_tdstSuperObject_* hSuperObj)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 559–561 */
/* addr: 0x0026ef70  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 559
 *   +0x0018 -> line 560
 *   +0x0024 -> line 561
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetColliderReal(tdstCollSet_* _hCollSet, short _wIndex, float _xReal)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 553–555 */
/* addr: 0x0026efa0  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 553
 *   +0x0018 -> line 554
 *   +0x0024 -> line 555
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetColliderActor(tdstCollSet_* _hCollSet, short _wIndex, HIE_tdstSuperObject_* _hActor)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 547–549 */
/* addr: 0x0026efd0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 547
 *   +0x0018 -> line 548
 *   +0x0044 -> line 549
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetColliderVector(tdstCollSet_* _hCollSet, short _wIndex, MTH3D_tdstVector_* _p_stVector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 543–543 */
/* addr: 0x0026f020  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 543
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetColliderType(tdstCollSet_* _hCollSet, unsigned char _ucType)
{
    _hCollSet->stColliderInfo.ucColliderType = _ucType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 538–538 */
/* addr: 0x0026f030  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetSetColliderPriority(tdstCollSet_* _hCollSet, unsigned char _ucPri)
{
    _hCollSet->stColliderInfo.ucColliderPriority = _ucPri;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 530–533 */
/* addr: 0x0026f040  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 530
 *   +0x0038 -> line 533
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float fn_xCollSetGetColliderReal(tdstCollSet_* _hCollSet, short _wIndex)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 520–526 */
/* addr: 0x0026f080  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 521
 *   +0x0004 -> line 523
 *   +0x0008 -> line 521
 *   +0x000c -> line 520
 *   +0x0010 -> line 521
 *   +0x001c -> line 523
 *   +0x0020 -> line 521
 *   +0x0024 -> line 523
 *   +0x0070 -> line 526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
MTH3D_tdstVector_ fn_stCollSetGetColliderVector(tdstCollSet_* _hCollSet, short _wIndex)
{
    MTH3D_tdstVector_ stNullVect;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 514–517 */
/* addr: 0x0026f100  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 514
 *   +0x003c -> line 517
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* fn_stCollSetGetColliderActor(tdstCollSet_* _hCollSet, short _wIndex)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 509–509 */
/* addr: 0x0026f150  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucCollSetGetColliderType(tdstCollSet_* _hCollSet)
{
    return _hCollSet->stColliderInfo.ucColliderType;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 503–503 */
/* addr: 0x0026f160  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 503
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_ucCollSetGetColliderPriority(tdstCollSet_* _hCollSet)
{
    return _hCollSet->stColliderInfo.ucColliderPriority;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 490–490 */
/* addr: 0x0026f170  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 490
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetCopyClone(tdstEngineObject_* _p_stObjectDest, tdstEngineObject_* _p_stObjectSrc)
{
    memcpy(_p_stObjectDest->h_CollSet, _p_stObjectSrc->h_CollSet, 0x44);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 454–473 */
/* addr: 0x0026f180  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 454
 *   +0x0010 -> line 455
 *   +0x0018 -> line 456
 *   +0x0044 -> line 458
 *   +0x0050 -> line 459
 *   +0x007c -> line 473
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetDesinit(tdstEngineObject_* p_stObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 408–440 */
/* addr: 0x0026f210  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 408
 *   +0x0014 -> line 409
 *   +0x001c -> line 410
 *   +0x0048 -> line 412
 *   +0x0054 -> line 413
 *   +0x0080 -> line 415
 *   +0x00a4 -> line 422
 *   +0x00c0 -> line 423
 *   +0x00c8 -> line 424
 *   +0x00d0 -> line 425
 *   +0x00d8 -> line 426
 *   +0x00e0 -> line 427
 *   +0x00e4 -> line 430
 *   +0x00ec -> line 433
 *   +0x00f4 -> line 434
 *   +0x00fc -> line 435
 *   +0x0104 -> line 436
 *   +0x010c -> line 437
 *   +0x0114 -> line 440
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetInit(tdstEngineObject_* p_stObject, tdeObjectTreeInit_ eObjectInit)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 382–394 */
/* addr: 0x0026f340  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 382
 *   +0x0010 -> line 383
 *   +0x0018 -> line 384
 *   +0x0044 -> line 386
 *   +0x0050 -> line 387
 *   +0x007c -> line 389
 *   +0x0098 -> line 394
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetFree(tdstEngineObject_* p_stObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 344–368 */
/* addr: 0x0026f3f0  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x0004 -> line 347
 *   +0x0008 -> line 344
 *   +0x000c -> line 347
 *   +0x0014 -> line 349
 *   +0x0018 -> line 365
 *   +0x001c -> line 350
 *   +0x0020 -> line 351
 *   +0x0024 -> line 352
 *   +0x0028 -> line 353
 *   +0x002c -> line 354
 *   +0x0030 -> line 355
 *   +0x0034 -> line 356
 *   +0x0038 -> line 357
 *   +0x003c -> line 359
 *   +0x0040 -> line 361
 *   +0x0044 -> line 362
 *   +0x0048 -> line 363
 *   +0x004c -> line 364
 *   +0x0050 -> line 365
 *   +0x0054 -> line 368
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstCollSet_* fn_h_CollSetRealAlloc(void)
{
    tdstCollSet_* h_CollSet;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Actions\CollSet.c lines 319–330 */
/* addr: 0x0026f450  size: 180 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 319
 *   +0x0010 -> line 320
 *   +0x0018 -> line 321
 *   +0x0044 -> line 323
 *   +0x0050 -> line 324
 *   +0x007c -> line 327
 *   +0x0088 -> line 329
 *   +0x00a4 -> line 330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vCollSetAlloc(tdstEngineObject_* p_stObject)
{
    /* TODO: decompile from asm/... */
}
