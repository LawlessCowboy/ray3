/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\Sai_main.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/SAI.h"

/* Recovered aggregate layouts from MWCC debug type records. */

/* Random module state is defined by RND_Main.c and shared by this init TU. */
extern unsigned char g_ucRNDModuleId;
extern RND_tdstRandom_ RND_g_stRandomStructure;

unsigned char g_ucSAIModuleId;
SAI_tdstInternalStructure_ SAI_g_stInternalStructure;

void RND_fn_vFirstInitRandom(void)
{
    if (g_ucRNDModuleId == 255)
        g_ucRNDModuleId = Erm_fn_ucInitErrMsg(g_ucRNDModuleId);
    RND_g_stRandomStructure.hLastUsedIndex = 0;
}
