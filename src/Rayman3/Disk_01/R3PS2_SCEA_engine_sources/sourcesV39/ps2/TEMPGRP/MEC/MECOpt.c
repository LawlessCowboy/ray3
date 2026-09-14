/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>


/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stMecObstacle DNM_stMecObstacle;
typedef struct DNM_stMecMatCharacteristics DNM_stMecMatCharacteristics;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct HIE_tdstModifierObject_ HIE_tdstModifierObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GEO_tdstDoubledIndex_ GEO_tdstDoubledIndex_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;
typedef struct DNM_stDynamicsBaseBlock DNM_stDynamicsBaseBlock;
typedef struct DNM_stDynamicsAdvancedBlock DNM_stDynamicsAdvancedBlock;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct stMACDPID stMACDPID;
typedef struct DNM_stDynamicsComplexBlock DNM_stDynamicsComplexBlock;
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct MTH_stRotation MTH_stRotation;
typedef struct MTH_stMove MTH_stMove;
typedef struct DNM_stReport DNM_stReport;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct GMT_tdstGameMaterial_ GMT_tdstGameMaterial_;
typedef struct GMT_tdstCollideMaterial_ GMT_tdstCollideMaterial_;
typedef struct GEO_tdstParallelBox_ GEO_tdstParallelBox_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;

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

struct HIE_tdstModifierObject_ {
    GEO_tdstGeometricObject_* p_stGeometricObject; /* +0x0 */
    int lMulIntensity; /* +0x4 */
    int lAddIntensity; /* +0x8 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct DNM_stMecMatCharacteristics {
    float m_xSlide;
    float m_xRebound;
};

struct DNM_stMecObstacle {
    float m_xRate;
    MTH3D_tdstVector_ m_stNorm;
    MTH3D_tdstVector_ m_stContact;
    GMT_tdstGameMaterial_* hMyMaterial;
    GMT_tdstGameMaterial_* hCollidedMaterial;
    HIE_tdstSuperObject_* mp_stSupObj;
    int m_eType;
    short m_xMyEntity;
    short m_xCollidedEntity;
    MTH3D_tdstVector_ m_stTranslation;
    MTH3D_tdstVector_ m_stZoneMove;
    MTH3D_tdstVector_ m_stZonePosition;
    float m_xZoneRadius;
    DNM_stMecMatCharacteristics m_stProperties;
    DNM_stMecMatCharacteristics m_stMyProperties;
};

struct GEO_tdstDoubledIndex_ {
    short a2_xIndex[2]; /* +0x0 */
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
    unsigned char _extractor_padding_matrix[8]; /* implicitly added by extractor */
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
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0xac..0xaf */
    MAT_tdstTransformation_ m_stAbsolutePreviousMatrix; /* +0xb0 */
    MAT_tdstTransformation_ m_stPrevPreviousMatrix; /* +0x110 */
};

struct DNM_stDynamics {
    DNM_stDynamicsBaseBlock m_tdstDynamicsBaseBlock; /* +0x0 */
    DNM_stDynamicsAdvancedBlock m_tdstDynamicsAdvancedBlock; /* +0x170 */
    DNM_stDynamicsComplexBlock m_tdstDynamicsComplexBlock; /* +0x200 */
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

struct GEO_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    MTH3D_tdstVector_ st_VectorPoints[2]; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 45–234 */
/* addr: 0x0030e970  size: 1640 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 45
 *   +0x0018 -> line 58
 *   +0x001c -> line 45
 *   +0x0044 -> line 60
 *   +0x0050 -> line 64
 *   +0x0054 -> line 67
 *   +0x005c -> line 68
 *   +0x0074 -> line 73
 *   +0x007c -> line 74
 *   +0x0080 -> line 73
 *   +0x00b4 -> line 74
 *   +0x00c0 -> line 77
 *   +0x00d8 -> line 79
 *   +0x00e8 -> line 81
 *   +0x00fc -> line 83
 *   +0x0118 -> line 84
 *   +0x0124 -> line 88
 *   +0x0128 -> line 90
 *   +0x012c -> line 88
 *   +0x0158 -> line 90
 *   +0x0164 -> line 93
 *   +0x0170 -> line 95
 *   +0x017c -> line 97
 *   +0x0184 -> line 99
 *   +0x0198 -> line 105
 *   +0x01d0 -> line 108
 *   +0x0204 -> line 111
 *   +0x022c -> line 117
 *   +0x0234 -> line 119
 *   +0x0240 -> line 120
 *   +0x0248 -> line 125
 *   +0x0268 -> line 126
 *   +0x026c -> line 125
 *   +0x0280 -> line 126
 *   +0x0294 -> line 127
 *   +0x0298 -> line 131
 *   +0x02a0 -> line 134
 *   +0x02d4 -> line 136
 *   +0x02dc -> line 137
 *   +0x02e0 -> line 139
 *   +0x0314 -> line 142
 *   +0x031c -> line 146
 *   +0x0340 -> line 148
 *   +0x0360 -> line 150
 *   +0x0378 -> line 152
 *   +0x038c -> line 154
 *   +0x0398 -> line 156
 *   +0x03a0 -> line 159
 *   +0x03a8 -> line 162
 *   +0x03cc -> line 163
 *   +0x03d8 -> line 165
 *   +0x03e4 -> line 167
 *   +0x03fc -> line 169
 *   +0x0410 -> line 170
 *   +0x041c -> line 172
 *   +0x0428 -> line 174
 *   +0x042c -> line 175
 *   +0x0430 -> line 177
 *   +0x044c -> line 181
 *   +0x0458 -> line 187
 *   +0x0460 -> line 191
 *   +0x0468 -> line 196
 *   +0x0498 -> line 199
 *   +0x04c4 -> line 200
 *   +0x04e0 -> line 203
 *   +0x050c -> line 204
 *   +0x0528 -> line 207
 *   +0x0570 -> line 210
 *   +0x0588 -> line 211
 *   +0x0590 -> line 214
 *   +0x0594 -> line 217
 *   +0x0598 -> line 219
 *   +0x05a8 -> line 220
 *   +0x05b4 -> line 222
 *   +0x05c8 -> line 226
 *   +0x05d0 -> line 228
 *   +0x05dc -> line 230
 *   +0x05e0 -> line 228
 *   +0x05e4 -> line 230
 *   +0x05f4 -> line 228
 *   +0x0600 -> line 229
 *   +0x0604 -> line 228
 *   +0x0618 -> line 229
 *   +0x0628 -> line 230
 *   +0x0630 -> line 233
 *   +0x0638 -> line 234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MEC_fn_bCollision(int* p_lObstacle, DNM_stMecObstacle* p_stObstacle, DNM_stDynamics* p_stDynamic, HIE_tdstSuperObject_* p_stSupObj, MAT_tdstTransformation_* p_stStartPosition, MAT_tdstTransformation_* p_stEndPosition, unsigned char bBackFace)
{
    unsigned char bCollisionOk;
    MTH3D_tdstVector_ stTmpHandVector;
    int lNbHandObstacle;
    unsigned char bWaterFace;
    unsigned char bObstacleOk;
    MTH3D_tdstVector_ stY;
    MTH3D_tdstVector_ stMove;
    DNM_stMecObstacle stHandObstacle;
    DNM_stMecObstacle* p_stTmpObstacle;
    int lCounter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 530–572 */
/* addr: 0x0030efe0  size: 828 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 530
 *   +0x0004 -> line 539
 *   +0x0008 -> line 530
 *   +0x0038 -> line 535
 *   +0x003c -> line 530
 *   +0x0040 -> line 539
 *   +0x0070 -> line 544
 *   +0x0074 -> line 546
 *   +0x0078 -> line 544
 *   +0x0084 -> line 546
 *   +0x008c -> line 542
 *   +0x0090 -> line 544
 *   +0x00b4 -> line 546
 *   +0x00bc -> line 547
 *   +0x00c8 -> line 548
 *   +0x00d8 -> line 550
 *   +0x0124 -> line 553
 *   +0x012c -> line 554
 *   +0x0134 -> line 553
 *   +0x0138 -> line 550
 *   +0x0150 -> line 553
 *   +0x0168 -> line 554
 *   +0x018c -> line 555
 *   +0x0198 -> line 556
 *   +0x01c0 -> line 557
 *   +0x01c4 -> line 560
 *   +0x01cc -> line 561
 *   +0x01d4 -> line 557
 *   +0x01e8 -> line 560
 *   +0x0200 -> line 561
 *   +0x0224 -> line 562
 *   +0x0230 -> line 563
 *   +0x0258 -> line 564
 *   +0x025c -> line 568
 *   +0x0268 -> line 567
 *   +0x026c -> line 564
 *   +0x0284 -> line 567
 *   +0x029c -> line 568
 *   +0x02c0 -> line 569
 *   +0x02cc -> line 570
 *   +0x02f4 -> line 571
 *   +0x030c -> line 572
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAdjustScaleData(DNM_stDynamics* p_stDynamic, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    MTH3D_tdstVector_ stTranslation;
    MAT_tdstTransformation_* hCurrentMatrix;
    MAT_tdstTransformation_* hPreviousMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 486–522 */
/* addr: 0x0030f320  size: 776 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 486
 *   +0x0004 -> line 502
 *   +0x0008 -> line 486
 *   +0x0014 -> line 499
 *   +0x0018 -> line 486
 *   +0x0034 -> line 499
 *   +0x0038 -> line 486
 *   +0x003c -> line 497
 *   +0x0040 -> line 486
 *   +0x0044 -> line 493
 *   +0x0048 -> line 499
 *   +0x0078 -> line 502
 *   +0x00a8 -> line 503
 *   +0x00b8 -> line 505
 *   +0x00bc -> line 506
 *   +0x00c4 -> line 505
 *   +0x00cc -> line 506
 *   +0x00d0 -> line 505
 *   +0x00d4 -> line 506
 *   +0x00d8 -> line 505
 *   +0x00e0 -> line 506
 *   +0x00fc -> line 509
 *   +0x0100 -> line 507
 *   +0x0104 -> line 509
 *   +0x0108 -> line 507
 *   +0x0110 -> line 509
 *   +0x0114 -> line 507
 *   +0x0118 -> line 509
 *   +0x011c -> line 507
 *   +0x0120 -> line 509
 *   +0x0128 -> line 510
 *   +0x0180 -> line 512
 *   +0x019c -> line 513
 *   +0x01f4 -> line 515
 *   +0x0210 -> line 516
 *   +0x0268 -> line 519
 *   +0x0278 -> line 521
 *   +0x02dc -> line 522
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vSpeedLimit(DNM_stDynamics* p_stDynamic, float xDT, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    MTH3D_tdstVector_ stMaxMove;
    MTH3D_tdstVector_ stCorrectMove;
    MTH3D_tdstVector_ stMove;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 429–475 */
/* addr: 0x0030f630  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 429
 *   +0x001c -> line 431
 *   +0x0020 -> line 437
 *   +0x0024 -> line 433
 *   +0x0028 -> line 437
 *   +0x0038 -> line 440
 *   +0x0048 -> line 441
 *   +0x004c -> line 442
 *   +0x0050 -> line 444
 *   +0x0070 -> line 446
 *   +0x008c -> line 450
 *   +0x00a8 -> line 453
 *   +0x00b8 -> line 454
 *   +0x00bc -> line 455
 *   +0x00c0 -> line 457
 *   +0x00e0 -> line 459
 *   +0x00fc -> line 463
 *   +0x0118 -> line 466
 *   +0x0128 -> line 467
 *   +0x012c -> line 468
 *   +0x0130 -> line 470
 *   +0x0150 -> line 472
 *   +0x016c -> line 475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vPositionLimit(DNM_stDynamics* p_stDynamic, MTH3D_tdstVector_* p_stSafePreviousPosition)
{
    float xZ;
    float xY;
    float xX;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 418–419 */
/* addr: 0x0030f7b0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 418
 *   +0x002c -> line 419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAdditionnalTranslation(DNM_stDynamics* p_stDynamic)
{
    MTH3D_tdstVector_* p_stAdditionnalTranslation;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 405–405 */
/* addr: 0x0030f7f0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0004 -> line 405
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern void MAT_fn_vSetRotationMatrix(MAT_tdstTransformation_*, MTH3D_tdstMatrix_*);

void MEC_fn_vImposeRotation(DNM_stDynamics* p_stDynamic)
{
    MAT_fn_vSetRotationMatrix(&p_stDynamic->m_tdstDynamicsBaseBlock.m_stCurrentMatrix,
                              &p_stDynamic->m_tdstDynamicsBaseBlock.m_stImposeRotationMatrix);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 381–393 */
/* addr: 0x0030f800  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 381
 *   +0x0014 -> line 389
 *   +0x0020 -> line 392
 *   +0x0050 -> line 393
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAddStream(DNM_stDynamics* p_stDynamic, float xDT, unsigned char bSlide)
{
    MTH3D_tdstVector_ stTranslation;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 343–373 */
/* addr: 0x0030f860  size: 676 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 343
 *   +0x0004 -> line 360
 *   +0x0008 -> line 343
 *   +0x0014 -> line 358
 *   +0x0018 -> line 343
 *   +0x0034 -> line 358
 *   +0x0038 -> line 343
 *   +0x003c -> line 360
 *   +0x0040 -> line 343
 *   +0x0044 -> line 360
 *   +0x0048 -> line 343
 *   +0x004c -> line 350
 *   +0x0050 -> line 343
 *   +0x0054 -> line 356
 *   +0x0058 -> line 358
 *   +0x0060 -> line 354
 *   +0x006c -> line 358
 *   +0x007c -> line 354
 *   +0x0080 -> line 358
 *   +0x0090 -> line 354
 *   +0x0094 -> line 358
 *   +0x009c -> line 360
 *   +0x00f4 -> line 362
 *   +0x012c -> line 363
 *   +0x013c -> line 366
 *   +0x015c -> line 367
 *   +0x017c -> line 368
 *   +0x019c -> line 370
 *   +0x020c -> line 372
 *   +0x0270 -> line 373
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vProposeSpeed(DNM_stDynamics* p_stDynamic, float xDT, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    MTH3D_tdstVector_* pstProposeSpeed;
    MTH3D_tdstVector_ stTranslation;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 302–333 */
/* addr: 0x0030fb10  size: 704 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 302
 *   +0x0004 -> line 320
 *   +0x0008 -> line 302
 *   +0x0014 -> line 317
 *   +0x0018 -> line 302
 *   +0x0034 -> line 317
 *   +0x0038 -> line 302
 *   +0x003c -> line 320
 *   +0x0040 -> line 302
 *   +0x0044 -> line 320
 *   +0x0048 -> line 302
 *   +0x004c -> line 309
 *   +0x0050 -> line 302
 *   +0x0054 -> line 315
 *   +0x0058 -> line 317
 *   +0x0060 -> line 313
 *   +0x006c -> line 317
 *   +0x007c -> line 313
 *   +0x0080 -> line 317
 *   +0x0090 -> line 313
 *   +0x0094 -> line 317
 *   +0x009c -> line 320
 *   +0x00f4 -> line 322
 *   +0x012c -> line 323
 *   +0x013c -> line 326
 *   +0x0164 -> line 327
 *   +0x018c -> line 328
 *   +0x01b4 -> line 330
 *   +0x0228 -> line 332
 *   +0x028c -> line 333
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAddSpeed(DNM_stDynamics* p_stDynamic, float xDT, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    MTH3D_tdstVector_* pstAddSpeed;
    MTH3D_tdstVector_ stTranslation;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 261–292 */
/* addr: 0x0030fdd0  size: 672 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 261
 *   +0x0004 -> line 279
 *   +0x0008 -> line 261
 *   +0x0014 -> line 276
 *   +0x0018 -> line 261
 *   +0x002c -> line 279
 *   +0x0030 -> line 261
 *   +0x0034 -> line 276
 *   +0x0038 -> line 261
 *   +0x0044 -> line 268
 *   +0x0048 -> line 261
 *   +0x004c -> line 274
 *   +0x0050 -> line 261
 *   +0x0054 -> line 276
 *   +0x005c -> line 272
 *   +0x0068 -> line 276
 *   +0x0078 -> line 272
 *   +0x007c -> line 276
 *   +0x008c -> line 272
 *   +0x0090 -> line 276
 *   +0x0098 -> line 279
 *   +0x00f0 -> line 281
 *   +0x0128 -> line 282
 *   +0x0138 -> line 285
 *   +0x0158 -> line 286
 *   +0x0178 -> line 287
 *   +0x0198 -> line 289
 *   +0x0208 -> line 291
 *   +0x026c -> line 292
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vImposeSpeed(DNM_stDynamics* p_stDynamic, float xDT, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    MTH3D_tdstVector_* pstImposeSpeed;
    MTH3D_tdstVector_ stTranslation;
    MAT_tdstTransformation_* hCurrentMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 227–250 */
/* addr: 0x00310070  size: 284 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 227
 *   +0x0008 -> line 236
 *   +0x000c -> line 227
 *   +0x0020 -> line 235
 *   +0x0024 -> line 236
 *   +0x0034 -> line 238
 *   +0x0038 -> line 239
 *   +0x0044 -> line 241
 *   +0x0050 -> line 243
 *   +0x0054 -> line 241
 *   +0x0058 -> line 243
 *   +0x0060 -> line 244
 *   +0x0064 -> line 243
 *   +0x0068 -> line 244
 *   +0x0070 -> line 246
 *   +0x007c -> line 244
 *   +0x0080 -> line 243
 *   +0x0084 -> line 244
 *   +0x0088 -> line 243
 *   +0x008c -> line 244
 *   +0x0094 -> line 243
 *   +0x0098 -> line 244
 *   +0x009c -> line 245
 *   +0x00bc -> line 246
 *   +0x00c4 -> line 247
 *   +0x00f8 -> line 249
 *   +0x00fc -> line 250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vCancelTilt(DNM_stDynamics* p_stDynamic)
{
    float xAngle;
    MAT_tdstTransformation_* hCurrentMatrix;
    MTH3D_tdstVector_ stCurrentK;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stInitialTranslation;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 170–222 */
/* addr: 0x00310190  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 170
 *   +0x0008 -> line 189
 *   +0x000c -> line 170
 *   +0x0034 -> line 184
 *   +0x0038 -> line 187
 *   +0x003c -> line 189
 *   +0x0044 -> line 191
 *   +0x0050 -> line 192
 *   +0x005c -> line 194
 *   +0x0080 -> line 195
 *   +0x0098 -> line 196
 *   +0x009c -> line 195
 *   +0x00a0 -> line 201
 *   +0x00a4 -> line 195
 *   +0x00a8 -> line 198
 *   +0x00ac -> line 195
 *   +0x00b4 -> line 196
 *   +0x00b8 -> line 201
 *   +0x00bc -> line 196
 *   +0x00c0 -> line 201
 *   +0x00cc -> line 202
 *   +0x00d0 -> line 204
 *   +0x00e8 -> line 206
 *   +0x00ec -> line 208
 *   +0x00fc -> line 210
 *   +0x0100 -> line 208
 *   +0x0104 -> line 210
 *   +0x010c -> line 216
 *   +0x0110 -> line 210
 *   +0x013c -> line 214
 *   +0x0154 -> line 216
 *   +0x0170 -> line 217
 *   +0x0178 -> line 216
 *   +0x0194 -> line 217
 *   +0x019c -> line 218
 *   +0x01a0 -> line 220
 *   +0x01a4 -> line 218
 *   +0x01d0 -> line 220
 *   +0x0230 -> line 222
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vAddTiltSpeed(DNM_stDynamics* p_stDynamic)
{
    MAT_tdstTransformation_* hCurrentMatrix;
    float xInertia;
    float xInitTiltAngle;
    float xTiltAngle;
    float xAngle;
    MTH3D_tdstVector_ stOriginTranslation;
    MTH3D_tdstVector_ stVector;
    MTH3D_tdstVector_ stInitialTranslation;
    MTH3D_tdstVector_ stCurrentK;
    MTH3D_tdstVector_ stCurrentJ;
    MTH3D_tdstVector_ stPreviousI;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 136–162 */
/* addr: 0x003103f0  size: 332 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 *   +0x0004 -> line 137
 *   +0x0008 -> line 136
 *   +0x0034 -> line 137
 *   +0x0048 -> line 139
 *   +0x0054 -> line 140
 *   +0x0064 -> line 141
 *   +0x0074 -> line 142
 *   +0x0094 -> line 145
 *   +0x00ac -> line 147
 *   +0x00c8 -> line 150
 *   +0x00cc -> line 153
 *   +0x00d4 -> line 155
 *   +0x00e4 -> line 156
 *   +0x00f4 -> line 157
 *   +0x0108 -> line 159
 *   +0x0124 -> line 162
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vInertia(DNM_stDynamics* p_stDynamic, float xDT, MAT_tdstTransformation_* hMatrix, MAT_tdstTransformation_* hInvMatrix)
{
    float xSildeFactorZ;
    float xSildeFactorY;
    float xSildeFactorX;
    float xSlide;
    float xInertiaZ;
    float xInertiaY;
    float xInertiaX;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MEC\MECOpt.c lines 101–125 */
/* addr: 0x00310540  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 101
 *   +0x0018 -> line 111
 *   +0x001c -> line 103
 *   +0x0020 -> line 111
 *   +0x0024 -> line 113
 *   +0x0028 -> line 111
 *   +0x002c -> line 124
 *   +0x0030 -> line 112
 *   +0x0034 -> line 123
 *   +0x0038 -> line 113
 *   +0x003c -> line 114
 *   +0x0040 -> line 124
 *   +0x0058 -> line 125
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MEC_fn_vGravitySpeed(DNM_stDynamics* p_stDynamic, float xDT)
{
    float xZ;
    MAT_tdstTransformation_* hCurrentMatrix;
    float xGravity;
    /* TODO: decompile from asm/... */
}
