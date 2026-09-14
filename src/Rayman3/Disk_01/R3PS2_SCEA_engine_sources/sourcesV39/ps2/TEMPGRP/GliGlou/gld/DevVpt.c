/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct GLD_stViewport GLD_stViewport;
typedef struct stPOINT stPOINT;
typedef struct stRECT stRECT;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;
typedef struct GLD_stDevice GLD_stDevice;
typedef struct tdstBlockInfo_ tdstBlockInfo_;
typedef struct tdstGliCaps_ tdstGliCaps_;

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

struct GLD_stViewport {
    GLD_tdstViewportAttributes_ stViewAttrib; /* +0x0 */
    int bIsLocked; /* +0x70 */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
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
    int pstViewports[16]; /* +0x60 */
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

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

unsigned char g_ucGLDModuleId;
int GLD_RenderingCounter;
int g_bGLDSwapInProgress;
int g_bGLDBlockSwaping;
static int gs_bAdjustInProgress;
unsigned int GLI_g_ulFrameLength;
int GLI_gs_lBackGroundColor;
int g_pstGLDDevices[16];
tdstBlockInfo_ g_a_stGLDBlocksInfo[4];
tdstGliCaps_ GLI_g_stCaps;
void (*GLD_vCloseErr)(void);
extern float fWaterPlaneDistance;
extern MTH3D_tdstVector_ stWaterPlaneNormale;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 313–315 */
/* addr: 0x002ac030  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 313
 *   +0x0020 -> line 315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSetWaterplane(int _unused, MTH3D_tdstVector_* p_stNormale, float xDistance)
{
    stWaterPlaneNormale = *p_stNormale;
    fWaterPlaneDistance = xDistance;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1704–1706 */
/* addr: 0x002ac060  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1704
 *   +0x0004 -> line 1706
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bSetBackgroundColorForDevice(short hDevice, unsigned int crRGB)
{
    (void)hDevice;
    GLI_gs_lBackGroundColor = crRGB;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1685–1695 */
/* addr: 0x002ac070  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1685
 *   +0x001c -> line 1692
 *   +0x0020 -> line 1685
 *   +0x0024 -> line 1692
 *   +0x005c -> line 1694
 *   +0x0060 -> line 1692
 *   +0x0064 -> line 1695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bGiveSpecificAttributesToViewport(short hVP, void* p_vSpecAttrib)
{
    short hDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1191–1231 */
/* addr: 0x002ac0e0  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1191
 *   +0x0004 -> line 1201
 *   +0x0008 -> line 1191
 *   +0x000c -> line 1201
 *   +0x0010 -> line 1191
 *   +0x0014 -> line 1201
 *   +0x0018 -> line 1191
 *   +0x001c -> line 1201
 *   +0x0020 -> line 1191
 *   +0x0024 -> line 1201
 *   +0x0028 -> line 1191
 *   +0x002c -> line 1201
 *   +0x0030 -> line 1191
 *   +0x0034 -> line 1206
 *   +0x0040 -> line 1209
 *   +0x004c -> line 1211
 *   +0x0058 -> line 1214
 *   +0x0064 -> line 1216
 *   +0x0068 -> line 1218
 *   +0x0070 -> line 1216
 *   +0x0074 -> line 1218
 *   +0x008c -> line 1219
 *   +0x0090 -> line 1222
 *   +0x00a0 -> line 1225
 *   +0x00bc -> line 1228
 *   +0x00c0 -> line 1230
 *   +0x00c4 -> line 1231
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bDeleteDevice(short hDev)
{
    short hVP;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1144–1183 */
/* addr: 0x002ac1d0  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1144
 *   +0x0004 -> line 1157
 *   +0x0008 -> line 1144
 *   +0x0018 -> line 1157
 *   +0x001c -> line 1158
 *   +0x0044 -> line 1164
 *   +0x0060 -> line 1165
 *   +0x0064 -> line 1164
 *   +0x0068 -> line 1165
 *   +0x0078 -> line 1169
 *   +0x0090 -> line 1173
 *   +0x0094 -> line 1169
 *   +0x00a0 -> line 1173
 *   +0x00a4 -> line 1169
 *   +0x00ac -> line 1173
 *   +0x00b4 -> line 1176
 *   +0x00d0 -> line 1179
 *   +0x00d4 -> line 1182
 *   +0x00d8 -> line 1179
 *   +0x00e0 -> line 1181
 *   +0x00e4 -> line 1183
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bDeleteViewport(short hVP)
{
    short hDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 1097–1134 */
/* addr: 0x002ac2d0  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1097
 *   +0x0004 -> line 1107
 *   +0x0008 -> line 1097
 *   +0x001c -> line 1107
 *   +0x0020 -> line 1108
 *   +0x0048 -> line 1113
 *   +0x0064 -> line 1114
 *   +0x0068 -> line 1113
 *   +0x006c -> line 1114
 *   +0x007c -> line 1118
 *   +0x0094 -> line 1121
 *   +0x0098 -> line 1118
 *   +0x00a4 -> line 1121
 *   +0x00a8 -> line 1118
 *   +0x00b0 -> line 1121
 *   +0x00b8 -> line 1122
 *   +0x00c8 -> line 1123
 *   +0x00d4 -> line 1125
 *   +0x00d8 -> line 1126
 *   +0x00dc -> line 1129
 *   +0x00e4 -> line 1126
 *   +0x00e8 -> line 1129
 *   +0x00f0 -> line 1132
 *   +0x00f4 -> line 1133
 *   +0x00f8 -> line 1134
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bSetViewportPosition(short hVP, GLD_tdstViewportAttributes_* pstViewAttrib)
{
    short hDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 933–935 */
/* addr: 0x002ac3e0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 933
 *   +0x0030 -> line 934
 *   +0x0034 -> line 933
 *   +0x0038 -> line 935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bWriteToViewportFinished(int _unused, short hVP)
{
    GLD_stDevice* p_stDev;
    int lVP;

    lVP = hVP >> 4;
    if (hVP < 0)
    {
        lVP = (hVP + 0xF) >> 4;
    }
    p_stDev = (GLD_stDevice*)g_pstGLDDevices[(short)lVP];
    p_stDev->bIsLocked = 0;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 882–913 */
/* addr: 0x002ac420  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 882
 *   +0x0004 -> line 893
 *   +0x0008 -> line 882
 *   +0x0010 -> line 893
 *   +0x0014 -> line 894
 *   +0x003c -> line 897
 *   +0x0058 -> line 898
 *   +0x005c -> line 897
 *   +0x0060 -> line 898
 *   +0x0070 -> line 902
 *   +0x0098 -> line 905
 *   +0x009c -> line 902
 *   +0x00a0 -> line 906
 *   +0x00b0 -> line 909
 *   +0x00b8 -> line 911
 *   +0x00bc -> line 913
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bRequestWriteToViewport(short hVP, GLD_tdstViewportAttributes_* pstViewAttrib, int* pbCanWrite)
{
    short hDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 864–864 */
/* addr: 0x002ac4f0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 864
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bEndWriteToDevice(void)
{
    return GLI_DRV_bEndScene();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 845–848 */
/* addr: 0x002ac500  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 845
 *   +0x0008 -> line 846
 *   +0x0010 -> line 847
 *   +0x0018 -> line 848
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bBeginWriteToDevice(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 794–825 */
/* addr: 0x002ac530  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 794
 *   +0x0004 -> line 804
 *   +0x0008 -> line 794
 *   +0x000c -> line 804
 *   +0x0010 -> line 805
 *   +0x0038 -> line 810
 *   +0x0054 -> line 815
 *   +0x0058 -> line 810
 *   +0x005c -> line 815
 *   +0x0094 -> line 817
 *   +0x0098 -> line 815
 *   +0x009c -> line 821
 *   +0x00a4 -> line 817
 *   +0x00a8 -> line 821
 *   +0x00b0 -> line 823
 *   +0x00b4 -> line 824
 *   +0x00b8 -> line 825
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bGetViewportAttributes(short hVP, GLD_tdstViewportAttributes_* pstViewAttrib)
{
    short hDev;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 731–785 */
/* addr: 0x002ac600  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 731
 *   +0x0004 -> line 739
 *   +0x0008 -> line 731
 *   +0x000c -> line 739
 *   +0x0010 -> line 731
 *   +0x0028 -> line 739
 *   +0x002c -> line 731
 *   +0x0030 -> line 739
 *   +0x0034 -> line 731
 *   +0x0038 -> line 739
 *   +0x003c -> line 731
 *   +0x0040 -> line 739
 *   +0x004c -> line 742
 *   +0x00a4 -> line 744
 *   +0x00a8 -> line 745
 *   +0x00ac -> line 744
 *   +0x00b0 -> line 745
 *   +0x00bc -> line 746
 *   +0x00e4 -> line 747
 *   +0x00ec -> line 751
 *   +0x010c -> line 752
 *   +0x0114 -> line 754
 *   +0x0118 -> line 755
 *   +0x011c -> line 754
 *   +0x0120 -> line 755
 *   +0x012c -> line 756
 *   +0x0134 -> line 760
 *   +0x0140 -> line 761
 *   +0x0150 -> line 764
 *   +0x015c -> line 765
 *   +0x0160 -> line 769
 *   +0x0164 -> line 774
 *   +0x0170 -> line 765
 *   +0x0174 -> line 766
 *   +0x017c -> line 767
 *   +0x0180 -> line 768
 *   +0x0184 -> line 769
 *   +0x0188 -> line 774
 *   +0x0190 -> line 777
 *   +0x019c -> line 780
 *   +0x01a4 -> line 782
 *   +0x01a8 -> line 777
 *   +0x01b8 -> line 782
 *   +0x01c0 -> line 784
 *   +0x01c4 -> line 785
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bCreateViewport(short hDev, GLD_tdstViewportAttributes_* pstViewAttrib, short* phVP)
{
    short hOldVP;
    GLD_stViewport* pstView;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 705–720 */
/* addr: 0x002ac7f0  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 705
 *   +0x0004 -> line 710
 *   +0x0008 -> line 705
 *   +0x000c -> line 710
 *   +0x0010 -> line 711
 *   +0x0038 -> line 714
 *   +0x005c -> line 715
 *   +0x0064 -> line 716
 *   +0x0074 -> line 718
 *   +0x0078 -> line 719
 *   +0x007c -> line 720
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bGetDeviceAttributes(short hDev, GLD_tdstDeviceAttributes_* pstDevAttrib)
{
    GLD_stDevice* pstDev;

    g_bGLDBlockSwaping = 1;
    while (g_bGLDSwapInProgress)
        ;
    pstDev = (GLD_stDevice*)g_pstGLDDevices[hDev];
    if (pstDev == NULL)
        return 0;
    memcpy(pstDevAttrib, pstDev, sizeof(GLD_tdstDeviceAttributes_));
    g_bGLDBlockSwaping = 0;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 517–565 */
/* addr: 0x002ac880  size: 492 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 517
 *   +0x0018 -> line 526
 *   +0x0024 -> line 528
 *   +0x00e4 -> line 529
 *   +0x00ec -> line 530
 *   +0x00f0 -> line 534
 *   +0x0110 -> line 535
 *   +0x0120 -> line 546
 *   +0x0124 -> line 547
 *   +0x0128 -> line 546
 *   +0x012c -> line 551
 *   +0x0134 -> line 547
 *   +0x013c -> line 551
 *   +0x0184 -> line 552
 *   +0x018c -> line 553
 *   +0x0190 -> line 552
 *   +0x0194 -> line 553
 *   +0x0198 -> line 556
 *   +0x019c -> line 559
 *   +0x01a8 -> line 552
 *   +0x01b4 -> line 553
 *   +0x01b8 -> line 554
 *   +0x01bc -> line 555
 *   +0x01c0 -> line 559
 *   +0x01c8 -> line 561
 *   +0x01cc -> line 564
 *   +0x01d0 -> line 562
 *   +0x01d4 -> line 565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bCreateDevice(GLD_tdstDeviceAttributes_* pstDevAttrib, short* phDev)
{
    GLD_stDevice* pstDev;
    int bFirstTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 472–476 */
/* addr: 0x002aca70  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 472
 *   +0x000c -> line 473
 *   +0x0014 -> line 474
 *   +0x002c -> line 476
 *   +0x0030 -> line 475
 *   +0x0034 -> line 476
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int GLD_bClearViewportWithChoice(short sChoice)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\gld\DevVpt.c lines 166–273 */
/* addr: 0x002acab0  size: 736 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 166
 *   +0x0004 -> line 173
 *   +0x0008 -> line 166
 *   +0x000c -> line 173
 *   +0x0010 -> line 166
 *   +0x0014 -> line 173
 *   +0x0024 -> line 174
 *   +0x002c -> line 173
 *   +0x0034 -> line 174
 *   +0x003c -> line 173
 *   +0x004c -> line 174
 *   +0x0050 -> line 173
 *   +0x0058 -> line 174
 *   +0x005c -> line 173
 *   +0x0060 -> line 175
 *   +0x0064 -> line 181
 *   +0x0068 -> line 174
 *   +0x0070 -> line 176
 *   +0x0074 -> line 180
 *   +0x0078 -> line 178
 *   +0x007c -> line 179
 *   +0x0080 -> line 180
 *   +0x0084 -> line 181
 *   +0x0088 -> line 186
 *   +0x0090 -> line 187
 *   +0x0094 -> line 188
 *   +0x009c -> line 186
 *   +0x00a0 -> line 187
 *   +0x00a4 -> line 189
 *   +0x00a8 -> line 188
 *   +0x00ac -> line 191
 *   +0x00c8 -> line 192
 *   +0x00d4 -> line 193
 *   +0x00f0 -> line 194
 *   +0x00fc -> line 197
 *   +0x0104 -> line 199
 *   +0x0108 -> line 201
 *   +0x0110 -> line 202
 *   +0x0118 -> line 204
 *   +0x011c -> line 205
 *   +0x0124 -> line 206
 *   +0x012c -> line 209
 *   +0x0130 -> line 210
 *   +0x0134 -> line 212
 *   +0x013c -> line 214
 *   +0x0140 -> line 216
 *   +0x0148 -> line 217
 *   +0x015c -> line 219
 *   +0x0160 -> line 220
 *   +0x0168 -> line 221
 *   +0x0170 -> line 224
 *   +0x0174 -> line 225
 *   +0x0178 -> line 232
 *   +0x0184 -> line 233
 *   +0x0188 -> line 234
 *   +0x018c -> line 235
 *   +0x0190 -> line 232
 *   +0x0198 -> line 233
 *   +0x019c -> line 235
 *   +0x01a8 -> line 232
 *   +0x01ac -> line 233
 *   +0x01b0 -> line 232
 *   +0x01b4 -> line 236
 *   +0x01b8 -> line 233
 *   +0x01bc -> line 234
 *   +0x01c4 -> line 233
 *   +0x01c8 -> line 237
 *   +0x01cc -> line 234
 *   +0x01d0 -> line 235
 *   +0x01d4 -> line 234
 *   +0x01dc -> line 235
 *   +0x01e0 -> line 238
 *   +0x01e4 -> line 235
 *   +0x01e8 -> line 241
 *   +0x01f0 -> line 242
 *   +0x01f4 -> line 243
 *   +0x01fc -> line 244
 *   +0x0200 -> line 245
 *   +0x0210 -> line 246
 *   +0x0214 -> line 247
 *   +0x0224 -> line 248
 *   +0x0228 -> line 250
 *   +0x022c -> line 251
 *   +0x0230 -> line 252
 *   +0x0234 -> line 253
 *   +0x0238 -> line 255
 *   +0x023c -> line 257
 *   +0x0244 -> line 258
 *   +0x024c -> line 259
 *   +0x0250 -> line 264
 *   +0x0258 -> line 265
 *   +0x0264 -> line 266
 *   +0x0274 -> line 267
 *   +0x0288 -> line 268
 *   +0x0294 -> line 269
 *   +0x02a0 -> line 270
 *   +0x02b0 -> line 271
 *   +0x02c4 -> line 272
 *   +0x02d0 -> line 273
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    /* TODO: decompile from asm/... */
}
