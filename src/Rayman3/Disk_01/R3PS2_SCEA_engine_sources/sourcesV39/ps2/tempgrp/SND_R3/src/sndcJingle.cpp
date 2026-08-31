/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct JingleList JingleList;
typedef struct JingleElt JingleElt;

struct JingleList {
    int m_iVolumeLine; /* +0x0 */
    int m_uOldVol; /* +0x4 */
    int m_pNext; /* +0x8 */
    int m_pPrev; /* +0xc */
    int m_pFirst; /* +0x10 */
};

struct JingleElt {
    int m_pNext; /* +0x0 */
    int m_pPrev; /* +0x4 */
    int m_ObjectId; /* +0x8 */
    int m_TypeId; /* +0xc */
    int m_HandleId; /* +0x10 */
};

int ms_pFirst;
int ms_pFree;
int ms_pFree;
float ms_fVolReduction;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 273–273 */
/* addr: 0x001d0790  size: 12 bytes */
void ms_fVolReduction__6Jingle(void)
{
    /* line map: */
    /*   line 273 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 148–153 */
/* addr: 0x001d0800  size: 68 bytes */
int Jingle::fs_uGetOldVolume(int uVol, int iVolumeLine)
{
    /* line map: */
    /*   line 148 @ +0x000 */
    /*   line 153 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 132–139 */
/* addr: 0x001d0850  size: 148 bytes */
int Jingle::fs_uGetVolume(int uVol, int iVolumeLine)
{
    /* line map: */
    /*   line 132 @ +0x000 */
    /*   line 135 @ +0x000 */
    /*   line 139 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 81–124 */
/* addr: 0x001d08f0  size: 336 bytes */
void Jingle::fs_vSynchronise(JingleElt* pElt, JingleList* pList)
{
    int vol;
    int line;
    /* line map: */
    /*   line 81 @ +0x000 */
    /*   line 86 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 117 @ +0x000 */
    /*   line 121 @ +0x000 */
    /* TODO: decompile from asm/... */
}
