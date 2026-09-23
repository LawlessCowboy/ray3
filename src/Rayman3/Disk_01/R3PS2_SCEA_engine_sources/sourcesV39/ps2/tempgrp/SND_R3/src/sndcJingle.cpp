/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
namespace usnd {
struct CResData {
    void* m_pVtable;
    void* m_pId;
    void* m_pData;
};

template <class T> struct CIdObjPtr {
    struct Holder {
        int m_iPad0;
        int m_iPad1;
        int m_iPad2;
        T* m_pObject;
    }* m_pHolder;
    T& operator*(void) const;
    T* operator->(void) const;
};
}

usnd::CResData* usnd::CIdObjPtr<usnd::CResData>::operator->(void) const
{
    return m_pHolder->m_pObject;
}

typedef usnd::CResData CResData;
typedef struct JingleList JingleList;
typedef struct JingleElt JingleElt;

/* Recovered as a static utility class: the member definitions below are
 * emitted from several sound-manager TUs, while the original class body is
 * not present in this extracted source. */
struct Jingle {
    static CResData* ms_fVolReduction(void);
    static int fs_uGetOldVolume(int, int);
    static int fs_uGetVolume(int, int);
    static void fs_vSynchronise(void);
    static void fs_vAddJingle(int, int, int, int);
};

struct JingleList {
    int m_iVolumeLine; /* +0x0 */
    int m_uOldVol; /* +0x4 */
    JingleList* m_pNext; /* +0x8 */
    JingleList* m_pPrev; /* +0xc */
    JingleElt* m_pFirst; /* +0x10 */
};

struct JingleElt {
    JingleElt* m_pNext; /* +0x0 */
    JingleElt* m_pPrev; /* +0x4 */
    int m_ObjectId; /* +0x8 */
    int m_TypeId; /* +0xc */
    int m_HandleId; /* +0x10 */
};

usnd::CResData& usnd::CIdObjPtr<usnd::CResData>::operator*(void) const
{
    return *m_pHolder->m_pObject;
}

template struct usnd::CIdObjPtr<usnd::CResData>;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 271–273 */
/* addr: 0x001d0790  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 271
 *   +0x0004 -> line 273
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CResData* Jingle::ms_fVolReduction(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 146–154 */
/* addr: 0x001d0800  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 146
 *   +0x0028 -> line 148
 *   +0x0030 -> line 150
 *   +0x0038 -> line 153
 *   +0x003c -> line 154
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int Jingle::fs_uGetOldVolume(int uVol, int iVolumeLine)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 130–139 */
/* addr: 0x001d0850  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 130
 *   +0x0028 -> line 132
 *   +0x0030 -> line 134
 *   +0x0034 -> line 135
 *   +0x0088 -> line 138
 *   +0x008c -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int Jingle::fs_uGetVolume(int uVol, int iVolumeLine)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndcJingle.cpp lines 80–124 */
/* addr: 0x001d08f0  size: 336 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 80
 *   +0x0014 -> line 81
 *   +0x0018 -> line 84
 *   +0x0020 -> line 86
 *   +0x0024 -> line 88
 *   +0x006c -> line 97
 *   +0x0070 -> line 101
 *   +0x00b4 -> line 104
 *   +0x00b8 -> line 107
 *   +0x00c4 -> line 113
 *   +0x00c8 -> line 110
 *   +0x00cc -> line 113
 *   +0x010c -> line 114
 *   +0x0110 -> line 117
 *   +0x011c -> line 118
 *   +0x0128 -> line 121
 *   +0x0130 -> line 123
 *   +0x0138 -> line 124
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void Jingle::fs_vSynchronise(void)
{
    int vol;
    int line;
    JingleElt* pElt;
    JingleList* pList;
    /* TODO: decompile from asm/... */
}
