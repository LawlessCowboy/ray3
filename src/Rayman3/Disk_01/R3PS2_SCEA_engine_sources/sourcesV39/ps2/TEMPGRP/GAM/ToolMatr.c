/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ToolMatr.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct tdstViewportManagement_ tdstViewportManagement_;
typedef struct tdstEngineStructure_ tdstEngineStructure_;

struct tdstViewportManagement_ {
    HIE_tdstSuperObject_* hActiveCamera; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
};

struct tdstEngineStructure_ {
    unsigned char _extractor_padding_01[0x5f4]; /* implicitly added by extractor; +0x0..0x5f3 */
    tdstViewportManagement_* a_hViewportArray; /* +0x5f4 */
};

tdstEngineStructure_ g_stEngineStructure;

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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ToolMatr.c lines 76–78 */
/* addr: 0x0026aa50  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 *   +0x0028 -> line 77
 *   +0x002c -> line 78
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
HIE_tdstSuperObject_* CAM_fn_hGetActiveCamera(int _lViewportNumber)
{
    tdstViewportManagement_* p_stViewport;
    if ((_lViewportNumber >= 5) || (_lViewportNumber < 0)) p_stViewport = NULL; else p_stViewport = &g_stEngineStructure.a_hViewportArray[_lViewportNumber];
    return p_stViewport->hActiveCamera;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ToolMatr.c lines 128–149 */
/* addr: 0x0026aa90  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 128
 *   +0x0018 -> line 133
 *   +0x0020 -> line 135
 *   +0x0028 -> line 136
 *   +0x0034 -> line 138
 *   +0x0054 -> line 139
 *   +0x0058 -> line 140
 *   +0x0078 -> line 141
 *   +0x007c -> line 145
 *   +0x0080 -> line 146
 *   +0x0084 -> line 144
 *   +0x0088 -> line 147
 *   +0x008c -> line 145
 *   +0x0090 -> line 147
 *   +0x0094 -> line 146
 *   +0x0098 -> line 147
 *   +0x00a0 -> line 144
 *   +0x00a8 -> line 145
 *   +0x00b0 -> line 146
 *   +0x00b4 -> line 147
 *   +0x00bc -> line 148
 *   +0x00cc -> line 149
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTurnMatrixZ(MAT_tdstTransformation_* _p_stMatrix, float _xAngle)
{
    float xSin;
    float xCos;
    MTH3D_tdstVector_ K;
    MTH3D_tdstVector_ J;
    MTH3D_tdstVector_ I;
    MAT_tdstTransformation_ TmpMatrix;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ToolMatr.c lines 99–119 */
/* addr: 0x0026ab70  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 *   +0x0018 -> line 104
 *   +0x0020 -> line 106
 *   +0x0028 -> line 107
 *   +0x0034 -> line 109
 *   +0x0054 -> line 110
 *   +0x0058 -> line 111
 *   +0x0078 -> line 112
 *   +0x007c -> line 114
 *   +0x0080 -> line 115
 *   +0x0084 -> line 114
 *   +0x0088 -> line 115
 *   +0x008c -> line 117
 *   +0x0094 -> line 116
 *   +0x0098 -> line 117
 *   +0x00a0 -> line 114
 *   +0x00a8 -> line 115
 *   +0x00ac -> line 116
 *   +0x00b0 -> line 115
 *   +0x00b4 -> line 117
 *   +0x00bc -> line 118
 *   +0x00cc -> line 119
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vTurnMatrixY(MAT_tdstTransformation_* _p_stMatrix, float _xAngle)
{
    float xSin;
    float xCos;
    MTH3D_tdstVector_ K;
    MTH3D_tdstVector_ J;
    MTH3D_tdstVector_ I;
    MAT_tdstTransformation_ TmpMatrix;
    /* TODO: decompile from asm/... */
}
