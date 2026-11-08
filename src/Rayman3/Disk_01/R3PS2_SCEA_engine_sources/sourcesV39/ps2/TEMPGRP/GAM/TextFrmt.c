/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\TextFrmt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/COL.h"
#include "r3/FIL.h"
#include "r3/GEO.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/WP.h"

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

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct stTfmtLineResults_ {
    short wStartChar; /* +0x0 */
    short wEndChar; /* +0x2 */
    MTH3D_tdstVector_ stLineOrigin; /* +0x4 */
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

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
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

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct tdstCouple_ {
    unsigned short wChild; /* +0x0 */
    unsigned short wFather; /* +0x2 */
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

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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

void* memset(void* dst, int c, size_t n);

tdstObjectsTablesList_* fn_hGetObjectsTableOfFamilyByIndex(tdstFamilyList_* hFamily, short xIndex);
unsigned short fn_uwGetObjectTableNumberOfelements(tdstObjectsTablesList_* hTargetTable);
int fn_ucToTableElement(int n);

char* strtok(char* szString, const char* szDelim);
long atol(const char* szString);
int atoi(const char* szString);

int TFMT_lProcessFormater(stTfmtStatus_* p_stStatus, char* szString, unsigned char* p_bLineBreak, unsigned char* p_bStartLine);
char* TFMT_pszReadNextChar(stTfmtStatus_* p_stStatus, HIE_tdstSuperObject_* hSuperObjPerso, char* pszCurrentChar, unsigned char* p_ucReturnedChar, unsigned char* p_bLineBreak);

/* R5900 min.s/max.s; MWCC compiles the C comparison as compare-and-branch.
   The result stays in the register of the first operand, which is also the
   register the retail code uses for the updated value. */
inline float MTH_M_xMax(float _xA, float _xB)
{
    float _xResult;
    asm { max.s _xResult, _xA, _xB }
    return _xResult;
}

tdstAnim3d_* fn_p_stGetAnimInState(tdstState_* h_State)
{
    /* tdstState_ is still opaque; the target reads its first pointer field. */
    return *(tdstAnim3d_**)h_State;
}

void TFMT_vUpdateScaleTable(char* szText)
{
    char* szCur;
    int i;

    szCur = strtok(szText, ":");
    TFMT_ga_fLetterScale[0] = (float)atol(szCur) / 1000.0f;
    i = 1;
    while (szCur != NULL && i < 256)
    {
        szCur = strtok(NULL, ":");
        if (szCur != NULL)
        {
            TFMT_ga_fLetterScale[i] = (float)atol(szCur) / 1000.0f; i++;
            szCur[-1] = ':';
        }
    }
    TFMT_ga_ulNbScale = i;
}

void TFMT_vUpdateSpacingTable(char* szText)
{
    char* szCur;
    int i;

    szCur = strtok(szText, ":");
    TFMT_ga_fLetterSpacing[0] = (float)atol(szCur) / 1000.0f;
    i = 1;
    while (szCur != NULL && i < 256)
    {
        szCur = strtok(NULL, ":");
        if (szCur != NULL)
        {
            TFMT_ga_fLetterSpacing[i] = (float)atol(szCur) / 1000.0f; i++;
            szCur[-1] = ':';
        }
    }
}

void TFMT_ucClearNumberOfCurrentTextAffiche(HIE_tdstSuperObject_* p_SuperObjPersoTreated)
{
    unsigned char i;

    for (i = 0; i < 30; i++)
    {
        if ((int)p_SuperObjPersoTreated == gp_SuperObjPersoGenerated[i])
        {
            g_bFreeTextAfficheBlocs[i] = 1;
            gp_SuperObjPersoGenerated[i] = 0;
            memset(&g_stInfoTextAffiche[i], 0, sizeof(stInfoTextAffiche_));
            g_stInfoTextAffiche[i].bFirstInit = 1;
            break;
        }
    }
}

unsigned char TFMT_ucSetNumber4CurrentTextAffiche(void)
{
    unsigned char i;

    for (i = 0; i < 30; i++)
    {
        if (g_bFreeTextAfficheBlocs[i])
        {
            g_bFreeTextAfficheBlocs[i] = 0;
            break;
        }
    }
    return i;
}

unsigned char TFMT_ucNumberOfCurrentTextAffiche(HIE_tdstSuperObject_* p_SuperObjPersoTreated)
{
    unsigned char i;

    for (i = 0; i < 30; i++)
    {
        if ((int)p_SuperObjPersoTreated == gp_SuperObjPersoGenerated[i])
            return i;
    }
    return i;
}

void* memset(void* dst, int c, size_t n);

void TFMT_vInitTextAfficheStructure(void)
{
    int iCpt;

    for (iCpt = 0; iCpt < 30; iCpt++)
    {
        memset(&g_stInfoTextAffiche[iCpt], 0, sizeof(stInfoTextAffiche_));
        g_stInfoTextAffiche[iCpt].bFirstInit = 1;
        g_bFreeTextAfficheBlocs[iCpt] = 1;
        gp_SuperObjPersoGenerated[iCpt] = 0;
    }
}

void TFMT_vChangeLetter(HIE_tdstSuperObject_* hSuperObjPerso, unsigned char ucPosLetter, unsigned char ucLetter)
{
    tdst3dData_* h_Current3dData;
    tdstAChannel_* hChannelArray;
    tdstAChannel_* p_stChannel;
    tdstObjectsTableElement_* d_stCurrentObjectsTable;
    short wSourceObject;
    short wNbObjectsInSourceTable;
    unsigned char ucTemp;
    h_Current3dData = hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData;
    d_stCurrentObjectsTable = h_Current3dData->h_CurrentObjectsTable->d_stObjectsTable;
    hChannelArray = h_Current3dData->hArrayOfChannels;
    wNbObjectsInSourceTable = (short)fn_uwGetObjectTableNumberOfelements(fn_hGetObjectsTableOfFamilyByIndex(h_Current3dData->h_Family, 0));
    if (ucLetter < 32)
    {
        wSourceObject = -1;
    }
    else
    {
        ucTemp = fn_ucToTableElement(ucLetter);
        wSourceObject = (short)(ucTemp + OffsetObjectTable);
    }
    if (wSourceObject >= 0 && wSourceObject < wNbObjectsInSourceTable)
    {
        p_stChannel = &hChannelArray[ucPosLetter];
        p_stChannel->hSupObject->ulTypeOfLinkedObject = d_stCurrentObjectsTable[wSourceObject].h_Target ? 8 : 1;
        p_stChannel->hSupObject->hLinkedObject.p_Void = d_stCurrentObjectsTable[wSourceObject].h_Target;
    }
}

unsigned int RND_fn_hReserveANewHandleIndex(void);
void fn_vInitCSOList(tdstAChannel_** p_hChannelArray, unsigned int ulNumberOfChannels);
size_t strlen(const char* szString);
/* The recovered debug signature lists ten parameters, but both the caller
   (a1 = the perso super-object, text in a2, three stack arguments) and the
   callee (a1 never read, text taken from a2) show eleven. */
char* TFMT_pszReadNextChar2(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszCurrentChar, unsigned char* _p_ucReturnedChar, unsigned char* _p_bLineBreak, int bDisplayFullString, short* wCurrentChar, unsigned int* ulEvent, unsigned int** ulDelay, short* wCurrentChar4Channels, unsigned short* p_uwIndexOfChar);
void fn_vImplementChannelUpdate(HIE_tdstSuperObject_* _hSuperObjPerso, short _wCurrentChar4Channels, short _wSourceObject, float _xBaseCharX, float _xBaseCharZ, float _xCurCharWidth, float _xRandomPosRadius, float _xCurCharZoom);

/* Shared by both TFMT_wPositionModulesAccordingToText variants: retail
   attributes the whole block to the one source line of the call. */
inline void TFMT_vInitStatus(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, float _xScreenWidth)
{
    OffsetObjectTable = 0;
    if (gs_hRandomHandleForTFMT == (unsigned int)-1)
        gs_hRandomHandleForTFMT = RND_fn_hReserveANewHandleIndex();

    _p_stStatus->xScreenWidth = _xScreenWidth;
    _p_stStatus->xBaseCharZ = 0.0f;
    _p_stStatus->xBaseCharX = 0.0f;
    _p_stStatus->xBaseToAddX = 0.0f;
    _p_stStatus->xCharWidth = g_stDefaultValuesForCharacter.m_xCharWidth;
    _p_stStatus->xLineHeight = g_stDefaultValuesForCharacter.m_xLineHeight;
    _p_stStatus->xCharZoom = g_stDefaultValuesForCharacter.m_xCharZoom;
    _p_stStatus->xCurCharZoom = 0.0f;
    _p_stStatus->cJustificationMode = 'l';
    _p_stStatus->hSourceObjectTable = fn_hGetObjectsTableOfFamilyByIndex(_hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData->h_Family, 0);
    _p_stStatus->xRandomPosRadius = 0.0f;
}

unsigned int TFMT_wPositionModulesAccordingToText2(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszText, int _lStart, int _lEnd, unsigned char* bFirstTimeZ, short* pwCurrentChar, unsigned int* ulDelay)
{
    tdst3dData_* h_Current3dData;
    short wCurrentChar;
    short wCurrentChar4Channels;
    unsigned short uwLenOfString;
    unsigned short uwIndexOfChar;
    unsigned int ulEvent;
    int bDisplayFullString;
    char* pszEndText;
    unsigned char bLineBreak;
    unsigned char ucChar;
    short wSourceObject;
    short wNbObjectsInSourceTable;
    unsigned char ucTemp;

    wCurrentChar = 0;
    uwLenOfString = 0;
    wCurrentChar4Channels = 0;
    bDisplayFullString = 0;
    ulEvent = 0;

    _lEnd = (_lEnd >= 0) ? _lEnd : strlen(_pszText);

    pszEndText = _pszText + _lEnd;
    if (*bFirstTimeZ == 1)
        uwLenOfString = strlen(_pszText);

    wCurrentChar = *pwCurrentChar;
    if (wCurrentChar == -1)
    {
        bDisplayFullString = 1;
        wCurrentChar = 0;
    }

    _pszText += _lStart;
    uwIndexOfChar = _lStart;

    TFMT_vInitStatus(_p_stStatus, _hSuperObjPerso, 0.0f);

    h_Current3dData = _hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData;

    while (_pszText < pszEndText && *_pszText)
    {
        while (_pszText < pszEndText)
        {
            _pszText = TFMT_pszReadNextChar2(_p_stStatus, _hSuperObjPerso, _pszText, &ucChar, &bLineBreak, bDisplayFullString, &wCurrentChar, &ulEvent, &ulDelay, &wCurrentChar4Channels, &uwIndexOfChar);

            wNbObjectsInSourceTable = fn_uwGetObjectTableNumberOfelements(_p_stStatus->hSourceObjectTable);
            if (ucChar < 32)
            {
                wSourceObject = -1;
            }
            else
            {
                ucTemp = fn_ucToTableElement(ucChar);
                wSourceObject = (short)(ucTemp + OffsetObjectTable);
            }

            if (wSourceObject < 0 || wSourceObject >= wNbObjectsInSourceTable)
            {
                *pwCurrentChar = wCurrentChar;
                return ulEvent;
            }

            if (*bFirstTimeZ == 1)
            {
                tdstAChannel_* hChannelArray;

                h_Current3dData->ulNumberOfChannels = uwLenOfString;
                fn_vInitCSOList(&hChannelArray, uwLenOfString);
                h_Current3dData->hArrayOfChannels = hChannelArray;
                h_Current3dData->hFirstActiveChannel = hChannelArray;
                *bFirstTimeZ = 0;
            }

            fn_vImplementChannelUpdate(_hSuperObjPerso, wCurrentChar4Channels, wSourceObject, _p_stStatus->xBaseCharX, _p_stStatus->xBaseCharZ, _p_stStatus->xCurCharWidth, _p_stStatus->xRandomPosRadius, _p_stStatus->xCurCharZoom);

            wCurrentChar4Channels++;
            *pwCurrentChar = ++wCurrentChar;
        }
    }

    return ulEvent;
}

HIE_tdstSuperObject_* PLA_fn_hFindNextFreeSupObj(void);
void MAT_fn_vSetIdentity(MAT_tdstTransformation_* p_stMatrix);
void MAT_fn_vSetScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale);
float RND_fn_xGetRealRandomValue(unsigned int _lIndexNumber, float _xMin, float _xMax);

inline float MTH_xAbs(float _x) { float _r; asm { abs.s _r, _x } return _r; }

/* Word view of a vector: retail copies the components with lw/sw. */
typedef union { MTH3D_tdstVector_ v; int i[3]; } tduTfmtV;
inline void TFMT_vSetTranslation(MAT_tdstTransformation_* _hMatrix, tduTfmtV* _p_stVector)
{
    int* p_lDst;

    if (_hMatrix->eType == 1)
    {
        _hMatrix->eType = 2;
    }
    p_lDst = (int*)&_hMatrix->stTransformMatrix.stCol_3;
    p_lDst[0] = _p_stVector->i[0];
    p_lDst[1] = _p_stVector->i[1];
    p_lDst[2] = _p_stVector->i[2];
    _hMatrix->stTransformMatrix.stCol_3.xW = 1.0f;
}

void fn_vImplementChannelUpdate(HIE_tdstSuperObject_* _hSuperObjPerso, short _wCurrentChar4Channels, short _wSourceObject, float _xBaseCharX, float _xBaseCharZ, float _xCurCharWidth, float _xRandomPosRadius, float _xCurCharZoom)
{
    tdstAChannel_* p_stChannel;
    tdst3dData_* h_Current3dData;
    tdstObjectsTableElement_* d_stCurrentObjectsTable;
    tdstAChannel_* hChannelArray;
    HIE_tdstSuperObject_* p_stSO_Child;
    MTH3D_tdstVector_ stTransformation;

    h_Current3dData = _hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData;
    d_stCurrentObjectsTable = h_Current3dData->h_CurrentObjectsTable->d_stObjectsTable;
    hChannelArray = h_Current3dData->hArrayOfChannels;

    p_stSO_Child = PLA_fn_hFindNextFreeSupObj();

    if (p_stSO_Child->hNextBrotherDyn) p_stSO_Child->hNextBrotherDyn->hPrevBrotherDyn = p_stSO_Child->hPrevBrotherDyn; if (p_stSO_Child->hPrevBrotherDyn) p_stSO_Child->hPrevBrotherDyn->hNextBrotherDyn = p_stSO_Child->hNextBrotherDyn; if (p_stSO_Child->hFatherDyn) { p_stSO_Child->hFatherDyn->lNumberOfElementsDyn--; if (p_stSO_Child->hFatherDyn->hFirstElementDyn == p_stSO_Child) p_stSO_Child->hFatherDyn->hFirstElementDyn = p_stSO_Child->hNextBrotherDyn; if (p_stSO_Child->hFatherDyn->hLastElementDyn == p_stSO_Child) p_stSO_Child->hFatherDyn->hLastElementDyn = p_stSO_Child->hPrevBrotherDyn; } p_stSO_Child->hNextBrotherDyn = NULL; p_stSO_Child->hPrevBrotherDyn = NULL; p_stSO_Child->hFatherDyn = NULL; p_stSO_Child->hNextBrotherDyn = NULL; p_stSO_Child->hPrevBrotherDyn = _hSuperObjPerso->hLastElementDyn; p_stSO_Child->hFatherDyn = _hSuperObjPerso; if (!_hSuperObjPerso->hFirstElementDyn) { _hSuperObjPerso->hFirstElementDyn = p_stSO_Child; } else { _hSuperObjPerso->hLastElementDyn->hNextBrotherDyn = p_stSO_Child; } _hSuperObjPerso->hLastElementDyn = p_stSO_Child; _hSuperObjPerso->lNumberOfElementsDyn++;

    p_stChannel = &hChannelArray[_wCurrentChar4Channels];

    p_stChannel->bControlledChannel = 1;

    MAT_fn_vSetIdentity(p_stSO_Child->hLocalMatrix);

    p_stChannel->hSupObject = p_stSO_Child;

    p_stSO_Child->ulTypeOfLinkedObject = d_stCurrentObjectsTable[_wSourceObject].h_Target ? 8 : 1; p_stSO_Child->hLinkedObject.p_stPhysicalObject = (PO_tdstPhysicalObject_*)d_stCurrentObjectsTable[_wSourceObject].h_Target;
    p_stSO_Child->fTransparenceLevel = 255.0f;

    if (_wCurrentChar4Channels)
    {
        hChannelArray[_wCurrentChar4Channels - 1].p_stNextActiveChannel = p_stChannel;
    }

    if (p_stSO_Child)
    {
        MAT_tdstTransformation_* hMatrix = p_stSO_Child->hLocalMatrix;

        stTransformation.xX = _xBaseCharX + RND_fn_xGetRealRandomValue(gs_hRandomHandleForTFMT, -_xRandomPosRadius, _xRandomPosRadius) + 0.5f * _xCurCharWidth;
        stTransformation.xY = 0.0f;
        /* Not original source, needs cleaning up: the self-assignment stops MWCC
           reusing -_xRandomPosRadius across the call; retail negates it again. */
        _xRandomPosRadius = _xRandomPosRadius;
        stTransformation.xZ = _xBaseCharZ + RND_fn_xGetRealRandomValue(gs_hRandomHandleForTFMT, -_xRandomPosRadius, _xRandomPosRadius);

        TFMT_vSetTranslation(hMatrix, (tduTfmtV*)&stTransformation);

        if (MTH_xAbs(_xCurCharZoom - 1.0f) > 0.0001f)
        {
            stTransformation.xX = _xCurCharZoom;
            stTransformation.xY = _xCurCharZoom;
            stTransformation.xZ = _xCurCharZoom;
            MAT_fn_vSetScale(hMatrix, &stTransformation);
        }
    }
}

char* TFMT_pszReadNextChar2(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszCurrentChar, unsigned char* _p_ucReturnedChar, unsigned char* _p_bLineBreak, int bDisplayFullString, short* wCurrentChar, unsigned int* ulEvent, unsigned int** ulDelay, short* wCurrentChar4Channels, unsigned short* p_uwIndexOfChar)
{
    unsigned char ucChar;
    unsigned short uwLenString;
    int lNbChar;
    float xPrevZoom;
    /* Not original source, needs cleaning up: permuter-found temporary that
       gives retail's xWidth/xPrevWidth register assignment. */
    stTfmtStatus_* p_stStatus;
    float xPrevWidth;
    float xZoom;
    float xWidth;
    unsigned char bStartLine;
    int i;
    unsigned char ucTemp;

    lNbChar = 0;
    xPrevWidth = 0.0f;
    xWidth = 0.0f;
    xZoom = 0.0f;
    xPrevZoom = 0.0f;
    *_p_bLineBreak = 0;

    if (!bDisplayFullString)
    {
        bStartLine = 1;
        i = 0;
        uwLenString = strlen(_pszCurrentChar);
        ucChar = _pszCurrentChar[*wCurrentChar];

        if (*ulEvent)
        {
            if (ucChar == '/')
            {
                /* Retail tests the slash itself plus one, not the next character. */
                if ((unsigned char)(_pszCurrentChar[*wCurrentChar] + 1) == 'E' || (unsigned char)(_pszCurrentChar[*wCurrentChar] + 1) == 'e')
                {
                    (*wCurrentChar)++;
                    *ulEvent = atoi(_pszCurrentChar + ++(*wCurrentChar));
                    while (_pszCurrentChar[(*wCurrentChar)++] != ':')
                        ;
                }
                else
                {
                    *ulEvent = 0;
                }
            }
            else
            {
                *ulEvent = 0;
            }
            *_p_ucReturnedChar = 0;
            _pszCurrentChar += uwLenString;
            return _pszCurrentChar;
        }

        while (ucChar == '/')
        {
            ucChar = _pszCurrentChar[++(*wCurrentChar)];

            if (ucChar == 'E' || ucChar == 'e')
            {
                *ulEvent = atoi(_pszCurrentChar + ++(*wCurrentChar));
                while (_pszCurrentChar[(*wCurrentChar)++] != ':')
                    ;
                *_p_ucReturnedChar = 0;
                _pszCurrentChar += uwLenString;
                return _pszCurrentChar;
            }

            if (ucChar == 'D' || ucChar == 'd' || ucChar == 'P' || ucChar == 'p')
            {
                **ulDelay = atoi(_pszCurrentChar + ++(*wCurrentChar));
                if (ucChar == 'P' || ucChar == 'p')
                    **ulDelay = -**ulDelay;
                while (_pszCurrentChar[(*wCurrentChar)++] != ':')
                    ;
                *_p_ucReturnedChar = 0;
                _pszCurrentChar += uwLenString;
                return _pszCurrentChar;
            }

            while (_pszCurrentChar[(*wCurrentChar)++] != ':')
                ;
            ucChar = _pszCurrentChar[*wCurrentChar];
        }

        *wCurrentChar4Channels = -1;

        for (; i <= *wCurrentChar; i++)
        {
            ucChar = _pszCurrentChar[i];
            if (ucChar == '/')
            {
                i += TFMT_lProcessFormater(_p_stStatus, _pszCurrentChar + i + 1, _p_bLineBreak, &bStartLine);
                continue;
            }

            xZoom = _p_stStatus->xCharZoom;
            if (xZoom == 0.0f)
            {
                if (TFMT_ga_ulNbScale)
                    xZoom = TFMT_ga_fLetterScale[lNbChar % TFMT_ga_ulNbScale];
                else
                    xZoom = 1.0f;
            }
            _p_stStatus->xCurCharZoom = xZoom;

            if (_p_stStatus->xCharWidth)
            {
                xWidth = (p_stStatus = _p_stStatus)->xCharWidth;
            }
            else
            {
                ucTemp = fn_ucToTableElement(ucChar);
                xWidth = TFMT_ga_fLetterSpacing[ucTemp];
            }

            (*wCurrentChar4Channels)++;
            if (!bStartLine)
                _p_stStatus->xBaseToAddX += xPrevZoom * xPrevWidth;
            else
                bStartLine = 0;

            lNbChar++;
            xPrevZoom = xZoom;
            xPrevWidth = xWidth;
        }

        _p_stStatus->xCurCharWidth = xZoom * xWidth;
        _p_stStatus->xBaseCharX += _p_stStatus->xBaseToAddX;
    }
    else
    {
        bStartLine = 0;
        uwLenString = strlen(_pszCurrentChar);
        lNbChar = *p_uwIndexOfChar;

        while (*_pszCurrentChar++ == '/')
            _pszCurrentChar += TFMT_lProcessFormater(_p_stStatus, _pszCurrentChar, _p_bLineBreak, &bStartLine);
        ucChar = _pszCurrentChar[-1];

        xZoom = _p_stStatus->xCharZoom;
        if (xZoom == 0.0f)
        {
            if (TFMT_ga_ulNbScale)
                xZoom = TFMT_ga_fLetterScale[lNbChar % TFMT_ga_ulNbScale];
            else
                xZoom = 1.0f;
        }
        _p_stStatus->xCurCharZoom = xZoom;

        if (!bStartLine)
            _p_stStatus->xBaseCharX += _p_stStatus->xBaseToAddX;
        else
            bStartLine = 0;

        if (_p_stStatus->xCharWidth)
        {
            _p_stStatus->xBaseToAddX = xZoom * _p_stStatus->xCharWidth;
        }
        else
        {
            ucTemp = fn_ucToTableElement(ucChar);
            _p_stStatus->xBaseToAddX = xZoom * TFMT_ga_fLetterSpacing[ucTemp];
        }

        _p_stStatus->xCurCharWidth = _p_stStatus->xBaseToAddX;
        lNbChar++;
    }

    *_p_ucReturnedChar = ucChar;
    if (!bDisplayFullString)
        _pszCurrentChar += uwLenString;
    *p_uwIndexOfChar = lNbChar;
    return _pszCurrentChar;
}

void TEXT_vComputeLengthOgString(char* p_szString, stTfmtStatus_* p_stStatus)
{
    int lNbChar;
    float xZoom;
    float xMaxScreenWidth;
    unsigned char bLineBreak;
    unsigned char bStartLine;
    unsigned char ucTemp;
    char cChar;

    xMaxScreenWidth = 0.0f;
    lNbChar = 0;
    bLineBreak = 0;
    bStartLine = 0;
    while ((cChar = *p_szString) != 0)
    {
        if (cChar == '/')
        {
            p_szString++;
            p_szString += TFMT_lProcessFormater(p_stStatus, p_szString, &bLineBreak, &bStartLine);
            if (bLineBreak)
            {
                xMaxScreenWidth = MTH_M_xMax(xMaxScreenWidth, p_stStatus->xScreenWidth);
                p_stStatus->xScreenWidth = 0.0f;
                bLineBreak = 0;
            }
        }
        else
        {
            xZoom = p_stStatus->xCharZoom;
            if (xZoom == 0.0f)
            {
                if (TFMT_ga_ulNbScale != 0)
                {
                    xZoom = TFMT_ga_fLetterScale[lNbChar % TFMT_ga_ulNbScale];
                }
                else
                {
                    xZoom = 1.0f;
                }
            }
            lNbChar++;
            if (p_stStatus->xCharWidth)
            {
                p_stStatus->xScreenWidth += xZoom * p_stStatus->xCharWidth;
            }
            else
            {
                ucTemp = fn_ucToTableElement(cChar);
                p_stStatus->xScreenWidth += xZoom * TFMT_ga_fLetterSpacing[ucTemp];
            }
            p_szString++;
        }
    }
    p_stStatus->xScreenWidth = MTH_M_xMax(p_stStatus->xScreenWidth, xMaxScreenWidth);
}

int TFMT_lProcessFormater(stTfmtStatus_* p_stStatus, char* szString, unsigned char* p_bLineBreak, unsigned char* p_bStartLine)
{
    int iRet;
    char* szCur;
    char cJustification;

    szCur = szString;
    iRet = 1;
    switch (*szCur++)
    {
        case 'C':
        case 'c':
            cJustification = 'c';
            p_stStatus->cJustificationMode = cJustification;
            break;
        case 'H':
        case 'h':
            p_stStatus->xLineHeight = (float)atoi(szCur) / 1000.0f;
            break;
        case 'L':
        case 'l':
            *p_bLineBreak = 1;
            *p_bStartLine = 1;
            p_stStatus->xBaseToAddX = 0.0f;
            p_stStatus->xBaseCharX = 0.0f;
            p_stStatus->xBaseCharZ -= p_stStatus->xLineHeight;
            break;
        case 'W':
        case 'w':
            p_stStatus->xCharWidth = (float)atoi(szCur) / 1000.0f;
            break;
        case 'Z':
        case 'z':
            p_stStatus->xCharZoom = (float)atoi(szCur) / 1000.0f;
            break;
        case 'o':
        case 'O':
            OffsetObjectTable = atoi(szCur);
            break;
        default:
            cJustification = 'c';
            break;
    }
    while (*szCur != ':')
    {
        szCur++;
        iRet++;
    }
    return ++iRet;
}

void fn_vCopyObjectFromObjectTabletoAnother(tdstObjectsTablesList_* _hTargetTable, tdstObjectsTablesList_* _hSourceTable, unsigned short _uwTargetObject, unsigned short _uwSourceObject);
unsigned short TFMT_uwGetNbCharsFillingALine(stTfmtStatus_* p_stStatus, HIE_tdstSuperObject_* hSuperObjPerso, char* pszText, float* p_xActualWidth);

inline HIE_tdstSuperObject_* fn_hGetChannelSuperObject(tdst3dData_* h_3dData, unsigned short uwChannel)
{
    tdstAChannel_* a_hArrayOfChannels = h_3dData->hArrayOfChannels;
    return a_hArrayOfChannels ? a_hArrayOfChannels[uwChannel].hSupObject : NULL;
}

short TFMT_wPositionModulesAccordingToText(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszText, int _lStart, int _lEnd, float _xScreenWidth, stTfmtLineResults_* _d_stLineResults, short _wNbLines)
{
    float xJustificationShift;
    short wNbCharsInCurrentLine;
    short wCurrentChar;
    short wCurrentLine;
    short wNbObjectsInTargetTable;
    char* pszInitText;
    char* pszEndText;
    short wSourceObject;
    short wNbObjectsInSourceTable;
    unsigned char ucTemp;
    MTH3D_tdstVector_ stTransformation;
    unsigned char ucChar;
    unsigned char bLineBreak;
    /* Not in the debug locals: retail loads the target table once and keeps it
       in a saved register for every copy below. */
    tdstObjectsTablesList_* hTargetObjectsTable;

    wCurrentLine = 0;
    wCurrentChar = 0;
    hTargetObjectsTable = _hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData->h_CurrentObjectsTable;
    wNbObjectsInTargetTable = fn_uwGetObjectTableNumberOfelements(hTargetObjectsTable);
    pszInitText = _pszText;

    _lEnd = (_lEnd >= 0) ? _lEnd : strlen(_pszText);

    pszEndText = _pszText + _lEnd;
    _pszText += _lStart;

    TFMT_vInitStatus(_p_stStatus, _hSuperObjPerso, _xScreenWidth);

    while (_pszText < pszEndText && *_pszText)
    {
        wNbCharsInCurrentLine = TFMT_uwGetNbCharsFillingALine(_p_stStatus, _hSuperObjPerso, _pszText, &xJustificationShift);

        switch (_p_stStatus->cJustificationMode)
        {
            case 'r':
                xJustificationShift = _p_stStatus->xScreenWidth - xJustificationShift;
                break;

            case 'c':
                xJustificationShift = (_p_stStatus->xScreenWidth - xJustificationShift) / 2.0f;
                break;

            default:
                xJustificationShift = 0.0f;
                break;
        }

        if (_d_stLineResults && _wNbLines >= 0)
            _d_stLineResults[wCurrentLine].wStartChar = _pszText - pszInitText;

        while (wNbCharsInCurrentLine-- && _pszText < pszEndText)
        {
            _pszText = TFMT_pszReadNextChar(_p_stStatus, _hSuperObjPerso, _pszText, &ucChar, &bLineBreak);
            if (!_d_stLineResults)
            {
                if (ucChar < 32)
                {
                    wSourceObject = -1;
                }
                else
                {
                    ucTemp = fn_ucToTableElement(ucChar);
                    wSourceObject = (short)(ucTemp + OffsetObjectTable);
                }

                wNbObjectsInSourceTable = fn_uwGetObjectTableNumberOfelements(_p_stStatus->hSourceObjectTable);
                if (wSourceObject >= 0 && wSourceObject < wNbObjectsInSourceTable)
                {
                    HIE_tdstSuperObject_* hChild;

                    fn_vCopyObjectFromObjectTabletoAnother(hTargetObjectsTable, _p_stStatus->hSourceObjectTable, wCurrentChar, wSourceObject);

                    hChild = fn_hGetChannelSuperObject(_hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData, wCurrentChar);
                    if (hChild)
                    {
                        MAT_tdstTransformation_* hMatrix = hChild->hLocalMatrix;

                        stTransformation.xX = xJustificationShift + (_p_stStatus->xBaseCharX + RND_fn_xGetRealRandomValue(gs_hRandomHandleForTFMT, -_p_stStatus->xRandomPosRadius, _p_stStatus->xRandomPosRadius));
                        stTransformation.xY = 0.0f;
                        stTransformation.xZ = _p_stStatus->xBaseCharZ + RND_fn_xGetRealRandomValue(gs_hRandomHandleForTFMT, -_p_stStatus->xRandomPosRadius, _p_stStatus->xRandomPosRadius);

                        TFMT_vSetTranslation(hMatrix, (tduTfmtV*)&stTransformation);

                        if (MTH_xAbs(_p_stStatus->xCharZoom - 1.0f) > 0.0001f)
                        {
                            stTransformation.xX = _p_stStatus->xCharZoom;
                            stTransformation.xY = _p_stStatus->xCharZoom;
                            stTransformation.xZ = _p_stStatus->xCharZoom;
                            MAT_fn_vSetScale(hMatrix, &stTransformation);
                        }
                    }
                }
            }
            wCurrentChar++;
        }

        if (_d_stLineResults && _wNbLines >= 0)
        {
            _d_stLineResults[wCurrentLine].wEndChar = _pszText - pszInitText;
            _d_stLineResults[wCurrentLine].stLineOrigin.xX = xJustificationShift;
            _d_stLineResults[wCurrentLine].stLineOrigin.xY = 0.0f;
            _d_stLineResults[wCurrentLine].stLineOrigin.xZ = _p_stStatus->xBaseCharZ;
        }

        if (_pszText < pszEndText)
        {
            if (*_pszText == '/')
            {
                unsigned char bFormatLineBreak;
                unsigned char ucFormatChar;

                do
                {
                    _pszText = TFMT_pszReadNextChar(_p_stStatus, _hSuperObjPerso, _pszText, &ucFormatChar, &bFormatLineBreak);
                } while (!bFormatLineBreak);
            }
            else
            {
                _p_stStatus->xBaseCharZ -= _p_stStatus->xLineHeight;
                _p_stStatus->xBaseToAddX = 0.0f;
                _p_stStatus->xBaseCharX = 0.0f;
            }
        }

        _wNbLines--;
        wCurrentLine++;
    }

    while (wCurrentChar < wNbObjectsInTargetTable)
    {
        fn_vCopyObjectFromObjectTabletoAnother(hTargetObjectsTable, _p_stStatus->hSourceObjectTable, wCurrentChar, 0);
        wCurrentChar++;
    }

    return wCurrentLine;
}

unsigned short TFMT_uwGetNbCharsFillingALine(stTfmtStatus_* p_stStatus, HIE_tdstSuperObject_* hSuperObjPerso, char* pszText, float* p_xActualWidth)
{
    stTfmtStatus_ stTfmtStatusSave;
    unsigned char ucCurrentChar;
    short wCharIndex;
    unsigned char bLineBreak;
    {
        float xCurrentWidth;
        float xScreenWidth;
        float xNewWidth;

        wCharIndex = 0;

        xScreenWidth = p_stStatus->xScreenWidth; xCurrentWidth = 0.0f;

        stTfmtStatusSave = *p_stStatus;

        if (xScreenWidth < 0.0f)
            xScreenWidth = 1000.0f;

        do
        {
            pszText = TFMT_pszReadNextChar(p_stStatus, hSuperObjPerso, pszText, &ucCurrentChar, &bLineBreak);
            if (!bLineBreak)
            {
                xNewWidth = xCurrentWidth + p_stStatus->xCharWidth;
                if (xNewWidth < xScreenWidth)
                {
                    xCurrentWidth = xNewWidth;
                    wCharIndex++;
                }
                else
                {
                    bLineBreak = 1;
                }
            }
        } while (!bLineBreak);

        *p_stStatus = stTfmtStatusSave;
        *p_xActualWidth = xCurrentWidth;
    }
    return (unsigned short)wCharIndex;
}

inline tdstFamilyList_* fn_h3dDataGetFamily(tdst3dData_* h_3dData) { return h_3dData->h_Family; }

void RDN_fn_vSetRandomSeed(unsigned int _lIndexNumber, int _lSeed);

char* TFMT_pszReadNextChar(stTfmtStatus_* _p_stStatus, HIE_tdstSuperObject_* _hSuperObjPerso, char* _pszCurrentChar, unsigned char* _p_ucReturnedChar, unsigned char* _p_bLineBreak)
{
    unsigned char ucChar;
    int lValue;
    float xZoom;
    unsigned char ucTemp;

    *_p_bLineBreak = 0;
    if (_pszCurrentChar != NULL && (ucChar = *_pszCurrentChar++) != 0)
    {
        while (ucChar == '/')
        {
            switch (*_pszCurrentChar)
            {
                case 'L':
                case 'l':
                    *_p_bLineBreak = 1;
                    _p_stStatus->xBaseToAddX = 0.0f;
                    _p_stStatus->xBaseCharX = 0.0f;
                    _p_stStatus->xBaseCharZ -= _p_stStatus->xLineHeight;
                    break;

                case 'Z':
                case 'z':
                    _pszCurrentChar++;
                    _p_stStatus->xCharZoom = (float)atoi(_pszCurrentChar) / 1000.0f;
                    break;

                case 'W':
                case 'w':
                    _pszCurrentChar++;
                    _p_stStatus->xCharWidth = _p_stStatus->xCharZoom * ((float)atoi(_pszCurrentChar) / 1000.0f);
                    break;

                case 'H':
                case 'h':
                    _pszCurrentChar++;
                    _p_stStatus->xLineHeight = _p_stStatus->xCharZoom * ((float)atoi(_pszCurrentChar) / 1000.0f);
                    break;

                case 'C':
                case 'c':
                    _pszCurrentChar++;
                    _p_stStatus->hSourceObjectTable = fn_hGetObjectsTableOfFamilyByIndex(fn_h3dDataGetFamily(_hSuperObjPerso->hLinkedObject.p_stCharacter->h_3dData), (short)atoi(_pszCurrentChar));
                    break;

                case 'o':
                case 'O':
                    _pszCurrentChar++;
                    OffsetObjectTable = atoi(_pszCurrentChar);
                    break;

                case 'J':
                case 'j':
                    _pszCurrentChar++;
                    _p_stStatus->cJustificationMode = *_pszCurrentChar;
                    break;

                case 'R':
                case 'r':
                    _pszCurrentChar++;
                    lValue = atoi(_pszCurrentChar);
                    _p_stStatus->xRandomPosRadius = (float)lValue / 1000.0f;
                    RDN_fn_vSetRandomSeed(gs_hRandomHandleForTFMT, lValue);
                    break;

                case '/':
                    _pszCurrentChar++;
                    break;

                case ':':
                    _pszCurrentChar++;
                    break;
            }

            do
            {
                _pszCurrentChar++;
            } while (*_pszCurrentChar != ':');
            _pszCurrentChar++;

            ucChar = *_pszCurrentChar;
            if (!*_p_bLineBreak)
                _pszCurrentChar++;
        }

        if (_p_stStatus->xBaseCharX == 0.0f && ucChar == ' ')
        {
            do
            {
                ucChar = *_pszCurrentChar++;
            } while (ucChar == ' ');
        }

        _p_stStatus->xBaseCharX += _p_stStatus->xBaseToAddX;

        if (!*_p_bLineBreak)
        {
            if (_p_stStatus->xCharWidth)
            {
                _p_stStatus->xBaseToAddX = _p_stStatus->xCharWidth;
            }
            else
            {
                xZoom = _p_stStatus->xCharZoom;
                if (xZoom == 0.0f)
                {
                    if (TFMT_ga_ulNbScale)
                        xZoom = TFMT_ga_fLetterScale[0];
                    else
                        xZoom = 1.0f;
                }
                ucTemp = fn_ucToTableElement(ucChar);
                _p_stStatus->xBaseToAddX = xZoom * TFMT_ga_fLetterSpacing[ucTemp];
            }
        }
    }
    else
    {
        *_p_bLineBreak = 1;
        *_p_ucReturnedChar = 0;
        return NULL;
    }

    *_p_ucReturnedChar = ucChar;
    return _pszCurrentChar;
}

void TFMT_vSetDefaultValuesCharacter(float _xCharWidth, float _xLineHeight, float _xCharZoom)
{
    int i;

    g_stDefaultValuesForCharacter.m_xCharWidth = 0.0f;
    if (_xLineHeight >= 0.0f)
        g_stDefaultValuesForCharacter.m_xLineHeight = _xLineHeight;
    if (_xCharZoom >= 0.0f)
        g_stDefaultValuesForCharacter.m_xCharZoom = _xCharZoom;

    for (i = 0; i < 256; i++)
        TFMT_ga_fLetterSpacing[i] = _xCharWidth;
}
