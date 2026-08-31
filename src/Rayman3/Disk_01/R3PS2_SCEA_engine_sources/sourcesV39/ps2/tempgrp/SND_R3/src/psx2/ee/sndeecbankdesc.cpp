/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CUUID CUUID;
typedef struct CIdObj CIdObj;
typedef struct iterator_base iterator_base;
typedef struct less less;
typedef struct stree stree;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct sstring sstring;
typedef struct CBankDesc CBankDesc;
typedef struct sTreeNode sTreeNode;
typedef struct CResData CResData;
typedef struct sTreeLink sTreeLink;
typedef struct CPS2IdObjLoader CPS2IdObjLoader;
typedef struct sset sset;
typedef struct CAllocBlock CAllocBlock;
typedef struct iterator iterator;
typedef struct streebase streebase;
typedef struct spair spair;
typedef struct CIndexAllocator CIndexAllocator;

typedef enum _Redbl {
    _Red = 0,
    _Black = 1,
} _Redbl;

struct CUUID {
    unsigned int m_uiHighWord; /* +0x0 */
    unsigned int m_uiLowWord; /* +0x4 */
};

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    CUUID m_oId; /* +0x4 */
};

struct iterator_base {
    sTreeLink* _Ptr; /* +0x0 */
};

struct less {
    /* C++ base binary_function at +0x0. */
};

struct stree {
    /* C++ base streebase at +0x0. */
    sallocator allocator; /* +0xc */
    less key_compare; /* +0xd */
};

struct smap {
    stree _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CBankDesc {
    /* C++ base sset at +0x0. */
    CPS2IdObjLoader* mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    CResData* m_oValue; /* +0x10 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct sTreeLink {
    sTreeLink* m_poLeft; /* +0x0 */
    sTreeLink* m_poParent; /* +0x4 */
    sTreeLink* m_poRight; /* +0x8 */
    _Redbl m_eColor; /* +0xc */
};

struct CPS2IdObjLoader {
    smap m_oIdObjsCache; /* +0x0 */
    smap m_oIndex; /* +0x10 */
};

struct sset {
    stree _Tr; /* +0x0 */
};

struct CAllocBlock {
    CAllocBlock* m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct streebase {
    sTreeLink* _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct spair {
    iterator first; /* +0x0 */
    unsigned char second; /* +0x4 */
};

struct CIndexAllocator {
    CAllocBlock* m_poAllocBlocks; /* +0x0 */
    char m_cRootNodeBuffer[40]; /* +0x4 */
    unsigned int m_uiNbAllocs; /* +0x2c */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 57–57 */
/* addr: 0x0018af90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 57
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void _NilElmt__Q24usnd9streebase(unsigned int uiSize)
{
    void* ptr;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 97–103 */
/* addr: 0x0018afa0  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 *   +0x001c -> line 100
 *   +0x003c -> line 101
 *   +0x0058 -> line 102
 *   +0x0118 -> line 103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ~CBankDesc(void)
{
    iterator it;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 72–92 */
/* addr: 0x0018b2f0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 72
 *   +0x0018 -> line 75
 *   +0x0030 -> line 77
 *   +0x003c -> line 79
 *   +0x004c -> line 86
 *   +0x010c -> line 88
 *   +0x0118 -> line 91
 *   +0x011c -> line 92
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CResData* CBankDesc::mfn_poAddCResDataAlone(CUUID* ro_cuuid)
{
    CResData* po_Answer;
    /* TODO: decompile from asm/... */
}
