/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstDisplayMode_ GLI_tdstDisplayMode_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct anon_0 anon_0;

struct GLI_tdstDisplayMode_ {
    int lFullScreen; /* +0x0 */
    int lWidth; /* +0x4 */
    int lHeight; /* +0x8 */
    int lBpp; /* +0xc */
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

struct anon_0 {
    char cAvailable; /* +0x0 */
    int lIndexInArray; /* +0x4 */
};

int GLI_gs_lNumberOfDisplayModes;
int GLI_gs_lRequestedDisplayMode;
float GLI_g_xBrightness;
float GLI_g_CompleteFadeDirection;
float GLI_g_CompleteFadeCurrentValue;
unsigned int GLI_g_ulFadeCurrentFrameOut;
unsigned int GLI_g_ulFadeNumberOfFrameOut;
unsigned int GLI_g_ulFadeCurrentFrameIn;
unsigned int GLI_g_ulFadeNumberOfFrameIn;
anon_0 a3_xThreeModesArray[3];
int GLI_gs_lCurrentDisplayMode;
GLI_tdstDisplayMode_ GLI_gs_a_stDisplayMode[32];
int g_bDrawingBlackFrame;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c lines 126–128 */
/* addr: 0x002a8510  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 126
 *   +0x0004 -> line 128
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vTimerPS2Counter(unsigned int* pCount)
{
    unsigned int counter;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c lines 616–619 */
/* addr: 0x002a8520  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 616
 *   +0x000c -> line 617
 *   +0x0018 -> line 616
 *   +0x0020 -> line 617
 *   +0x0028 -> line 619
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vDoCompleteFadeOut(void)
{
    GLI_g_CompleteFadeDirection = -0.1f;
    GLI_g_CompleteFadeCurrentValue = 1.0f - GLI_g_CompleteFadeDirection;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c lines 561–563 */
/* addr: 0x002a8550  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 561
 *   +0x0004 -> line 563
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_fn_vInitInstantFadeIn(unsigned int ulNumberOfFrame)
{
    GLI_g_ulFadeNumberOfFrameIn = ulNumberOfFrame;
    GLI_g_ulFadeCurrentFrameIn = 0;
}
