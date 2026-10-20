/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

/* The retail unit was built as C: its debug records say "Language: C" and its
 * symbols carry no C++ ABI suffix, so the .cxx extension is compiled with the
 * C++ mode switched off. */
#pragma cplusplus off

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GLI_tdst2DVertex_ GLI_tdst2DVertex_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstAligned2DVector_ GLI_tdstAligned2DVector_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct stRECT stRECT;
typedef struct stPOINT stPOINT;

struct stPOINT { int x; int y; };
struct stRECT { int left, top, right, bottom; };
struct MTH3D_tdstVector_ { float xX, xY, xZ; };
struct MTH4D_tdstVector_ { float xX, xY, xZ, xW; } __attribute__((aligned(16)));
struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0;
    MTH4D_tdstVector_ stCol_1;
    MTH4D_tdstVector_ stCol_2;
    MTH4D_tdstVector_ stCol_3;
};
struct MAT_tdstTransformation_ {
    int eType;                                     /* +0x0 */
    unsigned char _extractor_padding_00[12];       /* +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix;           /* +0x10 */
    MTH4D_tdstVector_ stScaleVector;               /* +0x50 */
};
struct GLI_tdst2DVertex_ { float xX, xY, xOoZ; };
struct GLI_tdstAligned2DVector_ { float xX, xY; };

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight;      /* +0x0 */
    unsigned int dwInitialWidth;       /* +0x4 */
    unsigned int dwHeight;             /* +0x8 */
    unsigned int dwWidth;              /* +0xc */
    unsigned int dwTopInPix;           /* +0x10 */
    unsigned int dwBottomInPix;        /* +0x14 */
    unsigned int dwLeftInPix;          /* +0x18 */
    unsigned int dwRightInPix;         /* +0x1c */
    unsigned int dwTopInPixForClip;    /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip;   /* +0x28 */
    unsigned int dwRightInPixForClip;  /* +0x2c */
    unsigned int dwWidthInPercent;     /* +0x30 */
    unsigned int dwHeightInPercent;    /* +0x34 */
    unsigned int dwClipTopInPix;       /* +0x38 */
    unsigned int dwClipBottomInPix;    /* +0x3c */
    unsigned int dwClipLeftInPix;      /* +0x40 */
    unsigned int dwClipRightInPix;     /* +0x44 */
    unsigned int dwClipTopInPerMille;  /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX;                   /* +0x58 */
    int iOffsetPosY;                   /* +0x5c */
    int p_cVirtualScreen;              /* +0x60 */
    int lPitch;                        /* +0x64 */
    int p_vSpecificToXD;               /* +0x68 */
    short hDevice;                     /* +0x6c */
    short hViewport;                   /* +0x6e */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight;             /* +0x0 */
    unsigned int dwWidth;              /* +0x4 */
    float xPixelDimensionX;            /* +0x8 */
    float xPixelDimensionY;            /* +0xc */
    int p_cVirtualScreen;              /* +0x10 */
    int lPitch;                        /* +0x14 */
    int p_sZBuffer;                    /* +0x18 */
    unsigned int dwFullScreenModeX;    /* +0x1c */
    unsigned int dwFullScreenModeY;    /* +0x20 */
    unsigned int dwFullScreenModeBpp;  /* +0x24 */
    int hFullScreenModeWnd;            /* +0x28 */
    int hNormalModeWnd;                /* +0x2c */
    int bFullScreen;                   /* +0x30 */
    unsigned int uiTypeDriver;         /* +0x34 */
    stPOINT pClientOnPrimary;          /* +0x38 */
    stRECT rtClientRect;               /* +0x40 */
    stRECT rtWindowRect;               /* +0x50 */
};

struct GLI_tdstCamera_ {
    int lCameraMode;                               /* +0x0 */
    unsigned char _extractor_padding_00[12];       /* +0x4..0xf */
    MAT_tdstTransformation_ stMatrix;              /* +0x10 */
    float xAlphaX;                                 /* +0x70 */
    float xAlphaY;                                 /* +0x74 */
    float xNear;                                   /* +0x78 */
    float xFar;                                    /* +0x7c */
    float xScreen;                                 /* +0x80 */
    GLI_tdst2DVertex_ stScale;                     /* +0x84 */
    GLI_tdst2DVertex_ stTrans;                     /* +0x90 */
    float xXProjectionRatio;                       /* +0x9c */
    float xYProjectionRatio;                       /* +0xa0 */
    MTH3D_tdstVector_ stNormPlaneLeft;             /* +0xa4 */
    float xDistPlaneLeft;                          /* +0xb0 */
    MTH3D_tdstVector_ stNormPlaneRight;            /* +0xb4 */
    float xDistPlaneRight;                         /* +0xc0 */
    MTH3D_tdstVector_ stNormPlaneUp;               /* +0xc4 */
    float xDistPlaneUp;                            /* +0xd0 */
    MTH3D_tdstVector_ stNormPlaneDown;             /* +0xd4 */
    float xDistPlaneDown;                          /* +0xe0 */
    float xRatio;                                  /* +0xe4 */
    unsigned char ucCameraTransparency;            /* +0xe8 */
    float xTranspDist;                             /* +0xec */
    unsigned char bCameraIsMirrored;               /* +0xf0 */
};

/* External engine entry points used by this unit. */
extern int GLD_bGetDeviceAttributes(short hDev, GLD_tdstDeviceAttributes_* pstDevAttrib);
extern int GLD_bGetViewportAttributes(short hDev, short hVP, GLD_tdstViewportAttributes_* pstViewAttrib);
extern GLI_tdstCamera_* p_stCamAntiBug;
extern float tanf(float x);
extern void MAT_fn_vInvert(MAT_tdstTransformation_* pDest, MAT_tdstTransformation_* pSource);
extern float GLI_g_fCurrentCameraRatio;
extern float GLI_g_fCurrentCameraxAngle;

/* The retail unit computes a square root with the R5900 sqrt.s instruction,
 * which no C expression can produce under the project baseline. */
#define MTH_SQRT_TO(_result, _value) \
    asm { sqrt.s _result, _value }

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 441–664 */
/* addr: 0x002b14e0  size: 1632 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 441
 *   +0x0020 -> line 453
 *   +0x0024 -> line 441
 *   +0x0050 -> line 458
 *   +0x0084 -> line 459
 *   +0x00b4 -> line 461
 *   +0x00e4 -> line 464
 *   +0x00e8 -> line 465
 *   +0x00f4 -> line 468
 *   +0x00f8 -> line 467
 *   +0x00fc -> line 468
 *   +0x0100 -> line 467
 *   +0x0104 -> line 468
 *   +0x0110 -> line 469
 *   +0x0114 -> line 468
 *   +0x0118 -> line 469
 *   +0x0134 -> line 472
 *   +0x0144 -> line 474
 *   +0x0158 -> line 478
 *   +0x015c -> line 479
 *   +0x0168 -> line 481
 *   +0x01b0 -> line 484
 *   +0x01c0 -> line 486
 *   +0x01d0 -> line 490
 *   +0x01e4 -> line 491
 *   +0x01f8 -> line 494
 *   +0x0208 -> line 495
 *   +0x0210 -> line 494
 *   +0x0214 -> line 495
 *   +0x022c -> line 497
 *   +0x023c -> line 499
 *   +0x026c -> line 502
 *   +0x0270 -> line 505
 *   +0x0278 -> line 508
 *   +0x0288 -> line 515
 *   +0x028c -> line 517
 *   +0x029c -> line 519
 *   +0x02b8 -> line 520
 *   +0x02d0 -> line 521
 *   +0x02e8 -> line 522
 *   +0x0300 -> line 523
 *   +0x0308 -> line 522
 *   +0x030c -> line 523
 *   +0x0324 -> line 525
 *   +0x033c -> line 526
 *   +0x0354 -> line 549
 *   +0x035c -> line 553
 *   +0x038c -> line 556
 *   +0x0394 -> line 560
 *   +0x0398 -> line 562
 *   +0x03b0 -> line 564
 *   +0x03bc -> line 566
 *   +0x03cc -> line 569
 *   +0x03d0 -> line 566
 *   +0x03d4 -> line 569
 *   +0x03dc -> line 566
 *   +0x03e0 -> line 567
 *   +0x03e8 -> line 568
 *   +0x03ec -> line 570
 *   +0x03f8 -> line 574
 *   +0x0428 -> line 576
 *   +0x0434 -> line 580
 *   +0x043c -> line 589
 *   +0x0440 -> line 580
 *   +0x0444 -> line 589
 *   +0x0448 -> line 576
 *   +0x044c -> line 580
 *   +0x0454 -> line 589
 *   +0x0458 -> line 576
 *   +0x0460 -> line 580
 *   +0x0470 -> line 584
 *   +0x0484 -> line 588
 *   +0x0488 -> line 593
 *   +0x04b8 -> line 595
 *   +0x04c4 -> line 599
 *   +0x04cc -> line 608
 *   +0x04d0 -> line 599
 *   +0x04d4 -> line 608
 *   +0x04d8 -> line 595
 *   +0x04dc -> line 599
 *   +0x04e4 -> line 608
 *   +0x04e8 -> line 595
 *   +0x04f0 -> line 599
 *   +0x0500 -> line 603
 *   +0x0514 -> line 607
 *   +0x0518 -> line 612
 *   +0x0520 -> line 608
 *   +0x0524 -> line 612
 *   +0x053c -> line 614
 *   +0x0558 -> line 623
 *   +0x055c -> line 625
 *   +0x056c -> line 627
 *   +0x0588 -> line 628
 *   +0x05a0 -> line 629
 *   +0x05b8 -> line 630
 *   +0x05d0 -> line 631
 *   +0x05d8 -> line 630
 *   +0x05dc -> line 631
 *   +0x05f4 -> line 633
 *   +0x060c -> line 634
 *   +0x0620 -> line 664
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char GLI_vAdjustCameraToMirror(GEO_tdstGeometricObject_* hHandleOfGometricMirror, MAT_tdstTransformation_* hGlobalMatrixOfMirror, MAT_tdstTransformation_* hMatrixOfCamera, GLI_tdstCamera_* pstCamera, GLD_tdstViewportAttributes_* p_stVpt, int lDrawModeMask)
{
    short xNewNbPoints;
    float fNear;
    unsigned char p_bPointOfMirrorIsBehindCamera[4];
    unsigned char bIDrawTheMirrorNormally;
    MAT_tdstTransformation_ stMatrixFromSuperObjectToCamera;
    float xConstantDivForZ;
    float xConstantMinForZ;
    float fYMax1;
    float fXMax1;
    float fXMin1;
    float fYMax;
    float fYMin;
    float fXMax;
    float fXMin;
    short xTempIndexForRectangle;
    short j;
    short i;
    GLI_tdstAligned2DVector_ pstAligned2DProjectedPointOfRectangleMirror[5];
    MTH4D_tdstVector_ pstAligned3DCorrectedPointOfRectangleMirror[5];
    MTH4D_tdstVector_ pstAligned3DPointOfRectangleMirror[4];
    MTH3D_tdstVector_ pstPointOfRectangleMirror[4];
    /* TODO: decompile from asm/...
     *
     * Recovered structure of the retail body (agent-299):
     *  - frame 0x560; callee-saved s0..s8 (fp=s8) and fs0/fs1; the five
     *    integer parameters arrive in a0..a5 and are copied to s5 (mirror
     *    handle), s7 (mirror global matrix), fp (camera matrix), s4 (camera),
     *    t0 (viewport attributes) and s3 (draw mode mask).
     *  - the first three float values are the viewport clip sizes
     *    p_stVpt->dwClipLeftInPix (+0x40), dwClipRightInPix (+0x44) and
     *    dwClipBottomInPix (+0x3c), each converted with the retail's
     *    "halve a negative size" idiom:
     *        if (value >= 0) f = (float)value;
     *        else { int h = (int)(((unsigned)value >> 1) | (value & 1));
     *               f = (float)h + (float)h; }
     *    (MWCC 3.0.1 cannot lower a signed "value / 2" that way, so the
     *    unsigned-shift spelling is required; see the matching insights.)
     *  - a four-iteration loop (s2 += 12) calls the engine routine at
     *    0x002a2100 with (mirror handle, sp+0xb0+s2, s1) and copies 16-byte
     *    (quadword) blocks around it.
     *  - the following code branches on lDrawModeMask (1/2/3), tests the
     *    0x8000 bit, then runs two more four-point loops over
     *    pstAligned3DPointOfRectangleMirror with modulo-4 addressing
     *    ("andi t0,t1,3; addiu t0,t0,-4") and tanf() on the resulting
     *    plane distances.
     */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 242–424 */
/* addr: 0x002b1b40  size: 1032 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 242
 *   +0x0028 -> line 255
 *   +0x005c -> line 256
 *   +0x0060 -> line 257
 *   +0x0094 -> line 259
 *   +0x0098 -> line 261
 *   +0x00ac -> line 264
 *   +0x00b0 -> line 259
 *   +0x00b4 -> line 261
 *   +0x00c0 -> line 262
 *   +0x00d4 -> line 264
 *   +0x00e8 -> line 350
 *   +0x00f8 -> line 354
 *   +0x00fc -> line 350
 *   +0x0100 -> line 354
 *   +0x0108 -> line 350
 *   +0x0110 -> line 354
 *   +0x0130 -> line 356
 *   +0x0134 -> line 365
 *   +0x0138 -> line 354
 *   +0x0140 -> line 356
 *   +0x0144 -> line 354
 *   +0x0148 -> line 356
 *   +0x014c -> line 368
 *   +0x0150 -> line 356
 *   +0x0154 -> line 368
 *   +0x0158 -> line 356
 *   +0x0160 -> line 360
 *   +0x0164 -> line 365
 *   +0x0168 -> line 368
 *   +0x0170 -> line 360
 *   +0x017c -> line 365
 *   +0x0198 -> line 368
 *   +0x019c -> line 367
 *   +0x01a8 -> line 368
 *   +0x01ac -> line 367
 *   +0x01b8 -> line 368
 *   +0x01bc -> line 367
 *   +0x01c0 -> line 368
 *   +0x0208 -> line 371
 *   +0x020c -> line 389
 *   +0x0214 -> line 370
 *   +0x0220 -> line 371
 *   +0x0228 -> line 375
 *   +0x022c -> line 371
 *   +0x0230 -> line 373
 *   +0x023c -> line 375
 *   +0x0240 -> line 374
 *   +0x0244 -> line 375
 *   +0x0248 -> line 389
 *   +0x024c -> line 377
 *   +0x0250 -> line 389
 *   +0x0254 -> line 377
 *   +0x0274 -> line 379
 *   +0x027c -> line 384
 *   +0x0280 -> line 380
 *   +0x0288 -> line 382
 *   +0x0290 -> line 384
 *   +0x0294 -> line 383
 *   +0x0298 -> line 384
 *   +0x029c -> line 389
 *   +0x02a0 -> line 388
 *   +0x02ac -> line 389
 *   +0x02b0 -> line 388
 *   +0x02bc -> line 389
 *   +0x02c4 -> line 388
 *   +0x02c8 -> line 389
 *   +0x0310 -> line 391
 *   +0x0314 -> line 393
 *   +0x0318 -> line 390
 *   +0x0324 -> line 391
 *   +0x032c -> line 395
 *   +0x0330 -> line 391
 *   +0x0334 -> line 394
 *   +0x033c -> line 395
 *   +0x0340 -> line 394
 *   +0x0344 -> line 395
 *   +0x0348 -> line 397
 *   +0x035c -> line 401
 *   +0x0360 -> line 397
 *   +0x0370 -> line 398
 *   +0x0378 -> line 403
 *   +0x037c -> line 399
 *   +0x0384 -> line 402
 *   +0x0388 -> line 403
 *   +0x038c -> line 402
 *   +0x0390 -> line 403
 *   +0x0394 -> line 407
 *   +0x0398 -> line 408
 *   +0x039c -> line 409
 *   +0x03a0 -> line 410
 *   +0x03a4 -> line 418
 *   +0x03a8 -> line 420
 *   +0x03ac -> line 418
 *   +0x03b4 -> line 420
 *   +0x03e4 -> line 424
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xAdjustCameraToViewport2(GLD_tdstDeviceAttributes_* p_stDev, GLD_tdstViewportAttributes_* p_stVpt, GLI_tdstCamera_* p_stCam)
{
    float fWidth;
    float fHeight;
    float fPixX;
    float fPixY;
    float fRatio;
    float fTan;
    float fX;
    float fZ;
    float xSqr;
    float xSum;
    float xNorm;
    int lVal;

    if (p_stVpt->dwWidth >= 0) fWidth = (float)p_stVpt->dwWidth; else
    {
        lVal = (int)(((unsigned int)p_stVpt->dwWidth >> 1) | (p_stVpt->dwWidth & 1));
        fWidth = (float)lVal + (float)lVal;
    }
    fPixX = fWidth * p_stDev->xPixelDimensionX;
    if (p_stVpt->dwHeight >= 0) fHeight = (float)p_stVpt->dwHeight; else
    {
        lVal = (int)(((unsigned int)p_stVpt->dwHeight >> 1) | (p_stVpt->dwHeight & 1));
        fHeight = (float)lVal + (float)lVal;
    }
    fPixY = fHeight * p_stDev->xPixelDimensionY;
    p_stCam->stTrans.xX = (float)p_stVpt->iOffsetPosX + 0.5f * fWidth;
    p_stCam->stTrans.xY = (float)p_stVpt->iOffsetPosY + 0.5f * fHeight;

    fRatio = fPixY / fPixX;
    switch (p_stCam->lCameraMode)
    {
    case 103:
    {
        fTan = tanf(0.5f * p_stCam->xAlphaX);
        p_stCam->xXProjectionRatio = 1.0f / fTan;
        fTan = tanf(0.5f * p_stCam->xAlphaY);
        p_stCam->xYProjectionRatio = 0.75f * (1.0f / fTan) / fRatio;
        p_stCam->xScreen = (0.5f * fPixX) * 0.7f;
        p_stCam->stScale.xX = -(1.0f / p_stDev->xPixelDimensionX);
        p_stCam->stScale.xY = -(fHeight / ((2.0f * p_stCam->xScreen) / p_stCam->xYProjectionRatio));

        lVal = p_stVpt->dwClipRightInPix - p_stVpt->iOffsetPosX - p_stVpt->dwWidth / 2;
        fZ = (float)lVal;
        fTan = tanf(0.5f * (0.7f * p_stCam->xAlphaX));
        lVal = p_stVpt->dwWidth / 2;
        if (lVal >= 0) fX = (float)lVal; else
        {
            lVal = (int)(((unsigned int)lVal >> 1) | (lVal & 1));
            fX = (float)lVal + (float)lVal;
        }
        fX = fX / fTan;
        xSqr = fX * fX;
        xSum = xSqr + fZ * fZ;
        MTH_SQRT_TO(xNorm, xSum);
        xNorm = 1.0f / xNorm;
        p_stCam->stNormPlaneLeft.xX = -fX * xNorm;
        p_stCam->stNormPlaneLeft.xY = 0.0f;
        p_stCam->stNormPlaneLeft.xZ = -fZ * xNorm;

        lVal = p_stVpt->dwWidth / 2 - (p_stVpt->dwClipLeftInPix - p_stVpt->iOffsetPosX);
        fZ = (float)lVal;
        xSum = xSqr + fZ * fZ;
        MTH_SQRT_TO(xNorm, xSum);
        xNorm = 1.0f / xNorm;
        p_stCam->stNormPlaneRight.xX = fX * xNorm;
        p_stCam->stNormPlaneRight.xY = 0.0f;
        p_stCam->stNormPlaneRight.xZ = -fZ * xNorm;

        lVal = p_stVpt->dwClipBottomInPix - p_stVpt->iOffsetPosY - p_stVpt->dwHeight / 2;
        fZ = (float)lVal;
        fTan = tanf(0.5f * (0.7f * p_stCam->xAlphaY));
        lVal = p_stVpt->dwHeight / 2;
        if (lVal >= 0) fX = (float)lVal; else
        {
            lVal = (int)(((unsigned int)lVal >> 1) | (lVal & 1));
            fX = (float)lVal + (float)lVal;
        }
        fX = fX / fTan;
        xSqr = fX * fX;
        xSum = xSqr + fZ * fZ;
        MTH_SQRT_TO(xNorm, xSum);
        xNorm = 1.0f / xNorm;
        p_stCam->stNormPlaneDown.xX = 0.0f;
        p_stCam->stNormPlaneDown.xY = -fX * xNorm;
        p_stCam->stNormPlaneDown.xZ = -fZ * xNorm;

        lVal = p_stVpt->dwHeight / 2 - (p_stVpt->dwClipTopInPix - p_stVpt->iOffsetPosY);
        fZ = (float)lVal;
        xSum = xSqr + fZ * fZ;
        MTH_SQRT_TO(xNorm, xSum);
        xNorm = 1.0f / xNorm;
        p_stCam->stNormPlaneUp.xX = 0.0f;
        p_stCam->stNormPlaneUp.xY = fX * xNorm;
        p_stCam->stNormPlaneUp.xZ = -fZ * xNorm;

        p_stCam->xDistPlaneLeft = 0.0f;
        p_stCam->xDistPlaneRight = 0.0f;
        p_stCam->xDistPlaneUp = 0.0f;
        p_stCam->xDistPlaneDown = 0.0f;
    }
    break;
    }
    GLI_g_fCurrentCameraRatio = 4.0f / 3.0f;
    GLI_g_fCurrentCameraxAngle = 0.75f * (180.0f * p_stCam->xAlphaX) / 3.1415927f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 107–168 */
/* addr: 0x002b1f50  size: 652 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 107
 *   +0x000c -> line 120
 *   +0x0040 -> line 125
 *   +0x0044 -> line 120
 *   +0x0048 -> line 125
 *   +0x004c -> line 120
 *   +0x0058 -> line 122
 *   +0x005c -> line 127
 *   +0x0060 -> line 122
 *   +0x0064 -> line 121
 *   +0x0068 -> line 127
 *   +0x009c -> line 131
 *   +0x00a8 -> line 132
 *   +0x00b0 -> line 136
 *   +0x00fc -> line 137
 *   +0x0104 -> line 140
 *   +0x0108 -> line 141
 *   +0x0110 -> line 148
 *   +0x0128 -> line 153
 *   +0x012c -> line 150
 *   +0x0130 -> line 151
 *   +0x0134 -> line 152
 *   +0x013c -> line 150
 *   +0x0148 -> line 151
 *   +0x014c -> line 150
 *   +0x0150 -> line 151
 *   +0x0154 -> line 150
 *   +0x015c -> line 151
 *   +0x0160 -> line 152
 *   +0x016c -> line 151
 *   +0x0170 -> line 152
 *   +0x0174 -> line 151
 *   +0x0178 -> line 152
 *   +0x017c -> line 151
 *   +0x0180 -> line 152
 *   +0x0184 -> line 153
 *   +0x0194 -> line 154
 *   +0x019c -> line 157
 *   +0x01a8 -> line 158
 *   +0x01b4 -> line 157
 *   +0x01b8 -> line 158
 *   +0x01bc -> line 157
 *   +0x01c0 -> line 158
 *   +0x01c8 -> line 159
 *   +0x01cc -> line 158
 *   +0x01d0 -> line 165
 *   +0x01dc -> line 166
 *   +0x01e0 -> line 165
 *   +0x0204 -> line 166
 *   +0x020c -> line 167
 *   +0x027c -> line 168
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vGet3DVertexFromScreenPos(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stPos3D, float xRatioX, float xRatioY, float xSize)
{
    MAT_tdstTransformation_ stInvMatrix;
    MAT_tdstTransformation_ stMatrix;
    MTH3D_tdstVector_ stTemp;
    float fCoeff;
    float xScreen;
    float fZ;
    GLI_tdstCamera_* p_stCam;
    float fWidth;
    float fX;
    float fY;
    int lVal;

    if (p_stVpt->dwWidth >= 0) fWidth = (float)p_stVpt->dwWidth; else
    {
        lVal = (int)(((unsigned int)p_stVpt->dwWidth >> 1) | (p_stVpt->dwWidth & 1));
        fWidth = (float)lVal + (float)lVal;
    }
    p_stCam = *(GLI_tdstCamera_**)p_stVpt->p_vSpecificToXD;
    fCoeff = fWidth / 1024.0f;
    fX = 1024.0f * xRatioX;
    fY = 0.5f * xRatioY;

    switch (p_stCam->lCameraMode)
    {
    case 100:
    case 101:
        xScreen = 0.1f;
        break;
    case 102:
    case 103:
        if (p_stVpt->dwWidth >= 0) fWidth = (float)p_stVpt->dwWidth; else
        {
            lVal = (int)(((unsigned int)p_stVpt->dwWidth >> 1) | (p_stVpt->dwWidth & 1));
            fWidth = (float)lVal + (float)lVal;
        }
        xScreen = (p_stCam->xScreen * fWidth) / 1024.0f;
        break;
    default:
        p_stPos3D->xZ = 0.0f;
        p_stPos3D->xY = 0.0f;
        p_stPos3D->xX = 0.0f;
        return;
    }

    if (xSize != 0.0f)
    {
        fCoeff = ((fX - p_stCam->stScale.xX) / p_stCam->stScale.xX) / xSize;
        xScreen = xScreen * ((1.0f + xSize) / xSize);
        fZ = 0.0f;
    }
    else
    {
        fCoeff = (fX - p_stCam->stScale.xX) / p_stCam->stScale.xX;
        xScreen = (fY - 240.0f) / p_stCam->stScale.xY;
        fZ = 0.0f;
    }

    stMatrix = p_stCam->stMatrix;
    MAT_fn_vInvert(&stInvMatrix, &stMatrix);

    stTemp.xX = fCoeff;
    stTemp.xY = xScreen;
    stTemp.xZ = fZ;
    {
        float* pMat = (float*)&stInvMatrix.stTransformMatrix;
        float* pVec = (float*)&stTemp;
        asm {
            lqc2 $vf1, 0x0(pVec)
            lqc2 $vf2, 0x0(pMat)
            lqc2 $vf3, 0x10(pMat)
            lqc2 $vf4, 0x20(pMat)
            lqc2 $vf5, 0x30(pMat)
            vmulax.xyzw $ACC, $vf2, $vf1x
            vmadday.xyzw $ACC, $vf3, $vf1y
            vmaddaz.xyzw $ACC, $vf4, $vf1z
            vmaddw.xyzw $vf6, $vf5, $vf0w
            sqc2 $vf6, 0x0(pVec)
        }
    }
    p_stPos3D->xX = stTemp.xX;
    p_stPos3D->xY = stTemp.xY;
    p_stPos3D->xZ = stTemp.xZ;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 64–84 */
/* addr: 0x002b21e0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x0020 -> line 70
 *   +0x0030 -> line 72
 *   +0x0044 -> line 76
 *   +0x004c -> line 77
 *   +0x0054 -> line 79
 *   +0x0058 -> line 82
 *   +0x0068 -> line 84
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_xAdjustCameraToViewport(short hDevice, short hViewport, GLI_tdstCamera_* p_stCam)
{
    GLD_tdstDeviceAttributes_ stDevAttrib;
    GLD_tdstViewportAttributes_ stViewAttrib;

    if (GLD_bGetDeviceAttributes(hDevice, &stDevAttrib))
    {
        if (GLD_bGetViewportAttributes(hDevice, hViewport, &stViewAttrib))
        {
            if (p_stCam == NULL)
                p_stCam = p_stCamAntiBug;
            else
                p_stCamAntiBug = p_stCam;

            GLI_xAdjustCameraToViewport2(&stDevAttrib, &stViewAttrib, p_stCam);
        }
    }
}
