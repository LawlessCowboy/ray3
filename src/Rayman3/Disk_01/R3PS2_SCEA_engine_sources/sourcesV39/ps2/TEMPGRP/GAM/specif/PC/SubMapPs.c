/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\PC\SubMapPs.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */

/* Defined by GAM/SOL.c; referenced by this platform-specific helper. */
extern unsigned char GAM_g_ucNbMovedOnes;

int gs_hFirstSubMapPosition;

void GAM_fn_vInitTableOfMovedOnes(void)
{
    GAM_g_ucNbMovedOnes = 0;
}
