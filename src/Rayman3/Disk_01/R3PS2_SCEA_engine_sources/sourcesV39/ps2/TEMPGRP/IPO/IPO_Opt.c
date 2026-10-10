/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_Opt.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct ISI_tdstColor_ ISI_tdstColor_;

struct ISI_tdstColor_ {
    short xRed; /* +0x0 */
    short xGreen; /* +0x2 */
    short xBlue; /* +0x4 */
    short xAlpha; /* +0x6 */
};

ISI_tdstColor_ IPO_g_tdstBlack;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\IPO\IPO_Opt.c lines 98–101 */
/* addr: 0x002f31d0  size: 156 bytes */
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
