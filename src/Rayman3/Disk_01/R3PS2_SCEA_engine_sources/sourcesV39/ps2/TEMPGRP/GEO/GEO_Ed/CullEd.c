/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GEO\GEO_Ed\CullEd.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */

float GEO_g_xZFarTransparencyLevel;
float GEO_g_xOoZFarTransparencyZone;
float GEO_g_xZFarTransparencyZone;
float GEO_g_xZFar;

void GEO_fn_vUpdateMinMaxBoxWithPoint(MTH3D_tdstVector_* p_stMinPoint, MTH3D_tdstVector_* p_stMaxPoint, MTH3D_tdstVector_* p_stPoint)
{
    if (p_stPoint->xX < p_stMinPoint->xX)
        p_stMinPoint->xX = p_stPoint->xX;
    else if (p_stPoint->xX > p_stMaxPoint->xX)
        p_stMaxPoint->xX = p_stPoint->xX;
    if (p_stPoint->xY < p_stMinPoint->xY)
        p_stMinPoint->xY = p_stPoint->xY;
    else if (p_stPoint->xY > p_stMaxPoint->xY)
        p_stMaxPoint->xY = p_stPoint->xY;
    if (p_stPoint->xZ < p_stMinPoint->xZ)
        p_stMinPoint->xZ = p_stPoint->xZ;
    else if (p_stPoint->xZ > p_stMaxPoint->xZ)
        p_stMaxPoint->xZ = p_stPoint->xZ;
}
