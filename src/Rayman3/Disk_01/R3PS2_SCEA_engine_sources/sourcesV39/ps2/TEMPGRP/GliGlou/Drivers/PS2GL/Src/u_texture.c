/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct S_TXR_Header_ S_TXR_Header_;

struct S_TXR_Header_ {
    unsigned int VersionID; /* +0x0 */
    unsigned int Flags; /* +0x4 */
    unsigned int SizeX; /* +0x8 */
    unsigned int SizeY; /* +0xc */
};

int TBF_g_CurrentFile;
int TBF_g_CurrentFileBuffer;
int TBF_g_CurrentFileSize;
int TBF_g_CurrentFileAllocation;
int TBF_g_UseTBFWriteCache;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 94–401 */
/* addr: 0x002bdcd0  size: 1356 bytes */
void GLI_vUpdateCharacterVAReal(float (*) pDestPV[4], /* function pointer */ int p_stEIT, /* function pointer */ int p_stPoints, unsigned int NbPoints, unsigned int NbDestPoints, /* function pointer */ int p_stPointsArg)
{
    int i;
    int j;
    unsigned int* p;
    int i;
    int j;
    int i;
    int j;
    char* pSprWork;
    char* pSprDest;
    unsigned int NbPointsToTransfert;
    unsigned int NbPointsToProcessNext;
    unsigned int NbPointsToProcess;
    unsigned int RemainingNbPoints;
    unsigned int RemainingNbPointsNext;
    unsigned int CurrentBuffer;
    unsigned short* param0;
    float* pV;
    /* line map: */
    /*   line 107 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 94 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 119 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 419–446 */
/* addr: 0x002be220  size: 208 bytes */
void TBF_pReadLevelTRSBloc(char* LevelName)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    char FileName[1024];
    /* line map: */
    /*   line 419 @ +0x000 */
    /*   line 425 @ +0x000 */
    /*   line 428 @ +0x000 */
    /*   line 432 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 443 @ +0x000 */
    /*   line 446 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 386–408 */
/* addr: 0x002be2f0  size: 208 bytes */
void TBF_pReadLevel(char* LevelName)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    char FileName[1024];
    /* line map: */
    /*   line 386 @ +0x000 */
    /*   line 390 @ +0x000 */
    /*   line 393 @ +0x000 */
    /*   line 397 @ +0x000 */
    /*   line 401 @ +0x000 */
    /*   line 405 @ +0x000 */
    /*   line 408 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 350–369 */
/* addr: 0x002be3c0  size: 176 bytes */
void TBF_pReadFix(void)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    /* line map: */
    /*   line 350 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 350 @ +0x000 */
    /*   line 353 @ +0x000 */
    /*   line 356 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 366 @ +0x000 */
    /*   line 369 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 325–333 */
/* addr: 0x002be470  size: 140 bytes */
void TBF_vCreateEmptyTexture(void)
{
    S_TXR_Header_ Header;
    /* line map: */
    /*   line 325 @ +0x000 */
    /*   line 328 @ +0x000 */
    /*   line 329 @ +0x000 */
    /*   line 333 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 276–315 */
/* addr: 0x002be500  size: 412 bytes */
void TBF_vWriteTexture(void* pTextureData, unsigned int SizeX, unsigned int SizeY, unsigned int Flags)
{
    S_TXR_Header_ Header;
    int iDataSize;
    int iPaletteSize;
    /* line map: */
    /*   line 276 @ +0x000 */
    /*   line 282 @ +0x000 */
    /*   line 283 @ +0x000 */
    /*   line 288 @ +0x000 */
    /*   line 293 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 300 @ +0x000 */
    /*   line 305 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 259–265 */
/* addr: 0x002be6a0  size: 108 bytes */
void TBF_vClose(void)
{
    /* line map: */
    /*   line 259 @ +0x000 */
    /*   line 262 @ +0x000 */
    /*   line 265 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 226–251 */
/* addr: 0x002be710  size: 40 bytes */
void TBF_vCreateLevelTRSBloc(void)
{
    /* line map: */
    /*   line 226 @ +0x000 */
    /*   line 226 @ +0x000 */
    /*   line 251 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 193–216 */
/* addr: 0x002be740  size: 40 bytes */
void TBF_vCreateLevel(void)
{
    /* line map: */
    /*   line 193 @ +0x000 */
    /*   line 193 @ +0x000 */
    /*   line 216 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 158–183 */
/* addr: 0x002be770  size: 40 bytes */
void TBF_vCreateFix(void)
{
    /* line map: */
    /*   line 158 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 183 @ +0x000 */
    /* TODO: decompile from asm/... */
}
