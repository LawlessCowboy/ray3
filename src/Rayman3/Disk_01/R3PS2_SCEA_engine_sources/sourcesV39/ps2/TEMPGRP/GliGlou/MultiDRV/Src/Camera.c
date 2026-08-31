/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct stRECT stRECT;
typedef struct stPOINT stPOINT;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

static int p_stCamAntiBug;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
float GLI_g_fCurrentCameraxAngle;
char GLI_g_StereoVisionMode;
char g_cSinusEffectState;
float GLI_g_fCurrentCameraRatio;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 80–91 */
/* addr: 0x002b1090  size: 248 bytes */
void J_RemoveRedundantSprites(/* function pointer */ int pList, unsigned int NbSprites)
{
    unsigned int dest;
    unsigned int org;
    /* line map: */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 354–356 */
/* addr: 0x002b1190  size: 124 bytes */
void GLD_fn_vD3DUpdateViewMatrixFromCamera(/* function pointer */ int _p_stVpt)
{
    /* line map: */
    /*   line 354 @ +0x000 */
    /*   line 356 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002b1210  size: 8 bytes */
void GLI_fn_vSetCameraMirrorMode(/* function pointer */ int p_stCam, unsigned char _bMirrorMode)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 269–273 */
/* addr: 0x002b1220  size: 60 bytes */
void GLI_xGetViewportCamera(short hDevice, short hViewport, /* function pointer */ int p_stCam)
{
    /* aggregate */ int stViewAttrib;
    /* line map: */
    /*   line 269 @ +0x000 */
    /*   line 273 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 249–261 */
/* addr: 0x002b1260  size: 252 bytes */
void GLI_xSetViewportCamera(short hDevice, short hViewport, /* function pointer */ int p_stCam, /* function pointer */ int param3)
{
    /* aggregate */ int stViewAttrib;
    /* line map: */
    /*   line 249 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 257 @ +0x000 */
    /*   line 261 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 225–225 */
/* addr: 0x002b1360  size: 20 bytes */
void GLI_xSetCameraRatio(/* function pointer */ int p_stCam, float xRatio)
{
    /* line map: */
    /*   line 225 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 219–219 */
/* addr: 0x002b1380  size: 20 bytes */
void GLI_xGetCameraAspectAndRatio(/* function pointer */ int p_stCam, float* p_xAlphaX, float* p_xRatio)
{
    /* line map: */
    /*   line 219 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 211–214 */
/* addr: 0x002b13a0  size: 20 bytes */
void GLI_xSetCameraAspectAndRatio(/* function pointer */ int p_stCam, float xAlphaX, float xRatio)
{
    /* line map: */
    /*   line 211 @ +0x000 */
    /*   line 214 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 148–202 */
/* addr: 0x002b13c0  size: 100 bytes */
void GLI_xSetCameraMatrix(/* function pointer */ int p_stCam, /* function pointer */ int p_stMatrix)
{
    /* line map: */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 202 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 130–130 */
/* addr: 0x002b1430  size: 52 bytes */
void GLI_xGetCameraMatrix(/* function pointer */ int p_stCam, /* function pointer */ int p_stMatrix)
{
    /* line map: */
    /*   line 130 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 109–114 */
/* addr: 0x002b1470  size: 52 bytes */
void GLI_xSetCameraNearFar(/* function pointer */ int p_stCam, float xFar)
{
    /* line map: */
    /*   line 109 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 114 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c lines 57–57 */
/* addr: 0x002b14b0  size: 44 bytes */
void GLI_vCopyCamera(/* function pointer */ int p_stCamDest, /* function pointer */ int p_stCamSource)
{
    /* line map: */
    /*   line 57 @ +0x000 */
    /* TODO: decompile from asm/... */
}
