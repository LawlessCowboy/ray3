/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Linear.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/GEO.h"
#include "r3/GLI.h"
#include "r3/HIE.h"

/* Defined by the light-list implementation; shared with the multi-driver. */
extern unsigned char g_ucTableOfActiveLightsForChar[300];

/* Recovered aggregate layouts from MWCC debug type records. */

int GLI_BIG_GLOBALS_p_stObj;
int GLI_BIG_GLOBALS_GLI_TurnedScaledDisplecedPoint;
MAT_tdstTransformation_ GLI_BIG_GLOBALS_gs_st_CurrentMatrixMultiplyedWithCameraMatrix;

void GLI_vResetTableOfActiveLightsForChar(char _cValue)
{
    memset(g_ucTableOfActiveLightsForChar, _cValue, 300);
}
