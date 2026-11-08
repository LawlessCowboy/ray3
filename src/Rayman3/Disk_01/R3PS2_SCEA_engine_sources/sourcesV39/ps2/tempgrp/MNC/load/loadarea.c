/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef void* (*MNC_tfnAllocator_)(unsigned int);

extern void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
extern void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct _tdstLink _tdstLink;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;

struct anon_0 {
    unsigned int u32AreaId; /* +0x0 */
    unsigned int u32Offset; /* +0x4 */
};

struct _tdstLink {
    unsigned int u32AreaOffset; /* +0x0 */
    unsigned int u32AreaId; /* +0x4 */
    unsigned int u32CMBOffset; /* +0x8 */
    unsigned int u32CMBAreaId; /* +0xc */
};

struct anon_1 {
    int pPtrAddress; /* +0x0 */
    int pPtrOldValue; /* +0x4 */
};

struct anon_2 {
    anon_1* pstOldLinks; /* +0x0 */
    unsigned int u32NbLinks; /* +0x4 */
};

extern int CD_OpenFile(char* FileName);
extern unsigned int CD_Length(int FileHandle);
extern unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom);
extern int CD_Read();
extern void CD_Close(int FileHandle);
extern char* FMN_SCE_ConvertPath2DVD(char* buffer);
extern char* Strcat(char*, const char*);
extern char* strcpy(char*, const char*);
extern int printf(const char*, ...);
extern int fn_lGetTransitionBloc(void);

static unsigned int g_ulAreaChecksum;
char* g_a_pcEndOfArea[250];
anon_2 g_a_stOldLinkPointers[250];
char* g_a_pcAreaBasePointers[250];
void (*g_MNC_fn_vDefaultDeallocator)(void*);
MNC_tfnAllocator_ g_MNC_fn_pvDefaultAllocator;

inline unsigned int MNC_fn_ulComputeChecksum(char* _pcBuffer, unsigned int _u32Size)
{
    unsigned int u32Checksum;
    unsigned int* pu32Buffer;
    unsigned int i;

    u32Checksum = 0;
    pu32Buffer = (unsigned int*)_pcBuffer;
    for (i = 0; i < (_u32Size >> 2); i++)
        u32Checksum += *pu32Buffer++;
    for (i = 0; i < (_u32Size & 3); i++)
        u32Checksum += ((unsigned char*)pu32Buffer)[i];
    return u32Checksum;
}

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
unsigned char MNC_fn_bGetPointerInfo(void* _pvAddress, int* _piAreaId, int* _piOffset);
void MNC_fn_pcUnLoadArea(unsigned int _u32AreaId);
char* MNC_fn_pcLoadArea(char* _szAreaName, unsigned int _u32AreaId);
void MNC_fn_vUnLoadAreaWithDeallocator(unsigned int _u32AreaId, void (*_fn_vDeallocator)(void*));
char* MNC_fn_pcLoadAreaWithAllocator(char* _szAreaName, unsigned int _u32AreaId, MNC_tfnAllocator_ _pfnAllocator);
void MNC_fn_vDefaultDeallocator(void* pvPointer);
void* MNC_fn_pvDefaultAllocator(unsigned int u32Size);
unsigned int MNC_fn_ulGetAreaChecksum(void);

void HMU_fn_vSetMemoriesInBinaryMode(void);
void MNC_fn_vDefaultDeallocator(void* pvPointer);
void MNC_fn_vUnLoadAreaWithDeallocator(unsigned int _u32AreaId, void (*_fn_vDeallocator)(void*));

char* MNC_fn_pcLoadAreaWithAllocator(char* _szAreaName, unsigned int _u32AreaId, MNC_tfnAllocator_ _pfnAllocator);
void* MNC_fn_pvDefaultAllocator(unsigned int u32Size);

unsigned char fn_bLevelHasTransitionMemory(void);

unsigned int MNC_fn_ulGetAreaChecksum(void)
{
    return g_ulAreaChecksum;
}

void* MNC_fn_pvDefaultAllocator(unsigned int u32Size)
{
    return HMU_fn_p_vMalloc(u32Size, 0);
}

void MNC_fn_vDefaultDeallocator(void* pvPointer)
{
    HMU_fn_vFree(&pvPointer, 0);
}

/* The debug record lists two parameters and an allocator return, but the
 * target saves a third argument ($a2 -> $s6) and MNC_fn_pcLoadArea passes the
 * allocator there, so the real signature takes it and returns the area. */
char* MNC_fn_pcLoadAreaWithAllocator(char* _szAreaName, unsigned int _u32AreaId, MNC_tfnAllocator_ _pfnAllocator)
{
    unsigned int u32Area;
    anon_1* pstOldLinkPointers;
    _tdstLink* pstLinksTable;
    anon_0* pstPtrTable;
    unsigned int i;
    unsigned int* pu32Adr;
    unsigned int u32AreaSize;
    unsigned int u32FileSize;
    int fh;
    unsigned int u32NbPointers;
    char* pcPtrFile;
    unsigned int u32NbLinks;
    char szFilename[255];

    g_a_pcEndOfArea[_u32AreaId] = NULL;

    strcpy(szFilename, _szAreaName);
    Strcat(szFilename, ".lvl");
    strcpy(szFilename, FMN_SCE_ConvertPath2DVD(szFilename));

    if ((fh = CD_OpenFile(szFilename)) < 0)
    {
        printf("Couln't open %s\n\n", szFilename);
        return NULL;
    }

    if (CD_Length(fh) < 5)
    {
        CD_Close(fh);
        return NULL;
    }

    CD_Seek(fh, 0, 0);
    if (CD_Read(fh, &u32NbLinks, 4) != 4)
        return NULL;

    u32FileSize = CD_Length(fh) - 4;
    u32AreaSize = (u32FileSize + 15) & ~15;
    CD_Seek(fh, 4, 0);

    HMU_fn_vSetMemoriesInBinaryMode();
    g_a_pcAreaBasePointers[_u32AreaId] = (char*)_pfnAllocator(u32AreaSize);
    g_a_pcEndOfArea[_u32AreaId] = g_a_pcAreaBasePointers[_u32AreaId] + u32AreaSize;

    if (u32NbLinks == 0)
        g_a_stOldLinkPointers[_u32AreaId].pstOldLinks = NULL;
    else
    {
        HMU_fn_vSetMemoriesInBinaryMode();
        g_a_stOldLinkPointers[_u32AreaId].pstOldLinks = (anon_1*)_pfnAllocator(u32NbLinks * sizeof(anon_1));
    }
    g_a_stOldLinkPointers[_u32AreaId].u32NbLinks = u32NbLinks;

    CD_Read(fh, g_a_pcAreaBasePointers[_u32AreaId], u32AreaSize);
    CD_Close(fh);

    g_ulAreaChecksum = MNC_fn_ulComputeChecksum(g_a_pcAreaBasePointers[_u32AreaId], u32FileSize);

    strcpy(szFilename, _szAreaName);
    Strcat(szFilename, ".ptr");
    strcpy(szFilename, FMN_SCE_ConvertPath2DVD(szFilename));

    if ((fh = CD_OpenFile(szFilename)) < 0)
        return NULL;

    u32FileSize = CD_Length(fh);
    u32FileSize = (u32FileSize + 15) & ~15;
    CD_Seek(fh, 0, 0);

    HMU_fn_vSetMemoriesInBinaryMode();
    pcPtrFile = (char*)HMU_fn_p_vMalloc(u32FileSize, 0);
    CD_Read(fh, pcPtrFile, u32FileSize);
    CD_Close(fh);

    u32NbPointers = *(unsigned int*)pcPtrFile;
    pstPtrTable = (anon_0*)(pcPtrFile + 4);
    pstLinksTable = (_tdstLink*)(pstPtrTable + u32NbPointers);
    pstOldLinkPointers = g_a_stOldLinkPointers[_u32AreaId].pstOldLinks;

    for (i = 0; i < u32NbPointers; i++)
    {
        pu32Adr = (unsigned int*)(g_a_pcAreaBasePointers[_u32AreaId] + pstPtrTable[i].u32Offset);
        if (pstPtrTable[i].u32AreaId == 2 || pstPtrTable[i].u32AreaId == 3)
        {
            u32Area = pstPtrTable[i].u32AreaId + 2 - fn_lGetTransitionBloc();
        }
        else
        {
            u32Area = pstPtrTable[i].u32AreaId;
        }
        *pu32Adr += (unsigned int)g_a_pcAreaBasePointers[u32Area];
    }

    for (i = 0; i < u32NbLinks; i++)
    {
        if (pstLinksTable[i].u32AreaId == 2 || pstLinksTable[i].u32AreaId == 3)
        {
            u32Area = pstLinksTable[i].u32AreaId + 2 - fn_lGetTransitionBloc();
        }
        else
        {
            u32Area = pstLinksTable[i].u32AreaId;
        }
        pu32Adr = (unsigned int*)(g_a_pcAreaBasePointers[u32Area] + pstLinksTable[i].u32AreaOffset);
        pstOldLinkPointers->pPtrAddress = (int)pu32Adr;
        pstOldLinkPointers->pPtrOldValue = *pu32Adr;
        pstOldLinkPointers++;
        if (pstLinksTable[i].u32CMBAreaId == 2 || pstLinksTable[i].u32CMBAreaId == 3)
        {
            u32Area = pstLinksTable[i].u32CMBAreaId + 2 - fn_lGetTransitionBloc();
        }
        else
        {
            u32Area = pstLinksTable[i].u32CMBAreaId;
        }
        *pu32Adr = (unsigned int)(g_a_pcAreaBasePointers[u32Area] + pstLinksTable[i].u32CMBOffset);
    }

    HMU_fn_vFree((void**)&pcPtrFile, 0);

    return g_a_pcAreaBasePointers[_u32AreaId];
}

void MNC_fn_vUnLoadAreaWithDeallocator(unsigned int _u32AreaId, void (*_fn_vDeallocator)(void*))
{
    anon_1* pstOldLinkPointers;
    unsigned int u32NbLinks;
    unsigned int i;

    pstOldLinkPointers = g_a_stOldLinkPointers[_u32AreaId].pstOldLinks;
    u32NbLinks = g_a_stOldLinkPointers[_u32AreaId].u32NbLinks;

    if (_u32AreaId == 4 || _u32AreaId == 0 || !fn_bLevelHasTransitionMemory())
    {
        for (i = 0; i < u32NbLinks; i++)
        {
            *(int*)pstOldLinkPointers->pPtrAddress = pstOldLinkPointers->pPtrOldValue;
            pstOldLinkPointers++;
        }
    }
    else
    {
        for (i = 0; i < u32NbLinks; i++)
        {
            if (*(char**)pstOldLinkPointers->pPtrAddress >= g_a_pcAreaBasePointers[_u32AreaId] && *(char**)pstOldLinkPointers->pPtrAddress <= g_a_pcEndOfArea[_u32AreaId])
                *(int*)pstOldLinkPointers->pPtrAddress = pstOldLinkPointers->pPtrOldValue;
            pstOldLinkPointers++;
        }
    }

    _fn_vDeallocator(g_a_pcAreaBasePointers[_u32AreaId]);
    if (g_a_stOldLinkPointers[_u32AreaId].pstOldLinks != NULL)
        _fn_vDeallocator(g_a_stOldLinkPointers[_u32AreaId].pstOldLinks);
    g_a_pcAreaBasePointers[_u32AreaId] = NULL;
    g_a_stOldLinkPointers[_u32AreaId].pstOldLinks = NULL;
}

char* MNC_fn_pcLoadArea(char* _szAreaName, unsigned int _u32AreaId)
{

    HMU_fn_vSetMemoriesInBinaryMode();

    return MNC_fn_pcLoadAreaWithAllocator(_szAreaName, _u32AreaId, MNC_fn_pvDefaultAllocator);
}

void MNC_fn_pcUnLoadArea(unsigned int _u32AreaId)
{
    HMU_fn_vSetMemoriesInBinaryMode();
    MNC_fn_vUnLoadAreaWithDeallocator(_u32AreaId, MNC_fn_vDefaultDeallocator);
}

unsigned char MNC_fn_bGetPointerInfo(void* _pvAddress, int* _piAreaId, int* _piOffset)
{
    int i;
    char* pcAddressAsChar;
    unsigned char bPointerFound;

    pcAddressAsChar = (char*)_pvAddress;
    bPointerFound = 0;

    for (i = 0; !bPointerFound && i < 250; i++)
    {
        if (g_a_pcAreaBasePointers[i] <= pcAddressAsChar && pcAddressAsChar < g_a_pcEndOfArea[i])
        {
            *_piAreaId = i;
            *_piOffset = pcAddressAsChar - g_a_pcAreaBasePointers[i];
            bPointerFound = 1;
        }
    }

    return bPointerFound;
}
