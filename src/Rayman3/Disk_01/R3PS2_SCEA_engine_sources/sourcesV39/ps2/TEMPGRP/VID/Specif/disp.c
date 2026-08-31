/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

static int gs_keepit2;
static int gs_keepit1;
static int gs_iWasPal60;
static int gs_pOrg;
static int s_iTexGlTable[16];
static unsigned int EndFrame;
static unsigned int OldStart;
static unsigned int StartFrame;
int VID_g_iHasAudio;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 35–35 */
/* addr: 0x0012f6b0  size: 64 bytes */
void VIDSPE_fn_vSetVideoQuality(unsigned char ucVideoQuality)
{
    /* line map: */
    /*   line 35 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 523–579 */
/* addr: 0x0012f6f0  size: 796 bytes */
void fn_vDisplayImage(void* _p_ImageBuffer, unsigned int _ulWidth, unsigned int _ulHeight)
{
    float fImage2ScreenRatioX;
    int iTexWidth;
    int nbTex;
    int i;
    char* p_cTextures;
    /* line map: */
    /*   line 523 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 523 @ +0x000 */
    /*   line 533 @ +0x000 */
    /*   line 536 @ +0x000 */
    /*   line 549 @ +0x000 */
    /*   line 550 @ +0x000 */
    /*   line 550 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 433–509 */
/* addr: 0x0012fa10  size: 2364 bytes */
void fn_vConvertIpuToTex(char* dst, char* src, int width, int height, int width_to_copy, unsigned int x0)
{
    char* olddest;
    char* spraddrold;
    char* spraddr;
    int h_leftold;
    int h_left;
    int j;
    int i;
    int h;
    int w;
    /* line map: */
    /*   line 433 @ +0x000 */
    /*   line 433 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 451 @ +0x000 */
    /*   line 467 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 474 @ +0x000 */
    /*   line 472 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 331–378 */
/* addr: 0x00130350  size: 728 bytes */
void fn_vFeedTexToGl(unsigned char _ucTexNumber, void* _p_vTexture, unsigned int _ulWidth, unsigned int _ulHeight, int x0, int y0f, int x1, int y1f)
{
    /* line map: */
    /*   line 331 @ +0x000 */
    /*   line 336 @ +0x000 */
    /*   line 339 @ +0x000 */
    /*   line 342 @ +0x000 */
    /*   line 345 @ +0x000 */
    /*   line 347 @ +0x000 */
    /*   line 349 @ +0x000 */
    /*   line 351 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\VID\Specif\disp.c lines 128–196 */
/* addr: 0x00130630  size: 576 bytes */
void DesinitGlDevice(void)
{
    int i;
    /* line map: */
    /*   line 128 @ +0x000 */
    /*   line 133 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 145 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 149 @ +0x000 */
    /* TODO: decompile from asm/... */
}
