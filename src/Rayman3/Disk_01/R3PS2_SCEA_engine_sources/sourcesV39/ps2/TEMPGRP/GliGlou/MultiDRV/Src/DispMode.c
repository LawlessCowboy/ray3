/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;

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
/* array */ int GLI_gs_a_stDisplayMode[32];
int g_bDrawingBlackFrame;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c lines 128–128 */
/* addr: 0x002a8510  size: 12 bytes */
void GLI_fn_vTimerPS2Counter(unsigned int* pCount)
{
    unsigned int counter;
    /* line map: */
    /*   line 128 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c lines 617–617 */
/* addr: 0x002a8520  size: 48 bytes */
void GLI_fn_vDoCompleteFadeOut(void)
{
    /* line map: */
    /*   line 617 @ +0x000 */
    /*   line 617 @ +0x000 */
    /* TODO: decompile from asm/... */
}
