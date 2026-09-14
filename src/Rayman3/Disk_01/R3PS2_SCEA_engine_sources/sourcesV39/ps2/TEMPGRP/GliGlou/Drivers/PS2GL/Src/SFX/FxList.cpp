/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef int anon_0;

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstBaseFxListElement_ tdstBaseFxListElement_;
typedef struct C_BaseFx C_BaseFx;
typedef struct C_FxList C_FxList;

struct tdstBaseFxListElement_ {
    C_BaseFx* pFx; /* +0x0 */
    tdstBaseFxListElement_* pNext; /* +0x4 */
};

struct C_BaseFx {
    unsigned int m_FogIsOn_saved; /* +0x0 */
    unsigned int m_FogColor_saved; /* +0x4 */
    float m_fFogOOStartMinusEnd_saved; /* +0x8 */
    float m_fFogEnd_saved; /* +0xc */
    unsigned int m_FogIsOn; /* +0x10 */
    unsigned int m_FogColor; /* +0x14 */
    float m_fFogOOStartMinusEnd; /* +0x18 */
    float m_fFogEnd; /* +0x1c */
    int m_pSearchKey; /* +0x20 */
};

struct C_FxList {
    tdstBaseFxListElement_* pFirst; /* +0x0 */
    C_BaseFx* SearchElement(void* pSearchKey);
    void vAddElement(C_BaseFx* pElement);
    void DeleteAllSDLs(void);
    void DeleteAllNoFree(void);
    void DeleteAll(void);
};

int PS2glAllocator64;
int PS2glLiberator;
anon_0 __vt__8C_BaseFx;
int GLI_BIG_GLOBALS_xFogIsOn;
float g_fFogEnd;
float GLI_g_OOStartMinusEnd;
unsigned int GLI_g_CurrentSDLFogColor;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 100–106 */
/* addr: 0x002ecb10  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 100
 *   +0x0028 -> line 101
 *   +0x0034 -> line 103
 *   +0x0040 -> line 104
 *   +0x0044 -> line 105
 *   +0x0074 -> line 106
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList_destructor(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 124–129 */
/* addr: 0x002ecba0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 124
 *   +0x0028 -> line 126
 *   +0x0048 -> line 128
 *   +0x004c -> line 129
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
C_BaseFx* C_FxList::SearchElement(void* pSearchKey)
{
    tdstBaseFxListElement_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 97–115 */
/* addr: 0x002ecc00  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 97
 *   +0x0014 -> line 101
 *   +0x0024 -> line 102
 *   +0x0028 -> line 103
 *   +0x002c -> line 105
 *   +0x0038 -> line 108
 *   +0x0040 -> line 112
 *   +0x0060 -> line 113
 *   +0x0064 -> line 115
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList::vAddElement(C_BaseFx* pElement)
{
    tdstBaseFxListElement_* p2;
    tdstBaseFxListElement_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 82–92 */
/* addr: 0x002ecc80  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 82
 *   +0x000c -> line 85
 *   +0x0010 -> line 86
 *   +0x0018 -> line 89
 *   +0x002c -> line 90
 *   +0x0030 -> line 91
 *   +0x0038 -> line 92
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList::DeleteAllSDLs(void)
{
    tdstBaseFxListElement_* pNext;
    tdstBaseFxListElement_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 68–79 */
/* addr: 0x002eccd0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 68
 *   +0x0014 -> line 71
 *   +0x0018 -> line 72
 *   +0x0020 -> line 75
 *   +0x002c -> line 76
 *   +0x0030 -> line 77
 *   +0x0040 -> line 78
 *   +0x0044 -> line 79
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList::DeleteAllNoFree(void)
{
    tdstBaseFxListElement_* pNext;
    tdstBaseFxListElement_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 53–65 */
/* addr: 0x002ecd30  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 53
 *   +0x0014 -> line 56
 *   +0x0018 -> line 57
 *   +0x0020 -> line 60
 *   +0x0040 -> line 61
 *   +0x004c -> line 63
 *   +0x0058 -> line 64
 *   +0x005c -> line 65
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList::DeleteAll(void)
{
    tdstBaseFxListElement_* pNext;
    tdstBaseFxListElement_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 47–49 */
/* addr: 0x002ecdb0  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 47
 *   +0x0024 -> line 48
 *   +0x0084 -> line 49
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList_destructor2(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\FxList.cpp lines 43–44 */
/* addr: 0x002ece50  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 43
 *   +0x0004 -> line 44
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_FxList_ctor(void)
{
    /* TODO: decompile from asm/... */
}
