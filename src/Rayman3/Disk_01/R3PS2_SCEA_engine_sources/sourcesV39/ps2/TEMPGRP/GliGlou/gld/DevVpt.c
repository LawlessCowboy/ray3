/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLD_stViewport GLD_stViewport;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct GLD_stDevice GLD_stDevice;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct stRECT stRECT;
typedef struct tdstGliCaps_ tdstGliCaps_;
typedef struct stPOINT stPOINT;

struct GLD_stViewport {
    /* aggregate */ int stViewAttrib; /* +0x0 */
    int bIsLocked; /* +0x70 */
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

struct GLD_stDevice {
    GLD_tdstDeviceAttributes_ stDevAttrib; /* +0x0 */
    /* aggregate */ int pstViewports; /* +0x60 */
    int bIsLocked; /* +0xa0 */
    unsigned int dwStyleBeforeSwap; /* +0xa4 */
    unsigned int dwExStyleBeforeSwap; /* +0xa8 */
    stRECT rcWindowBeforeSwap; /* +0xac */
    unsigned int dwBackgroundColor; /* +0xbc */
};

struct tdstBlockInfo_ {
    int p_cBeginBlock; /* +0x0 */
    int p_cEndBlock; /* +0x4 */
    int p_cFirstFree; /* +0x8 */
    int p_cMaxMem; /* +0xc */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

unsigned char g_ucGLDModuleId;
int GLD_RenderingCounter;
int g_bGLDSwapInProgress;
int g_bGLDBlockSwaping;
static int gs_bAdjustInProgress;
unsigned int GLI_g_ulFrameLength;
int GLI_gs_lBackGroundColor;
/* aggregate */ int g_pstGLDDevices;
tdstBlockInfo_ g_a_stGLDBlocksInfo[4];
tdstGliCaps_ GLI_g_stCaps;
void (*GLD_vCloseErr)(void);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 315–315 */
/* addr: 0x002ac030  size: 40 bytes */
void GLI_vSetWaterplane(/* function pointer */ int p_stNormale, float xDistance)
{
    /* line map: */
    /*   line 315 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1706–1706 */
/* addr: 0x002ac060  size: 12 bytes */
int GLD_bSetBackgroundColorForDevice(unsigned int crRGB)
{
    /* line map: */
    /*   line 1706 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1692–1692 */
/* addr: 0x002ac070  size: 108 bytes */
int GLD_bGiveSpecificAttributesToViewport(short hVP, void* p_vSpecAttrib)
{
    short hDev;
    /* line map: */
    /*   line 1692 @ +0x000 */
    /*   line 1692 @ +0x000 */
    /*   line 1692 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1201–1230 */
/* addr: 0x002ac0e0  size: 228 bytes */
int GLD_bDeleteDevice(short hDev)
{
    short hVP;
    /* line map: */
    /*   line 1201 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1201 @ +0x000 */
    /*   line 1206 @ +0x000 */
    /*   line 1211 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1157–1182 */
/* addr: 0x002ac1d0  size: 252 bytes */
int GLD_bDeleteViewport(short hVP)
{
    short hDev;
    /* line map: */
    /*   line 1157 @ +0x000 */
    /*   line 1157 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1164 @ +0x000 */
    /*   line 1169 @ +0x000 */
    /*   line 1169 @ +0x000 */
    /*   line 1169 @ +0x000 */
    /*   line 1176 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1107–1133 */
/* addr: 0x002ac2d0  size: 272 bytes */
int GLD_bSetViewportPosition(short hVP, /* function pointer */ int pstViewAttrib)
{
    short hDev;
    /* line map: */
    /*   line 1107 @ +0x000 */
    /*   line 1107 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1113 @ +0x000 */
    /*   line 1118 @ +0x000 */
    /*   line 1118 @ +0x000 */
    /*   line 1118 @ +0x000 */
    /*   line 1122 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 934–935 */
/* addr: 0x002ac3e0  size: 64 bytes */
int GLD_bWriteToViewportFinished(short hVP)
{
    /* line map: */
    /*   line 934 @ +0x000 */
    /*   line 935 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 893–913 */
/* addr: 0x002ac420  size: 204 bytes */
int GLD_bRequestWriteToViewport(short hVP, /* function pointer */ int pstViewAttrib, int* pbCanWrite)
{
    short hDev;
    /* line map: */
    /*   line 893 @ +0x000 */
    /*   line 893 @ +0x000 */
    /*   line 897 @ +0x000 */
    /*   line 897 @ +0x000 */
    /*   line 902 @ +0x000 */
    /*   line 902 @ +0x000 */
    /*   line 909 @ +0x000 */
    /*   line 913 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x002ac4f0  size: 8 bytes */
int GLD_bEndWriteToDevice(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 846–848 */
/* addr: 0x002ac500  size: 36 bytes */
int GLD_bBeginWriteToDevice(void)
{
    /* line map: */
    /*   line 846 @ +0x000 */
    /*   line 848 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 804–824 */
/* addr: 0x002ac530  size: 196 bytes */
int GLD_bGetViewportAttributes(short hVP, /* function pointer */ int pstViewAttrib)
{
    short hDev;
    /* line map: */
    /*   line 804 @ +0x000 */
    /*   line 804 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 810 @ +0x000 */
    /*   line 817 @ +0x000 */
    /*   line 821 @ +0x000 */
    /*   line 821 @ +0x000 */
    /*   line 824 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 739–784 */
/* addr: 0x002ac600  size: 492 bytes */
int GLD_bCreateViewport(short hDev, /* function pointer */ int pstViewAttrib, short* phVP, GLD_stViewport* pstView)
{
    short hOldVP;
    /* line map: */
    /*   line 739 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 739 @ +0x000 */
    /*   line 744 @ +0x000 */
    /*   line 744 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 710–719 */
/* addr: 0x002ac7f0  size: 136 bytes */
int GLD_bGetDeviceAttributes(short hDev, GLD_tdstDeviceAttributes_* pstDevAttrib, GLD_stDevice* pstDev)
{
    /* line map: */
    /*   line 710 @ +0x000 */
    /*   line 710 @ +0x000 */
    /*   line 714 @ +0x000 */
    /*   line 716 @ +0x000 */
    /*   line 719 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 526–565 */
/* addr: 0x002ac880  size: 492 bytes */
int GLD_bCreateDevice(GLD_tdstDeviceAttributes_* pstDevAttrib, short* phDev, GLD_stDevice* pstDev)
{
    int bFirstTime;
    /* line map: */
    /*   line 526 @ +0x000 */
    /*   line 529 @ +0x000 */
    /*   line 534 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 546 @ +0x000 */
    /*   line 547 @ +0x000 */
    /*   line 552 @ +0x000 */
    /*   line 552 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 473–476 */
/* addr: 0x002aca70  size: 64 bytes */
int GLD_bClearViewportWithChoice(short sChoice)
{
    /* line map: */
    /*   line 473 @ +0x000 */
    /*   line 476 @ +0x000 */
    /*   line 476 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 173–272 */
/* addr: 0x002acab0  size: 736 bytes */
void fn_vUpdateViewportSizesInPixels(GLD_stDevice* p_stDev, GLD_stViewport* p_stVP)
{
    int iHeight;
    int iWidth;
    int iClipBottom;
    int iClipTop;
    int iClipRight;
    int iClipLeft;
    int iBottom;
    int iRight;
    int iTop;
    int iLeft;
    /* line map: */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 173 @ +0x000 */
    /*   line 181 @ +0x000 */
    /* TODO: decompile from asm/... */
}
