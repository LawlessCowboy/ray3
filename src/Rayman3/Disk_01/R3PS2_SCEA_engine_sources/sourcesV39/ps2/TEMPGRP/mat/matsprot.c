/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

float sinf(float);
float cosf(float);
void MAT_fn_vQuatToMatrix(struct MTH4D_tdstMatrix_* _p_stMatrix, float _xX, float _xY, float _xZ, float _xW);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;
typedef struct ISI_tdstISI_ ISI_tdstISI_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
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

struct MTH3D_tdstMatrix_ {
    MTH3D_tdstVector_ stCol_0; /* +0x0 */
    MTH3D_tdstVector_ stCol_1; /* +0xc */
    MTH3D_tdstVector_ stCol_2; /* +0x18 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 539–590 */
/* addr: 0x002f8130  size: 1096 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 539
 *   +0x0010 -> line 550
 *   +0x0014 -> line 539
 *   +0x0018 -> line 552
 *   +0x001c -> line 539
 *   +0x0038 -> line 549
 *   +0x003c -> line 552
 *   +0x0230 -> line 555
 *   +0x0238 -> line 561
 *   +0x023c -> line 555
 *   +0x024c -> line 556
 *   +0x0250 -> line 555
 *   +0x0258 -> line 556
 *   +0x0260 -> line 561
 *   +0x026c -> line 571
 *   +0x0270 -> line 562
 *   +0x0280 -> line 565
 *   +0x0284 -> line 566
 *   +0x0288 -> line 565
 *   +0x028c -> line 566
 *   +0x0290 -> line 565
 *   +0x0294 -> line 566
 *   +0x0298 -> line 565
 *   +0x029c -> line 566
 *   +0x02a0 -> line 571
 *   +0x02a8 -> line 572
 *   +0x02ac -> line 578
 *   +0x02c0 -> line 572
 *   +0x02cc -> line 573
 *   +0x02d0 -> line 574
 *   +0x02d4 -> line 573
 *   +0x02dc -> line 574
 *   +0x02e4 -> line 573
 *   +0x02e8 -> line 574
 *   +0x02ec -> line 579
 *   +0x02f4 -> line 581
 *   +0x0304 -> line 588
 *   +0x030c -> line 586
 *   +0x0320 -> line 588
 *   +0x0324 -> line 581
 *   +0x0350 -> line 582
 *   +0x0384 -> line 583
 *   +0x03b8 -> line 584
 *   +0x03ec -> line 586
 *   +0x0400 -> line 588
 *   +0x0414 -> line 589
 *   +0x0418 -> line 590
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ISI_hComputeBlendRLI(void* hRLI1, void* hRLI2, short xNumISILOD, float xPercent)
{
    float xPercentComplement;
    float* p_stTabU2;
    float* param0;
    float* p_stBlendTabU;
    ISI_tdstColor_* p_stTabCol2;
    ISI_tdstColor_* p_stTabCol1;
    ISI_tdstColor_* p_stBlendTabCol;
    short xNbVertex;
    short xI;
    ISI_tdstISI_* hISI2;
    ISI_tdstISI_* hISI1;
    ISI_tdstISI_* hBlendISI;
    void* hReturnRad;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1286–1319 */
/* addr: 0x002f8580  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1286
 *   +0x0014 -> line 1293
 *   +0x006c -> line 1296
 *   +0x0070 -> line 1295
 *   +0x0074 -> line 1296
 *   +0x007c -> line 1297
 *   +0x0080 -> line 1304
 *   +0x00d8 -> line 1306
 *   +0x00dc -> line 1307
 *   +0x00e4 -> line 1308
 *   +0x00e8 -> line 1315
 *   +0x00f0 -> line 1316
 *   +0x0110 -> line 1318
 *   +0x0118 -> line 1319
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char MAT_fn_bAreRotationEquivalent(MAT_tdstTransformation_* param0, MAT_tdstTransformation_* _hTransform2)
{
    unsigned char bUseEps;
    MAT_tdstTransformation_ stTemp2;
    MAT_tdstTransformation_ stTemp1;
    MAT_tdstTransformation_* hSource2;
    MAT_tdstTransformation_* hSource1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1139–1222 */
/* addr: 0x002f86b0  size: 676 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1139
 *   +0x0028 -> line 1143
 *   +0x0030 -> line 1148
 *   +0x0050 -> line 1149
 *   +0x006c -> line 1150
 *   +0x0088 -> line 1152
 *   +0x008c -> line 1153
 *   +0x0090 -> line 1156
 *   +0x0098 -> line 1160
 *   +0x00a0 -> line 1164
 *   +0x00a4 -> line 1167
 *   +0x00c8 -> line 1168
 *   +0x00ec -> line 1169
 *   +0x010c -> line 1171
 *   +0x0114 -> line 1174
 *   +0x011c -> line 1181
 *   +0x014c -> line 1182
 *   +0x017c -> line 1183
 *   +0x01a8 -> line 1185
 *   +0x01b0 -> line 1193
 *   +0x01b8 -> line 1195
 *   +0x01d8 -> line 1196
 *   +0x0204 -> line 1198
 *   +0x0224 -> line 1199
 *   +0x0250 -> line 1202
 *   +0x0270 -> line 1203
 *   +0x029c -> line 1222
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetRotationVectors(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stScaleVec;
    float xZoom;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 1039–1124 */
/* addr: 0x002f8960  size: 792 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1039
 *   +0x0020 -> line 1042
 *   +0x004c -> line 1046
 *   +0x0054 -> line 1051
 *   +0x0074 -> line 1052
 *   +0x0090 -> line 1053
 *   +0x00ac -> line 1055
 *   +0x00b0 -> line 1056
 *   +0x00b4 -> line 1059
 *   +0x00bc -> line 1062
 *   +0x00c4 -> line 1066
 *   +0x00c8 -> line 1069
 *   +0x00ec -> line 1070
 *   +0x0110 -> line 1071
 *   +0x0130 -> line 1073
 *   +0x0138 -> line 1076
 *   +0x0140 -> line 1083
 *   +0x0170 -> line 1084
 *   +0x01a0 -> line 1085
 *   +0x01cc -> line 1087
 *   +0x01d4 -> line 1099
 *   +0x01f0 -> line 1105
 *   +0x0210 -> line 1106
 *   +0x021c -> line 1105
 *   +0x0240 -> line 1106
 *   +0x0248 -> line 1109
 *   +0x0250 -> line 1110
 *   +0x025c -> line 1109
 *   +0x02b8 -> line 1110
 *   +0x02c0 -> line 1113
 *   +0x02d8 -> line 1114
 *   +0x02f8 -> line 1124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetRotationMatrix(MAT_tdstTransformation_* _hTransform, MTH3D_tdstMatrix_* _p_stRotationMatrix)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    float xQW;
    float xQZ;
    float xQY;
    float xQX;
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstVector_* p_stScaleVec;
    float xZoom;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 858–894 */
/* addr: 0x002f8d90  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 858
 *   +0x0028 -> line 865
 *   +0x0034 -> line 866
 *   +0x003c -> line 869
 *   +0x0050 -> line 870
 *   +0x0058 -> line 878
 *   +0x009c -> line 879
 *   +0x00a4 -> line 886
 *   +0x00b4 -> line 894
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetRotationVectorBaseK(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecK)
{
    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stVecK->xX = 0.0f;
        _p_stVecK->xY = 0.0f;
        _p_stVecK->xZ = 1.0f;
        break;
    case MAT_eTransform_Rotation:
        ((unsigned int*)_p_stVecK)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[0];
        ((unsigned int*)_p_stVecK)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[1];
        ((unsigned int*)_p_stVecK)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[2];
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _p_stVecK->xX = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xX;
        _p_stVecK->xY = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xY;
        _p_stVecK->xZ = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xZ;
        break;
    case MAT_eTransform_ComplexRotationScale:
        _p_stVecK->xX = 0.0f;
        _p_stVecK->xY = 0.0f;
        _p_stVecK->xZ = 1.0f;
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 793–845 */
/* addr: 0x002f8e50  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 793
 *   +0x000c -> line 796
 *   +0x003c -> line 803
 *   +0x0048 -> line 804
 *   +0x0050 -> line 807
 *   +0x0064 -> line 808
 *   +0x006c -> line 816
 *   +0x00b0 -> line 817
 *   +0x00b8 -> line 830
 *   +0x00d0 -> line 837
 *   +0x00ec -> line 845
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetRotationVectorBaseJ(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecJ)
{
    MTH4D_tdstMatrix_ TmpMat;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stVecJ->xX = 0.0f;
        _p_stVecJ->xY = 1.0f;
        _p_stVecJ->xZ = 0.0f;
        break;
    case MAT_eTransform_Rotation:
        ((unsigned int*)_p_stVecJ)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[0];
        ((unsigned int*)_p_stVecJ)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[1];
        ((unsigned int*)_p_stVecJ)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[2];
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _p_stVecJ->xX = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xX;
        _p_stVecJ->xY = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xY;
        _p_stVecJ->xZ = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xZ;
        break;
    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY, _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        ((unsigned int*)_p_stVecJ)[0] = ((unsigned int*)&TmpMat.stCol_1)[0];
        ((unsigned int*)_p_stVecJ)[1] = ((unsigned int*)&TmpMat.stCol_1)[1];
        ((unsigned int*)_p_stVecJ)[2] = ((unsigned int*)&TmpMat.stCol_1)[2];
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 746–783 */
/* addr: 0x002f8f50  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 746
 *   +0x0028 -> line 753
 *   +0x0034 -> line 754
 *   +0x003c -> line 757
 *   +0x0050 -> line 758
 *   +0x0058 -> line 766
 *   +0x009c -> line 767
 *   +0x00a4 -> line 774
 *   +0x00b4 -> line 783
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetRotationVectorBaseI(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI)
{
    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stVecI->xX = 1.0f;
        _p_stVecI->xY = 0.0f;
        _p_stVecI->xZ = 0.0f;
        break;
    case MAT_eTransform_Rotation:
        ((unsigned int*)_p_stVecI)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[0];
        ((unsigned int*)_p_stVecI)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[1];
        ((unsigned int*)_p_stVecI)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[2];
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _p_stVecI->xX = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xX;
        _p_stVecI->xY = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xY;
        _p_stVecI->xZ = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xZ;
        break;
    case MAT_eTransform_ComplexRotationScale:
        _p_stVecI->xX = 1.0f;
        _p_stVecI->xY = 0.0f;
        _p_stVecI->xZ = 0.0f;
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 676–733 */
/* addr: 0x002f9010  size: 520 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 676
 *   +0x001c -> line 679
 *   +0x004c -> line 686
 *   +0x005c -> line 687
 *   +0x0068 -> line 688
 *   +0x0070 -> line 689
 *   +0x0078 -> line 692
 *   +0x0090 -> line 693
 *   +0x00a8 -> line 694
 *   +0x00bc -> line 695
 *   +0x00c4 -> line 704
 *   +0x0108 -> line 705
 *   +0x0144 -> line 706
 *   +0x0180 -> line 708
 *   +0x0188 -> line 714
 *   +0x01a0 -> line 721
 *   +0x01a4 -> line 722
 *   +0x01a8 -> line 723
 *   +0x01ac -> line 721
 *   +0x01c0 -> line 722
 *   +0x01d8 -> line 723
 *   +0x01f0 -> line 733
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetRotationVectors(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stVecI, MTH3D_tdstVector_* _p_stVecJ, MTH3D_tdstVector_* _p_stVecK)
{
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stScaleVec;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stVecI->xX = 1.0f;
        _p_stVecI->xY = 0.0f;
        _p_stVecI->xZ = 0.0f;
        _p_stVecJ->xX = 0.0f;
        _p_stVecJ->xY = 1.0f;
        _p_stVecJ->xZ = 0.0f;
        _p_stVecK->xX = 0.0f;
        _p_stVecK->xY = 0.0f;
        _p_stVecK->xZ = 1.0f;
        break;
    case MAT_eTransform_Rotation:
        ((unsigned int*)_p_stVecI)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[0];
        ((unsigned int*)_p_stVecI)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[1];
        ((unsigned int*)_p_stVecI)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[2];
        ((unsigned int*)_p_stVecJ)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[0];
        ((unsigned int*)_p_stVecJ)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[1];
        ((unsigned int*)_p_stVecJ)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[2];
        ((unsigned int*)_p_stVecK)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[0];
        ((unsigned int*)_p_stVecK)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[1];
        ((unsigned int*)_p_stVecK)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[2];
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _p_stVecI->xX = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xX;
        _p_stVecI->xY = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xY;
        _p_stVecI->xZ = (1.0f / _hTransform->stScaleVector.xX) * _hTransform->stTransformMatrix.stCol_0.xZ;
        _p_stVecJ->xX = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xX;
        _p_stVecJ->xY = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xY;
        _p_stVecJ->xZ = (1.0f / _hTransform->stScaleVector.xY) * _hTransform->stTransformMatrix.stCol_1.xZ;
        _p_stVecK->xX = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xX;
        _p_stVecK->xY = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xY;
        _p_stVecK->xZ = (1.0f / _hTransform->stScaleVector.xZ) * _hTransform->stTransformMatrix.stCol_2.xZ;
        break;
    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY, _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        ((unsigned int*)_p_stVecI)[0] = ((unsigned int*)&TmpMat.stCol_0)[0];
        ((unsigned int*)_p_stVecI)[1] = ((unsigned int*)&TmpMat.stCol_0)[1];
        ((unsigned int*)_p_stVecI)[2] = ((unsigned int*)&TmpMat.stCol_0)[2];
        ((unsigned int*)_p_stVecJ)[0] = ((unsigned int*)&TmpMat.stCol_1)[0];
        ((unsigned int*)_p_stVecJ)[1] = ((unsigned int*)&TmpMat.stCol_1)[1];
        ((unsigned int*)_p_stVecJ)[2] = ((unsigned int*)&TmpMat.stCol_1)[2];
        ((unsigned int*)_p_stVecK)[0] = ((unsigned int*)&TmpMat.stCol_2)[0];
        ((unsigned int*)_p_stVecK)[1] = ((unsigned int*)&TmpMat.stCol_2)[1];
        ((unsigned int*)_p_stVecK)[2] = ((unsigned int*)&TmpMat.stCol_2)[2];
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 613–663 */
/* addr: 0x002f9220  size: 456 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 613
 *   +0x000c -> line 616
 *   +0x003c -> line 623
 *   +0x0060 -> line 624
 *   +0x0068 -> line 627
 *   +0x00ac -> line 628
 *   +0x00b4 -> line 637
 *   +0x00e4 -> line 638
 *   +0x0114 -> line 639
 *   +0x0148 -> line 641
 *   +0x0150 -> line 647
 *   +0x0168 -> line 653
 *   +0x01b8 -> line 663
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vGetRotationMatrix(MAT_tdstTransformation_* _hTransform, MTH3D_tdstMatrix_* _p_stRotationMatrix)
{
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstVector_* p_stScaleVec;

    switch (_hTransform->eType)
    {
    case MAT_eTransform_Identity:
    case MAT_eTransform_Translation:
    case MAT_eTransform_Zoom:
    case MAT_eTransform_Scale:
        _p_stRotationMatrix->stCol_0.xX = 1.0f;
        _p_stRotationMatrix->stCol_0.xY = 0.0f;
        _p_stRotationMatrix->stCol_0.xZ = 0.0f;
        _p_stRotationMatrix->stCol_1.xX = 0.0f;
        _p_stRotationMatrix->stCol_1.xY = 1.0f;
        _p_stRotationMatrix->stCol_1.xZ = 0.0f;
        _p_stRotationMatrix->stCol_2.xX = 0.0f;
        _p_stRotationMatrix->stCol_2.xY = 0.0f;
        _p_stRotationMatrix->stCol_2.xZ = 1.0f;
        break;
    case MAT_eTransform_Rotation:
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_0)[2];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_1)[2];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[0] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[1] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[2] = ((unsigned int*)&_hTransform->stTransformMatrix.stCol_2)[2];
        break;
    case MAT_eTransform_RotationZoom:
    case MAT_eTransform_RotationScale:
        _p_stRotationMatrix->stCol_0.xX = _hTransform->stTransformMatrix.stCol_0.xX / _hTransform->stScaleVector.xX;
        _p_stRotationMatrix->stCol_0.xY = _hTransform->stTransformMatrix.stCol_0.xY / _hTransform->stScaleVector.xX;
        _p_stRotationMatrix->stCol_0.xZ = _hTransform->stTransformMatrix.stCol_0.xZ / _hTransform->stScaleVector.xX;
        _p_stRotationMatrix->stCol_1.xX = _hTransform->stTransformMatrix.stCol_1.xX / _hTransform->stScaleVector.xY;
        _p_stRotationMatrix->stCol_1.xY = _hTransform->stTransformMatrix.stCol_1.xY / _hTransform->stScaleVector.xY;
        _p_stRotationMatrix->stCol_1.xZ = _hTransform->stTransformMatrix.stCol_1.xZ / _hTransform->stScaleVector.xY;
        _p_stRotationMatrix->stCol_2.xX = _hTransform->stTransformMatrix.stCol_2.xX / _hTransform->stScaleVector.xZ;
        _p_stRotationMatrix->stCol_2.xY = _hTransform->stTransformMatrix.stCol_2.xY / _hTransform->stScaleVector.xZ;
        _p_stRotationMatrix->stCol_2.xZ = _hTransform->stTransformMatrix.stCol_2.xZ / _hTransform->stScaleVector.xZ;
        break;
    case MAT_eTransform_ComplexRotationScale:
        MAT_fn_vQuatToMatrix(&TmpMat, _hTransform->stScaleVector.xX, _hTransform->stScaleVector.xY, _hTransform->stScaleVector.xZ, _hTransform->stScaleVector.xW);
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[0] = ((unsigned int*)&TmpMat.stCol_0)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[1] = ((unsigned int*)&TmpMat.stCol_0)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_0)[2] = ((unsigned int*)&TmpMat.stCol_0)[2];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[0] = ((unsigned int*)&TmpMat.stCol_1)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[1] = ((unsigned int*)&TmpMat.stCol_1)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_1)[2] = ((unsigned int*)&TmpMat.stCol_1)[2];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[0] = ((unsigned int*)&TmpMat.stCol_2)[0];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[1] = ((unsigned int*)&TmpMat.stCol_2)[1];
        ((unsigned int*)&_p_stRotationMatrix->stCol_2)[2] = ((unsigned int*)&TmpMat.stCol_2)[2];
        break;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 535–560 */
/* addr: 0x002f93f0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 535
 *   +0x0014 -> line 536
 *   +0x001c -> line 537
 *   +0x0028 -> line 539
 *   +0x002c -> line 549
 *   +0x0030 -> line 539
 *   +0x0034 -> line 545
 *   +0x0038 -> line 541
 *   +0x0048 -> line 545
 *   +0x0058 -> line 549
 *   +0x0068 -> line 553
 *   +0x0078 -> line 557
 *   +0x0088 -> line 560
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetZRotation(MAT_tdstTransformation_* _hTransform, float _xXAngle)
{
    float xCos;
    float xSin;

    xSin = sinf(_xXAngle);
    xCos = cosf(_xXAngle);

    _hTransform->eType = MAT_eTransform_Rotation;

    _hTransform->stTransformMatrix.stCol_0.xX = xCos;
    _hTransform->stTransformMatrix.stCol_0.xY = xSin;
    _hTransform->stTransformMatrix.stCol_0.xZ = 0.0f;
    _hTransform->stTransformMatrix.stCol_0.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_1.xX = -xSin;
    _hTransform->stTransformMatrix.stCol_1.xY = xCos;
    _hTransform->stTransformMatrix.stCol_1.xZ = 0.0f;
    _hTransform->stTransformMatrix.stCol_1.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_2.xX = 0.0f;
    _hTransform->stTransformMatrix.stCol_2.xY = 0.0f;
    _hTransform->stTransformMatrix.stCol_2.xZ = 1.0f;
    _hTransform->stTransformMatrix.stCol_2.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_3.xX = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xY = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xZ = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;

    _hTransform->stScaleVector.xX = 1.0f;
    _hTransform->stScaleVector.xY = 1.0f;
    _hTransform->stScaleVector.xZ = 1.0f;
    _hTransform->stScaleVector.xW = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 469–494 */
/* addr: 0x002f9490  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 469
 *   +0x0014 -> line 470
 *   +0x001c -> line 471
 *   +0x0028 -> line 473
 *   +0x002c -> line 475
 *   +0x0030 -> line 473
 *   +0x0034 -> line 483
 *   +0x0038 -> line 475
 *   +0x0048 -> line 479
 *   +0x0058 -> line 483
 *   +0x0068 -> line 487
 *   +0x0078 -> line 491
 *   +0x0088 -> line 494
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vSetXRotation(MAT_tdstTransformation_* _hTransform, float _xXAngle)
{
    float xCos;
    float xSin;

    xSin = sinf(_xXAngle);
    xCos = cosf(_xXAngle);

    _hTransform->eType = MAT_eTransform_Rotation;

    _hTransform->stTransformMatrix.stCol_0.xX = 1.0f;
    _hTransform->stTransformMatrix.stCol_0.xY = 0.0f;
    _hTransform->stTransformMatrix.stCol_0.xZ = 0.0f;
    _hTransform->stTransformMatrix.stCol_0.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_1.xX = 0.0f;
    _hTransform->stTransformMatrix.stCol_1.xY = xCos;
    _hTransform->stTransformMatrix.stCol_1.xZ = xSin;
    _hTransform->stTransformMatrix.stCol_1.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_2.xX = 0.0f;
    _hTransform->stTransformMatrix.stCol_2.xY = -xSin;
    _hTransform->stTransformMatrix.stCol_2.xZ = xCos;
    _hTransform->stTransformMatrix.stCol_2.xW = 0.0f;

    _hTransform->stTransformMatrix.stCol_3.xX = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xY = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xZ = 0.0f;
    _hTransform->stTransformMatrix.stCol_3.xW = 1.0f;

    _hTransform->stScaleVector.xX = 1.0f;
    _hTransform->stScaleVector.xY = 1.0f;
    _hTransform->stScaleVector.xZ = 1.0f;
    _hTransform->stScaleVector.xW = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 346–444 */
/* addr: 0x002f9530  size: 836 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 346
 *   +0x0004 -> line 355
 *   +0x0008 -> line 346
 *   +0x000c -> line 355
 *   +0x0010 -> line 346
 *   +0x0034 -> line 355
 *   +0x0038 -> line 356
 *   +0x0040 -> line 357
 *   +0x004c -> line 359
 *   +0x0050 -> line 361
 *   +0x0054 -> line 359
 *   +0x0060 -> line 361
 *   +0x0064 -> line 359
 *   +0x0068 -> line 361
 *   +0x008c -> line 368
 *   +0x0090 -> line 370
 *   +0x0094 -> line 368
 *   +0x0098 -> line 371
 *   +0x009c -> line 370
 *   +0x00a0 -> line 371
 *   +0x00a4 -> line 370
 *   +0x00b0 -> line 371
 *   +0x00bc -> line 370
 *   +0x00c8 -> line 371
 *   +0x00d0 -> line 372
 *   +0x00f0 -> line 374
 *   +0x00f8 -> line 381
 *   +0x00fc -> line 379
 *   +0x0100 -> line 378
 *   +0x0104 -> line 381
 *   +0x011c -> line 382
 *   +0x0148 -> line 383
 *   +0x0170 -> line 384
 *   +0x0194 -> line 386
 *   +0x019c -> line 391
 *   +0x01a0 -> line 393
 *   +0x01a8 -> line 391
 *   +0x01ac -> line 393
 *   +0x01b0 -> line 390
 *   +0x01b4 -> line 393
 *   +0x01c0 -> line 394
 *   +0x01f0 -> line 395
 *   +0x021c -> line 396
 *   +0x0244 -> line 398
 *   +0x024c -> line 403
 *   +0x0258 -> line 406
 *   +0x025c -> line 403
 *   +0x0260 -> line 406
 *   +0x0264 -> line 403
 *   +0x026c -> line 406
 *   +0x0274 -> line 408
 *   +0x028c -> line 410
 *   +0x029c -> line 416
 *   +0x02a8 -> line 418
 *   +0x02b0 -> line 426
 *   +0x02bc -> line 428
 *   +0x02c0 -> line 426
 *   +0x02c8 -> line 428
 *   +0x02d8 -> line 426
 *   +0x02e4 -> line 428
 *   +0x02ec -> line 429
 *   +0x02fc -> line 435
 *   +0x0320 -> line 444
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vRotateAroundAxisNoTranslation(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stAxisVector, float _xAngle)
{
    MTH3D_tdstVector_ stScale;
    MTH4D_tdstVector_* p_stScale;
    float xZoomFactor;
    MTH4D_tdstVector_ stSaveTranslation;
    MTH4D_tdstMatrix_ stMatrix;
    MTH4D_tdstVector_ stTranslation;
    float xSinAngle;
    float xCosAngle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 225–334 */
/* addr: 0x002f9880  size: 792 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 225
 *   +0x0004 -> line 233
 *   +0x0008 -> line 225
 *   +0x000c -> line 233
 *   +0x0010 -> line 225
 *   +0x0034 -> line 233
 *   +0x0038 -> line 234
 *   +0x0040 -> line 235
 *   +0x004c -> line 237
 *   +0x0050 -> line 239
 *   +0x0054 -> line 237
 *   +0x0060 -> line 239
 *   +0x0064 -> line 237
 *   +0x0068 -> line 239
 *   +0x008c -> line 243
 *   +0x0090 -> line 244
 *   +0x0098 -> line 243
 *   +0x009c -> line 244
 *   +0x00ac -> line 245
 *   +0x00b4 -> line 249
 *   +0x00b8 -> line 250
 *   +0x00c0 -> line 249
 *   +0x00c4 -> line 250
 *   +0x00d4 -> line 253
 *   +0x00e4 -> line 257
 *   +0x00ec -> line 265
 *   +0x00f0 -> line 262
 *   +0x00f4 -> line 261
 *   +0x00f8 -> line 265
 *   +0x0110 -> line 267
 *   +0x0114 -> line 272
 *   +0x0118 -> line 267
 *   +0x011c -> line 272
 *   +0x0124 -> line 267
 *   +0x0148 -> line 268
 *   +0x0170 -> line 269
 *   +0x0194 -> line 272
 *   +0x019c -> line 277
 *   +0x01a4 -> line 282
 *   +0x01a8 -> line 285
 *   +0x01b0 -> line 282
 *   +0x01b4 -> line 285
 *   +0x01b8 -> line 281
 *   +0x01bc -> line 285
 *   +0x01c8 -> line 287
 *   +0x01cc -> line 291
 *   +0x01d0 -> line 287
 *   +0x01d8 -> line 291
 *   +0x01e0 -> line 287
 *   +0x0204 -> line 288
 *   +0x0230 -> line 289
 *   +0x0258 -> line 291
 *   +0x0260 -> line 296
 *   +0x0268 -> line 301
 *   +0x0274 -> line 304
 *   +0x0278 -> line 301
 *   +0x027c -> line 304
 *   +0x0280 -> line 301
 *   +0x0288 -> line 304
 *   +0x0290 -> line 306
 *   +0x02a8 -> line 308
 *   +0x02b8 -> line 314
 *   +0x02c4 -> line 316
 *   +0x02cc -> line 321
 *   +0x02e4 -> line 322
 *   +0x02f4 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vRotateAroundAxis(MAT_tdstTransformation_* _hTransform, MTH3D_tdstVector_* _p_stAxisVector, float _xAngle)
{
    MTH3D_tdstVector_ stScale;
    MTH4D_tdstVector_* p_stScale;
    float xZoomFactor;
    MTH4D_tdstMatrix_ stMatrix;
    float xSinAngle;
    float xCosAngle;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 136–214 */
/* addr: 0x002f9bd0  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 136
 *   +0x001c -> line 139
 *   +0x0048 -> line 142
 *   +0x0050 -> line 143
 *   +0x0058 -> line 144
 *   +0x0060 -> line 147
 *   +0x0068 -> line 149
 *   +0x0090 -> line 152
 *   +0x0098 -> line 157
 *   +0x009c -> line 158
 *   +0x00a0 -> line 157
 *   +0x00a4 -> line 158
 *   +0x00d4 -> line 159
 *   +0x00e4 -> line 160
 *   +0x0108 -> line 163
 *   +0x0110 -> line 168
 *   +0x0118 -> line 169
 *   +0x011c -> line 180
 *   +0x0120 -> line 177
 *   +0x0124 -> line 183
 *   +0x0128 -> line 178
 *   +0x012c -> line 183
 *   +0x0170 -> line 188
 *   +0x0178 -> line 189
 *   +0x0184 -> line 188
 *   +0x01a4 -> line 189
 *   +0x01ac -> line 194
 *   +0x01bc -> line 196
 *   +0x01c4 -> line 203
 *   +0x01cc -> line 204
 *   +0x01d4 -> line 214
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vInvertRotation(MAT_tdstTransformation_* _hDest, MAT_tdstTransformation_* _hSource)
{
    MTH4D_tdstMatrix_* p_stTranspMatrix;
    MTH4D_tdstVector_* p_stVec;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\mat\matsprot.c lines 26–128 */
/* addr: 0x002f9dc0  size: 1108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 26
 *   +0x0010 -> line 29
 *   +0x003c -> line 39
 *   +0x0040 -> line 40
 *   +0x0044 -> line 39
 *   +0x0048 -> line 40
 *   +0x0078 -> line 41
 *   +0x0084 -> line 42
 *   +0x008c -> line 47
 *   +0x0094 -> line 55
 *   +0x0098 -> line 53
 *   +0x009c -> line 55
 *   +0x00f4 -> line 59
 *   +0x0144 -> line 63
 *   +0x0194 -> line 66
 *   +0x01ec -> line 68
 *   +0x01f4 -> line 72
 *   +0x01fc -> line 83
 *   +0x0218 -> line 91
 *   +0x0224 -> line 94
 *   +0x0228 -> line 91
 *   +0x022c -> line 94
 *   +0x0230 -> line 91
 *   +0x0234 -> line 94
 *   +0x0238 -> line 91
 *   +0x0248 -> line 94
 *   +0x02c8 -> line 97
 *   +0x0324 -> line 101
 *   +0x0374 -> line 105
 *   +0x03c4 -> line 108
 *   +0x0414 -> line 118
 *   +0x0418 -> line 108
 *   +0x0420 -> line 110
 *   +0x042c -> line 115
 *   +0x043c -> line 118
 *   +0x0440 -> line 128
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MAT_fn_vNormalize(MAT_tdstTransformation_* _hTransform)
{
    MTH4D_tdstMatrix_* p_stMatrix;
    MTH4D_tdstMatrix_ TmpMat;
    MTH4D_tdstMatrix_* p_stMat;
    /* TODO: decompile from asm/... */
}
