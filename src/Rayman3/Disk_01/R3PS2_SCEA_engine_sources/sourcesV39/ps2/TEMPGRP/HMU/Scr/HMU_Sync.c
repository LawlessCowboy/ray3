/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Sync.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _stCriticalSection _stCriticalSection;

struct _stCriticalSection {
    int Sid; /* +0x0 */
    int OwnerThreadId; /* +0x4 */
    int ReentrancyCount; /* +0x8 */
};

unsigned char HMU_g_bInitialized;
unsigned char HMU_g_bHMU_CS_Created;
_stCriticalSection g_stHMU_CS;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Sync.c lines 37–37 */
/* addr: 0x002ee5e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char HMU_fn_bIsInitialized(void)
{
    return HMU_g_bInitialized;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Sync.c lines 64–64 */
/* addr: 0x002ee5f0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vLeaveCriticalSection(void)
{
    PS2_fn_vLeaveCriticalSection(&g_stHMU_CS);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\HMU\Scr\HMU_Sync.c lines 56–60 */
/* addr: 0x002ee600  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 56
 *   +0x0008 -> line 57
 *   +0x0014 -> line 58
 *   +0x0030 -> line 59
 *   +0x003c -> line 60
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
