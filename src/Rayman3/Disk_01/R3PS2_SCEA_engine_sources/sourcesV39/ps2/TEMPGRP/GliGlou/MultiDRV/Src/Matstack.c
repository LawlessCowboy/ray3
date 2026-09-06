/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Matstack.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;

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

int g_lNbMatrixInStack;
int g_p_stCurrentMatrix;
MAT_tdstTransformation_ g_aDEF_stMatrixStack[1];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Matstack.c lines 87–117 */
/* addr: 0x002aa0f0  size: 304 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 87
 *   +0x0004 -> line 89
 *   +0x0008 -> line 87
 *   +0x0014 -> line 89
 *   +0x0020 -> line 99
 *   +0x0024 -> line 91
 *   +0x0028 -> line 92
 *   +0x0030 -> line 104
 *   +0x0034 -> line 95
 *   +0x0038 -> line 114
 *   +0x003c -> line 95
 *   +0x0040 -> line 114
 *   +0x0044 -> line 91
 *   +0x0048 -> line 92
 *   +0x0050 -> line 93
 *   +0x0058 -> line 95
 *   +0x0060 -> line 96
 *   +0x0068 -> line 97
 *   +0x0070 -> line 99
 *   +0x0078 -> line 100
 *   +0x0080 -> line 101
 *   +0x0088 -> line 103
 *   +0x0090 -> line 104
 *   +0x0098 -> line 105
 *   +0x00a0 -> line 107
 *   +0x00a8 -> line 108
 *   +0x00b0 -> line 109
 *   +0x00b8 -> line 110
 *   +0x00c4 -> line 111
 *   +0x00d0 -> line 112
 *   +0x00d8 -> line 114
 *   +0x0120 -> line 117
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xCreateMaterial(GLI_tdstMaterial_* hMaterial)
{
    /* TODO: decompile from asm/... */
}
