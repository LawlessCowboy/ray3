/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp */
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

sTreeLink _NilElmt;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 444–448 */
/* addr: 0x001caab0  size: 80 bytes */
void _NilElmt__Q24usnd9streebase(void)
{
    /* line map: */
    /*   line 444 @ +0x000 */
    /*   line 446 @ +0x000 */
    /*   line 448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcsoundsemaphore.cpp lines 65–98 */
/* addr: 0x001cabd0  size: 640 bytes */
void CSoundSemaphore::f_vSynchro(/* function pointer */ int ro_Info)
{
    unsigned int uiTemp;
    int uiNbHandlesToDelete;
    iterator it;
    int sauiHandlesToDelete[50];
    /* line map: */
    /*   line 65 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 92 @ +0x000 */
    /*   line 96 @ +0x000 */
    /*   line 98 @ +0x000 */
    /* TODO: decompile from asm/... */
}
