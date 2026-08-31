/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CIdObj CIdObj;
typedef struct iterator_base iterator_base;
typedef struct smap smap;
typedef struct CRefIdObj CRefIdObj;
typedef struct CBankDesc CBankDesc;
typedef struct sTreeNode sTreeNode;
typedef struct CResData CResData;
typedef struct sTreeLink sTreeLink;
typedef struct sset sset;
typedef struct CAllocBlock CAllocBlock;
typedef struct iterator iterator;
typedef struct smap smap;
typedef struct streebase streebase;
typedef struct sstring sstring;

struct CIdObj {
    /* C++ base CRTTIClass at +0x0. */
    /* aggregate */ int m_oId; /* +0x4 */
};

struct iterator_base {
    int _Ptr; /* +0x0 */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CRefIdObj {
    /* C++ base CIdObj at +0x0. */
    unsigned char m_bMarkFlag; /* +0xc */
};

struct CBankDesc {
    /* C++ base sset at +0x0. */
    int mroLoader; /* +0x10 */
    sstring mostringName; /* +0x14 */
};

struct sTreeNode {
    /* C++ base sTreeLink at +0x0. */
    int m_oValue; /* +0x10 */
};

struct CResData {
    /* C++ base CRefIdObj at +0x0. */
    unsigned int m_uiVersionId; /* +0x10 */
    sstring m_strName; /* +0x14 */
};

struct sTreeLink {
    int m_poLeft; /* +0x0 */
    int m_poParent; /* +0x4 */
    int m_poRight; /* +0x8 */
    /* aggregate */ int m_eColor; /* +0xc */
};

struct sset {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct CAllocBlock {
    int m_poNextBlock; /* +0x0 */
    unsigned int m_uiBufferSize; /* +0x4 */
    int m_pcBuffer; /* +0x8 */
    int m_pcBufferPos; /* +0xc */
};

struct iterator {
    /* C++ base iterator_base at +0x0. */
};

struct smap {
    /* aggregate */ int _Tr; /* +0x0 */
};

struct streebase {
    int _HeadLink; /* +0x0 */
    unsigned char _Multi; /* +0x4 */
    unsigned int _Size; /* +0x8 */
};

struct sstring {
    int m_pcData; /* +0x0 */
};

int ms_czNil;
sTreeLink _NilElmt;

/* addr: 0x0018af90  size: 8 bytes */
void _NilElmt__Q24usnd9streebase(unsigned int uiSize)
{
    void* ptr;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 100–102 */
/* addr: 0x0018afa0  size: 300 bytes */
void ~CBankDesc(void)
{
    iterator it;
    /* line map: */
    /*   line 100 @ +0x000 */
    /*   line 102 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeecbankdesc.cpp lines 75–92 */
/* addr: 0x0018b2f0  size: 308 bytes */
void CBankDesc::mfn_poAddCResDataAlone(/* function pointer */ int ro_cuuid, CResData* po_Answer)
{
    /* line map: */
    /*   line 75 @ +0x000 */
    /*   line 79 @ +0x000 */
    /*   line 88 @ +0x000 */
    /*   line 92 @ +0x000 */
    /* TODO: decompile from asm/... */
}
