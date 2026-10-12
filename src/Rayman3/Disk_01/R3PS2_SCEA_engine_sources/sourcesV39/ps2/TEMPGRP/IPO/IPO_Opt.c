/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_Opt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */

ISI_tdstColor_ IPO_g_tdstBlack;

/* Debug signature rejected: type-record data leaked into it. */
extern char* IPO_g_a_szAdditionnalRLITables[10];
extern unsigned char IPO_g_ucNumberOfRLITables;
extern char IPO_g_cTransitionInProgress;

void IPO_fn_vLevelDesinitRLITables(void)
{
    int i;

    for (i = 0; i < IPO_g_ucNumberOfRLITables; i++) IPO_g_a_szAdditionnalRLITables[i] = NULL;
    IPO_g_ucNumberOfRLITables = 0;
    IPO_g_cTransitionInProgress = 0;
}
