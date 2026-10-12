/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Sync.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"

/* Recovered aggregate layouts from MWCC debug type records. */

unsigned char HMU_g_bInitialized;
unsigned char HMU_g_bHMU_CS_Created;
_stCriticalSection g_stHMU_CS;

unsigned char HMU_fn_bIsInitialized(void)
{
    return HMU_g_bInitialized;
}

void HMU_fn_vLeaveCriticalSection(void)
{
    PS2_fn_vLeaveCriticalSection(&g_stHMU_CS);
}

void HMU_fn_vEnterCriticalSection(void)
{
    if (HMU_g_bHMU_CS_Created == 0)
    {
        if (HMU_g_bHMU_CS_Created == 0)
        {
            PS2_fn_vCreateCriticalSection(&g_stHMU_CS);
            HMU_g_bHMU_CS_Created = 1;
        }
    }
    PS2_fn_vEnterCriticalSection(&g_stHMU_CS);
}
