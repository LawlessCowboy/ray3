/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\fmn\cdread.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _CD_FILE_Internal_ _CD_FILE_Internal_;
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;

struct _CD_FILE_Internal_ {
    unsigned int FirstLogicalSector; /* +0x0 */
    int FileSize; /* +0x4 */
    int CurrentPosition; /* +0x8 */
    unsigned int Pad; /* +0xc */
};

struct anon_0 {
    unsigned char trycount; /* +0x0 */
    unsigned char spindlctrl; /* +0x1 */
    unsigned char datapattern; /* +0x2 */
    unsigned char pad; /* +0x3 */
};

struct anon_1 {
    int pos; /* +0x0 */
    int size; /* +0x4 */
};

int CD_ProgressCallBack;
int g_bUsingCache;
static _CD_FILE_Internal_ gs_CD_Files[20];
static unsigned char gs_CD_Buffer[32768];

void InitSectorCache(void);
extern int sceCdInit(int mode);
extern int sceSifInitRpc(void* pRpc);
extern int sceCdMmode(int media);
extern char* Strchr(char* s, int c);
extern char* Strcat(char* s1, char* s2);
extern char* strcpy(char* dest, const char* src);
extern int strlen(const char* s);
extern char* strupr(char* s);
extern char* strstr(const char* s, const char* sub);
extern int tolower(int c);
extern int toupper(int c);
extern int sceCdRead(unsigned int lbn, unsigned int sectors, void* buf, anon_0* mode);
extern int sceCdSync(int mode);
extern int sceCdGetError(void);
extern void* memcpy(void* dst, const void* src, size_t n);
extern int sceCdDiskReady(int mode);
extern int SCEECdSearchFile(anon_1* fp, char* name);
extern char* FMN_SCE_AddBaseDirectory(char* buffer);

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
char* FMN_SCE_ConvertPathDos2Unix(char* buffer);
int PS2_fn_iGetCDMediaMode(void);
int CD_OpenFileWithNameConversion(char* RawFileName);
void CD_Close(int FileHandle);
int CD_Read(int FileHandle, char* Buffer, int Size);
unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom);
unsigned int CD_Length(int FileHandle);
int CD_OpenFile(char* FileName);
void CD_Init(void);

/* Debug info says void, but the result is passed on to CD_OpenFile. */
char* FMN_SCE_ConvertPath2DVD(char* buffer);

void CD_Init(void)
{
    int Handle;

    CD_ProgressCallBack = 0; InitSectorCache();
    sceCdInit(0);
    sceSifInitRpc(0);
    sceCdMmode(2);
    for (Handle = 0; Handle < 20; Handle++) {
        gs_CD_Files[Handle].FirstLogicalSector = 0;
    }
}

int CD_OpenFile(char* FileName)
{
    int Handle;
    _CD_FILE_Internal_* p;
    anon_1 SearchHeaderSpecial;
    char pTempName[1024];
    char* pName;
    int i;
    char TempString2[1024];
    int Ret;
    int Count;

    Handle = 0;
    while (Handle < 20 && gs_CD_Files[Handle].FirstLogicalSector != 0)
        Handle++;
    if (Handle == 20)
        return -1;
    p = &gs_CD_Files[Handle];
    sceCdDiskReady(0);
    for (i = 0; FileName[i] != 0; i++) {
        *(char*)((int)pTempName + i) = toupper(FileName[i]);
        if (*(char*)((int)pTempName + i) == '/')
            *(char*)((int)pTempName + i) = '\\';
    }
    *(char*)((int)pTempName + i) = 0;
    strcpy(pTempName, FMN_SCE_AddBaseDirectory(pTempName));
    if (strstr(pTempName, ":") != NULL)
        pName = strstr(pTempName, ":") + 1;
    else
        pName = pTempName;
    if (*pName != '\\') {
        strcpy(TempString2, pName);
        *pName = '\\';
        strcpy(pName + 1, TempString2);
    }
    if (strstr(pName, ";1") == NULL)
        Strcat(pName, ";1");
    sceCdDiskReady(0);
    Ret = SCEECdSearchFile(&SearchHeaderSpecial, pName);
    Count = 0;
    if (Ret != 1) {
        do {
            sceCdDiskReady(0);
            Ret = SCEECdSearchFile(&SearchHeaderSpecial, pName);
            Count++;
        } while (Ret != 1 && Count < 50);
        if (Ret == 0)
            return -1;
    }
    p->FirstLogicalSector = SearchHeaderSpecial.pos;
    p->FileSize = SearchHeaderSpecial.size;
    p->CurrentPosition = 0;
    return Handle;
}

unsigned int CD_Length(int FileHandle)
{
    return gs_CD_Files[FileHandle].FileSize;
}

unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom)
{
    _CD_FILE_Internal_* p;

    p = &gs_CD_Files[FileHandle];
    switch (WhereFrom)
    {
    case 1:
        p->CurrentPosition += Position;
        break;
    case 0:
        p->CurrentPosition = Position;
        break;
    case 2:
        p->CurrentPosition = p->FileSize - Position - 1;
        break;
    }

    if (p->CurrentPosition < 0)
        p->CurrentPosition = 0;
    if (p->CurrentPosition >= p->FileSize)
        p->CurrentPosition = p->FileSize - 1;

    return p->CurrentPosition;
}

/* Target writes COP0 register 24 (mtc0 zero, $24); C cannot express it.
 * Spelled with the R5900 alias mtbpc, MWCC schedules it like an ordinary
 * instruction (delay slots) as retail did. */
inline void SCT_vClearCop0Register24Sched(void)
{
    asm volatile { mtbpc zero }
}

int CD_Read(int FileHandle, char* Buffer, int Size)
{
    int NumberOfSectorsToRead;
    int FirstSectorToRead;
    unsigned int Toto;
    int SizeIHaveRead;
    int NbSectorsToReadThisTime;
    _CD_FILE_Internal_* p;
    int NumberOfSectorsIHaveRead;
    int OffsetInSectorBuffer;
    char* AlignedBuffer;
    int TempSizeOfTheChunkIHaveJustRead;
    int OffsetInDestBuffer;
    int SizeOfTheChunkIHaveJustRead;
    int SizeToRead;
    anon_0 ReadMode;

    p = &gs_CD_Files[FileHandle];
    SizeToRead = Size;
    if (p->CurrentPosition + Size > p->FileSize)
        SizeToRead = p->FileSize - p->CurrentPosition;
    if (SizeToRead == 0)
        return 0;
    sceCdDiskReady(0);
    FirstSectorToRead = p->CurrentPosition / 2048;
    TempSizeOfTheChunkIHaveJustRead = p->CurrentPosition - FirstSectorToRead * 2048;
    OffsetInSectorBuffer = TempSizeOfTheChunkIHaveJustRead;
    TempSizeOfTheChunkIHaveJustRead += SizeToRead;
    NumberOfSectorsToRead = TempSizeOfTheChunkIHaveJustRead / 2048;
    if (NumberOfSectorsToRead * 2048 < TempSizeOfTheChunkIHaveJustRead)
        NumberOfSectorsToRead++;
    OffsetInDestBuffer = 0;
    ReadMode.spindlctrl = 1;
    NumberOfSectorsIHaveRead = 0;
    SizeIHaveRead = 0;
    ReadMode.trycount = 0;
    ReadMode.datapattern = 0;
    ReadMode.pad = 0;
    FirstSectorToRead += p->FirstLogicalSector;
    AlignedBuffer = (char*)gs_CD_Buffer;
    while (NumberOfSectorsIHaveRead < NumberOfSectorsToRead) {
        if (NumberOfSectorsToRead < NumberOfSectorsIHaveRead + 16)
            NbSectorsToReadThisTime = NumberOfSectorsToRead - NumberOfSectorsIHaveRead;
        else
            NbSectorsToReadThisTime = 16;
        do {
            ReadMode.spindlctrl = 1;
            ReadMode.trycount = 0;
            ReadMode.datapattern = 0;
            ReadMode.pad = 0;
            sceCdDiskReady(0);
            if (sceCdRead(FirstSectorToRead, NbSectorsToReadThisTime, AlignedBuffer, &ReadMode) != 1) {
                Toto = 1;
            } else {
                SizeOfTheChunkIHaveJustRead = NbSectorsToReadThisTime * 2048 - OffsetInSectorBuffer;
                SizeOfTheChunkIHaveJustRead = (SizeIHaveRead + SizeOfTheChunkIHaveJustRead < SizeToRead ? SizeIHaveRead + SizeOfTheChunkIHaveJustRead : SizeToRead) - SizeIHaveRead;
                if (CD_ProgressCallBack != 0)
                    ((void (*)(int))CD_ProgressCallBack)(SizeOfTheChunkIHaveJustRead);
                while (sceCdSync(1) != 0)
                    SCT_vClearCop0Register24Sched();
                Toto = sceCdGetError();
            }
            SCT_vClearCop0Register24Sched();
        } while (Toto != 0);
        SizeIHaveRead += SizeOfTheChunkIHaveJustRead;
        memcpy(Buffer + OffsetInDestBuffer, AlignedBuffer + OffsetInSectorBuffer, SizeOfTheChunkIHaveJustRead);
        FirstSectorToRead += NbSectorsToReadThisTime;
        OffsetInSectorBuffer = 0;
        NumberOfSectorsIHaveRead += 16;
        OffsetInDestBuffer += SizeOfTheChunkIHaveJustRead;
    }
    p->CurrentPosition += SizeToRead;
    return SizeToRead;
}

void CD_Close(int FileHandle)
{
    gs_CD_Files[FileHandle].FirstLogicalSector = 0;
}

int CD_OpenFileWithNameConversion(char* RawFileName)
{
    return CD_OpenFile(FMN_SCE_ConvertPath2DVD(RawFileName));
}

int PS2_fn_iGetCDMediaMode(void)
{
    return 2;
}

char* FMN_SCE_ConvertPathDos2Unix(char* buffer)
{
    char* p_cConverted;
    char* p_cToConvert;
    static char s_szFileName[512];

    if ((p_cToConvert = Strchr(buffer, ':')) != NULL)
    {
        p_cToConvert++;
    }
    else
    {
        p_cToConvert = buffer;
    }
    strcpy(s_szFileName, "cdrom0:");
    p_cConverted = s_szFileName + strlen(s_szFileName);
    if (*p_cToConvert != '\\' && *p_cToConvert != '/')
    {
        *p_cConverted++ = '\\';
    }
    do
    {
        if (*p_cToConvert == '/')
        {
            *p_cConverted = '\\';
            if (p_cConverted > s_szFileName) { if (p_cConverted[-1] == '\\')
                p_cConverted--;
            }
        }
        else if (*p_cToConvert == '\xE9' || *p_cToConvert == '\xE8')
            *p_cConverted = 'e';
        else if (*p_cToConvert == ' ')
            *p_cConverted = '_';
        else
            *p_cConverted = tolower(*p_cToConvert);
        p_cConverted++; } while (*p_cToConvert++);
    p_cConverted = Strchr(s_szFileName, ':');
    strupr(p_cConverted);
    if (strstr(p_cConverted, ";1") == NULL)
        Strcat(p_cConverted, ";1");
    return s_szFileName;
}
