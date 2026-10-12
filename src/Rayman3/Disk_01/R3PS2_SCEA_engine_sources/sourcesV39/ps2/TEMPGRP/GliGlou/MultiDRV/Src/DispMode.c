/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\DispMode.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

extern unsigned int GetCop0(int reg);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstDisplayMode_ GLI_tdstDisplayMode_;
typedef struct anon_0 anon_0;

struct GLI_tdstDisplayMode_ {
    int lFullScreen; /* +0x0 */
    int lWidth; /* +0x4 */
    int lHeight; /* +0x8 */
    int lBpp; /* +0xc */
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

/* The target reads COP0 Count with mfc0, which MWCC cannot emit from C;
 * only that instruction is written as asm. */
void GLI_fn_vTimerPS2Counter(unsigned int* pCount)
{
    register unsigned int counter;
    asm { mfc0 counter, $9 }
    *pCount = counter;
}

void GLI_fn_vDoCompleteFadeOut(void)
{
    float fSpeed = 0.1f;
    GLI_g_CompleteFadeDirection = -fSpeed;
    GLI_g_CompleteFadeCurrentValue = 1.0f - GLI_g_CompleteFadeDirection;
}

void GLI_fn_vInitInstantFadeIn(unsigned int ulNumberOfFrame)
{
    GLI_g_ulFadeNumberOfFrameIn = ulNumberOfFrame;
    GLI_g_ulFadeCurrentFrameIn = 0;
}
