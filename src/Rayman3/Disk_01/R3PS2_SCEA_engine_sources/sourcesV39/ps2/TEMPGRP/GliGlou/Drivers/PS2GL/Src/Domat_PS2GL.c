/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\Domat_PS2GL.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GLI.h"

/* Recovered aggregate layouts from MWCC debug type records. */

static int bIsWriteEnable = 1;
static short xSaveFogIsOn;
static unsigned char ucSaveCyclingMode[2] = { 0xff, 0xff };
static unsigned char ucSaveFunction = 0xff;
static unsigned int gs_ulDepthBufferTestEnabled;
int p_stLightMapTexture;
int g_lNumberOfBlackTriangles;

void GLI_DRV_xClearViewingList(void)
{
}

int GLI_DRV_bEndScene(void)
{
    return 1;
}

int GLI_DRV_bBeginScene(void)
{
    return 1;
}

void GLI_fn_vInitRenderParameters(void)
{
    xSaveFogIsOn = 0;
    bIsWriteEnable = 1;

    ucSaveCyclingMode[1] = 0xff;
    ucSaveCyclingMode[0] = 0xff;
    ucSaveFunction = 0xff;
}

void GLI_DRV_vAddBlackPolygon(void)
{
}
