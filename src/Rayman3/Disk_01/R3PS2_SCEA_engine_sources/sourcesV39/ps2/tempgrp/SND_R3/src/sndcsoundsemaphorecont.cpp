/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sTreeNode sTreeNode;
typedef struct iterator iterator;
typedef struct iterator_base iterator_base;
typedef struct sTreeLink sTreeLink;
typedef struct streebase streebase;
typedef struct smap smap;
typedef struct smap smap;

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    /* aggregate */ int m_oValue; /* +0x10 */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

sTreeLink _NilElmt;
/* aggregate */ int __dt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 58–58 */
/* addr: 0x001c9dd0  size: 64 bytes */
int ~CSoundSemaphoreCont(/* function pointer */ int pst_IActor, int s32_VolId)
{
    /* line map: */
    /*   line 58 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 114–124 */
/* addr: 0x001c9e10  size: 312 bytes */
unsigned char CSoundSemaphoreCont::mfn_bRemoveSoundSemaphore(int s32_ChannelId)
{
    unsigned char b_Answer;
    /* line map: */
    /*   line 115 @ +0x000 */
    /*   line 114 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 115 @ +0x000 */
    /*   line 119 @ +0x000 */
    /*   line 121 @ +0x000 */
    /*   line 124 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 101–106 */
/* addr: 0x001ca030  size: 124 bytes */
unsigned char CSoundSemaphoreCont::mfn_bSynchroSoundSemaphore(void)
{
    iterator it_Cont;
    /* line map: */
    /*   line 101 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 106 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 75–94 */
/* addr: 0x001ca0c0  size: 392 bytes */
void CSoundSemaphoreCont::mfn_poAddSoundSemaphore(int s32_ChannelId, int s32_ChannelSize, /* function pointer */ int po_Answer)
{
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 75 @ +0x000 */
    /*   line 80 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 94 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 63–67 */
/* addr: 0x001ca540  size: 240 bytes */
void CSoundSemaphoreCont::mfn_poFindSoundSemaphore(int s32_ChannelId, /* function pointer */ int po_Answer)
{
    /* line map: */
    /*   line 63 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 65 @ +0x000 */
    /*   line 67 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 49–54 */
/* addr: 0x001ca630  size: 228 bytes */
void CSoundSemaphoreCont::mfn_vDelete(void)
{
    int i;
    /* line map: */
    /*   line 49 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 54 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 40–42 */
/* addr: 0x001ca720  size: 252 bytes */
void ~CSoundSemaphoreCont(void)
{
    iterator it;
    /* line map: */
    /*   line 40 @ +0x000 */
    /*   line 42 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphorecont.cpp lines 31–32 */
/* addr: 0x001caa20  size: 144 bytes */
void CSoundSemaphoreCont::mfn_roGetInstance(void)
{
    /* aggregate */ int oSingleton;
    signed char init;
    /* line map: */
    /*   line 31 @ +0x000 */
    /*   line 32 @ +0x000 */
    /* TODO: decompile from asm/... */
}
