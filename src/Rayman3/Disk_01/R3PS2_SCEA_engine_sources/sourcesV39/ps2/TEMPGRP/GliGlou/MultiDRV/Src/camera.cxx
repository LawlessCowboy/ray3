/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 453–634 */
/* addr: 0x002b14e0  size: 1632 bytes */
unsigned char GLI_vAdjustCameraToMirror(/* function pointer */ int hHandleOfGometricMirror, /* function pointer */ int hGlobalMatrixOfMirror, /* function pointer */ int hMatrixOfCamera, /* function pointer */ int pstCamera, /* function pointer */ int p_stVpt, int lDrawModeMask)
{
    short xNewNbPoints;
    float fNear;
    unsigned char p_bPointOfMirrorIsBehindCamera[4];
    unsigned char bIDrawTheMirrorNormally;
    /* aggregate */ int stMatrixFromSuperObjectToCamera;
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
    /* array */ int pstAligned2DProjectedPointOfRectangleMirror[5];
    /* array */ int pstAligned3DCorrectedPointOfRectangleMirror[5];
    /* array */ int pstAligned3DPointOfRectangleMirror[4];
    /* array */ int pstPointOfRectangleMirror[4];
    /* line map: */
    /*   line 453 @ +0x000 */
    /*   line 458 @ +0x000 */
    /*   line 461 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 469 @ +0x000 */
    /*   line 469 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 255–424 */
/* addr: 0x002b1b40  size: 1032 bytes */
void GLI_xAdjustCameraToViewport2(GLD_tdstDeviceAttributes_* p_stDev, /* function pointer */ int p_stVpt, /* function pointer */ int p_stCam)
{
    float fH;
    float fOoL;
    float fZ;
    float xVptRatio;
    float xVptWidthInMeters;
    float xVptHeightInPix;
    float xVptWidthInPix;
    /* line map: */
    /*   line 255 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 261 @ +0x000 */
    /*   line 259 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 350 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 120–167 */
/* addr: 0x002b1f50  size: 652 bytes */
void GLI_vGet3DVertexFromScreenPos(/* function pointer */ int p_stVpt, /* function pointer */ int p_stPos3D, float xRatioX, float xRatioY, float xSize, /* function pointer */ int p_stCam)
{
    float fCoeff;
    /* aggregate */ int stInvMatrix;
    /* aggregate */ int stMatrix;
    /* aggregate */ int stTemp;
    float xScreen;
    /* line map: */
    /*   line 120 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 120 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 131 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 140 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\camera.cxx lines 70–84 */
/* addr: 0x002b21e0  size: 128 bytes */
void GLI_xAdjustCameraToViewport(short hDevice, short hViewport, /* function pointer */ int p_stCam)
{
    /* aggregate */ int stViewAttrib;
    GLD_tdstDeviceAttributes_ stDevAttrib;
    /* line map: */
    /*   line 70 @ +0x000 */
    /*   line 76 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 84 @ +0x000 */
    /* TODO: decompile from asm/... */
}
