/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct CResData CResData;
typedef struct CUUID CUUID;
typedef struct sstring sstring;
typedef struct CTextFileSrc CTextFileSrc;
typedef struct CPS2FileSrcFlow CPS2FileSrcFlow;
typedef struct CTextFile CTextFile;
typedef struct CSrcFlow CSrcFlow;
typedef struct CFlow CFlow;
typedef struct CBankDesc CBankDesc;
struct CUUID { int data[4]; };
struct CFlow { int data[2]; };
struct CBankDesc {
    int data[8];
    CResData* mfn_poAddCResData(CUUID*);
};

typedef enum anon_enum_001bafa4 {
    E_INVALID_SIZE = -1,
} anon_enum_001bafa4;

typedef enum anon_enum_001bafd7 {
    E_BUFFER_SIZE = 1024,
} anon_enum_001bafd7;

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CTextFileSrc {
    /* C++ base CTextFile at +0x0 (defined below; 0x34 bytes). */
    unsigned char _base_CTextFile[0x34]; /* +0x0 */
    anon_enum_001bafd7 eCTextFileSrc; /* +0x34 */
    int mpchBuffer1; /* +0x38 */
    int mpchBuffer2; /* +0x3c */
    int mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    int mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
    unsigned char mfn_bRead(sstring* ro_Sentence);
    char* mfn_pchParseChar(void) const;
    unsigned char mfn_bOpen(const char* pch_FilePath);
};

struct CPS2FileSrcFlow {
    /* C++ base CSrcFlow at +0x0. */
    unsigned int m_uiFileHandle; /* +0x8 */
    unsigned int m_uiFileOffset; /* +0xc */
    unsigned int m_uiSize; /* +0x10 */
    unsigned int m_uiPos; /* +0x14 */
    unsigned int m_uiEndPos; /* +0x18 */
    unsigned char m_bUseCache; /* +0x1c */
};

struct CTextFile {
    CPS2FileSrcFlow m_File; /* +0x0 */
    sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    anon_enum_001bafa4 eState; /* +0x30 */
};

struct CSrcFlow {
    /* C++ base CFlow at +0x0. */
    CFlow CFlow; /* +0x8 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 37–67 */
/* addr: 0x0018b760  size: 424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 37
 *   +0x0018 -> line 40
 *   +0x0030 -> line 41
 *   +0x003c -> line 43
 *   +0x004c -> line 44
 *   +0x0058 -> line 47
 *   +0x0078 -> line 49
 *   +0x0080 -> line 51
 *   +0x0090 -> line 52
 *   +0x009c -> line 53
 *   +0x00c0 -> line 61
 *   +0x0180 -> line 63
 *   +0x018c -> line 66
 *   +0x0190 -> line 67
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
CResData* CBankDesc::mfn_poAddCResData(CUUID* ro_cuuid)
{
    CUUID aId[20];
    int nb;
    CResData* po_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 148–192 */
/* addr: 0x0018b910  size: 752 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 148
 *   +0x0030 -> line 152
 *   +0x003c -> line 153
 *   +0x0074 -> line 154
 *   +0x007c -> line 159
 *   +0x0088 -> line 160
 *   +0x0090 -> line 162
 *   +0x0098 -> line 163
 *   +0x0170 -> line 165
 *   +0x0178 -> line 167
 *   +0x017c -> line 168
 *   +0x0180 -> line 167
 *   +0x0184 -> line 169
 *   +0x0188 -> line 177
 *   +0x01a4 -> line 178
 *   +0x01c8 -> line 181
 *   +0x01d4 -> line 182
 *   +0x01f8 -> line 183
 *   +0x0200 -> line 186
 *   +0x0204 -> line 187
 *   +0x0210 -> line 188
 *   +0x0250 -> line 189
 *   +0x02c0 -> line 191
 *   +0x02c4 -> line 192
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CTextFileSrc::mfn_bRead(sstring* ro_Sentence)
{
    char* pch_StringNext;
    unsigned int dw_Size;
    char* pch_StringEnd;
    unsigned char b_Answer;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 83–145 */
/* addr: 0x0018bcd0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 83
 *   +0x0014 -> line 97
 *   +0x0020 -> line 98
 *   +0x0024 -> line 97
 *   +0x0028 -> line 98
 *   +0x0030 -> line 100
 *   +0x0044 -> line 112
 *   +0x0054 -> line 114
 *   +0x005c -> line 120
 *   +0x0064 -> line 122
 *   +0x006c -> line 124
 *   +0x0074 -> line 126
 *   +0x007c -> line 132
 *   +0x0088 -> line 141
 *   +0x0098 -> line 145
 *   +0x009c -> line 143
 *   +0x00a0 -> line 145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" char* strchr(const char* s, int c);

#define M_MIN(a, b) (((a) < (b)) ? (a) : (b))

char* CTextFileSrc::mfn_pchParseChar(void) const
{
    char* pch_SlashR;
    char* pch_SlashN;
    char* pch_Answer;

    pch_SlashN = strchr((char*)mpchCurrent, '\n');
    pch_SlashR = strchr((char*)mpchCurrent, '\r');

    pch_Answer = NULL;
    if (pch_SlashN != (char*)mpchCurrent && pch_SlashR != (char*)mpchCurrent)
    {
        if (!pch_SlashN && !pch_SlashR)
            pch_Answer = (char*)mpchBufferEnd;
        else if (!pch_SlashN)
            pch_Answer = pch_SlashR;
        else if (!pch_SlashR)
            pch_Answer = pch_SlashN;
        else
            pch_Answer = M_MIN(pch_SlashN, pch_SlashR);

        pch_Answer = M_MIN(pch_Answer, (char*)mpchBufferEnd);
    }

    return pch_Answer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 44–59 */
/* addr: 0x0018bd80  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 44
 *   +0x0014 -> line 46
 *   +0x009c -> line 48
 *   +0x00a0 -> line 49
 *   +0x00a8 -> line 50
 *   +0x00e0 -> line 52
 *   +0x0104 -> line 55
 *   +0x0110 -> line 58
 *   +0x0114 -> line 59
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char CTextFileSrc::mfn_bOpen(const char* pch_FilePath)
{
    /* TODO: decompile from asm/... */
}
