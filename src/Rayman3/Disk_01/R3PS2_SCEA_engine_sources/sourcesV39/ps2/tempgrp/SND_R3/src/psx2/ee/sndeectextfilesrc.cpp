/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct sstring sstring;
typedef struct CTextFileSrc CTextFileSrc;
typedef struct CTextFile CTextFile;
typedef struct CSrcFlow CSrcFlow;

struct sstring {
    int m_pcData; /* +0x0 */
};

struct CTextFileSrc {
    /* C++ base CTextFile at +0x0. */
    /* aggregate */ int eCTextFileSrc; /* +0x34 */
    int mpchBuffer1; /* +0x38 */
    int mpchBuffer2; /* +0x3c */
    int mpchBufferEnd; /* +0x40 */
    char mchBuffer[2048]; /* +0x44 */
    int mpchCurrent; /* +0x844 */
    unsigned int mdwPosition; /* +0x848 */
};

struct CTextFile {
    /* aggregate */ int m_File; /* +0x0 */
    sstring mostringName; /* +0x28 */
    unsigned char m_bOpened; /* +0x2c */
    /* aggregate */ int eState; /* +0x30 */
};

struct CSrcFlow {
    /* aggregate */ int CFlow; /* +0x8 */
};

int ms_czNil;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 40–67 */
/* addr: 0x0018b760  size: 424 bytes */
void ms_czNil__Q24usnd7sstring(/* function pointer */ int ro_cuuid, CResData* po_Answer)
{
    /* array */ int aId[20];
    int nb;
    /* line map: */
    /*   line 40 @ +0x000 */
    /*   line 43 @ +0x000 */
    /*   line 47 @ +0x000 */
    /*   line 51 @ +0x000 */
    /*   line 53 @ +0x000 */
    /*   line 63 @ +0x000 */
    /*   line 67 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 152–192 */
/* addr: 0x0018b910  size: 752 bytes */
unsigned char CText::mfn_bRead(sstring* ro_Sentence)
{
    char* pch_StringNext;
    unsigned int dw_Size;
    char* pch_StringEnd;
    unsigned char b_Answer;
    /* line map: */
    /*   line 152 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 160 @ +0x000 */
    /*   line 163 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 177 @ +0x000 */
    /*   line 181 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 97–143 */
/* addr: 0x0018bcd0  size: 176 bytes */
void CText::mfn_pchParseChar(void)
{
    char* pch_SlashR;
    char* pch_SlashN;
    char* pch_Answer;
    /* line map: */
    /*   line 97 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 114 @ +0x000 */
    /*   line 122 @ +0x000 */
    /*   line 126 @ +0x000 */
    /*   line 141 @ +0x000 */
    /*   line 143 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeectextfilesrc.cpp lines 46–58 */
/* addr: 0x0018bd80  size: 296 bytes */
unsigned char CText::mfn_bOpen(char* pch_FilePath)
{
    /* line map: */
    /*   line 46 @ +0x000 */
    /*   line 49 @ +0x000 */
    /*   line 52 @ +0x000 */
    /*   line 58 @ +0x000 */
    /* TODO: decompile from asm/... */
}
