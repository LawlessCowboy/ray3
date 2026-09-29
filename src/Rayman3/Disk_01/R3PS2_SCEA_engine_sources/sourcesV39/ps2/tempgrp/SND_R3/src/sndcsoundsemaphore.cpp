/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct less less;
typedef struct stree stree;
typedef struct iterator iterator;
typedef struct CSoundSemaphoreInfo CSoundSemaphoreInfo;
typedef struct CSoundSemaphore CSoundSemaphore;
typedef struct iterator_base iterator_base;
typedef struct sTreeLink sTreeLink;
typedef struct streebase streebase;
typedef struct smap smap;
typedef struct sallocator sallocator;
struct sallocator { int data[4]; };

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct spair {
    int first; /* +0x0 */
    CSoundSemaphoreInfo* second; /* +0x4 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct sTreeNode : sTreeLink {
    spair m_oValue; /* +0x10 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct stree : streebase {
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct CSoundSemaphoreInfo {
    int ms32ObjectId; /* +0x0 */
    int ms32TypeId; /* +0x4 */
    int ms32HandleId; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct CSoundSemaphore : smap {
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
    CSoundSemaphore(unsigned int, unsigned int);
    void f_vSynchro(void);
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};












/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 442–448 */
/* addr: 0x001caab0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 442
 *   +0x0010 -> line 444
 *   +0x002c -> line 445
 *   +0x0030 -> line 446
 *   +0x0038 -> line 447
 *   +0x0040 -> line 448
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void _NilElmt__Q24usnd9streebase(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 62–98 */
/* addr: 0x001cabd0  size: 640 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 62
 *   +0x001c -> line 65
 *   +0x0020 -> line 67
 *   +0x0044 -> line 69
 *   +0x0048 -> line 70
 *   +0x0090 -> line 84
 *   +0x00ac -> line 86
 *   +0x00b0 -> line 88
 *   +0x00bc -> line 90
 *   +0x00f0 -> line 92
 *   +0x00fc -> line 93
 *   +0x024c -> line 96
 *   +0x0258 -> line 97
 *   +0x0260 -> line 98
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSoundSemaphore::f_vSynchro(void)
{
    unsigned int uiTemp;
    CSoundSemaphoreInfo* ro_Info;
    int uiNbHandlesToDelete;
    iterator it;
    int sauiHandlesToDelete[50];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 430–438 */
/* addr: 0x001cb610  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 430
 *   +0x0004 -> line 431
 *   +0x0008 -> line 430
 *   +0x000c -> line 431
 *   +0x0010 -> line 430
 *   +0x0020 -> line 431
 *   +0x0028 -> line 433
 *   +0x0068 -> line 436
 *   +0x0074 -> line 437
 *   +0x0088 -> line 438
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Original malformed template-instantiation body retained below as evidence. */
#if 0
void _Erase__Q24usnd215stree<i,Q24usnd32spair<Ci,P19CSoundSemaphoreInfo>,Q34usnd90smap<i,P19CSoundSemaphoreInfo,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>4_Kfn,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>FPQ34usnd215stree<i,Q24usnd32spair<Ci,P19CSoundSemaphoreInfo>,Q34usnd90smap<i,P19CSoundSemaphoreInfo,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>4_Kfn,Q24usnd7less<i>,Q24usnd34sallocator<P19CSoundSemaphoreInfo>>9sTreeNode(sTreeNode* _pNode)
{
    sTreeNode* _pNode2;
    /* TODO: decompile from asm/... */
}

#endif

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 29–32 */
/* addr: 0x001cb6b0  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 29
 *   +0x0084 -> line 32
 *   +0x0088 -> line 29
 *   +0x008c -> line 32
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore::CSoundSemaphore(unsigned int u32_ChannelId, unsigned int u32_ChannelSize)
{
    /* TODO: decompile from asm/... */
}
