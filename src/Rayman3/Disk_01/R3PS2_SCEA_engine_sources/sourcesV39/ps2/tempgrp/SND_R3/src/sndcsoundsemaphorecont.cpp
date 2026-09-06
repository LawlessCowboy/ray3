/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstAllRetObjectSound _tdstAllRetObjectSound;
typedef struct CSoundSemaphoreCont CSoundSemaphoreCont;
typedef struct iterator iterator;
typedef struct spair spair;
typedef struct sTreeNode sTreeNode;
typedef struct less less;
typedef struct stree stree;
typedef struct iterator_base iterator_base;
typedef struct sTreeLink sTreeLink;
typedef struct CSoundSemaphore CSoundSemaphore;
typedef struct streebase streebase;
typedef struct smap smap;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct CSoundSemaphoreCont {
    /* C++ base smap at +0x0. */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct spair {
    iterator first; /* +0x0 */
    unsigned char second; /* +0x4 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    spair m_oValue; /* +0x10 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CSoundSemaphore {
    /* C++ base smap at +0x0. */
    unsigned int mu32ChannelId; /* +0x10 */
    unsigned int mu32ChannelSize; /* +0x14 */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct smap {
    stree _Tr; /* +0x0 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 57–59 */
/* addr: 0x001c9dd0  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 *   +0x0014 -> line 58
 *   +0x002c -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int ~CSoundSemaphoreCont(_tdstAllRetObjectSound* pst_IActor, int s32_VolId)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 110–124 */
/* addr: 0x001c9e10  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x0008 -> line 115
 *   +0x000c -> line 110
 *   +0x0018 -> line 114
 *   +0x0020 -> line 110
 *   +0x0024 -> line 115
 *   +0x00ac -> line 117
 *   +0x00b0 -> line 115
 *   +0x00b4 -> line 117
 *   +0x00d4 -> line 119
 *   +0x00e0 -> line 120
 *   +0x0118 -> line 121
 *   +0x011c -> line 123
 *   +0x0120 -> line 124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CSoundSemaphoreCont::mfn_bRemoveSoundSemaphore(int s32_ChannelId)
{
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 98–107 */
/* addr: 0x001ca030  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 98
 *   +0x000c -> line 101
 *   +0x002c -> line 104
 *   +0x0034 -> line 105
 *   +0x0068 -> line 107
 *   +0x006c -> line 106
 *   +0x0070 -> line 107
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CSoundSemaphoreCont::mfn_bSynchroSoundSemaphore(void)
{
    iterator it_Cont;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 71–95 */
/* addr: 0x001ca0c0  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 71
 *   +0x0004 -> line 75
 *   +0x0008 -> line 71
 *   +0x002c -> line 75
 *   +0x004c -> line 79
 *   +0x0108 -> line 80
 *   +0x0110 -> line 82
 *   +0x011c -> line 84
 *   +0x0124 -> line 87
 *   +0x0148 -> line 88
 *   +0x0150 -> line 90
 *   +0x0164 -> line 94
 *   +0x0168 -> line 95
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore* CSoundSemaphoreCont::mfn_poAddSoundSemaphore(int s32_ChannelId, int s32_ChannelSize)
{
    CSoundSemaphore* po_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 58–67 */
/* addr: 0x001ca540  size: 240 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 58
 *   +0x0008 -> line 63
 *   +0x000c -> line 58
 *   +0x001c -> line 63
 *   +0x00a8 -> line 64
 *   +0x00ac -> line 63
 *   +0x00b0 -> line 64
 *   +0x00d0 -> line 65
 *   +0x00d8 -> line 66
 *   +0x00dc -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CSoundSemaphore* CSoundSemaphoreCont::mfn_poFindSoundSemaphore(int s32_ChannelId)
{
    CSoundSemaphore* po_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 45–55 */
/* addr: 0x001ca630  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 45
 *   +0x0014 -> line 49
 *   +0x001c -> line 51
 *   +0x0030 -> line 52
 *   +0x0080 -> line 53
 *   +0x0084 -> line 54
 *   +0x00d0 -> line 55
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSoundSemaphoreCont::mfn_vDelete(void)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 37–42 */
/* addr: 0x001ca720  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x001c -> line 40
 *   +0x003c -> line 41
 *   +0x00e8 -> line 42
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ~CSoundSemaphoreCont(void)
{
    iterator it;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 30–33 */
/* addr: 0x001caa20  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 30
 *   +0x0008 -> line 31
 *   +0x007c -> line 33
 *   +0x0080 -> line 32
 *   +0x0088 -> line 33
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void CSoundSemaphoreCont::mfn_roGetInstance(void)
{
    CSoundSemaphoreCont oSingleton;
    signed char init;
    /* TODO: decompile from asm/... */
}
