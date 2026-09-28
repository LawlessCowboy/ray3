/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered from the original PS2 MTH floating-point helper convention. */
#define MTH_ABS_IN_PLACE(_value) asm { abs.s _value, _value }

#define MAT_COPY_VECTOR(_stDest, _stSource) do { \
    (_stDest).xX = (_stSource).xX; \
    (_stDest).xY = (_stSource).xY; \
    (_stDest).xZ = (_stSource).xZ; \
    (_stDest).xW = (_stSource).xW; \
} while (0)

#define MAT_COPY_ROTATION_AND_SCALE(_hDest, _hSource) do { \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_0, (_hSource)->stTransformMatrix.stCol_0); \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_1, (_hSource)->stTransformMatrix.stCol_1); \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_2, (_hSource)->stTransformMatrix.stCol_2); \
    MAT_COPY_VECTOR((_hDest)->stScaleVector, (_hSource)->stScaleVector); \
} while (0)

#define MAT_COPY_TRANSFORMATION(_hDest, _hSource) do { \
    (_hDest)->eType = (_hSource)->eType; \
    (_hDest)->stTransformMatrix.stCol_0 = (_hSource)->stTransformMatrix.stCol_0; \
    (_hDest)->stTransformMatrix.stCol_1 = (_hSource)->stTransformMatrix.stCol_1; \
    (_hDest)->stTransformMatrix.stCol_2 = (_hSource)->stTransformMatrix.stCol_2; \
    (_hDest)->stTransformMatrix.stCol_3 = (_hSource)->stTransformMatrix.stCol_3; \
    (_hDest)->stScaleVector = (_hSource)->stScaleVector; \
} while (0)

#define MAT_MULTIPLY_SCALES(_hDest, _hA, _hB) do { \
    (_hDest)->stScaleVector.xX = (_hA)->stScaleVector.xX * (_hB)->stScaleVector.xX; \
    (_hDest)->stScaleVector.xY = (_hA)->stScaleVector.xY * (_hB)->stScaleVector.xY; \
    (_hDest)->stScaleVector.xZ = (_hA)->stScaleVector.xZ * (_hB)->stScaleVector.xZ; \
    (_hDest)->stScaleVector.xW = 1.0f; \
} while (0)

#define MAT_SCALE_MATRIX(_hDest, _hMatrix, _hScale) do { \
    (_hDest)->stTransformMatrix.stCol_0.xX = (_hScale)->stScaleVector.xX * (_hMatrix)->stTransformMatrix.stCol_0.xX; \
    (_hDest)->stTransformMatrix.stCol_0.xY = (_hScale)->stScaleVector.xX * (_hMatrix)->stTransformMatrix.stCol_0.xY; \
    (_hDest)->stTransformMatrix.stCol_0.xZ = (_hScale)->stScaleVector.xX * (_hMatrix)->stTransformMatrix.stCol_0.xZ; \
    (_hDest)->stTransformMatrix.stCol_0.xW = 1.0f; \
    (_hDest)->stTransformMatrix.stCol_1.xX = (_hScale)->stScaleVector.xY * (_hMatrix)->stTransformMatrix.stCol_1.xX; \
    (_hDest)->stTransformMatrix.stCol_1.xY = (_hScale)->stScaleVector.xY * (_hMatrix)->stTransformMatrix.stCol_1.xY; \
    (_hDest)->stTransformMatrix.stCol_1.xZ = (_hScale)->stScaleVector.xY * (_hMatrix)->stTransformMatrix.stCol_1.xZ; \
    (_hDest)->stTransformMatrix.stCol_1.xW = 1.0f; \
    (_hDest)->stTransformMatrix.stCol_2.xX = (_hScale)->stScaleVector.xZ * (_hMatrix)->stTransformMatrix.stCol_2.xX; \
    (_hDest)->stTransformMatrix.stCol_2.xY = (_hScale)->stScaleVector.xZ * (_hMatrix)->stTransformMatrix.stCol_2.xY; \
    (_hDest)->stTransformMatrix.stCol_2.xZ = (_hScale)->stScaleVector.xZ * (_hMatrix)->stTransformMatrix.stCol_2.xZ; \
    (_hDest)->stTransformMatrix.stCol_2.xW = 1.0f; \
    MAT_COPY_VECTOR((_hDest)->stTransformMatrix.stCol_3, (_hMatrix)->stTransformMatrix.stCol_3); \
    (_hDest)->stTransformMatrix.stCol_0.xW = 0.0f; \
    (_hDest)->stTransformMatrix.stCol_1.xW = 0.0f; \
    (_hDest)->stTransformMatrix.stCol_2.xW = 0.0f; \
} while (0)

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstMatrix_ MTH3D_tdstMatrix_;

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
} __attribute__((aligned(16)));

struct MAT_tdstTransformation_ {
    MAT_tdeTranformationType_ eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
} __attribute__((aligned(16)));

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
} __attribute__((aligned(16)));

void MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(MTH4D_tdstMatrix_* _p_stResult,
                                                       MTH4D_tdstMatrix_* _p_stA,
                                                       MTH4D_tdstMatrix_* _p_stB);
void MTH4D_fn_vMulMatrixVertexWithoutBuffer(MTH4D_tdstVector_* _p_stResult,
                                            MTH4D_tdstMatrix_* _p_stMatrix,
                                            MTH4D_tdstVector_* _p_stVector);

unsigned char g_ucMATModuleId;
int MAT_g_hTransformationIdentity;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 28–60 */
/* addr: 0x002fa270  size: 416 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 28
 *   +0x0004 -> line 35
 *   +0x0008 -> line 28
 *   +0x0020 -> line 35
 *   +0x0024 -> line 37
 *   +0x0028 -> line 35
 *   +0x0040 -> line 37
 *   +0x0058 -> line 49
 *   +0x0140 -> line 54
 *   +0x0144 -> line 49
 *   +0x0154 -> line 50
 *   +0x0164 -> line 54
 *   +0x0168 -> line 55
 *   +0x0188 -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vInitTransformationWithNonDiagonalScale(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stScale, float* _a_xQuaternion)
{
    MTH4D_tdstVector_ st4DScaleVec;
    MTH4D_tdstMatrix_* p_stResult;
    MTH4D_tdstMatrix_ stTempMat;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1742–1794 */
/* addr: 0x002fa460  size: 1124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1742
 *   +0x0010 -> line 1743
 *   +0x0018 -> line 1745
 *   +0x003c -> line 1749
 *   +0x0044 -> line 1757
 *   +0x0048 -> line 1754
 *   +0x004c -> line 1757
 *   +0x0050 -> line 1755
 *   +0x0054 -> line 1757
 *   +0x00cc -> line 1762
 *   +0x00d4 -> line 1770
 *   +0x00d8 -> line 1768
 *   +0x00dc -> line 1770
 *   +0x00e0 -> line 1769
 *   +0x00e4 -> line 1770
 *   +0x0158 -> line 1775
 *   +0x0160 -> line 1781
 *   +0x0450 -> line 1785
 *   +0x0458 -> line 1789
 *   +0x045c -> line 1794
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MAT_fn_bAreEquivalentWithEps(MAT_tdstTransformation_* _hTransform1, MAT_tdstTransformation_* _hTransform2, float _xEps)
{
    MTH4D_tdstVector_* p_stTrans1;
    MTH4D_tdstVector_* p_stTrans2;
    MTH4D_tdstVector_* p_stScale1;
    MTH4D_tdstVector_* p_stScale2;
    unsigned char bEquivalent;
    int bTest;
    float xDelta;

    if (_hTransform1->eType != _hTransform2->eType)
    {
        bEquivalent = 0;
    }
    else
    {
        switch (_hTransform1->eType)
        {
        case MAT_eTransform_Identity:
            bEquivalent = 1;
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            p_stScale1 = &_hTransform1->stScaleVector;
            p_stScale2 = &_hTransform2->stScaleVector;
            xDelta = p_stScale1->xX - p_stScale2->xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = p_stScale1->xY - p_stScale2->xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            if (bTest = !!bTest)
            {
                xDelta = p_stScale1->xX - p_stScale2->xZ;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            bEquivalent = bTest;
            if (!bEquivalent)
            {
                break;
            }

        case MAT_eTransform_Translation:
            p_stTrans1 = &_hTransform1->stTransformMatrix.stCol_3;
            p_stTrans2 = &_hTransform2->stTransformMatrix.stCol_3;
            xDelta = p_stTrans1->xX - p_stTrans2->xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = p_stTrans1->xY - p_stTrans2->xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            if (bTest = !!bTest)
            {
                xDelta = p_stTrans1->xX - p_stTrans2->xZ;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
            bEquivalent = bTest;
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            xDelta = _hTransform1->stTransformMatrix.stCol_0.xX - _hTransform2->stTransformMatrix.stCol_0.xX;
            MTH_ABS_IN_PLACE(xDelta);
            bTest = xDelta < _xEps;
            if (bTest)
            {
                xDelta = _hTransform1->stTransformMatrix.stCol_0.xY - _hTransform2->stTransformMatrix.stCol_0.xY;
                MTH_ABS_IN_PLACE(xDelta);
                bTest = xDelta < _xEps;
            }
#define MAT_CHECK_ABS(_a, _b) do { \
                if (bTest = !!bTest) { \
                    xDelta = (_a) - (_b); \
                    MTH_ABS_IN_PLACE(xDelta); \
                    bTest = xDelta < _xEps; \
                } \
            } while (0)
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_0.xZ, _hTransform2->stTransformMatrix.stCol_0.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_0.xW, _hTransform2->stTransformMatrix.stCol_0.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xX, _hTransform2->stTransformMatrix.stCol_1.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xY, _hTransform2->stTransformMatrix.stCol_1.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xZ, _hTransform2->stTransformMatrix.stCol_1.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_1.xW, _hTransform2->stTransformMatrix.stCol_1.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xX, _hTransform2->stTransformMatrix.stCol_2.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xY, _hTransform2->stTransformMatrix.stCol_2.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xZ, _hTransform2->stTransformMatrix.stCol_2.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_2.xW, _hTransform2->stTransformMatrix.stCol_2.xW);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xX, _hTransform2->stTransformMatrix.stCol_3.xX);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xY, _hTransform2->stTransformMatrix.stCol_3.xY);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xZ, _hTransform2->stTransformMatrix.stCol_3.xZ);
            MAT_CHECK_ABS(_hTransform1->stTransformMatrix.stCol_3.xW, _hTransform2->stTransformMatrix.stCol_3.xW);
#undef MAT_CHECK_ABS
            bEquivalent = bTest;
            break;

        default:
            bEquivalent = 0;
            break;
        }
    }
    return bEquivalent;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1684–1726 */
/* addr: 0x002fa8d0  size: 884 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1684
 *   +0x0010 -> line 1685
 *   +0x0018 -> line 1687
 *   +0x003c -> line 1691
 *   +0x0044 -> line 1695
 *   +0x00b4 -> line 1700
 *   +0x00bc -> line 1704
 *   +0x0120 -> line 1708
 *   +0x0128 -> line 1714
 *   +0x0360 -> line 1717
 *   +0x0368 -> line 1721
 *   +0x036c -> line 1726
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MAT_fn_bAreEquivalent(MAT_tdstTransformation_* _hTransform1, MAT_tdstTransformation_* _hTransform2)
{
    unsigned char bEquivalent;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1589–1669 */
/* addr: 0x002fac50  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1589
 *   +0x0008 -> line 1591
 *   +0x0024 -> line 1592
 *   +0x002c -> line 1595
 *   +0x0040 -> line 1598
 *   +0x0044 -> line 1600
 *   +0x004c -> line 1602
 *   +0x0068 -> line 1603
 *   +0x0070 -> line 1606
 *   +0x0084 -> line 1609
 *   +0x0088 -> line 1611
 *   +0x0090 -> line 1613
 *   +0x00ac -> line 1614
 *   +0x00b4 -> line 1617
 *   +0x00c8 -> line 1620
 *   +0x00cc -> line 1623
 *   +0x00d4 -> line 1624
 *   +0x00f8 -> line 1626
 *   +0x010c -> line 1630
 *   +0x0130 -> line 1635
 *   +0x0140 -> line 1636
 *   +0x0148 -> line 1640
 *   +0x0164 -> line 1645
 *   +0x016c -> line 1649
 *   +0x01d4 -> line 1669
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vInitTransformationAndType(MAT_tdstTransformation_* _hTransform, MAT_tdeTranformationType_ _eType, MTH3D_tdstVector_* _p_stI, MTH3D_tdstVector_* _p_stJ, MTH3D_tdstVector_* _p_stK, MTH3D_tdstVector_* _p_stTranslation)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1332–1358 */
/* addr: 0x002fae30  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1332
 *   +0x0028 -> line 1335
 *   +0x002c -> line 1336
 *   +0x0030 -> line 1335
 *   +0x0034 -> line 1336
 *   +0x004c -> line 1337
 *   +0x0054 -> line 1349
 *   +0x0084 -> line 1358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vTranslate(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stTranslation)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 1031–1322 */
/* addr: 0x002faec0  size: 2480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1031
 *   +0x0020 -> line 1041
 *   +0x003c -> line 1043
 *   +0x0044 -> line 1044
 *   +0x0074 -> line 1045
 *   +0x007c -> line 1047
 *   +0x0088 -> line 1049
 *   +0x0090 -> line 1050
 *   +0x00c0 -> line 1051
 *   +0x00c8 -> line 1056
 *   +0x00d8 -> line 1058
 *   +0x00dc -> line 1059
 *   +0x00e0 -> line 1060
 *   +0x00e8 -> line 1063
 *   +0x00ec -> line 1074
 *   +0x00f0 -> line 1070
 *   +0x00f4 -> line 1074
 *   +0x0108 -> line 1077
 *   +0x0138 -> line 1082
 *   +0x0164 -> line 1086
 *   +0x0168 -> line 1088
 *   +0x01c8 -> line 1091
 *   +0x01e4 -> line 1092
 *   +0x01ec -> line 1096
 *   +0x01f0 -> line 1097
 *   +0x01f4 -> line 1096
 *   +0x01f8 -> line 1098
 *   +0x0204 -> line 1099
 *   +0x020c -> line 1103
 *   +0x0210 -> line 1106
 *   +0x0214 -> line 1103
 *   +0x0218 -> line 1104
 *   +0x02c8 -> line 1105
 *   +0x02f8 -> line 1107
 *   +0x0300 -> line 1111
 *   +0x0304 -> line 1112
 *   +0x0308 -> line 1111
 *   +0x030c -> line 1113
 *   +0x0310 -> line 1114
 *   +0x0340 -> line 1115
 *   +0x0348 -> line 1121
 *   +0x034c -> line 1122
 *   +0x0350 -> line 1121
 *   +0x0354 -> line 1123
 *   +0x0358 -> line 1124
 *   +0x0388 -> line 1125
 *   +0x0390 -> line 1129
 *   +0x0394 -> line 1130
 *   +0x0398 -> line 1129
 *   +0x039c -> line 1133
 *   +0x03b8 -> line 1141
 *   +0x03c0 -> line 1145
 *   +0x03ec -> line 1149
 *   +0x03f0 -> line 1151
 *   +0x0450 -> line 1155
 *   +0x046c -> line 1156
 *   +0x0474 -> line 1160
 *   +0x047c -> line 1161
 *   +0x052c -> line 1162
 *   +0x0548 -> line 1163
 *   +0x0550 -> line 1171
 *   +0x0554 -> line 1175
 *   +0x0558 -> line 1172
 *   +0x0608 -> line 1175
 *   +0x0614 -> line 1176
 *   +0x0644 -> line 1186
 *   +0x064c -> line 1194
 *   +0x0678 -> line 1198
 *   +0x067c -> line 1200
 *   +0x06dc -> line 1204
 *   +0x06f8 -> line 1205
 *   +0x0700 -> line 1210
 *   +0x0704 -> line 1211
 *   +0x0708 -> line 1213
 *   +0x070c -> line 1212
 *   +0x0710 -> line 1213
 *   +0x073c -> line 1214
 *   +0x0744 -> line 1221
 *   +0x0748 -> line 1222
 *   +0x074c -> line 1221
 *   +0x0750 -> line 1223
 *   +0x0754 -> line 1226
 *   +0x0774 -> line 1241
 *   +0x077c -> line 1244
 *   +0x078c -> line 1252
 *   +0x07a8 -> line 1255
 *   +0x07b0 -> line 1260
 *   +0x07bc -> line 1263
 *   +0x07e8 -> line 1273
 *   +0x0844 -> line 1275
 *   +0x084c -> line 1276
 *   +0x0858 -> line 1281
 *   +0x088c -> line 1283
 *   +0x0894 -> line 1284
 *   +0x089c -> line 1286
 *   +0x08a4 -> line 1290
 *   +0x0900 -> line 1292
 *   +0x0908 -> line 1293
 *   +0x0914 -> line 1298
 *   +0x0948 -> line 1300
 *   +0x094c -> line 1301
 *   +0x0950 -> line 1300
 *   +0x0958 -> line 1301
 *   +0x095c -> line 1311
 *   +0x0964 -> line 1313
 *   +0x0994 -> line 1322
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vComposeWithoutTranslation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hA, MAT_tdstTransformation_* _hB)
{
    unsigned char bTestScale;
    unsigned char bComposeMatrixes;
    MAT_tdstTransformation_* hResult;
    MAT_tdstTransformation_ stTemp;
    static unsigned int uiSimplification;
    static unsigned int uiTotal;

    if ((_hA->eType == MAT_eTransform_Identity) ||
        (_hA->eType == MAT_eTransform_Translation))
    {
        if (_hDest != _hB)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hB);
        }
        return;
    }

    if (_hB->eType == MAT_eTransform_Identity)
    {
        if (_hDest != _hA)
        {
            MAT_COPY_TRANSFORMATION(_hDest, _hA);
        }
        return;
    }

    if ((_hDest == _hA) || (_hDest == _hB))
    {
        hResult = &stTemp;
        stTemp.eType = MAT_eTransform_Identity;
    }
    else
    {
        hResult = _hDest;
    }

    hResult->stScaleVector.xX = 1.0f;
    hResult->stScaleVector.xY = 1.0f;
    hResult->stScaleVector.xZ = 1.0f;
    hResult->stScaleVector.xW = 1.0f;
    bComposeMatrixes = 0;
    bTestScale = 0;

    switch (_hA->eType)
    {
    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_Rotation;
            bComposeMatrixes = 1;
            break;

        case MAT_eTransform_Zoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bTestScale = 1;
            MAT_SCALE_MATRIX(hResult, _hA, _hB);
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_RotationZoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationScale:
            hResult->eType = MAT_eTransform_RotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Zoom:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_RotationZoom;
            MAT_SCALE_MATRIX(hResult, _hB, _hA);
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = _hB->eType;
            MAT_SCALE_MATRIX(hResult, _hB, _hA);
            bTestScale = 1;
            if (_hB->eType != MAT_eTransform_ComplexRotationScale)
            {
                MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            }
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }

    if (bComposeMatrixes)
    {
        MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(&hResult->stTransformMatrix,
                                                         &_hA->stTransformMatrix,
                                                         &_hB->stTransformMatrix);
    }

    MAT_COPY_VECTOR(hResult->stTransformMatrix.stCol_3, _hB->stTransformMatrix.stCol_3);

    if (bTestScale)
    {
        uiTotal++;
        switch (hResult->eType)
        {
        case MAT_eTransform_Scale:
            if ((fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) &&
                (fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                hResult->eType = MAT_eTransform_Zoom;
                uiSimplification++;
            }
        case MAT_eTransform_Zoom:
            if (fabsf(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                hResult->eType = MAT_eTransform_Translation;
                uiSimplification++;
            }
            break;

        case MAT_eTransform_RotationScale:
            if ((fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) &&
                (fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                hResult->eType = MAT_eTransform_RotationZoom;
                uiSimplification++;
            }
        case MAT_eTransform_RotationZoom:
            if (fabsf(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                uiSimplification++;
                hResult->eType = MAT_eTransform_Rotation;
            }
            break;

        default:
            break;
        }
    }

    if (_hDest != hResult)
    {
        MAT_COPY_TRANSFORMATION(_hDest, hResult);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 707–1014 */
/* addr: 0x002fb870  size: 2000 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 707
 *   +0x0014 -> line 718
 *   +0x0028 -> line 720
 *   +0x0054 -> line 721
 *   +0x005c -> line 723
 *   +0x0068 -> line 725
 *   +0x0094 -> line 726
 *   +0x009c -> line 731
 *   +0x00ac -> line 734
 *   +0x00b0 -> line 733
 *   +0x00b4 -> line 750
 *   +0x00b8 -> line 745
 *   +0x00bc -> line 746
 *   +0x00c0 -> line 750
 *   +0x00e8 -> line 755
 *   +0x00ec -> line 758
 *   +0x00f0 -> line 755
 *   +0x00f4 -> line 758
 *   +0x0128 -> line 764
 *   +0x0188 -> line 768
 *   +0x01a4 -> line 769
 *   +0x01ac -> line 776
 *   +0x01d8 -> line 780
 *   +0x01dc -> line 782
 *   +0x023c -> line 785
 *   +0x0258 -> line 786
 *   +0x0260 -> line 790
 *   +0x0264 -> line 791
 *   +0x0268 -> line 792
 *   +0x0284 -> line 793
 *   +0x028c -> line 798
 *   +0x0290 -> line 799
 *   +0x0294 -> line 798
 *   +0x0298 -> line 800
 *   +0x029c -> line 801
 *   +0x02d0 -> line 802
 *   +0x02d8 -> line 808
 *   +0x02dc -> line 809
 *   +0x02e0 -> line 808
 *   +0x02e4 -> line 810
 *   +0x02e8 -> line 811
 *   +0x031c -> line 812
 *   +0x0324 -> line 816
 *   +0x0328 -> line 817
 *   +0x032c -> line 816
 *   +0x0330 -> line 819
 *   +0x034c -> line 827
 *   +0x0354 -> line 833
 *   +0x0380 -> line 837
 *   +0x0384 -> line 839
 *   +0x03e4 -> line 843
 *   +0x0400 -> line 844
 *   +0x0408 -> line 848
 *   +0x040c -> line 849
 *   +0x0410 -> line 848
 *   +0x0414 -> line 850
 *   +0x0430 -> line 851
 *   +0x0438 -> line 858
 *   +0x043c -> line 860
 *   +0x0440 -> line 861
 *   +0x0444 -> line 860
 *   +0x0448 -> line 864
 *   +0x0464 -> line 872
 *   +0x046c -> line 881
 *   +0x0498 -> line 885
 *   +0x049c -> line 887
 *   +0x04fc -> line 891
 *   +0x0518 -> line 892
 *   +0x0520 -> line 897
 *   +0x0524 -> line 898
 *   +0x0528 -> line 900
 *   +0x0534 -> line 899
 *   +0x0538 -> line 900
 *   +0x0560 -> line 901
 *   +0x0568 -> line 907
 *   +0x056c -> line 909
 *   +0x0570 -> line 910
 *   +0x0574 -> line 909
 *   +0x0578 -> line 913
 *   +0x0598 -> line 928
 *   +0x05a0 -> line 931
 *   +0x05b0 -> line 935
 *   +0x05b8 -> line 936
 *   +0x05c0 -> line 939
 *   +0x05cc -> line 943
 *   +0x05d4 -> line 946
 *   +0x05dc -> line 951
 *   +0x05e8 -> line 954
 *   +0x0610 -> line 964
 *   +0x066c -> line 966
 *   +0x0674 -> line 967
 *   +0x0680 -> line 972
 *   +0x06b4 -> line 974
 *   +0x06b8 -> line 975
 *   +0x06c0 -> line 977
 *   +0x06c8 -> line 981
 *   +0x0724 -> line 983
 *   +0x072c -> line 984
 *   +0x0738 -> line 989
 *   +0x076c -> line 991
 *   +0x0770 -> line 992
 *   +0x0774 -> line 991
 *   +0x077c -> line 992
 *   +0x0780 -> line 1003
 *   +0x0788 -> line 1005
 *   +0x07b8 -> line 1014
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vCompose(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hA, MAT_tdstTransformation_* _hB)
{
    unsigned char bTestScale;
    unsigned char bComposeTranslations;
    unsigned char bComposeMatrixes;
    MAT_tdstTransformation_* hResult;
    MAT_tdstTransformation_ stTemp;
    static unsigned int uiSimplification;
    static unsigned int uiTotal;

    if (_hA->eType == MAT_eTransform_Identity)
    {
        MAT_COPY_TRANSFORMATION(_hDest, _hB);
        return;
    }

    if (_hB->eType == MAT_eTransform_Identity)
    {
        MAT_COPY_TRANSFORMATION(_hDest, _hA);
        return;
    }

    if ((_hDest == _hA) || (_hDest == _hB))
    {
        hResult = &stTemp;
        stTemp.eType = MAT_eTransform_Identity;
    }
    else
    {
        hResult = _hDest;
    }

    bComposeMatrixes = 0;
    bComposeTranslations = 0;
    bTestScale = 0;

    switch (_hA->eType)
    {
    case MAT_eTransform_Translation:
        hResult->eType = _hB->eType;
        hResult->stTransformMatrix.stCol_3.xX = _hA->stTransformMatrix.stCol_3.xX + _hB->stTransformMatrix.stCol_3.xX;
        hResult->stTransformMatrix.stCol_3.xY = _hA->stTransformMatrix.stCol_3.xY + _hB->stTransformMatrix.stCol_3.xY;
        hResult->stTransformMatrix.stCol_3.xZ = _hA->stTransformMatrix.stCol_3.xZ + _hB->stTransformMatrix.stCol_3.xZ;
        hResult->stTransformMatrix.stCol_3.xW = 1.0f;
        MAT_COPY_ROTATION_AND_SCALE(hResult, _hB);
        break;

    case MAT_eTransform_Rotation:
    case MAT_eTransform_RotationZoom:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_RotationZoom:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationScale:
            hResult->eType = MAT_eTransform_RotationScale;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Zoom:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Rotation:
            hResult->eType = MAT_eTransform_RotationZoom;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hA->stScaleVector);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
            bTestScale = 1;
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = _hB->eType;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    case MAT_eTransform_Scale:
    case MAT_eTransform_RotationScale:
    case MAT_eTransform_ComplexRotationScale:
        bComposeTranslations = 1;
        switch (_hB->eType)
        {
        case MAT_eTransform_Translation:
            hResult->eType = _hA->eType;
            MAT_COPY_ROTATION_AND_SCALE(hResult, _hA);
            break;

        case MAT_eTransform_Zoom:
        case MAT_eTransform_Scale:
            hResult->eType = _hA->eType;
            bComposeMatrixes = 1;
            bTestScale = 1;
            MAT_MULTIPLY_SCALES(hResult, _hA, _hB);
            break;

        case MAT_eTransform_Rotation:
        case MAT_eTransform_RotationZoom:
        case MAT_eTransform_RotationScale:
            bTestScale = 1;
        case MAT_eTransform_ComplexRotationScale:
            hResult->eType = MAT_eTransform_ComplexRotationScale;
            bComposeMatrixes = 1;
            MAT_COPY_VECTOR(hResult->stScaleVector, _hB->stScaleVector);
            break;

        default:
            break;
        }
        break;

    default:
        break;
    }

    if (bComposeMatrixes)
    {
        MTH4D_fn_vSpecializedMulMatrixMatrixWithoutBuffer(&hResult->stTransformMatrix,
                                                         &_hA->stTransformMatrix,
                                                         &_hB->stTransformMatrix);
    }
    else if (bComposeTranslations)
    {
        MTH4D_fn_vMulMatrixVertexWithoutBuffer(&hResult->stTransformMatrix.stCol_3,
                                               &_hA->stTransformMatrix,
                                               &_hB->stTransformMatrix.stCol_3);
        hResult->stTransformMatrix.stCol_3.xW = 1.0f;
    }

    if (bTestScale)
    {
        uiTotal++;
        switch (hResult->eType)
        {
        case MAT_eTransform_Scale:
            if ((fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) &&
                (fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                hResult->eType = MAT_eTransform_Zoom;
                uiSimplification++;
            }
        case MAT_eTransform_Zoom:
            if (fabsf(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                hResult->eType = MAT_eTransform_Translation;
                uiSimplification++;
            }
            break;

        case MAT_eTransform_RotationScale:
            if ((fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xY) < 0.0001f) &&
                (fabsf(hResult->stScaleVector.xX - hResult->stScaleVector.xZ) < 0.0001f))
            {
                hResult->eType = MAT_eTransform_RotationZoom;
                uiSimplification++;
            }
        case MAT_eTransform_RotationZoom:
            if (fabsf(hResult->stScaleVector.xX - 1.0f) < 0.0001f)
            {
                uiSimplification++;
                hResult->eType = MAT_eTransform_Rotation;
            }
            break;

        default:
            break;
        }
    }

    if (_hDest != hResult)
    {
        MAT_COPY_TRANSFORMATION(_hDest, hResult);
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 532–695 */
/* addr: 0x002fc070  size: 1848 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 532
 *   +0x001c -> line 535
 *   +0x0048 -> line 538
 *   +0x0050 -> line 539
 *   +0x0070 -> line 540
 *   +0x0078 -> line 543
 *   +0x0080 -> line 545
 *   +0x0094 -> line 546
 *   +0x0098 -> line 545
 *   +0x00a8 -> line 546
 *   +0x00ac -> line 548
 *   +0x00d4 -> line 551
 *   +0x00dc -> line 557
 *   +0x00e0 -> line 558
 *   +0x00e4 -> line 561
 *   +0x00ec -> line 562
 *   +0x011c -> line 564
 *   +0x0138 -> line 565
 *   +0x0148 -> line 566
 *   +0x0158 -> line 569
 *   +0x0180 -> line 570
 *   +0x01b0 -> line 572
 *   +0x01b8 -> line 580
 *   +0x01bc -> line 576
 *   +0x01c0 -> line 583
 *   +0x01c4 -> line 577
 *   +0x01c8 -> line 583
 *   +0x020c -> line 588
 *   +0x0214 -> line 589
 *   +0x0220 -> line 588
 *   +0x0240 -> line 589
 *   +0x0248 -> line 592
 *   +0x0258 -> line 595
 *   +0x0260 -> line 604
 *   +0x0264 -> line 599
 *   +0x0268 -> line 607
 *   +0x026c -> line 600
 *   +0x0270 -> line 607
 *   +0x02b4 -> line 612
 *   +0x02c0 -> line 627
 *   +0x02c4 -> line 613
 *   +0x02c8 -> line 627
 *   +0x02d0 -> line 612
 *   +0x02d8 -> line 613
 *   +0x02fc -> line 614
 *   +0x0324 -> line 615
 *   +0x034c -> line 617
 *   +0x0358 -> line 623
 *   +0x0370 -> line 626
 *   +0x0394 -> line 627
 *   +0x039c -> line 629
 *   +0x03a4 -> line 643
 *   +0x03a8 -> line 646
 *   +0x03ac -> line 643
 *   +0x03b0 -> line 651
 *   +0x03b4 -> line 646
 *   +0x03b8 -> line 659
 *   +0x03bc -> line 647
 *   +0x03c0 -> line 659
 *   +0x03c4 -> line 646
 *   +0x03c8 -> line 651
 *   +0x03cc -> line 648
 *   +0x03d0 -> line 646
 *   +0x03d8 -> line 651
 *   +0x03dc -> line 647
 *   +0x03e0 -> line 651
 *   +0x03e8 -> line 647
 *   +0x03ec -> line 651
 *   +0x03f8 -> line 648
 *   +0x03fc -> line 651
 *   +0x0408 -> line 648
 *   +0x040c -> line 651
 *   +0x0488 -> line 654
 *   +0x04b8 -> line 658
 *   +0x04dc -> line 659
 *   +0x04e4 -> line 667
 *   +0x04ec -> line 674
 *   +0x04f4 -> line 677
 *   +0x06e0 -> line 683
 *   +0x06e4 -> line 682
 *   +0x06e8 -> line 683
 *   +0x06ec -> line 685
 *   +0x06f4 -> line 683
 *   +0x0714 -> line 685
 *   +0x071c -> line 695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vFastInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstVector_* p_stVec;
    float xZoom;
    MTH4D_tdstMatrix_* p_stTranspMatrix;
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stMatrixSource;
    MTH4D_tdstMatrix_* p_stMatrixDest;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 362–525 */
/* addr: 0x002fc7b0  size: 1908 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 362
 *   +0x001c -> line 365
 *   +0x0048 -> line 368
 *   +0x0050 -> line 369
 *   +0x0070 -> line 370
 *   +0x0078 -> line 373
 *   +0x0080 -> line 375
 *   +0x0094 -> line 376
 *   +0x0098 -> line 375
 *   +0x00a8 -> line 376
 *   +0x00ac -> line 378
 *   +0x00d4 -> line 381
 *   +0x00dc -> line 387
 *   +0x00e0 -> line 388
 *   +0x00e4 -> line 391
 *   +0x00ec -> line 392
 *   +0x011c -> line 394
 *   +0x0138 -> line 395
 *   +0x0148 -> line 396
 *   +0x0158 -> line 399
 *   +0x0180 -> line 400
 *   +0x01b0 -> line 402
 *   +0x01b8 -> line 410
 *   +0x01bc -> line 406
 *   +0x01c0 -> line 413
 *   +0x01c4 -> line 407
 *   +0x01c8 -> line 413
 *   +0x020c -> line 418
 *   +0x0214 -> line 419
 *   +0x0220 -> line 418
 *   +0x0240 -> line 419
 *   +0x0248 -> line 422
 *   +0x0258 -> line 425
 *   +0x0260 -> line 434
 *   +0x0264 -> line 429
 *   +0x0268 -> line 437
 *   +0x026c -> line 430
 *   +0x0270 -> line 437
 *   +0x02b4 -> line 442
 *   +0x02c0 -> line 457
 *   +0x02c4 -> line 443
 *   +0x02c8 -> line 457
 *   +0x02d0 -> line 442
 *   +0x02d8 -> line 443
 *   +0x02fc -> line 444
 *   +0x0324 -> line 445
 *   +0x034c -> line 447
 *   +0x0358 -> line 453
 *   +0x0370 -> line 456
 *   +0x0394 -> line 457
 *   +0x039c -> line 459
 *   +0x03a4 -> line 470
 *   +0x03ac -> line 471
 *   +0x03c4 -> line 473
 *   +0x03c8 -> line 476
 *   +0x03cc -> line 473
 *   +0x03d0 -> line 481
 *   +0x03d4 -> line 476
 *   +0x03d8 -> line 489
 *   +0x03dc -> line 477
 *   +0x03e0 -> line 489
 *   +0x03e4 -> line 476
 *   +0x03e8 -> line 481
 *   +0x03ec -> line 478
 *   +0x03f0 -> line 476
 *   +0x03f8 -> line 481
 *   +0x03fc -> line 477
 *   +0x0400 -> line 481
 *   +0x0408 -> line 477
 *   +0x040c -> line 481
 *   +0x0418 -> line 478
 *   +0x041c -> line 481
 *   +0x0428 -> line 478
 *   +0x042c -> line 481
 *   +0x04a8 -> line 484
 *   +0x04d8 -> line 488
 *   +0x04fc -> line 489
 *   +0x0504 -> line 495
 *   +0x0520 -> line 497
 *   +0x0528 -> line 504
 *   +0x0530 -> line 507
 *   +0x071c -> line 513
 *   +0x0720 -> line 512
 *   +0x0724 -> line 513
 *   +0x0728 -> line 515
 *   +0x0730 -> line 513
 *   +0x0750 -> line 515
 *   +0x0758 -> line 525
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vInvert(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstVector_* p_stVec;
    float xQW;
    float xQZ;
    float xQY;
    float xQX;
    float xZoom;
    MTH4D_tdstMatrix_* p_stTranspMatrix;
    MTH4D_tdstVector_* p_stScale;
    MTH4D_tdstMatrix_* p_stMatrixSource;
    MTH4D_tdstMatrix_* p_stMatrixDest;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 301–352 */
/* addr: 0x002fcf30  size: 1084 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 301
 *   +0x0014 -> line 304
 *   +0x0040 -> line 310
 *   +0x0048 -> line 311
 *   +0x005c -> line 312
 *   +0x0064 -> line 316
 *   +0x0194 -> line 317
 *   +0x019c -> line 325
 *   +0x01a4 -> line 328
 *   +0x02d4 -> line 330
 *   +0x02dc -> line 337
 *   +0x02f4 -> line 343
 *   +0x0428 -> line 352
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vRotateVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource)
{
    MTH4D_tdstMatrix_ TmpMat;
    MAT_tdstTransformation_ stTemp;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsp.c lines 264–289 */
/* addr: 0x002fd370  size: 448 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 264
 *   +0x002c -> line 268
 *   +0x0034 -> line 269
 *   +0x0048 -> line 270
 *   +0x0050 -> line 275
 *   +0x007c -> line 276
 *   +0x0084 -> line 282
 *   +0x01b8 -> line 289
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vApplyOnVector(MTH3D_tdstVector_* _p_stDest, MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stSource)
{
    /* TODO: decompile from asm/... */
}
