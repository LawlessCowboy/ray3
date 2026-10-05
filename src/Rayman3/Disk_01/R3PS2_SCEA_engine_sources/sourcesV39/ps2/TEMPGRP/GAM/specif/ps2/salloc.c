/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* fn_vResetAllocator is inlined into fn_vInitAllocator yet still emitted as a
 * callable function (transition.cxx calls it), which MWCC only does with
 * automatic inlining; -inline auto project-wide regresses other units. */
#pragma auto_inline on

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

struct anon_0 {
    unsigned int u32Limit; /* +0x0 */
    int pcBase; /* +0x4 */
    int pcTop; /* +0x8 */
};

struct anon_1 {
    unsigned int u32Size; /* +0x0 */
    char acBuffer; /* +0x4 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 50–80 */
/* addr: 0x0029f410  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 50
 *   +0x0018 -> line 52
 *   +0x001c -> line 60
 *   +0x0034 -> line 58
 *   +0x0038 -> line 60
 *   +0x0040 -> line 62
 *   +0x0048 -> line 64
 *   +0x0068 -> line 67
 *   +0x0074 -> line 70
 *   +0x0078 -> line 72
 *   +0x0090 -> line 74
 *   +0x0098 -> line 76
 *   +0x00a8 -> line 77
 *   +0x00b8 -> line 78
 *   +0x00cc -> line 80
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vGetScreenShotDefaultName(void)
{
    char TestFileName[8];
    int i;
    int Number;
    int Found;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 116–116 */
/* addr: 0x0029f500  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0008 -> line 116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vFreeAllocator(anon_0* pstAllocator, void* pvClientAddress)
{
    channel_debug_printf(-1, "(%08x)->trfree (%08x)\n", pstAllocator, pvClientAddress);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 64–96 */
/* addr: 0x0029f520  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 64
 *   +0x0004 -> line 69
 *   +0x0008 -> line 64
 *   +0x0014 -> line 69
 *   +0x0030 -> line 73
 *   +0x0054 -> line 75
 *   +0x0064 -> line 76
 *   +0x006c -> line 93
 *   +0x0070 -> line 85
 *   +0x0074 -> line 93
 *   +0x007c -> line 89
 *   +0x0080 -> line 93
 *   +0x0088 -> line 95
 *   +0x008c -> line 96
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* fn_pvAllocAllocator(anon_0* pstAllocator, unsigned int u32Size)
{
    anon_1* pstBlockDescriptor;
    unsigned int u32AlignedSize;

    u32AlignedSize = (u32Size & 0xF) ? (u32Size & ~0xF) + 16 : u32Size;
    pstBlockDescriptor = (anon_1*)pstAllocator->pcTop;
    if ((unsigned int)(u32AlignedSize + ((char*)pstBlockDescriptor - (char*)pstAllocator->pcBase) + 4) > pstAllocator->u32Limit)
    {
        channel_debug_printf(-1, "(%08x)->tralloc(%d) fails\n", pstAllocator, u32Size);
        return NULL;
    }
    pstAllocator->pcTop = (int)((char*)pstBlockDescriptor + u32AlignedSize);
    pstBlockDescriptor->u32Size = u32Size;
    channel_debug_printf(-1, "(%08x)->tralloc(%d) -> %08x\n", pstAllocator, u32Size, &pstBlockDescriptor->acBuffer);
    return &pstBlockDescriptor->acBuffer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 27–46 */
/* addr: 0x0029f620  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 27
 *   +0x0008 -> line 32
 *   +0x0014 -> line 34
 *   +0x0018 -> line 38
 *   +0x0034 -> line 46
 *   +0x0038 -> line 40
 *   +0x003c -> line 46
 *   +0x0044 -> line 40
 *   +0x0048 -> line 46
 * Recovered from .line/.symtab; the extractor emitted no debug record.
 */
void fn_vResetAllocator(anon_0* pstAllocator)
{
    pstAllocator->pcTop = pstAllocator->pcBase;
    pstAllocator->pcTop += 4;
    pstAllocator->pcTop = (pstAllocator->pcTop & 0xF) ? (pstAllocator->pcTop & -0x10) + 0x10 : pstAllocator->pcTop;
    pstAllocator->pcTop -= 4;
    channel_debug_printf(-1, "(%08x)->trreset()\n", pstAllocator);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\specif\ps2\salloc.c lines 52–58 */
/* addr: 0x0029f5c0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 52
 *   +0x0004 -> line 54
 *   +0x0008 -> line 58
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vInitAllocator(anon_0* pstAllocator, unsigned int u32Size, char* pcBuffer)
{
    pstAllocator->u32Limit = u32Size;
    pstAllocator->pcBase = (int)pcBuffer;
    fn_vResetAllocator(pstAllocator);
}
