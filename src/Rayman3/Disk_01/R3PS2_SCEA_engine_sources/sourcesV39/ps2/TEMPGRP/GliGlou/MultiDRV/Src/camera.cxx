/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;

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
    /* TODO: decompile from asm/... */
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
    float fH;
    float fOoL;
    float fZ;
    float xVptRatio;
    float xVptWidthInMeters;
    float xVptHeightInPix;
    float xVptWidthInPix;
    /* TODO: decompile from asm/... */
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
    float fCoeff;
    MAT_tdstTransformation_ stInvMatrix;
    MAT_tdstTransformation_ stMatrix;
    MTH3D_tdstVector_ stTemp;
    float xScreen;
    GLI_tdstCamera_* p_stCam;
    /* TODO: decompile from asm/... */
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
    GLD_tdstViewportAttributes_ stViewAttrib;
    GLD_tdstDeviceAttributes_ stDevAttrib;
    /* TODO: decompile from asm/... */
}
