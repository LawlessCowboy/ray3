/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct vagInit vagInit;
typedef struct anon_0 anon_0;
typedef struct _tdstLink _tdstLink;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;

struct vagInit {
    float fVolume; /* +0x0 */
};

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
    int pstOldLinks; /* +0x0 */
    unsigned int u32NbLinks; /* +0x4 */
};

static unsigned int g_ulAreaChecksum;
/* aggregate */ int g_a_pcEndOfArea;
anon_2 g_a_stOldLinkPointers[250];
/* aggregate */ int g_a_pcAreaBasePointers;
void (*MNC_fn_vDefaultDeallocator)(void*);
/* aggregate */ int MNC_fn_pvDefaultAllocator;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 46–55 */
/* addr: 0x00133070  size: 44 bytes */
int vagInit(float fVolume)
{
    /* line map: */
    /*   line 46 @ +0x000 */
    /*   line 46 @ +0x000 */
    /*   line 54 @ +0x000 */
    /*   line 55 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 774–781 */
/* addr: 0x001330a0  size: 120 bytes */
unsigned char MNC_fn_bGetPointerInfo(void* _pvAddress, int* _piAreaId, int* _piOffset)
{
    int i;
    char* pcAddressAsChar;
    unsigned char bPointerFound;
    /* line map: */
    /*   line 774 @ +0x000 */
    /*   line 777 @ +0x000 */
    /*   line 780 @ +0x000 */
    /*   line 781 @ +0x000 */
    /*   line 781 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 753–757 */
/* addr: 0x00133120  size: 52 bytes */
void MNC_fn_pcUnLoadArea(unsigned int _u32AreaId)
{
    /* line map: */
    /*   line 753 @ +0x000 */
    /*   line 757 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 743–747 */
/* addr: 0x00133160  size: 68 bytes */
void MNC_fn_pcLoadArea(char* _szAreaName, unsigned int _u32AreaId)
{
    /* line map: */
    /*   line 743 @ +0x000 */
    /*   line 747 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 703–734 */
/* addr: 0x001331b0  size: 476 bytes */
void MNC_fn_vUnLoadAreaWithDeallocator(unsigned int _u32AreaId, void (*_fn_vDeallocator)(void*), anon_1* pstOldLinkPointers)
{
    unsigned int u32NbLinks;
    unsigned int i;
    /* line map: */
    /*   line 704 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 704 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 703 @ +0x000 */
    /*   line 704 @ +0x000 */
    /*   line 707 @ +0x000 */
    /*   line 712 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 206–687 */
/* addr: 0x00133390  size: 1380 bytes */
void MNC_fn_pcLoadAreaWithAllocator(char* _szAreaName, unsigned int _u32AreaId, /* function pointer */ int _fn_pvAllocator, anon_1* pstOldLinkPointers, _tdstLink* pstLinksTable, anon_0* pstPtrTable)
{
    unsigned int u32Area;
    int fh;
    unsigned int* pu32Adr;
    unsigned int i;
    unsigned int u32AreaSize;
    unsigned int u32FileSize;
    unsigned int u32NbLinks;
    unsigned int u32NbPointers;
    char* pcPtrFile;
    char szFilename[255];
    /* line map: */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 212 @ +0x000 */
    /*   line 223 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 302 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\MNC\load\loadarea.c lines 141–141 */
/* addr: 0x00133900  size: 36 bytes */
void MNC_fn_vDefaultDeallocator(void* pvPointer)
{
    /* line map: */
    /*   line 141 @ +0x000 */
    /*   line 141 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00133930  size: 8 bytes */
void MNC_fn_pvDefaultAllocator(unsigned int u32Size)
{
    /* TODO: decompile from asm/... */
}
