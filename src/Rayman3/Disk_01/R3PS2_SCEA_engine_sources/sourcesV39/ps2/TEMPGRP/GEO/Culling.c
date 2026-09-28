/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;

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

struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

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

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    MAT_tdstTransformation_ stMatrix; /* +0x10 */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
    float xXProjectionRatio; /* +0x9c */
    float xYProjectionRatio; /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft; /* +0xa4 */
    float xDistPlaneLeft; /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight; /* +0xb4 */
    float xDistPlaneRight; /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp; /* +0xc4 */
    float xDistPlaneUp; /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown; /* +0xd4 */
    float xDistPlaneDown; /* +0xe0 */
    float xRatio; /* +0xe4 */
    unsigned char ucCameraTransparency; /* +0xe8 */
    float xTranspDist; /* +0xec */
    unsigned char bCameraIsMirrored; /* +0xf0 */
};

float GEO_g_xZFar;
float GEO_g_xZFarTransparencyZone;
float GEO_g_xOoZFarTransparencyZone;
float GEO_g_xZFarTransparencyLevel;
MTH3D_tdstVector_ gs_stCameraPosInGlobal;
static MTH3D_tdstVector_ gs_stGlobalNormPlaneNear;
static MTH3D_tdstVector_ gs_stGlobalNormPlaneDown;
static MTH3D_tdstVector_ gs_stGlobalNormPlaneUp;
static MTH3D_tdstVector_ gs_stGlobalNormPlaneRight;
static MTH3D_tdstVector_ gs_stGlobalNormPlaneLeft;

extern unsigned char g_ucGEOModuleId;
extern unsigned char Erm_fn_ucInitErrMsg(void);
extern void GLI_vSignalCurrentMemoryChannel(int ucCurrentChannel);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 23–38 */
/* addr: 0x002a0880  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 23
 *   +0x0004 -> line 24
 *   +0x0008 -> line 23
 *   +0x000c -> line 24
 *   +0x0024 -> line 37
 *   +0x0030 -> line 38
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_xInitGEOError(void)
{
    if (g_ucGEOModuleId == 255)
        g_ucGEOModuleId = Erm_fn_ucInitErrMsg();
    GLI_vSignalCurrentMemoryChannel(255);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 349–538 */
/* addr: 0x002a08c0  size: 1768 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 357
 *   +0x0004 -> line 355
 *   +0x0008 -> line 357
 *   +0x000c -> line 360
 *   +0x0010 -> line 357
 *   +0x0014 -> line 363
 *   +0x0018 -> line 358
 *   +0x0020 -> line 357
 *   +0x0028 -> line 355
 *   +0x002c -> line 357
 *   +0x0030 -> line 352
 *   +0x0034 -> line 357
 *   +0x003c -> line 358
 *   +0x0040 -> line 357
 *   +0x0048 -> line 358
 *   +0x0050 -> line 357
 *   +0x0058 -> line 349
 *   +0x005c -> line 363
 *   +0x0064 -> line 365
 *   +0x006c -> line 366
 *   +0x0074 -> line 365
 *   +0x0078 -> line 367
 *   +0x0080 -> line 366
 *   +0x0084 -> line 369
 *   +0x0088 -> line 368
 *   +0x008c -> line 367
 *   +0x0090 -> line 372
 *   +0x00c0 -> line 375
 *   +0x00f4 -> line 377
 *   +0x00fc -> line 380
 *   +0x0158 -> line 381
 *   +0x0168 -> line 383
 *   +0x016c -> line 390
 *   +0x0178 -> line 392
 *   +0x0194 -> line 394
 *   +0x019c -> line 396
 *   +0x01a4 -> line 397
 *   +0x01ac -> line 396
 *   +0x01b0 -> line 399
 *   +0x01b4 -> line 398
 *   +0x01bc -> line 397
 *   +0x01c0 -> line 400
 *   +0x01c4 -> line 398
 *   +0x01c8 -> line 403
 *   +0x0228 -> line 410
 *   +0x0238 -> line 412
 *   +0x0240 -> line 415
 *   +0x0248 -> line 416
 *   +0x0258 -> line 417
 *   +0x027c -> line 420
 *   +0x0280 -> line 422
 *   +0x0284 -> line 424
 *   +0x028c -> line 429
 *   +0x0290 -> line 431
 *   +0x0298 -> line 434
 *   +0x029c -> line 438
 *   +0x02a8 -> line 440
 *   +0x02b0 -> line 441
 *   +0x02b8 -> line 440
 *   +0x02bc -> line 442
 *   +0x02c4 -> line 441
 *   +0x02c8 -> line 444
 *   +0x02cc -> line 443
 *   +0x02d0 -> line 442
 *   +0x02d4 -> line 448
 *   +0x0304 -> line 449
 *   +0x0334 -> line 454
 *   +0x033c -> line 457
 *   +0x0374 -> line 458
 *   +0x03a8 -> line 460
 *   +0x03ac -> line 465
 *   +0x03b8 -> line 467
 *   +0x03c0 -> line 468
 *   +0x03c8 -> line 467
 *   +0x03cc -> line 469
 *   +0x03d4 -> line 468
 *   +0x03d8 -> line 471
 *   +0x03dc -> line 470
 *   +0x03e0 -> line 469
 *   +0x03e4 -> line 475
 *   +0x0414 -> line 476
 *   +0x0444 -> line 478
 *   +0x044c -> line 481
 *   +0x0484 -> line 482
 *   +0x04b8 -> line 484
 *   +0x04bc -> line 489
 *   +0x04c8 -> line 491
 *   +0x04d0 -> line 492
 *   +0x04d8 -> line 491
 *   +0x04dc -> line 493
 *   +0x04e4 -> line 492
 *   +0x04e8 -> line 495
 *   +0x04ec -> line 494
 *   +0x04f0 -> line 493
 *   +0x04f4 -> line 499
 *   +0x0524 -> line 500
 *   +0x0554 -> line 502
 *   +0x055c -> line 505
 *   +0x0594 -> line 506
 *   +0x05c8 -> line 508
 *   +0x05cc -> line 514
 *   +0x05d8 -> line 516
 *   +0x05e4 -> line 517
 *   +0x05ec -> line 519
 *   +0x05f0 -> line 517
 *   +0x05f4 -> line 518
 *   +0x05fc -> line 520
 *   +0x0600 -> line 518
 *   +0x0604 -> line 524
 *   +0x0634 -> line 525
 *   +0x0664 -> line 527
 *   +0x066c -> line 530
 *   +0x06a4 -> line 531
 *   +0x06d8 -> line 533
 *   +0x06dc -> line 537
 *   +0x06e0 -> line 538
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GEO_lCullingBox(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stMin, MTH3D_tdstVector_* p_stMax, int _lCullingResult)
{
    unsigned char bComputed;
    GLI_tdstCamera_* hCamera;
    float xValue5;
    float xValue4;
    float xValue3;
    float xValue2;
    float xValue1;
    float xValue0;
    float xCompute;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 258–295 */
/* addr: 0x002a0fb0  size: 236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 258
 *   +0x0010 -> line 264
 *   +0x001c -> line 272
 *   +0x0028 -> line 276
 *   +0x002c -> line 277
 *   +0x0030 -> line 276
 *   +0x0034 -> line 277
 *   +0x0038 -> line 276
 *   +0x0044 -> line 277
 *   +0x0048 -> line 276
 *   +0x004c -> line 277
 *   +0x005c -> line 280
 *   +0x0060 -> line 283
 *   +0x0064 -> line 280
 *   +0x006c -> line 283
 *   +0x0078 -> line 280
 *   +0x0090 -> line 283
 *   +0x0098 -> line 286
 *   +0x00ac -> line 289
 *   +0x00c0 -> line 292
 *   +0x00d4 -> line 294
 *   +0x00d8 -> line 295
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_fn_vComputeCameraParametersForCulling(GLD_tdstViewportAttributes_* p_stVpt, float _xZFar)
{
    GLI_tdstCamera_* hCamera;
    MAT_tdstTransformation_ stMatrixInverse;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 108–238 */
/* addr: 0x002a10a0  size: 988 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 108
 *   +0x0030 -> line 117
 *   +0x0034 -> line 113
 *   +0x0038 -> line 117
 *   +0x008c -> line 120
 *   +0x00c4 -> line 126
 *   +0x00c8 -> line 129
 *   +0x00dc -> line 126
 *   +0x00e0 -> line 129
 *   +0x0128 -> line 131
 *   +0x012c -> line 133
 *   +0x0130 -> line 129
 *   +0x0140 -> line 133
 *   +0x0148 -> line 135
 *   +0x0164 -> line 137
 *   +0x016c -> line 142
 *   +0x017c -> line 144
 *   +0x0180 -> line 149
 *   +0x018c -> line 151
 *   +0x01a8 -> line 153
 *   +0x01b8 -> line 155
 *   +0x01bc -> line 156
 *   +0x01c4 -> line 159
 *   +0x01dc -> line 161
 *   +0x0200 -> line 162
 *   +0x0208 -> line 167
 *   +0x020c -> line 169
 *   +0x0214 -> line 174
 *   +0x0218 -> line 176
 *   +0x0220 -> line 179
 *   +0x0224 -> line 183
 *   +0x0230 -> line 185
 *   +0x0254 -> line 186
 *   +0x026c -> line 188
 *   +0x0274 -> line 190
 *   +0x0284 -> line 192
 *   +0x0288 -> line 197
 *   +0x0294 -> line 199
 *   +0x02b8 -> line 200
 *   +0x02d0 -> line 202
 *   +0x02d8 -> line 204
 *   +0x02e8 -> line 206
 *   +0x02ec -> line 211
 *   +0x02f8 -> line 213
 *   +0x031c -> line 214
 *   +0x0334 -> line 216
 *   +0x033c -> line 218
 *   +0x034c -> line 220
 *   +0x0350 -> line 225
 *   +0x035c -> line 227
 *   +0x0380 -> line 228
 *   +0x0398 -> line 230
 *   +0x03a0 -> line 232
 *   +0x03b0 -> line 234
 *   +0x03b4 -> line 237
 *   +0x03b8 -> line 238
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GEO_lMainCullingSphere(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stShereCenter, float xRadius, MAT_tdstTransformation_* p_stMatrix, int _lCullingResult)
{
    float xDotProduct;
    GLI_tdstCamera_* param0;
    MTH3D_tdstVector_ stCenter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 76–76 */
/* addr: 0x002a1480  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 76
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_xReinitZFarTransparencyLevel(void)
{
    GEO_g_xZFarTransparencyLevel = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 75–75 */
/* addr: 0x002a1490  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 75
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GEO_xGetZFarTransparencyLevel(void)
{
    return GEO_g_xZFarTransparencyLevel;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 71–73 */
/* addr: 0x002a14a0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 *   +0x0018 -> line 72
 *   +0x002c -> line 73
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetZFarTransparencyZone(float _xZ)
{
    GEO_g_xZFarTransparencyZone = _xZ;
    if (_xZ)
        GEO_g_xOoZFarTransparencyZone = 1.0f / _xZ;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 67–67 */
/* addr: 0x002a14e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
float GEO_xGetZFarTransparencyZone(void)
{
    return GEO_g_xZFarTransparencyZone;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\Culling.c lines 65–65 */
/* addr: 0x002a14f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 65
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GEO_vSetZFar(float _xZ)
{
    GEO_g_xZFar = _xZ;
}
