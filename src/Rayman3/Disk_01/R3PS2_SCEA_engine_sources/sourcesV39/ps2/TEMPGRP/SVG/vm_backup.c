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

int VMS_lGetFilenameInList(int lFileIndex, char* pcFilename)
{
    if (lFileIndex >= VMS_lFilenameListSize || VMS_lFilenameListSize <= 0) {
        strcpy(pcFilename, "");
        return -1;
    }
    strcpy(pcFilename, VMS_ax_cFilenameList[lFileIndex]);
    return 0;
}

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

int fn_vCheckSum(unsigned char* p_ucBuffer, int lLen)
{
    int lCheckSum;
    int i;

    lCheckSum = 0;

    for (i = 0; i < lLen; i++)
        lCheckSum += p_ucBuffer[i];

    return lCheckSum;
}

int Int100ToBCD(int val)
{
    int lReturn = 0;

    val %= 100;

    lReturn = val % 10;
    lReturn += (val / 10) << 4;
    return lReturn;
}

int BCDToInt100(int val)
{
    int lReturn;

    lReturn = 0;
    val &= 0xFF;
    lReturn = val & 0xF;
    lReturn += (val >> 4) * 10;
    return lReturn;
}

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

int VMS_fn_bFread(void* _p_vData, int _lNumber, int _lSize, tdstSaveBuffer_* _p_stBuffer)
{
    if (_p_stBuffer->cFileMode == 'w') return 0;
    if (_p_stBuffer->lCurrentPosition + _lSize * _lNumber >= _p_stBuffer->lSize)
        return 0;
    memcpy(_p_vData, (void*)(_p_stBuffer->szSaveBuffer + _p_stBuffer->lCurrentPosition), _lSize * _lNumber);
    _p_stBuffer->lCurrentPosition = _p_stBuffer->lCurrentPosition + _lSize * _lNumber;
    return 1;
}

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
