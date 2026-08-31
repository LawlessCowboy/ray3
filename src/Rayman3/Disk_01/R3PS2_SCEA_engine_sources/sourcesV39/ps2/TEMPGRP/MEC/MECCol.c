/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstPLA_Deformation_ tdstPLA_Deformation_;
typedef struct tdstSubAnim_ tdstSubAnim_;
typedef struct stInterpolatedPosition stInterpolatedPosition;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn;
typedef struct tdstPLA_DeformationLink_ tdstPLA_DeformationLink_;
typedef struct tdstSubAnimInUse_ tdstSubAnimInUse_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn;
typedef struct CINE_tdstCineActor_ CINE_tdstCineActor_;
typedef struct SECT_tdstListOfSOCharacters_ SECT_tdstListOfSOCharacters_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn LST2_tdstAnchorToSECT_tdxHandleOfElementLstDNMLightsDyn;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct tdstPLA_Hierarchy_ tdstPLA_Hierarchy_;
typedef struct tdstFrame3d_ tdstFrame3d_;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn LST2_tdstAnchorTotdxHandleToSubAnimInUseDyn;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct tdstBrain_ tdstBrain_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct tdstAChannel_ tdstAChannel_;
typedef struct DNM_stMecReport DNM_stMecReport;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt;
typedef struct SECT_tdstListOfStaticLights_ SECT_tdstListOfStaticLights_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct stMorphData stMorphData;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt;
typedef struct SECT_tdstListOfSOSectorsInSoundInteraction_ SECT_tdstListOfSOSectorsInSoundInteraction_;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstGraphicInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstCollisionInteractionOpt;
typedef struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt LST2_tdstAnchorToSECT_tdxHandleOfElementLstActivityInteractionOpt;
typedef struct LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt LST2_tdstAnchorToSCT_tdxHandleOfLstSoundEventOpt;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct LST2_tdstAnchorTotdxHandleToStateOpt LST2_tdstAnchorTotdxHandleToStateOpt;
typedef struct LST2_tdstAnchorTotdxHandleToSubAnimOpt LST2_tdstAnchorTotdxHandleToSubAnimOpt;
typedef struct LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt LST2_tdstAnchorTotdxHandleToObjectsTablesListOpt;
typedef struct tdstFamilyList_ tdstFamilyList_;
typedef struct tdstElement3d_ tdstElement3d_;
typedef struct SECT_tdstListOfSOSectorsInActivityInteraction_ SECT_tdstListOfSOSectorsInActivityInteraction_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef struct tdstMorphChannelList_ tdstMorphChannelList_;
typedef struct SECT_tdstListOfSOSectorsInCollisionInteraction_ SECT_tdstListOfSOSectorsInCollisionInteraction_;
typedef struct tdstEventInTable_ tdstEventInTable_;
typedef struct tdstCouple_ tdstCouple_;
typedef struct tdstEvent_ tdstEvent_;
typedef struct SECT_tdstListOfSOSectorsInGraphicInteraction_ SECT_tdstListOfSOSectorsInGraphicInteraction_;
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn LST2_tdstAnchorToCINE_tdxHandleToCineActorDyn;
typedef struct CINE_tdstCine_ CINE_tdstCine_;
typedef struct CINE_tdstChannelLink_ CINE_tdstChannelLink_;
typedef struct tdstLipsSynchValue_ tdstLipsSynchValue_;
typedef struct LST2_tdstAnchorTotdxHandleToFamilyListDyn LST2_tdstAnchorTotdxHandleToFamilyListDyn;
typedef struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn LST2_tdstAnchorToCINE_tdxHandleToCineDyn;

typedef enum anon_enum_00bcf890 {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00bcf890;

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
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

struct DNM_stMecMatCharacteristics {
    float m_xSlide; /* +0x0 */
    float m_xRebound; /* +0x4 */
};

struct DNM_stMecObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
    anon_enum_00bcf890 m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
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
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct tdstPLA_Deformation_ {
    unsigned int ulNbOfDeformationLinks; /* +0x0 */
    tdstPLA_DeformationLink_* d_stDeformationLinks; /* +0x4 */
};

struct tdstSubAnim_ {
    tdstAnim3d_* p_stSubAnim; /* +0x0 */
};

struct stInterpolatedPosition {
    float stRot[4]; /* +0x0 */
    float stRotSca[4]; /* +0x10 */
    MTH3D_tdstVector_ stPos; /* +0x20 */
    MTH3D_tdstVector_ stVecSca; /* +0x2c */
    float xPercent; /* +0x38 */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn {
    SECT_tdstListOfSOCharacters_* hFirstElementDyn; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstPLA_DeformationLink_ {
    unsigned short wChannel1; /* +0x0 */
    unsigned short wBorder1; /* +0x2 */
    unsigned short wChannel2; /* +0x4 */
    unsigned short wBorder2; /* +0x6 */
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

struct SECT_tdstListOfSOCharacters_ {
    HIE_tdstSuperObject_* hPointerOfCharacter; /* +0x0 */
    SECT_tdstListOfSOCharacters_* hNextBrotherDyn; /* +0x4 */
    SECT_tdstListOfSOCharacters_* hPrevBrotherDyn; /* +0x8 */
    LST2_tdstAnchorToSECT_tdxHandleOfElementLstCharacterDyn* hFatherDyn; /* +0xc */
};

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct tdstBrain_ {
    AI_tdstMind_* p_stMind; /* +0x0 */
    GMT_tdstGameMaterial_* hLastCollidedGoThroughMaterial; /* +0x4 */
    unsigned char bWarnMechanicsFlag; /* +0x8 */
    unsigned char bActiveDuringTransition; /* +0x9 */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct DNM_stMecReport {
    unsigned int m_ulCurrSurfaceState; /* +0x0 */
    DNM_stMecObstacle m_stObstacle; /* +0x4 */
    DNM_stMecObstacle m_stGround; /* +0x6c */
    DNM_stMecObstacle m_stWall; /* +0xd4 */
    DNM_stMecObstacle m_stCharacter; /* +0x13c */
    DNM_stMecObstacle m_stWater; /* +0x1a4 */
    DNM_stMecObstacle m_stCeil; /* +0x20c */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstStaticLightsOpt {
    SECT_tdstListOfStaticLights_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfStaticLights_ {
    GLI_tdstLight_* hStaticLights; /* +0x0 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct stMorphData {
    unsigned short uwChannelNumber; /* +0x0 */
    unsigned short uwFrameNumber; /* +0x2 */
    unsigned char ucNbTarget; /* +0x4 */
    unsigned char ucAlign[3]; /* +0x5 */
    short a_xIndexTargetMT[10]; /* +0x8 */
    unsigned char a_ucMorphingAmountMT[10]; /* +0x1c */
};

struct LST2_tdstAnchorToSECT_tdxHandleOfElementLstSoundInteractionOpt {
    SECT_tdstListOfSOSectorsInSoundInteraction_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct SECT_tdstListOfSOSectorsInSoundInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    int lVolume; /* +0x4 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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

struct tdstElement3d_ {
    unsigned short wElement : 15; /* bit 0, byte +0x0 */
    unsigned short bf1ActiveStatus : 1; /* bit 15, byte +0x0 */
    unsigned char ucChannelNumber; /* +0x2 */
    unsigned char eTypeOfElement; /* +0x3 */
    unsigned char ucTransparency; /* +0x4 */
    unsigned char ucAnimLevel; /* +0x5 */
};

struct SECT_tdstListOfSOSectorsInActivityInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
};

struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn {
    tdstMorphChannelList_* hFirstElementDyn; /* +0x0 */
    tdstMorphChannelList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct tdstMorphChannelList_ {
    tdstMorphChannelList_* hNextBrotherDyn; /* +0x0 */
    tdstMorphChannelList_* hPrevBrotherDyn; /* +0x4 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hFatherDyn; /* +0x8 */
    unsigned short uwChannelNumber; /* +0xc */
    short MorphListIndex; /* +0xe */
};

struct SECT_tdstListOfSOSectorsInCollisionInteraction_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
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

struct SCT_tdstListOfSoundEvent_ {
    HIE_tdstSuperObject_* hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
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

struct CINE_tdstChannelLink_ {
    HIE_tdstSuperObject_* hSPOLinked; /* +0x0 */
    int lIndexOfChannel; /* +0x4 */
    CINE_tdstChannelLink_* hNextBrotherDyn; /* +0x8 */
    CINE_tdstChannelLink_* hPrevBrotherDyn; /* +0xc */
    LST2_tdstAnchorToCINE_tdxHandleToChannelLinkDyn* hFatherDyn; /* +0x10 */
};

struct tdstLipsSynchValue_ {
    char cCode; /* +0x0 */
    float xX; /* +0x4 */
    float xY; /* +0x8 */
    float xZ; /* +0xc */
};

struct LST2_tdstAnchorTotdxHandleToFamilyListDyn {
    tdstFamilyList_* hFirstElementDyn; /* +0x0 */
    tdstFamilyList_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

struct LST2_tdstAnchorToCINE_tdxHandleToCineDyn {
    CINE_tdstCine_* hFirstElementDyn; /* +0x0 */
    CINE_tdstCine_* hLastElementDyn; /* +0x4 */
    int lNumberOfElementsDyn; /* +0x8 */
};

int g_a_stObstacle;
float g_xZWater;
int lZWaterValidity;
unsigned char MEC_bSoftActorCollision;
int g_NbTrameSinceLastCanFall;
MTH3D_tdstVector_ g_stPersoMoveForCollision;
DNM_stMecReport g_stReport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 63–466 */
/* addr: 0x0030b810  size: 5980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 63
 *   +0x0004 -> line 90
 *   +0x0008 -> line 63
 *   +0x0060 -> line 102
 *   +0x0068 -> line 90
 *   +0x006c -> line 106
 *   +0x0074 -> line 104
 *   +0x0078 -> line 102
 *   +0x0080 -> line 104
 *   +0x0084 -> line 106
 *   +0x0088 -> line 105
 *   +0x008c -> line 64
 *   +0x0090 -> line 105
 *   +0x0094 -> line 106
 *   +0x0098 -> line 91
 *   +0x009c -> line 106
 *   +0x00a0 -> line 98
 *   +0x00a4 -> line 106
 *   +0x00b4 -> line 107
 *   +0x00b8 -> line 111
 *   +0x00bc -> line 118
 *   +0x00c0 -> line 114
 *   +0x00c4 -> line 115
 *   +0x00d0 -> line 112
 *   +0x00d4 -> line 107
 *   +0x00dc -> line 118
 *   +0x00e0 -> line 108
 *   +0x00e4 -> line 118
 *   +0x00e8 -> line 120
 *   +0x00ec -> line 108
 *   +0x00f0 -> line 120
 *   +0x00fc -> line 122
 *   +0x0108 -> line 126
 *   +0x011c -> line 128
 *   +0x0130 -> line 130
 *   +0x0134 -> line 131
 *   +0x014c -> line 133
 *   +0x0154 -> line 135
 *   +0x016c -> line 136
 *   +0x0174 -> line 140
 *   +0x0190 -> line 143
 *   +0x0198 -> line 146
 *   +0x01b0 -> line 145
 *   +0x01b4 -> line 146
 *   +0x01c4 -> line 148
 *   +0x01d4 -> line 149
 *   +0x01e0 -> line 151
 *   +0x01f8 -> line 154
 *   +0x020c -> line 156
 *   +0x021c -> line 157
 *   +0x0224 -> line 159
 *   +0x0240 -> line 161
 *   +0x0248 -> line 163
 *   +0x0254 -> line 168
 *   +0x0258 -> line 163
 *   +0x025c -> line 168
 *   +0x0270 -> line 163
 *   +0x027c -> line 165
 *   +0x0280 -> line 163
 *   +0x0284 -> line 165
 *   +0x0288 -> line 163
 *   +0x028c -> line 165
 *   +0x0290 -> line 166
 *   +0x0294 -> line 165
 *   +0x02a0 -> line 166
 *   +0x02d8 -> line 168
 *   +0x02ec -> line 170
 *   +0x02fc -> line 171
 *   +0x0308 -> line 173
 *   +0x0320 -> line 176
 *   +0x035c -> line 177
 *   +0x0388 -> line 178
 *   +0x0390 -> line 180
 *   +0x03c0 -> line 183
 *   +0x04c8 -> line 184
 *   +0x04d0 -> line 190
 *   +0x04e8 -> line 192
 *   +0x04f4 -> line 195
 *   +0x0508 -> line 197
 *   +0x0518 -> line 198
 *   +0x051c -> line 199
 *   +0x0520 -> line 198
 *   +0x0524 -> line 200
 *   +0x0538 -> line 201
 *   +0x0540 -> line 204
 *   +0x0548 -> line 207
 *   +0x055c -> line 209
 *   +0x05d4 -> line 213
 *   +0x05e4 -> line 215
 *   +0x05e8 -> line 216
 *   +0x05ec -> line 218
 *   +0x05f0 -> line 216
 *   +0x05f4 -> line 219
 *   +0x0614 -> line 220
 *   +0x0618 -> line 222
 *   +0x0640 -> line 227
 *   +0x0658 -> line 229
 *   +0x0668 -> line 230
 *   +0x067c -> line 231
 *   +0x0684 -> line 236
 *   +0x0688 -> line 235
 *   +0x068c -> line 236
 *   +0x0698 -> line 240
 *   +0x06ac -> line 242
 *   +0x06b0 -> line 243
 *   +0x06b4 -> line 245
 *   +0x06b8 -> line 243
 *   +0x06bc -> line 246
 *   +0x06d8 -> line 249
 *   +0x06e8 -> line 252
 *   +0x06fc -> line 254
 *   +0x0770 -> line 256
 *   +0x077c -> line 257
 *   +0x0780 -> line 260
 *   +0x07a4 -> line 261
 *   +0x07ac -> line 263
 *   +0x07bc -> line 265
 *   +0x07c4 -> line 268
 *   +0x07e4 -> line 269
 *   +0x07e8 -> line 271
 *   +0x07fc -> line 272
 *   +0x0800 -> line 274
 *   +0x0814 -> line 278
 *   +0x0834 -> line 279
 *   +0x083c -> line 283
 *   +0x0848 -> line 286
 *   +0x085c -> line 287
 *   +0x0894 -> line 288
 *   +0x08a8 -> line 290
 *   +0x08ec -> line 291
 *   +0x0954 -> line 293
 *   +0x0958 -> line 295
 *   +0x09a8 -> line 298
 *   +0x09d4 -> line 301
 *   +0x09e8 -> line 303
 *   +0x0a18 -> line 304
 *   +0x0a48 -> line 305
 *   +0x0b18 -> line 306
 *   +0x0b3c -> line 307
 *   +0x0b4c -> line 309
 *   +0x0b50 -> line 310
 *   +0x0b54 -> line 312
 *   +0x0b58 -> line 310
 *   +0x0b5c -> line 313
 *   +0x0b70 -> line 317
 *   +0x0b80 -> line 318
 *   +0x0b8c -> line 321
 *   +0x0ba0 -> line 324
 *   +0x0bb8 -> line 318
 *   +0x0bbc -> line 325
 *   +0x0bd0 -> line 324
 *   +0x0bd4 -> line 325
 *   +0x0be0 -> line 326
 *   +0x0c18 -> line 327
 *   +0x0c1c -> line 326
 *   +0x0c20 -> line 327
 *   +0x0c30 -> line 330
 *   +0x0c58 -> line 331
 *   +0x0c68 -> line 334
 *   +0x0c74 -> line 335
 *   +0x0ca0 -> line 336
 *   +0x0cb0 -> line 341
 *   +0x0cb4 -> line 340
 *   +0x0cb8 -> line 341
 *   +0x0cbc -> line 336
 *   +0x0cc0 -> line 341
 *   +0x0cd0 -> line 336
 *   +0x0cd4 -> line 340
 *   +0x0cd8 -> line 341
 *   +0x0ce4 -> line 340
 *   +0x0ce8 -> line 342
 *   +0x0d00 -> line 343
 *   +0x0d0c -> line 344
 *   +0x0d60 -> line 345
 *   +0x0e04 -> line 353
 *   +0x0e44 -> line 359
 *   +0x0e54 -> line 361
 *   +0x0e68 -> line 362
 *   +0x0e90 -> line 364
 *   +0x0eac -> line 367
 *   +0x0eb4 -> line 368
 *   +0x0ebc -> line 376
 *   +0x0ec0 -> line 377
 *   +0x0ec8 -> line 376
 *   +0x0ed8 -> line 377
 *   +0x0f80 -> line 378
 *   +0x102c -> line 380
 *   +0x1044 -> line 381
 *   +0x105c -> line 382
 *   +0x1074 -> line 384
 *   +0x1078 -> line 386
 *   +0x1084 -> line 388
 *   +0x1098 -> line 390
 *   +0x109c -> line 388
 *   +0x10a0 -> line 390
 *   +0x10b4 -> line 399
 *   +0x10b8 -> line 397
 *   +0x10bc -> line 399
 *   +0x10d0 -> line 402
 *   +0x10ec -> line 403
 *   +0x10f0 -> line 406
 *   +0x1198 -> line 407
 *   +0x11b4 -> line 409
 *   +0x11f0 -> line 411
 *   +0x120c -> line 414
 *   +0x1238 -> line 416
 *   +0x123c -> line 417
 *   +0x1244 -> line 416
 *   +0x1248 -> line 424
 *   +0x126c -> line 426
 *   +0x1284 -> line 428
 *   +0x12b8 -> line 430
 *   +0x1310 -> line 431
 *   +0x1340 -> line 434
 *   +0x134c -> line 436
 *   +0x1364 -> line 437
 *   +0x1368 -> line 436
 *   +0x136c -> line 438
 *   +0x140c -> line 440
 *   +0x146c -> line 441
 *   +0x1490 -> line 446
 *   +0x14c8 -> line 448
 *   +0x14e0 -> line 449
 *   +0x14ec -> line 448
 *   +0x14f8 -> line 449
 *   +0x1504 -> line 451
 *   +0x1578 -> line 453
 *   +0x15c4 -> line 454
 *   +0x15cc -> line 457
 *   +0x161c -> line 460
 *   +0x1670 -> line 462
 *   +0x1674 -> line 460
 *   +0x1698 -> line 462
 *   +0x16fc -> line 464
 *   +0x1708 -> line 466
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vCollideBaseMechanic(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, int lObstacle, DNM_stMecObstacle* a_stObstacle, float xDT)
{
    float xNorm;
    float xNorm;
    MTH3D_tdstVector_ VectTmp;
    MTH3D_tdstVector_ VectTmp;
    float xV;
    MTH3D_tdstVector_ stN;
    MTH3D_tdstVector_ stV;
    MTH3D_tdstVector_ stU;
    float xZRate;
    float xNorm;
    float xNorm;
    int lWaterObstacle;
    int lGroundObstacle;
    int lObstacleCounter;
    int lCounter;
    DNM_stMecObstacle* p_stMobileObstacle;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    DNM_stMecObstacle* p_stObstacle;
    MTH3D_tdstVector_ stVerticalVector;
    HIE_tdstSuperObject_* hSupObjCol;
    unsigned char bWaterBlock;
    float xDotProdMax;
    float xRebound;
    float xSlide;
    unsigned char bOnlyEdge;
    unsigned char bGroundObstacle;
    unsigned char bWallObstacle;
    float xOneMinusRate;
    float xRate;
    MTH3D_tdstVector_* p_stNormal;
    MTH3D_tdstVector_ stNormalVector;
    MTH3D_tdstVector_ stAdjustVector;
    MTH3D_tdstVector_ stExtremPosition;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stPosition;
    MAT_tdstTransformation_* hAbsolutePreviousMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 1105–1144 */
/* addr: 0x0030cf70  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1105
 *   +0x0004 -> line 1112
 *   +0x0008 -> line 1105
 *   +0x000c -> line 1112
 *   +0x0010 -> line 1105
 *   +0x0028 -> line 1115
 *   +0x002c -> line 1105
 *   +0x0030 -> line 1110
 *   +0x0034 -> line 1105
 *   +0x0038 -> line 1114
 *   +0x003c -> line 1112
 *   +0x0040 -> line 1111
 *   +0x0044 -> line 1115
 *   +0x0048 -> line 1112
 *   +0x0050 -> line 1115
 *   +0x0058 -> line 1117
 *   +0x006c -> line 1119
 *   +0x0088 -> line 1120
 *   +0x0090 -> line 1122
 *   +0x00ac -> line 1123
 *   +0x00b0 -> line 1126
 *   +0x00c0 -> line 1128
 *   +0x00d0 -> line 1129
 *   +0x00d8 -> line 1131
 *   +0x0118 -> line 1143
 *   +0x012c -> line 1144
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vCrashAnalysis(DNM_stDynamics* p_stDynamic, int lObstacle, DNM_stMecObstacle* p_stObstacle)
{
    DNM_stMecObstacle* p_stCeilObstacle;
    DNM_stMecObstacle* p_stGroundObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 923–1095 */
/* addr: 0x0030d0c0  size: 2452 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 923
 *   +0x0008 -> line 932
 *   +0x000c -> line 923
 *   +0x0018 -> line 927
 *   +0x001c -> line 923
 *   +0x0044 -> line 929
 *   +0x0048 -> line 932
 *   +0x004c -> line 928
 *   +0x0050 -> line 932
 *   +0x005c -> line 933
 *   +0x006c -> line 935
 *   +0x0074 -> line 939
 *   +0x0080 -> line 941
 *   +0x00a4 -> line 943
 *   +0x00cc -> line 944
 *   +0x00d8 -> line 947
 *   +0x00e0 -> line 949
 *   +0x0100 -> line 952
 *   +0x0108 -> line 953
 *   +0x0110 -> line 958
 *   +0x0138 -> line 962
 *   +0x0150 -> line 968
 *   +0x0154 -> line 974
 *   +0x015c -> line 968
 *   +0x0170 -> line 973
 *   +0x01a8 -> line 974
 *   +0x01e0 -> line 975
 *   +0x0250 -> line 978
 *   +0x025c -> line 983
 *   +0x0278 -> line 987
 *   +0x0288 -> line 989
 *   +0x02b0 -> line 991
 *   +0x02b4 -> line 992
 *   +0x02b8 -> line 991
 *   +0x02bc -> line 992
 *   +0x02c0 -> line 991
 *   +0x02c4 -> line 992
 *   +0x02c8 -> line 991
 *   +0x02d4 -> line 992
 *   +0x02d8 -> line 991
 *   +0x02e0 -> line 992
 *   +0x035c -> line 995
 *   +0x0368 -> line 998
 *   +0x0370 -> line 1002
 *   +0x0384 -> line 1005
 *   +0x0388 -> line 1006
 *   +0x038c -> line 1005
 *   +0x0390 -> line 1006
 *   +0x0394 -> line 1005
 *   +0x0398 -> line 1006
 *   +0x039c -> line 1005
 *   +0x03a8 -> line 1006
 *   +0x03ac -> line 1005
 *   +0x03b4 -> line 1006
 *   +0x0434 -> line 1008
 *   +0x0454 -> line 1010
 *   +0x0478 -> line 1011
 *   +0x0498 -> line 1017
 *   +0x04c0 -> line 1019
 *   +0x04e0 -> line 1023
 *   +0x04e4 -> line 1026
 *   +0x04f0 -> line 1028
 *   +0x0518 -> line 1031
 *   +0x0530 -> line 1032
 *   +0x0534 -> line 1031
 *   +0x0538 -> line 1032
 *   +0x0540 -> line 1031
 *   +0x0548 -> line 1032
 *   +0x0554 -> line 1033
 *   +0x056c -> line 1037
 *   +0x0584 -> line 1038
 *   +0x05a4 -> line 1044
 *   +0x05a8 -> line 1045
 *   +0x05b8 -> line 1047
 *   +0x05c4 -> line 1051
 *   +0x05d0 -> line 1054
 *   +0x05d4 -> line 1056
 *   +0x05d8 -> line 1054
 *   +0x05dc -> line 1056
 *   +0x05e4 -> line 1054
 *   +0x0614 -> line 1056
 *   +0x06ac -> line 1059
 *   +0x071c -> line 1061
 *   +0x0750 -> line 1063
 *   +0x0768 -> line 1069
 *   +0x07c4 -> line 1075
 *   +0x07c8 -> line 1079
 *   +0x07cc -> line 1075
 *   +0x07d8 -> line 1076
 *   +0x07dc -> line 1079
 *   +0x07f0 -> line 1082
 *   +0x07f4 -> line 1085
 *   +0x0800 -> line 1083
 *   +0x0808 -> line 1085
 *   +0x0898 -> line 1087
 *   +0x0908 -> line 1088
 *   +0x0930 -> line 1089
 *   +0x0938 -> line 1091
 *   +0x094c -> line 1092
 *   +0x0964 -> line 1095
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vEdgeAnalysis(DNM_stDynamics* p_stDynamic, int lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stMecObstacle* p_stGround)
{
    float xNorm;
    float R;
    float xNorm;
    float xNorm;
    int lGround;
    unsigned char bNotGround;
    DNM_stMecObstacle* p_stNotGround;
    DNM_stMecObstacle* p_stTmpObstacle;
    MTH3D_tdstVector_ stVector1;
    MTH3D_tdstVector_ stEdgeVector;
    MTH3D_tdstVector_ stContact;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 799–919 */
/* addr: 0x0030da60  size: 1824 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 799
 *   +0x0004 -> line 821
 *   +0x0008 -> line 799
 *   +0x000c -> line 821
 *   +0x0010 -> line 799
 *   +0x0028 -> line 802
 *   +0x002c -> line 799
 *   +0x0048 -> line 819
 *   +0x0054 -> line 807
 *   +0x005c -> line 821
 *   +0x0064 -> line 823
 *   +0x006c -> line 824
 *   +0x00f4 -> line 825
 *   +0x00fc -> line 826
 *   +0x0118 -> line 828
 *   +0x0128 -> line 830
 *   +0x012c -> line 832
 *   +0x0138 -> line 834
 *   +0x0140 -> line 836
 *   +0x0150 -> line 841
 *   +0x0154 -> line 842
 *   +0x0160 -> line 844
 *   +0x0168 -> line 845
 *   +0x0180 -> line 846
 *   +0x01b0 -> line 849
 *   +0x01e8 -> line 851
 *   +0x0274 -> line 853
 *   +0x027c -> line 856
 *   +0x0280 -> line 857
 *   +0x0288 -> line 856
 *   +0x028c -> line 858
 *   +0x0290 -> line 856
 *   +0x0294 -> line 858
 *   +0x0298 -> line 857
 *   +0x029c -> line 858
 *   +0x02a0 -> line 856
 *   +0x02b4 -> line 857
 *   +0x02d8 -> line 858
 *   +0x03f0 -> line 859
 *   +0x0408 -> line 861
 *   +0x042c -> line 868
 *   +0x0444 -> line 870
 *   +0x0478 -> line 874
 *   +0x04a8 -> line 875
 *   +0x04b0 -> line 878
 *   +0x04c4 -> line 880
 *   +0x04d0 -> line 883
 *   +0x04d8 -> line 884
 *   +0x04e0 -> line 888
 *   +0x0518 -> line 891
 *   +0x0520 -> line 894
 *   +0x0524 -> line 896
 *   +0x0528 -> line 897
 *   +0x052c -> line 896
 *   +0x0534 -> line 894
 *   +0x0548 -> line 896
 *   +0x0568 -> line 901
 *   +0x0570 -> line 902
 *   +0x0574 -> line 903
 *   +0x0578 -> line 902
 *   +0x057c -> line 904
 *   +0x0598 -> line 905
 *   +0x05a8 -> line 909
 *   +0x05b4 -> line 911
 *   +0x0640 -> line 912
 *   +0x0664 -> line 913
 *   +0x067c -> line 914
 *   +0x06a4 -> line 915
 *   +0x06e0 -> line 918
 *   +0x06e4 -> line 919
 *   +0x06f8 -> line 918
 *   +0x06fc -> line 919
 *   +0x0700 -> line 918
 *   +0x0704 -> line 919
 *   +0x070c -> line 918
 *   +0x0710 -> line 919
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_vComputeAdjustVector(MTH3D_tdstVector_* p_stAdjustVector, int lObstacle, DNM_stMecObstacle* p_stObstacle, int lObstacleMin)
{
    float xNorm;
    float xNorm;
    HIE_tdstSuperObject_* hTmp;
    MTH3D_tdstVector_ stAdjustAxis;
    MTH3D_tdstVector_ stVector;
    DNM_stMecObstacle* p_stWaterObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    unsigned char bConflict;
    unsigned char bContinue;
    unsigned char bAdjustVector;
    anon_enum_00bcf890 xObstacleType;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 505–545 */
/* addr: 0x0030e180  size: 352 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 505
 *   +0x0004 -> line 508
 *   +0x0008 -> line 505
 *   +0x0010 -> line 508
 *   +0x0024 -> line 509
 *   +0x0030 -> line 511
 *   +0x0034 -> line 513
 *   +0x0048 -> line 515
 *   +0x0060 -> line 517
 *   +0x0064 -> line 518
 *   +0x0074 -> line 517
 *   +0x0078 -> line 518
 *   +0x0080 -> line 521
 *   +0x0094 -> line 523
 *   +0x0098 -> line 524
 *   +0x00a8 -> line 523
 *   +0x00ac -> line 524
 *   +0x00b4 -> line 527
 *   +0x00c8 -> line 529
 *   +0x00cc -> line 530
 *   +0x00dc -> line 529
 *   +0x00e0 -> line 530
 *   +0x00e8 -> line 533
 *   +0x00fc -> line 535
 *   +0x0100 -> line 536
 *   +0x0110 -> line 535
 *   +0x0114 -> line 536
 *   +0x011c -> line 539
 *   +0x0130 -> line 541
 *   +0x0134 -> line 542
 *   +0x0144 -> line 541
 *   +0x0148 -> line 542
 *   +0x0150 -> line 545
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vFillCollisionReport(DNM_stDynamics* p_stDynamic)
{
    DNM_stReport* p_stReport;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 298–494 */
/* addr: 0x0030e2e0  size: 1432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 298
 *   +0x0004 -> line 325
 *   +0x0008 -> line 298
 *   +0x0014 -> line 318
 *   +0x0018 -> line 298
 *   +0x001c -> line 319
 *   +0x0020 -> line 298
 *   +0x0024 -> line 311
 *   +0x0028 -> line 298
 *   +0x0040 -> line 327
 *   +0x0044 -> line 298
 *   +0x004c -> line 325
 *   +0x0060 -> line 305
 *   +0x0064 -> line 307
 *   +0x0068 -> line 308
 *   +0x006c -> line 309
 *   +0x0070 -> line 310
 *   +0x0074 -> line 312
 *   +0x0078 -> line 314
 *   +0x007c -> line 315
 *   +0x0080 -> line 316
 *   +0x0084 -> line 327
 *   +0x008c -> line 329
 *   +0x0094 -> line 331
 *   +0x00a8 -> line 335
 *   +0x00c8 -> line 338
 *   +0x00d0 -> line 337
 *   +0x00d4 -> line 338
 *   +0x00e0 -> line 343
 *   +0x00e4 -> line 338
 *   +0x00e8 -> line 343
 *   +0x00f0 -> line 345
 *   +0x0104 -> line 346
 *   +0x010c -> line 347
 *   +0x0110 -> line 348
 *   +0x0118 -> line 349
 *   +0x012c -> line 351
 *   +0x013c -> line 352
 *   +0x0140 -> line 357
 *   +0x0160 -> line 363
 *   +0x0168 -> line 365
 *   +0x0178 -> line 366
 *   +0x017c -> line 368
 *   +0x0188 -> line 369
 *   +0x0198 -> line 371
 *   +0x01a8 -> line 372
 *   +0x01ac -> line 374
 *   +0x01b0 -> line 377
 *   +0x021c -> line 391
 *   +0x0228 -> line 393
 *   +0x0238 -> line 395
 *   +0x023c -> line 394
 *   +0x0240 -> line 396
 *   +0x0248 -> line 397
 *   +0x0258 -> line 399
 *   +0x0268 -> line 402
 *   +0x0270 -> line 407
 *   +0x0294 -> line 409
 *   +0x02a8 -> line 411
 *   +0x02d0 -> line 416
 *   +0x02e4 -> line 417
 *   +0x02e8 -> line 421
 *   +0x02f4 -> line 423
 *   +0x0304 -> line 424
 *   +0x030c -> line 425
 *   +0x0310 -> line 426
 *   +0x0318 -> line 427
 *   +0x032c -> line 429
 *   +0x033c -> line 432
 *   +0x0348 -> line 434
 *   +0x035c -> line 437
 *   +0x0368 -> line 439
 *   +0x0378 -> line 440
 *   +0x0380 -> line 441
 *   +0x0384 -> line 442
 *   +0x0390 -> line 443
 *   +0x03a4 -> line 445
 *   +0x03b4 -> line 448
 *   +0x03c0 -> line 452
 *   +0x03cc -> line 454
 *   +0x03dc -> line 455
 *   +0x03e4 -> line 456
 *   +0x03e8 -> line 457
 *   +0x03f0 -> line 458
 *   +0x0404 -> line 460
 *   +0x0414 -> line 465
 *   +0x0420 -> line 466
 *   +0x042c -> line 468
 *   +0x0450 -> line 470
 *   +0x0458 -> line 473
 *   +0x045c -> line 472
 *   +0x0464 -> line 473
 *   +0x046c -> line 472
 *   +0x0474 -> line 473
 *   +0x047c -> line 476
 *   +0x0488 -> line 477
 *   +0x0498 -> line 479
 *   +0x04a4 -> line 482
 *   +0x04a8 -> line 481
 *   +0x04b8 -> line 482
 *   +0x04f0 -> line 485
 *   +0x04fc -> line 488
 *   +0x0500 -> line 487
 *   +0x0510 -> line 488
 *   +0x0548 -> line 491
 *   +0x0554 -> line 492
 *   +0x0564 -> line 494
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vReportCollision(DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* hSupObj, int lNbObstacle, DNM_stMecObstacle* a_stObstacle, int lObstacle)
{
    unsigned char bWaterEdge;
    unsigned char bActorEdge;
    unsigned char bGroundEdge;
    unsigned char bWallEdge;
    unsigned char bCeilEdge;
    unsigned char bObstacleEdge;
    unsigned char bWater;
    unsigned char bActor;
    unsigned char bGround;
    unsigned char bWall;
    unsigned char bCeil;
    unsigned char bObstacle;
    unsigned char bStop;
    int lCounter;
    DNM_stMecObstacle* p_stTmpObstacle;
    MTH3D_tdstVector_* p_stNormalVector;
    float xCurrentRate;
    float xPreviousRate;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECCol.c lines 256–285 */
/* addr: 0x0030e880  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 256
 *   +0x0014 -> line 262
 *   +0x0018 -> line 264
 *   +0x0020 -> line 265
 *   +0x0028 -> line 267
 *   +0x0030 -> line 268
 *   +0x0038 -> line 271
 *   +0x0050 -> line 274
 *   +0x0060 -> line 277
 *   +0x0064 -> line 278
 *   +0x0068 -> line 279
 *   +0x0078 -> line 280
 *   +0x007c -> line 279
 *   +0x0090 -> line 280
 *   +0x00a4 -> line 281
 *   +0x00bc -> line 282
 *   +0x00c0 -> line 283
 *   +0x00c8 -> line 284
 *   +0x00d0 -> line 285
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vReportCollideActor(HIE_tdstSuperObject_* hCollideSupObj, DNM_stMecObstacle* p_stCollideObstacle)
{
    HIE_tdstSuperObject_* hSupObj;
    MTH3D_tdstVector_ stVector;
    DNM_stObstacle* p_stObstacle;
    DNM_stDynamics* p_stDynamic;
    /* TODO: decompile from asm/... */
}
