/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct DNM_stMecReport DNM_stMecReport;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct DNM_stMecBaseIdCard DNM_stMecBaseIdCard;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct DNM_stReport DNM_stReport;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;

typedef enum anon_enum_00bae634 {
    DNM_ObsType_Nothing = 0,
    DNM_ObsType_Scenery = 1,
    DNM_ObsType_Mobile = 2,
    DNM_ObsType_DoubleEdge = 4,
    DNM_ObsType_MobileWall = 9,
    DNM_Dummy_For_Align = 2147483647,
} anon_enum_00bae634;

typedef enum anon_enum_00bb0391 {
    DNM_eMIC_Error = -1,
    DNM_eCamera = 0,
    DNM_eBase = 1,
} anon_enum_00bb0391;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
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
    anon_enum_00bae634 m_eType; /* +0x28 */
    short m_xMyEntity; /* +0x2c */
    short m_xCollidedEntity; /* +0x2e */
    MTH3D_tdstVector_ m_stTranslation; /* +0x30 */
    MTH3D_tdstVector_ m_stZoneMove; /* +0x3c */
    MTH3D_tdstVector_ m_stZonePosition; /* +0x48 */
    float m_xZoneRadius; /* +0x54 */
    DNM_stMecMatCharacteristics m_stProperties; /* +0x58 */
    DNM_stMecMatCharacteristics m_stMyProperties; /* +0x60 */
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

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct DNM_stMecBaseIdCard {
    anon_enum_00bb0391 m_eIdentity; /* +0x0 */
    unsigned int ulFlags; /* +0x4 */
    float m_xGravity; /* +0x8 */
    float m_xSlide; /* +0xc */
    float m_xRebound; /* +0x10 */
    float m_xSlopeLimit; /* +0x14 */
    float m_xInertiaX; /* +0x18 */
    float m_xInertiaY; /* +0x1c */
    float m_xInertiaZ; /* +0x20 */
    float m_xTiltIntensity; /* +0x24 */
    float m_xTiltInertia; /* +0x28 */
    float m_xTiltOrigin; /* +0x2c */
    MTH3D_tdstVector_ m_stMaxSpeed; /* +0x30 */
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

struct GMT_tdstGameMaterial_ {
    int hSoundMaterial; /* +0x0 */
    GMT_tdstCollideMaterial_* hCollideMaterial; /* +0x4 */
};

struct GMT_tdstCollideMaterial_ {
    short wTypeOfZone; /* +0x0 */
    unsigned short xIdentifier; /* +0x2 */
    MTH3D_tdstVector_ stDirection; /* +0x4 */
    float xCoeff; /* +0x10 */
    unsigned short wTypeForAi; /* +0x14 */
};

struct MTH_stRotation {
    float m_xAngle; /* +0x0 */
    MTH3D_tdstVector_ m_stAxis; /* +0x4 */
};

struct MTH_stMove {
    MTH3D_tdstVector_ m_stLinear; /* +0x0 */
    MTH_stRotation m_stAngular; /* +0xc */
};

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
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

struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    MTH3D_tdstVector_ m_stNorm; /* +0x4 */
    MTH3D_tdstVector_ m_stContact; /* +0x10 */
    GMT_tdstGameMaterial_* hMyMaterial; /* +0x1c */
    GMT_tdstGameMaterial_* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
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

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
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

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
};

DNM_stMecReport g_stReport;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 66–100 */
/* addr: 0x00301b90  size: 776 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 66
 *   +0x0008 -> line 72
 *   +0x0020 -> line 78
 *   +0x0024 -> line 73
 *   +0x003c -> line 78
 *   +0x0040 -> line 74
 *   +0x0054 -> line 78
 *   +0x0058 -> line 74
 *   +0x005c -> line 78
 *   +0x0064 -> line 80
 *   +0x0104 -> line 81
 *   +0x0170 -> line 83
 *   +0x017c -> line 84
 *   +0x0190 -> line 85
 *   +0x0230 -> line 86
 *   +0x029c -> line 88
 *   +0x02a8 -> line 93
 *   +0x02b8 -> line 96
 *   +0x02d0 -> line 94
 *   +0x02d4 -> line 96
 *   +0x02f8 -> line 97
 *   +0x02fc -> line 100
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float CAM_fn_xComputeHorizontalAngle(MTH3D_tdstVector_* _p_stOrgVector, MTH3D_tdstVector_* _p_stDestVector, MTH3D_tdstVector_* _p_stAxisZ)
{
    float xNorm;
    float xAngle;
    MTH_stRotation stRotation;
    MTH3D_tdstVector_ stAxisZ;
    MTH3D_tdstVector_ stVect2;
    MTH3D_tdstVector_ stVect1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 412–432 */
/* addr: 0x00301ea0  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 412
 *   +0x0004 -> line 415
 *   +0x0008 -> line 412
 *   +0x0020 -> line 415
 *   +0x0034 -> line 418
 *   +0x003c -> line 422
 *   +0x006c -> line 423
 *   +0x0094 -> line 424
 *   +0x00a0 -> line 426
 *   +0x00a8 -> line 428
 *   +0x00ac -> line 429
 *   +0x00c4 -> line 430
 *   +0x00d4 -> line 432
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vDynamicsCopyClone(DNM_stDynamics* _p_stDst, DNM_stDynamics* _p_stSrc)
{
    DNM_stReport* p_stReport;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 370–407 */
/* addr: 0x00301f90  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 370
 *   +0x0004 -> line 403
 *   +0x0008 -> line 370
 *   +0x0018 -> line 403
 *   +0x0024 -> line 405
 *   +0x002c -> line 406
 *   +0x0030 -> line 407
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vInitDynamic(DNM_stDynamics* p_stDynamic, void* hIdCard);

void DNM_fn_vChangeIdCard(DNM_stDynamics* _p_stDynamics, void* _hNewIdCard)
{
    DNM_stMecBaseIdCard* pIdCard = (DNM_stMecBaseIdCard*)_hNewIdCard;
    if (pIdCard->m_eIdentity == 1)
        DNM_fn_vInitDynamic(_p_stDynamics, _hNewIdCard);
    _p_stDynamics->m_tdstDynamicsBaseBlock.m_pCurrentIdCard = (int)_hNewIdCard;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 314–362 */
/* addr: 0x00301fe0  size: 1316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 314
 *   +0x003c -> line 315
 *   +0x0078 -> line 316
 *   +0x00b4 -> line 317
 *   +0x00f0 -> line 318
 *   +0x012c -> line 319
 *   +0x0168 -> line 320
 *   +0x01a4 -> line 321
 *   +0x01e0 -> line 322
 *   +0x021c -> line 323
 *   +0x0264 -> line 324
 *   +0x02a0 -> line 325
 *   +0x02dc -> line 326
 *   +0x0318 -> line 327
 *   +0x0354 -> line 328
 *   +0x0390 -> line 329
 *   +0x03cc -> line 330
 *   +0x0408 -> line 335
 *   +0x040c -> line 331
 *   +0x0410 -> line 334
 *   +0x0418 -> line 335
 *   +0x041c -> line 338
 *   +0x0420 -> line 341
 *   +0x0424 -> line 338
 *   +0x042c -> line 331
 *   +0x0430 -> line 332
 *   +0x0438 -> line 333
 *   +0x0448 -> line 334
 *   +0x0458 -> line 335
 *   +0x0468 -> line 338
 *   +0x0480 -> line 341
 *   +0x0494 -> line 343
 *   +0x049c -> line 344
 *   +0x04a4 -> line 345
 *   +0x04ac -> line 346
 *   +0x04b4 -> line 347
 *   +0x04bc -> line 348
 *   +0x04d4 -> line 351
 *   +0x04e8 -> line 353
 *   +0x04f0 -> line 356
 *   +0x0504 -> line 358
 *   +0x050c -> line 359
 *   +0x0514 -> line 360
 *   +0x051c -> line 362
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vInitDynamic(DNM_stDynamics* p_stDynamic, void* hIdCard)
{
    DNM_stMecBaseIdCard* p_IdCard;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\DNMDynam.c lines 306–306 */
/* addr: 0x00302510  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 306
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DNM_fn_vInitBaseMechanic(DNM_stDynamics* p_stDynamic)
{
    DNM_fn_vDynamicsInitDefault(p_stDynamic);
}
