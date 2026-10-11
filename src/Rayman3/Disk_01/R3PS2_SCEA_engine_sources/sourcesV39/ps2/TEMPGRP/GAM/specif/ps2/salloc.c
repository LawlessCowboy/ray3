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

typedef struct tdstFileEntry_ {
    unsigned int Reserved_Key; /* +0x0 */
    unsigned int Reserved_Key2; /* +0x4 */
    char Name[8]; /* +0x8 */
    char DateTime[26]; /* +0x10 */
    unsigned int ulScore; /* +0x2c */
    unsigned int ulNbCage; /* +0x30 */
} tdstFileEntry_;

extern tdstFileEntry_ g_aFileEntryArray[100];
extern unsigned int PS2MC_g_NbFilesFound;
extern char g_CurrentSaveName[];
extern char g_CurrentNameForSavePage[10];
extern int g_CurrentSelectedCharNumber;
int sprintf(char* s, const char* format, ...);
int strcmp(const char* s1, const char* s2);
char* strcpy(char* s1, const char* s2);
size_t strlen(const char* s);

void fn_vGetScreenShotDefaultName(void)
{
    int Found;
    int Number;
    int i;
    char TestFileName[8];

    Number = 1;
    do
    {
        i = 0;
        Found = 0;
        sprintf(TestFileName, "%s%02d", g_CurrentSaveName, Number);
        while (i < PS2MC_g_NbFilesFound && !Found)
        {
            if (!strcmp(g_aFileEntryArray[i].Name, TestFileName))
            {
                Found = 1;
            }
            else
            {
                i++;
            }
        }
        Number++;
    } while (Found);
    strcpy(g_CurrentNameForSavePage, TestFileName);
    g_CurrentSelectedCharNumber = strlen(g_CurrentNameForSavePage);
    if (g_CurrentSelectedCharNumber == 7)
    {
        g_CurrentSelectedCharNumber--;
    }
}

void fn_vFreeAllocator(anon_0* pstAllocator, void* pvClientAddress)
{
    channel_debug_printf(-1, "(%08x)->trfree (%08x)\n", pstAllocator, pvClientAddress);
}

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

void fn_vResetAllocator(anon_0* pstAllocator)
{
    pstAllocator->pcTop = pstAllocator->pcBase;
    pstAllocator->pcTop += 4;
    pstAllocator->pcTop = (pstAllocator->pcTop & 0xF) ? (pstAllocator->pcTop & -0x10) + 0x10 : pstAllocator->pcTop;
    pstAllocator->pcTop -= 4;
    channel_debug_printf(-1, "(%08x)->trreset()\n", pstAllocator);
}

void fn_vInitAllocator(anon_0* pstAllocator, unsigned int u32Size, char* pcBuffer)
{
    pstAllocator->u32Limit = u32Size;
    pstAllocator->pcBase = (int)pcBuffer;
    fn_vResetAllocator(pstAllocator);
}
