/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* This unit was built without optimization. */
#pragma optimization_level 0
extern char* strcpy(char*, const char*);
extern void* memcpy(void*, const void*, size_t);
extern void* malloc(size_t);
extern void free(void*);
extern void* memset(void*, int, size_t);
extern int SVG_fn_bGetActiveVms(void);
extern unsigned char fn_bLoadUnknowFileFromSlot();
extern int SVG_fn_s32ReadFromFile(int, int, char*, void*, unsigned int);
extern int SVG_fn_s32ReadUnknownFile();

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstSaveBuffer_ tdstSaveBuffer_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct SVG_stMCStatus_ SVG_stMCStatus_;
typedef struct anon_3 anon_3;
typedef struct anon_2_local anon_2_local;

struct tdstSaveBuffer_ {
    int lCurrentPosition; /* +0x0 */
    int lSize; /* +0x4 */
    int szFileName; /* +0x8 */
    int szVmsComment; /* +0xc */
    int szBootRomComment; /* +0x10 */
    int szGameName; /* +0x14 */
    int p_vIconPalette; /* +0x18 */
    int p_vIconData; /* +0x1c */
    unsigned short uwNbIcon; /* +0x20 */
    unsigned short uwIconSpeed; /* +0x22 */
    int p_vVisualData; /* +0x24 */
    unsigned short uwVisualType; /* +0x28 */
    int szFileMode; /* +0x2c */
    int szSaveBuffer; /* +0x30 */
    char cFileMode; /* +0x34 */
};

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

struct SVG_stMCStatus_ {
    int iPort; /* +0x0 */
    int iSlot; /* +0x4 */
    int iStatus; /* +0x8 */
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

/* The retail build gives the local file-info object 0x78 bytes of stack: it
 * starts at sp+0x20 and the next local (the RTC time struct) sits at
 * sp+0x98.  The recovered sceMcTblGetDir layout only describes the first
 * 0x40 of them, so the local keeps the remaining storage. */
struct anon_2_local {
    anon_0 _Create; /* +0x0 */
    anon_0 _Modify; /* +0x8 */
    unsigned int FileSizeByte; /* +0x10 */
    unsigned short AttrFile; /* +0x14 */
    unsigned short Reserve1; /* +0x16 */
    unsigned int Reserve2; /* +0x18 */
    unsigned int PdaAplNo; /* +0x1c */
    unsigned char EntryName[32]; /* +0x20 */
    unsigned char Reserved[0x38]; /* +0x40 */
};

extern int SVG_fn_s32GetFileInfo(int, int, char*, anon_2*);
extern void sceScfGetLocalTimefromRTC(anon_3*);

int VMS_g_a8_lDriveNo[8];
int VMS_lSynchroEnabled;
int VMS_lInitOk;
int VMS_lFilenameListSize;
int VMS_lCurrentDrive;
SVG_stMCStatus_ g_axPadMapping;
char VMS_ax_cFilenameList[160][33];

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 821–873 */
/* addr: 0x00136b00  size: 528 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 821
 *   +0x0014 -> line 831
 *   +0x0024 -> line 832
 *   +0x0030 -> line 834
 *   +0x0034 -> line 835
 *   +0x0040 -> line 842
 *   +0x0068 -> line 844
 *   +0x00c8 -> line 845
 *   +0x00d4 -> line 846
 *   +0x00e8 -> line 847
 *   +0x00f4 -> line 849
 *   +0x0120 -> line 853
 *   +0x0128 -> line 855
 *   +0x0180 -> line 857
 *   +0x019c -> line 858
 *   +0x01a0 -> line 859
 *   +0x01ac -> line 860
 *   +0x01b8 -> line 863
 *   +0x01e4 -> line 870
 *   +0x01e8 -> line 871
 *   +0x01f8 -> line 872
 *   +0x01fc -> line 873
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern char* SVG_fn_szGetSonyCompliantDirName();
extern int sprintf(char*, const char*, ...);
extern int SVG_fn_s32ReadNextName();

int VMS_lInitFilenameList(int drive, int* lListSize)
{
    int lRet;
    char filename[33];
    char wildcardName[33];

    if (VMS_lInitOk != 1)
        return 0;

    VMS_lFilenameListSize = 0;
    *lListSize = -1;

    sprintf(wildcardName, "%s*", SVG_fn_szGetSonyCompliantDirName(""));

    if ((lRet = SVG_fn_s32ReadNextName((&g_axPadMapping)[drive].iPort, (&g_axPadMapping)[drive].iSlot, wildcardName, 0, filename)) == 0)
        return 0;
    if (filename[0] == 0)
        return 0;

    strcpy(VMS_ax_cFilenameList[VMS_lFilenameListSize++], filename);

    while (VMS_lFilenameListSize < 160) {
        lRet = SVG_fn_s32ReadNextName((&g_axPadMapping)[drive].iPort, (&g_axPadMapping)[drive].iSlot, wildcardName, 1, filename);
        switch (lRet) {
        case 0:
            *lListSize = VMS_lFilenameListSize;
            return 1;
        case 1:
            strcpy(VMS_ax_cFilenameList[VMS_lFilenameListSize++], filename);
            break;
        }
    }
    return lRet;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 890–900 */
/* addr: 0x00136d10  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 890
 *   +0x0010 -> line 892
 *   +0x0030 -> line 894
 *   +0x0044 -> line 895
 *   +0x0050 -> line 898
 *   +0x0074 -> line 899
 *   +0x0078 -> line 900
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int VMS_lGetFilenameInList(int lFileIndex, char* pcFilename)
{
    if (lFileIndex >= VMS_lFilenameListSize || VMS_lFilenameListSize <= 0) {
        strcpy(pcFilename, "");
        return -1;
    }
    strcpy(pcFilename, VMS_ax_cFilenameList[lFileIndex]);
    return 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1332–1345 */
/* addr: 0x00136da0  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1332
 *   +0x0018 -> line 1334
 *   +0x0020 -> line 1338
 *   +0x002c -> line 1340
 *   +0x0030 -> line 1341
 *   +0x0048 -> line 1342
 *   +0x0054 -> line 1343
 *   +0x0068 -> line 1345
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vDecryptBuffer(unsigned char* p_ucBuffer, int lLen)
{
    int ucEncryptKey2;
    int ucEncryptKey;
    int lI;
    ucEncryptKey = 0x224896eb;
    for (lI = 0; lI < lLen; lI++) {
        ucEncryptKey2 = ucEncryptKey >> 12;
        p_ucBuffer[lI] ^= (unsigned char)ucEncryptKey2;
        ucEncryptKey *= 0x3a41c471;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1354–1367 */
/* addr: 0x00136e20  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1354
 *   +0x0018 -> line 1356
 *   +0x0020 -> line 1360
 *   +0x002c -> line 1362
 *   +0x0030 -> line 1363
 *   +0x0048 -> line 1364
 *   +0x0054 -> line 1365
 *   +0x0068 -> line 1367
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void fn_vEncryptBuffer(unsigned char* p_ucBuffer, int lLen)
{
    int ucEncryptKey2;
    int ucEncryptKey;
    int lI;
    ucEncryptKey = 0x224896eb;
    for (lI = 0; lI < lLen; lI++) {
        ucEncryptKey2 = ucEncryptKey >> 12;
        p_ucBuffer[lI] ^= (unsigned char)ucEncryptKey2;
        ucEncryptKey *= 0x3a41c471;
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1377–1387 */
/* addr: 0x00136ea0  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1377
 *   +0x0014 -> line 1381
 *   +0x0018 -> line 1383
 *   +0x0024 -> line 1384
 *   +0x0050 -> line 1386
 *   +0x0054 -> line 1387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int fn_vCheckSum(unsigned char* p_ucBuffer, int lLen)
{
    int lCheckSum;
    int i;

    lCheckSum = 0;

    for (i = 0; i < lLen; i++)
        lCheckSum += p_ucBuffer[i];

    return lCheckSum;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1585–1593 */
/* addr: 0x00136f10  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1585
 *   +0x000c -> line 1586
 *   +0x0010 -> line 1588
 *   +0x002c -> line 1590
 *   +0x0044 -> line 1591
 *   +0x0074 -> line 1592
 *   +0x0078 -> line 1593
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int Int100ToBCD(int val)
{
    int lReturn = 0;

    val %= 100;

    lReturn = val % 10;
    lReturn += (val / 10) << 4;
    return lReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1596–1604 */
/* addr: 0x00136fa0  size: 80 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1596
 *   +0x000c -> line 1597
 *   +0x0010 -> line 1599
 *   +0x001c -> line 1601
 *   +0x0024 -> line 1602
 *   +0x003c -> line 1603
 *   +0x0040 -> line 1604
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int BCDToInt100(int val)
{
    int lReturn;

    lReturn = 0;
    val &= 0xFF;
    lReturn = val & 0xF;
    lReturn += (val >> 4) * 10;
    return lReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1615–1657 */
/* addr: 0x00136ff0  size: 496 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1615
 *   +0x0018 -> line 1621
 *   +0x0030 -> line 1622
 *   +0x0084 -> line 1624
 *   +0x008c -> line 1625
 *   +0x0098 -> line 1632
 *   +0x00ac -> line 1633
 *   +0x00c4 -> line 1634
 *   +0x00dc -> line 1635
 *   +0x00f4 -> line 1637
 *   +0x010c -> line 1638
 *   +0x0124 -> line 1639
 *   +0x013c -> line 1640
 *   +0x0148 -> line 1641
 *   +0x0160 -> line 1642
 *   +0x0178 -> line 1643
 *   +0x0190 -> line 1644
 *   +0x01a8 -> line 1645
 *   +0x01c0 -> line 1646
 *   +0x01d8 -> line 1656
 *   +0x01dc -> line 1657
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int VMS_lGetFileDate(int drive, char* fname, anon_1* fDate)
{
    anon_3 t;
    int lRet;
    anon_2_local info;
    if (fDate == NULL) return -1;
    lRet = SVG_fn_s32GetFileInfo((&g_axPadMapping)[drive].iPort,
        (&g_axPadMapping)[drive].iSlot, fname, (anon_2*)&info);
    if (!lRet)
        return 0;
    memset(&t, 0, sizeof(t));
    t.second = Int100ToBCD(info._Modify.Sec);
    t.minute = Int100ToBCD(info._Modify.Min);
    t.hour = Int100ToBCD(info._Modify.Hour);
    t.day = Int100ToBCD(info._Modify.Day);
    t.month = Int100ToBCD(info._Modify.Month);
    t.year = Int100ToBCD(info._Modify.Year);
    sceScfGetLocalTimefromRTC(&t);
    fDate->year = BCDToInt100(t.year);
    fDate->month = BCDToInt100(t.month);
    fDate->day = BCDToInt100(t.day);
    fDate->hour = BCDToInt100(t.hour);
    fDate->minute = BCDToInt100(t.minute);
    fDate->second = BCDToInt100(t.second);
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 1894–1910 */
/* addr: 0x001371e0  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1894
 *   +0x001c -> line 1899
 *   +0x002c -> line 1900
 *   +0x0038 -> line 1903
 *   +0x0090 -> line 1905
 *   +0x009c -> line 1906
 *   +0x00a8 -> line 1908
 *   +0x00ac -> line 1910
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int VMS_lLoadFileAndExtractUnknowData(int drive, char* fname, void** bufData, int* fileSize)
{
    int ret;
    if (VMS_lInitOk != 1)
        return -1;
    ret = SVG_fn_s32ReadUnknownFile((&g_axPadMapping)[drive].iPort,
        (&g_axPadMapping)[drive].iSlot, fname, bufData, fileSize);
    if (ret != 1)
        return 0;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2034–2061 */
/* addr: 0x001372a0  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2034
 *   +0x001c -> line 2044
 *   +0x002c -> line 2045
 *   +0x0044 -> line 2046
 *   +0x0050 -> line 2049
 *   +0x00a8 -> line 2051
 *   +0x00b4 -> line 2052
 *   +0x00c0 -> line 2053
 *   +0x00cc -> line 2056
 *   +0x00e0 -> line 2058
 *   +0x00ec -> line 2059
 *   +0x00f0 -> line 2061
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma peephole on
int VMS_lGetVmsCommentFromFile(int drive, char* fileName, char* comment)
{
    unsigned char* buf;
    int ret;
    buf = malloc(512);
    if (VMS_lInitOk != 1 || buf == NULL)
        return -1;
    ret = SVG_fn_s32ReadFromFile((&g_axPadMapping)[drive].iPort,
        (&g_axPadMapping)[drive].iSlot, fileName, buf, 16);
    if (ret != 1) {
        free(buf);
        return -1;
    }
    memcpy(comment, buf, 16);
    free(buf);
    return ret;
}
#pragma peephole reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2199–2256 */
/* addr: 0x001373b0  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2199
 *   +0x0014 -> line 2206
 *   +0x0020 -> line 2208
 *   +0x002c -> line 2209
 *   +0x0038 -> line 2211
 *   +0x0044 -> line 2212
 *   +0x0050 -> line 2214
 *   +0x0060 -> line 2215
 *   +0x0074 -> line 2217
 *   +0x007c -> line 2218
 *   +0x0088 -> line 2220
 *   +0x008c -> line 2221
 *   +0x0094 -> line 2229
 *   +0x009c -> line 2243
 *   +0x00bc -> line 2245
 *   +0x00c8 -> line 2246
 *   +0x00d4 -> line 2249
 *   +0x00e0 -> line 2251
 *   +0x00ec -> line 2252
 *   +0x00f8 -> line 2255
 *   +0x00fc -> line 2256
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma peephole on
tdstSaveBuffer_* VMS_fn_p_stFopenR(char* _szFileName)
{
    int lNumActiveVms;
    tdstSaveBuffer_* p_stBuffer;
    lNumActiveVms = SVG_fn_bGetActiveVms();
    if (lNumActiveVms == -1)
        return NULL;
    if (_szFileName == NULL)
        return NULL;
    p_stBuffer = malloc(sizeof(tdstSaveBuffer_));
    memset(p_stBuffer, 0, sizeof(tdstSaveBuffer_));
    if (p_stBuffer == NULL)
        return NULL;
    p_stBuffer->lCurrentPosition = 0;
    p_stBuffer->cFileMode = 'r';
    p_stBuffer->szFileName = (int)_szFileName;
    if (!fn_bLoadUnknowFileFromSlot(lNumActiveVms, p_stBuffer->szFileName,
        &p_stBuffer->szSaveBuffer, &p_stBuffer->lSize)) {
        free(p_stBuffer);
        return NULL;
    }
    if (!p_stBuffer->szSaveBuffer) {
        free(p_stBuffer);
        return NULL;
    }
    return p_stBuffer;
}
#pragma peephole reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2292–2304 */
/* addr: 0x001374d0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2292
 *   +0x0018 -> line 2295
 *   +0x0040 -> line 2296
 *   +0x006c -> line 2297
 *   +0x0078 -> line 2299
 *   +0x00a4 -> line 2301
 *   +0x00c4 -> line 2303
 *   +0x00c8 -> line 2304
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int VMS_fn_bFread(void* _p_vData, int _lNumber, int _lSize, tdstSaveBuffer_* _p_stBuffer)
{
    if (_p_stBuffer->cFileMode == 'w') return 0;
    if (_p_stBuffer->lCurrentPosition + _lSize * _lNumber >= _p_stBuffer->lSize)
        return 0;
    memcpy(_p_vData, (void*)(_p_stBuffer->szSaveBuffer + _p_stBuffer->lCurrentPosition), _lSize * _lNumber);
    _p_stBuffer->lCurrentPosition = _p_stBuffer->lCurrentPosition + _lSize * _lNumber;
    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SVG\vm_backup.c lines 2311–2342 */
/* addr: 0x001375b0  size: 292 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2311
 *   +0x0014 -> line 2313
 *   +0x0018 -> line 2316
 *   +0x0024 -> line 2317
 *   +0x0030 -> line 2318
 *   +0x0034 -> line 2320
 *   +0x005c -> line 2321
 *   +0x00e8 -> line 2335
 *   +0x00ec -> line 2338
 *   +0x00fc -> line 2339
 *   +0x0108 -> line 2341
 *   +0x010c -> line 2342
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern unsigned char fn_bSaveFileInSlot(int drive, int fileName, int vmsComment, int bootRomComment,
    int gameName, int iconPalette, int iconData, unsigned short nbIcon, unsigned short iconSpeed,
    int visualData, unsigned short visualType, int saveBuffer, int saveSize);

int VMS_fn_bFclose(tdstSaveBuffer_* _p_stBuffer)
{
    int bReturn;
    int lNumActiveVms;

    bReturn = 1;

    lNumActiveVms = SVG_fn_bGetActiveVms();
    if (lNumActiveVms == -1)
        bReturn = 0;

    if (_p_stBuffer->cFileMode == 'w' && bReturn == 1) {
        if (!fn_bSaveFileInSlot(lNumActiveVms,
                                _p_stBuffer->szFileName,
                                _p_stBuffer->szVmsComment,
                                _p_stBuffer->szBootRomComment,
                                _p_stBuffer->szGameName,
                                _p_stBuffer->p_vIconPalette,
                                _p_stBuffer->p_vIconData,
                                _p_stBuffer->uwNbIcon,
                                _p_stBuffer->uwIconSpeed,
                                _p_stBuffer->p_vVisualData,
                                _p_stBuffer->uwVisualType,
                                _p_stBuffer->szSaveBuffer,
                                _p_stBuffer->lCurrentPosition + 1)) {
            bReturn = 0;
        }
    }

    free((void*)_p_stBuffer->szSaveBuffer);
    free(_p_stBuffer);

    return bReturn;
}
