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
extern int CD_Read(int FileHandle, char* Buffer, int Size);
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 774–784 */
/* addr: 0x001330a0  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 776
 *   +0x0008 -> line 774
 *   +0x000c -> line 776
 *   +0x0020 -> line 777
 *   +0x0040 -> line 778
 *   +0x0044 -> line 780
 *   +0x0048 -> line 779
 *   +0x0054 -> line 781
 *   +0x0058 -> line 780
 *   +0x005c -> line 781
 *   +0x0070 -> line 784
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 751–757 */
/* addr: 0x00133120  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 751
 *   +0x000c -> line 753
 *   +0x0014 -> line 756
 *   +0x0024 -> line 757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void HMU_fn_vSetMemoriesInBinaryMode(void);
void MNC_fn_vDefaultDeallocator(void* pvPointer);
void MNC_fn_vUnLoadAreaWithDeallocator(unsigned int _u32AreaId, void (*_fn_vDeallocator)(void*));

void MNC_fn_pcUnLoadArea(unsigned int _u32AreaId)
{
    HMU_fn_vSetMemoriesInBinaryMode();
    MNC_fn_vUnLoadAreaWithDeallocator(_u32AreaId, MNC_fn_vDefaultDeallocator);
}

char* MNC_fn_pcLoadAreaWithAllocator(char* _szAreaName, unsigned int _u32AreaId, MNC_tfnAllocator_ _pfnAllocator);
void* MNC_fn_pvDefaultAllocator(unsigned int u32Size);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 741–747 */
/* addr: 0x00133160  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 741
 *   +0x0014 -> line 743
 *   +0x001c -> line 746
 *   +0x0030 -> line 747
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
char* MNC_fn_pcLoadArea(char* _szAreaName, unsigned int _u32AreaId)
{

    HMU_fn_vSetMemoriesInBinaryMode();


    return MNC_fn_pcLoadAreaWithAllocator(_szAreaName, _u32AreaId, MNC_fn_pvDefaultAllocator);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 694–736 */
/* addr: 0x001331b0  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 694
 *   +0x0004 -> line 704
 *   +0x0008 -> line 694
 *   +0x000c -> line 703
 *   +0x0010 -> line 694
 *   +0x0014 -> line 704
 *   +0x0018 -> line 694
 *   +0x0024 -> line 703
 *   +0x0028 -> line 694
 *   +0x002c -> line 703
 *   +0x0030 -> line 694
 *   +0x0034 -> line 704
 *   +0x003c -> line 703
 *   +0x0044 -> line 707
 *   +0x0068 -> line 710
 *   +0x0080 -> line 712
 *   +0x0084 -> line 713
 *   +0x0088 -> line 712
 *   +0x008c -> line 713
 *   +0x0090 -> line 712
 *   +0x00e8 -> line 713
 *   +0x0100 -> line 714
 *   +0x0104 -> line 713
 *   +0x0108 -> line 714
 *   +0x010c -> line 713
 *   +0x0114 -> line 714
 *   +0x011c -> line 715
 *   +0x0124 -> line 719
 *   +0x012c -> line 721
 *   +0x0170 -> line 723
 *   +0x0178 -> line 726
 *   +0x0188 -> line 730
 *   +0x01a0 -> line 731
 *   +0x01ac -> line 732
 *   +0x01b4 -> line 733
 *   +0x01b8 -> line 734
 *   +0x01bc -> line 736
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char fn_bLevelHasTransitionMemory(void);

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

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 176–687 */
/* addr: 0x00133390  size: 1380 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 176
 *   +0x0004 -> line 206
 *   +0x0008 -> line 176
 *   +0x000c -> line 206
 *   +0x0010 -> line 176
 *   +0x0038 -> line 206
 *   +0x003c -> line 176
 *   +0x0044 -> line 206
 *   +0x0048 -> line 211
 *   +0x0058 -> line 212
 *   +0x0068 -> line 215
 *   +0x007c -> line 223
 *   +0x008c -> line 225
 *   +0x009c -> line 226
 *   +0x00a4 -> line 301
 *   +0x00b8 -> line 302
 *   +0x00c0 -> line 303
 *   +0x00c8 -> line 328
 *   +0x00d4 -> line 329
 *   +0x00f0 -> line 330
 *   +0x00f8 -> line 356
 *   +0x0104 -> line 357
 *   +0x010c -> line 358
 *   +0x0110 -> line 357
 *   +0x0114 -> line 358
 *   +0x0120 -> line 377
 *   +0x0128 -> line 380
 *   +0x0140 -> line 383
 *   +0x014c -> line 385
 *   +0x0158 -> line 386
 *   +0x0170 -> line 391
 *   +0x0178 -> line 393
 *   +0x0198 -> line 397
 *   +0x01ac -> line 419
 *   +0x01b0 -> line 397
 *   +0x01b4 -> line 419
 *   +0x01c0 -> line 444
 *   +0x01c8 -> line 462
 *   +0x0304 -> line 467
 *   +0x0310 -> line 468
 *   +0x0320 -> line 474
 *   +0x0334 -> line 475
 *   +0x0344 -> line 476
 *   +0x034c -> line 542
 *   +0x0354 -> line 543
 *   +0x0358 -> line 544
 *   +0x035c -> line 543
 *   +0x0360 -> line 544
 *   +0x0364 -> line 543
 *   +0x0368 -> line 544
 *   +0x0370 -> line 563
 *   +0x0378 -> line 565
 *   +0x0388 -> line 588
 *   +0x0398 -> line 612
 *   +0x03a0 -> line 627
 *   +0x03a4 -> line 630
 *   +0x03ac -> line 632
 *   +0x03b0 -> line 630
 *   +0x03b8 -> line 627
 *   +0x03bc -> line 628
 *   +0x03c0 -> line 629
 *   +0x03c4 -> line 632
 *   +0x03d4 -> line 634
 *   +0x03e0 -> line 637
 *   +0x0400 -> line 639
 *   +0x0410 -> line 640
 *   +0x0418 -> line 645
 *   +0x0430 -> line 646
 *   +0x0434 -> line 645
 *   +0x043c -> line 646
 *   +0x0448 -> line 648
 *   +0x0454 -> line 651
 *   +0x0470 -> line 653
 *   +0x0480 -> line 654
 *   +0x0488 -> line 663
 *   +0x04a0 -> line 669
 *   +0x04a4 -> line 663
 *   +0x04a8 -> line 669
 *   +0x04ac -> line 664
 *   +0x04b0 -> line 665
 *   +0x04b8 -> line 669
 *   +0x04d0 -> line 671
 *   +0x04e0 -> line 672
 *   +0x04e8 -> line 681
 *   +0x0500 -> line 682
 *   +0x0504 -> line 681
 *   +0x0510 -> line 682
 *   +0x0520 -> line 684
 *   +0x052c -> line 686
 *   +0x0534 -> line 687
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
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
    if (CD_Read(fh, (char*)&u32NbLinks, 4) != 4)
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
            u32Area = pstPtrTable[i].u32AreaId + 2 - fn_lGetTransitionBloc();
        else
            u32Area = pstPtrTable[i].u32AreaId;
        *pu32Adr += (unsigned int)g_a_pcAreaBasePointers[u32Area];
    }

    for (i = 0; i < u32NbLinks; i++)
    {
        if (pstLinksTable[i].u32AreaId == 2 || pstLinksTable[i].u32AreaId == 3)
            u32Area = pstLinksTable[i].u32AreaId + 2 - fn_lGetTransitionBloc();
        else
            u32Area = pstLinksTable[i].u32AreaId;
        pu32Adr = (unsigned int*)(g_a_pcAreaBasePointers[u32Area] + pstLinksTable[i].u32AreaOffset);
        pstOldLinkPointers->pPtrAddress = (int)pu32Adr;
        pstOldLinkPointers->pPtrOldValue = *pu32Adr;
        pstOldLinkPointers++;
        if (pstLinksTable[i].u32CMBAreaId == 2 || pstLinksTable[i].u32CMBAreaId == 3)
            u32Area = pstLinksTable[i].u32CMBAreaId + 2 - fn_lGetTransitionBloc();
        else
            u32Area = pstLinksTable[i].u32CMBAreaId;
        *pu32Adr = (unsigned int)(g_a_pcAreaBasePointers[u32Area] + pstLinksTable[i].u32CMBOffset);
    }

    HMU_fn_vFree((void**)&pcPtrFile, 0);

    return g_a_pcAreaBasePointers[_u32AreaId];
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 140–142 */
/* addr: 0x00133900  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 140
 *   +0x0004 -> line 141
 *   +0x0008 -> line 140
 *   +0x0010 -> line 141
 *   +0x0018 -> line 142
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void MNC_fn_vDefaultDeallocator(void* pvPointer)
{
    HMU_fn_vFree(&pvPointer, 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 135–135 */
/* addr: 0x00133930  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 135
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* MNC_fn_pvDefaultAllocator(unsigned int u32Size)
{
    return HMU_fn_p_vMalloc(u32Size, 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 122–122 */
/* addr: 0x00133940  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int MNC_fn_ulGetAreaChecksum(void)
{
    return g_ulAreaChecksum;
}
