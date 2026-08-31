/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct anon_3 anon_3;

struct anon_0 {
    unsigned char Resv2; /* +0x0 */
    unsigned char Sec; /* +0x1 */
    unsigned char Min; /* +0x2 */
    unsigned char Hour; /* +0x3 */
    unsigned char Day; /* +0x4 */
    unsigned char Month; /* +0x5 */
    unsigned short Year; /* +0x6 */
};

struct anon_1 {
    int year; /* +0x0 */
    int month; /* +0x4 */
    int day; /* +0x8 */
    int hour; /* +0xc */
    int minute; /* +0x10 */
    int second; /* +0x14 */
};

struct anon_2 {
    anon_0 _Create; /* +0x0 */
    anon_0 _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
};

struct anon_3 {
    unsigned char stat; /* +0x0 */
    unsigned char second; /* +0x1 */
    unsigned char minute; /* +0x2 */
    unsigned char hour; /* +0x3 */
    unsigned char pad; /* +0x4 */
    unsigned char day; /* +0x5 */
    unsigned char month; /* +0x6 */
    unsigned char year; /* +0x7 */
};

int VMS_g_a8_lDriveNo[8];
int VMS_lSynchroEnabled;
int VMS_lInitOk;
int VMS_lFilenameListSize;
int VMS_lCurrentDrive;
/* array */ int g_axPadMapping;
char VMS_ax_cFilenameList[160][33];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1718–1740 */
/* addr: 0x00136a60  size: 152 bytes */
int SVG_fn_s32ReadNextName(int _iPort, int _iSlot, char* _szFileName, int _not_first, char* _pRes)
{
    anon_0 table;
    int iFd;
    /* line map: */
    /*   line 1718 @ +0x000 */
    /*   line 1727 @ +0x000 */
    /*   line 1730 @ +0x000 */
    /*   line 1740 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 831–873 */
/* addr: 0x00136b00  size: 528 bytes */
int VMS_lInitFilenameList(int drive, int* lListSize)
{
    char wildcardName[33];
    char filename[33];
    int lRet;
    /* line map: */
    /*   line 831 @ +0x000 */
    /*   line 834 @ +0x000 */
    /*   line 842 @ +0x000 */
    /*   line 845 @ +0x000 */
    /*   line 847 @ +0x000 */
    /*   line 853 @ +0x000 */
    /*   line 857 @ +0x000 */
    /*   line 859 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 892–899 */
/* addr: 0x00136d10  size: 136 bytes */
int VMS_lGetFilenameInList(int lFileIndex, char* pcFilename)
{
    /* line map: */
    /*   line 892 @ +0x000 */
    /*   line 895 @ +0x000 */
    /*   line 899 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1334–1345 */
/* addr: 0x00136da0  size: 128 bytes */
void fn_vDecryptBuffer(unsigned char* p_ucBuffer, int lLen)
{
    int ucEncryptKey2;
    int ucEncryptKey;
    int lI;
    /* line map: */
    /*   line 1334 @ +0x000 */
    /*   line 1340 @ +0x000 */
    /*   line 1342 @ +0x000 */
    /*   line 1345 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1356–1367 */
/* addr: 0x00136e20  size: 128 bytes */
void fn_vEncryptBuffer(unsigned char* p_ucBuffer, int lLen)
{
    int ucEncryptKey2;
    int ucEncryptKey;
    int lI;
    /* line map: */
    /*   line 1356 @ +0x000 */
    /*   line 1362 @ +0x000 */
    /*   line 1364 @ +0x000 */
    /*   line 1367 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1381–1387 */
/* addr: 0x00136ea0  size: 104 bytes */
int fn_vCheckSum(unsigned char* p_ucBuffer, int lLen)
{
    int lCheckSum;
    int i;
    /* line map: */
    /*   line 1381 @ +0x000 */
    /*   line 1384 @ +0x000 */
    /*   line 1387 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1586–1592 */
/* addr: 0x00136f10  size: 136 bytes */
int Int100ToBCD(int val)
{
    int lReturn;
    /* line map: */
    /*   line 1586 @ +0x000 */
    /*   line 1590 @ +0x000 */
    /*   line 1592 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1597–1603 */
/* addr: 0x00136fa0  size: 80 bytes */
int BCDToInt100(int val)
{
    int lReturn;
    /* line map: */
    /*   line 1597 @ +0x000 */
    /*   line 1601 @ +0x000 */
    /*   line 1603 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1621–1656 */
/* addr: 0x00136ff0  size: 496 bytes */
int VMS_lGetFileDate(int drive, char* fname, anon_1* fDate)
{
    anon_3 t;
    int lRet;
    anon_2 info;
    /* line map: */
    /*   line 1621 @ +0x000 */
    /*   line 1624 @ +0x000 */
    /*   line 1632 @ +0x000 */
    /*   line 1634 @ +0x000 */
    /*   line 1637 @ +0x000 */
    /*   line 1639 @ +0x000 */
    /*   line 1641 @ +0x000 */
    /*   line 1643 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1899–1910 */
/* addr: 0x001371e0  size: 192 bytes */
int VMS_lLoadFileAndExtractUnknowData(int drive, char* fname, void** bufData, int* fileSize)
{
    int ret;
    /* line map: */
    /*   line 1899 @ +0x000 */
    /*   line 1903 @ +0x000 */
    /*   line 1906 @ +0x000 */
    /*   line 1910 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2044–2061 */
/* addr: 0x001372a0  size: 264 bytes */
int VMS_lGetVmsCommentFromFile(int drive, char* fileName, char* comment)
{
    unsigned char* buf;
    int ret;
    /* line map: */
    /*   line 2044 @ +0x000 */
    /*   line 2046 @ +0x000 */
    /*   line 2051 @ +0x000 */
    /*   line 2053 @ +0x000 */
    /*   line 2058 @ +0x000 */
    /*   line 2061 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2206–2255 */
/* addr: 0x001373b0  size: 276 bytes */
void VMS_fn_p_stFopenR(char* _szFileName, /* function pointer */ int p_stBuffer)
{
    int lNumActiveVms;
    /* line map: */
    /*   line 2206 @ +0x000 */
    /*   line 2209 @ +0x000 */
    /*   line 2212 @ +0x000 */
    /*   line 2215 @ +0x000 */
    /*   line 2218 @ +0x000 */
    /*   line 2221 @ +0x000 */
    /*   line 2243 @ +0x000 */
    /*   line 2246 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2295–2304 */
/* addr: 0x001374d0  size: 216 bytes */
int VMS_fn_bFread(void* _p_vData, int _lNumber, int _lSize, /* function pointer */ int _p_stBuffer)
{
    /* line map: */
    /*   line 2295 @ +0x000 */
    /*   line 2297 @ +0x000 */
    /*   line 2301 @ +0x000 */
    /*   line 2304 @ +0x000 */
    /* TODO: decompile from asm/... */
}
