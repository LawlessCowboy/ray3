/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>


/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GEO_tdstElementIndexedTriangles_ GEO_tdstElementIndexedTriangles_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct S_TXR_Header_ S_TXR_Header_;

struct S_TXR_Header_ {
    unsigned int VersionID; /* +0x0 */
    unsigned int Flags; /* +0x4 */
    unsigned int SizeX; /* +0x8 */
    unsigned int SizeY; /* +0xc */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GEO_tdstElementIndexedTriangles_ {
    void* p_stFields[8]; /* +0x0 .. +0x1f */
    unsigned short* pusIndexTable; /* +0x20 */
};

extern int gs_keepit;
extern void SyncDCache(void*, void*);
extern void InvalidDCache(void*, void*);

int TBF_g_CurrentFile;
int printf(const char* format, ...);
int TBF_g_CurrentFileBuffer;
int TBF_g_CurrentFileSize;
int TBF_g_CurrentFileAllocation;
int TBF_g_UseTBFWriteCache;
extern int sceWrite(int, void*, int);
extern int sceClose(int);
extern void* memcpy(void*, const void*, size_t);
extern void free(void*);
extern void TBF_ChangeCacheSize(int);
extern int GetTotalSizeWithMipMaps(int);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 89–401 */
/* addr: 0x002bdcd0  size: 1356 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 89
 *   +0x0004 -> line 107
 *   +0x0008 -> line 89
 *   +0x000c -> line 110
 *   +0x0010 -> line 89
 *   +0x0020 -> line 94
 *   +0x0024 -> line 89
 *   +0x0048 -> line 107
 *   +0x0058 -> line 110
 *   +0x00a0 -> line 111
 *   +0x00a4 -> line 110
 *   +0x00a8 -> line 111
 *   +0x00f0 -> line 117
 *   +0x0108 -> line 111
 *   +0x010c -> line 117
 *   +0x0114 -> line 119
 *   +0x0130 -> line 121
 *   +0x013c -> line 123
 *   +0x0150 -> line 125
 *   +0x0164 -> line 131
 *   +0x0170 -> line 133
 *   +0x017c -> line 134
 *   +0x0184 -> line 150
 *   +0x018c -> line 167
 *   +0x0190 -> line 151
 *   +0x0194 -> line 139
 *   +0x0198 -> line 152
 *   +0x019c -> line 142
 *   +0x01a0 -> line 153
 *   +0x01a4 -> line 158
 *   +0x01a8 -> line 155
 *   +0x01ac -> line 167
 *   +0x01b0 -> line 156
 *   +0x01b4 -> line 167
 *   +0x01b8 -> line 157
 *   +0x01bc -> line 167
 *   +0x01c0 -> line 158
 *   +0x01c4 -> line 163
 *   +0x01c8 -> line 160
 *   +0x01cc -> line 168
 *   +0x01d0 -> line 161
 *   +0x01d4 -> line 142
 *   +0x01d8 -> line 162
 *   +0x01dc -> line 168
 *   +0x01f0 -> line 171
 *   +0x01f4 -> line 170
 *   +0x01fc -> line 171
 *   +0x0200 -> line 170
 *   +0x0204 -> line 171
 *   +0x0214 -> line 169
 *   +0x0218 -> line 171
 *   +0x0234 -> line 172
 *   +0x0238 -> line 171
 *   +0x023c -> line 172
 *   +0x0240 -> line 171
 *   +0x0244 -> line 172
 *   +0x0248 -> line 171
 *   +0x024c -> line 172
 *   +0x0250 -> line 171
 *   +0x0258 -> line 177
 *   +0x02a0 -> line 180
 *   +0x02a4 -> line 181
 *   +0x02a8 -> line 182
 *   +0x02ac -> line 185
 *   +0x02b0 -> line 177
 *   +0x02b4 -> line 188
 *   +0x02bc -> line 190
 *   +0x02cc -> line 191
 *   +0x02e8 -> line 194
 *   +0x02f0 -> line 193
 *   +0x02f4 -> line 194
 *   +0x02f8 -> line 192
 *   +0x02fc -> line 193
 *   +0x0300 -> line 194
 *   +0x0304 -> line 193
 *   +0x0308 -> line 194
 *   +0x0320 -> line 195
 *   +0x0324 -> line 194
 *   +0x0328 -> line 195
 *   +0x032c -> line 194
 *   +0x0330 -> line 195
 *   +0x0334 -> line 194
 *   +0x0338 -> line 195
 *   +0x033c -> line 194
 *   +0x0348 -> line 202
 *   +0x034c -> line 203
 *   +0x0350 -> line 204
 *   +0x0354 -> line 205
 *   +0x0358 -> line 207
 *   +0x035c -> line 210
 *   +0x0364 -> line 216
 *   +0x0368 -> line 217
 *   +0x036c -> line 219
 *   +0x0370 -> line 221
 *   +0x0374 -> line 222
 *   +0x0378 -> line 224
 *   +0x037c -> line 225
 *   +0x0380 -> line 227
 *   +0x0384 -> line 228
 *   +0x0388 -> line 229
 *   +0x038c -> line 231
 *   +0x0390 -> line 232
 *   +0x0394 -> line 244
 *   +0x039c -> line 247
 *   +0x03a0 -> line 248
 *   +0x03a4 -> line 249
 *   +0x03a8 -> line 250
 *   +0x03ac -> line 251
 *   +0x03b0 -> line 252
 *   +0x03b4 -> line 253
 *   +0x03b8 -> line 254
 *   +0x03bc -> line 256
 *   +0x03c0 -> line 257
 *   +0x03c4 -> line 259
 *   +0x03c8 -> line 260
 *   +0x03cc -> line 261
 *   +0x03d0 -> line 263
 *   +0x03d4 -> line 264
 *   +0x03d8 -> line 267
 *   +0x03dc -> line 268
 *   +0x03e0 -> line 269
 *   +0x03e4 -> line 272
 *   +0x03e8 -> line 273
 *   +0x03ec -> line 275
 *   +0x03f0 -> line 276
 *   +0x03f4 -> line 278
 *   +0x03f8 -> line 284
 *   +0x0400 -> line 288
 *   +0x0404 -> line 289
 *   +0x0408 -> line 290
 *   +0x040c -> line 291
 *   +0x0410 -> line 292
 *   +0x0414 -> line 293
 *   +0x0418 -> line 294
 *   +0x041c -> line 296
 *   +0x0420 -> line 297
 *   +0x0424 -> line 299
 *   +0x0428 -> line 300
 *   +0x042c -> line 301
 *   +0x0430 -> line 303
 *   +0x0434 -> line 304
 *   +0x0438 -> line 308
 *   +0x043c -> line 309
 *   +0x0440 -> line 310
 *   +0x0444 -> line 312
 *   +0x0448 -> line 313
 *   +0x044c -> line 314
 *   +0x0450 -> line 315
 *   +0x0454 -> line 321
 *   +0x0458 -> line 323
 *   +0x0460 -> line 327
 *   +0x0464 -> line 328
 *   +0x0468 -> line 329
 *   +0x046c -> line 330
 *   +0x0470 -> line 331
 *   +0x0474 -> line 332
 *   +0x0478 -> line 333
 *   +0x047c -> line 335
 *   +0x0480 -> line 336
 *   +0x0484 -> line 338
 *   +0x0488 -> line 339
 *   +0x048c -> line 340
 *   +0x0490 -> line 342
 *   +0x0494 -> line 343
 *   +0x0498 -> line 347
 *   +0x049c -> line 348
 *   +0x04a0 -> line 349
 *   +0x04a4 -> line 351
 *   +0x04a8 -> line 352
 *   +0x04ac -> line 353
 *   +0x04b0 -> line 354
 *   +0x04b4 -> line 356
 *   +0x04b8 -> line 362
 *   +0x04c0 -> line 366
 *   +0x04c4 -> line 367
 *   +0x04c8 -> line 368
 *   +0x04cc -> line 369
 *   +0x04d0 -> line 370
 *   +0x04d4 -> line 371
 *   +0x04d8 -> line 372
 *   +0x04dc -> line 374
 *   +0x04e0 -> line 375
 *   +0x04e4 -> line 377
 *   +0x04e8 -> line 378
 *   +0x04ec -> line 379
 *   +0x04f0 -> line 381
 *   +0x04f4 -> line 382
 *   +0x04f8 -> line 386
 *   +0x04fc -> line 387
 *   +0x0500 -> line 388
 *   +0x0504 -> line 390
 *   +0x0508 -> line 392
 *   +0x050c -> line 393
 *   +0x0510 -> line 395
 *   +0x0514 -> line 400
 *   +0x051c -> line 401
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateCharacterVAReal(float (*pDestPV)[4], GEO_tdstElementIndexedTriangles_* p_stEIT, MTH3D_tdstVector_* p_stPoints, unsigned int NbPoints, unsigned int NbDestPoints)
{
    volatile unsigned int* puGs;
    unsigned int  ulDest;
    unsigned int  ulCheck;
    unsigned int  ulCheck2;
    unsigned int  ulFlag = 0;
    unsigned int  ulNb;
    unsigned int  ulRemaining;
    unsigned int  ulRemainingSnap;
    unsigned int  ulBuffer;
    unsigned int  ulCount;
    unsigned int  ulPacket;
    unsigned int  ulOffset;
    unsigned short* pusIndex;
    unsigned short  usCount;
    unsigned short  usIndex;

    *(volatile unsigned int*)0x1000E000 |= 2;
    while ((*(volatile unsigned int*)0x1000D400 & 0x100) != 0) { for (ulNb = 0; ulNb < 0x64; ulNb++) { ulCheck = (ulCheck + ulNb) & 0x746; } }
    gs_keepit += ulCheck;
    while ((*(volatile unsigned int*)0x1000D000 & 0x100) != 0) { for (ulNb = 0; ulNb < 0x64; ulNb++) { ulCheck2 = (ulCheck2 + ulNb) & 0x746; } }
    gs_keepit += ulCheck2;
    SyncDCache((char*)p_stPoints - 0x60, (char*)p_stPoints + NbPoints * 12 + 0x60);
    InvalidDCache((char*)p_stPoints - 0x60, (char*)p_stPoints + NbPoints * 12 + 0x60);
    SyncDCache((char*)pDestPV - 0x10, (char*)pDestPV + 0x10);
    SyncDCache((char*)pDestPV + NbDestPoints * 16 - 0x10, (char*)pDestPV + NbDestPoints * 16 + 0x10);
    InvalidDCache((char*)pDestPV - 0x10, (char*)pDestPV + NbDestPoints * 16 + 0x10);
    if (p_stEIT->pusIndexTable == NULL) {
        printf("Ouch no index table!\n");
        return;
    }
    pusIndex = p_stEIT->pusIndexTable + 2;
    ulDest = ((unsigned int)pDestPV) | 0x30000000;
    puGs = (volatile unsigned int*)0x70000000;
    puGs[0] = 0xFFFFFFFF;
    puGs[1] = 0xFFFFFFFF;
    puGs[2] = 0xFFFFFFFF;
    puGs[3] = 0;
    puGs[4] = 0;
    puGs[5] = 0;
    puGs[6] = 0;
    puGs[7] = 0x3F800000;
    puGs[8] = 0;
    puGs[9] = 0;
    puGs[10] = 0;
    puGs[11] = 0x8000;
    ulBuffer = 0x70000200 + (ulFlag << 13);
    ulNb = (NbPoints < 0x3C) ? NbPoints : 0x3C;
    ulRemaining = NbPoints - ulNb;
    *(volatile unsigned int*)0x1000E410 = ((unsigned int)p_stPoints) & 0xFFFFFFF0;
    *(volatile unsigned int*)0x1000E480 = ulBuffer & 0x3FF0;
    *(volatile unsigned int*)0x1000E420 = ((((ulNb + 3) & ~3) * 12) + 15) >> 4;
    p_stPoints += ulNb * 12;
    *(volatile unsigned int*)0x1000D400 = 0x100;
    do {
        while ((*(volatile unsigned int*)0x1000D400 & 0x100) != 0) { for (ulNb = 0; ulNb < 0x64; ulNb++) { ulCheck2 = (ulCheck2 + ulNb) & 0x746; } }
        gs_keepit += ulCheck2;
        ulCount = ulNb;
        ulRemainingSnap = ulRemaining;
        ulPacket = ulBuffer;
        ulFlag ^= 1;
        if (ulRemaining != 0) {
            ulBuffer = 0x70000200 + (ulFlag << 13);
            ulNb = (ulRemaining < 0x3C) ? ulRemaining : 0x3C;
            ulRemaining = ulRemaining - ulNb;
            *(volatile unsigned int*)0x1000E410 = ((unsigned int)p_stPoints) & 0xFFFFFFF0;
            *(volatile unsigned int*)0x1000E480 = ulBuffer & 0x3FF0;
            *(volatile unsigned int*)0x1000E420 = ((((ulNb + 3) & ~3) * 12) + 15) >> 4;
            p_stPoints += ulNb * 12;
            *(volatile unsigned int*)0x1000D400 = 0x100;
        }
        asm { lui $t0, 0x7000 }
        asm { lq $s0, 0x0($t0) }
        asm { lq $s1, 0x10($t0) }
        asm { lq $s2, 0x20($t0) }
        asm { lq $t2, 0x0($t8) }
        asm { lq $t3, 0x10($t8) }
        asm { mtsab $zero, 0xC }
        asm { qfsrv $t5, $t3, $t2 }
        asm { lq $t4, 0x20($t8) }
        asm { nop }
        asm { nop }
        asm { mtsab $zero, 0x8 }
        asm { qfsrv $t6, $t4, $t3 }
        usCount = *pusIndex;
        pusIndex++;
        ulPacket += 0x30;
        asm { mtsab $zero, 0x4 }
        asm { qfsrv $t7, $zero, $t4 }
        if (usCount != 0) {
            do {
                usIndex = *pusIndex;
                ulOffset = usIndex & 0x7FFF;
                usIndex = usIndex & 0x8000;
                usCount--;
                ulOffset = ulOffset << 4;
                asm { pand $t2, $t2, $s0 }
                asm { add $s3, $s3, $v1 }
                if (usIndex == 0) {
                    pusIndex++;
                    asm { por $t2, $t2, $s2 }
                    if (usCount != 0) continue;
                    asm { sq $t2, 0x0($s3) }
                } else {
                    asm { por $t2, $t2, $s1 }
                    if (usCount != 0) continue;
                    asm { sq $t2, 0x0($s3) }
                }
            } while (usCount != 0);
        }
        usCount = *pusIndex;
        if (ulCount == 0) break;
        pusIndex++;
        if (usCount != 0) {
            do {
                usIndex = *pusIndex;
                ulOffset = usIndex & 0x7FFF;
                usCount--;
                usIndex = usIndex & 0x8000;
                ulOffset = ulOffset << 4;
                asm { pand $t5, $t5, $s0 }
                asm { add $s3, $s3, $v1 }
                if (usIndex == 0) {
                    pusIndex++;
                    asm { por $t5, $t5, $s2 }
                    if (usCount != 0) continue;
                    asm { sq $t5, 0x0($s3) }
                } else {
                    asm { por $t5, $t5, $s1 }
                    if (usCount != 0) continue;
                    asm { sq $t5, 0x0($s3) }
                }
            } while (usCount != 0);
        }
    } while (ulRemainingSnap != 0);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 413–446 */
/* addr: 0x002be220  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 413
 *   +0x0018 -> line 419
 *   +0x0024 -> line 423
 *   +0x0038 -> line 425
 *   +0x004c -> line 426
 *   +0x005c -> line 428
 *   +0x0068 -> line 429
 *   +0x0078 -> line 432
 *   +0x0088 -> line 438
 *   +0x0090 -> line 439
 *   +0x00a0 -> line 441
 *   +0x00a8 -> line 443
 *   +0x00b4 -> line 445
 *   +0x00b8 -> line 446
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
typedef void* (*transition_allocator_t)(unsigned int);
extern int sprintf(char* s, const char* format, ...);
extern char* PLD_szPrependGamedataName(char*);
extern int CD_OpenFileWithNameConversion(char*);
extern unsigned int CD_Length(int FileHandle);
extern unsigned int CD_Seek(int FileHandle, int Position, int WhereFrom);
extern int CD_Read(int FileHandle, char* Buffer, int Size);
extern void CD_Close(int FileHandle);
extern void* fn_pvMallocInBinaryPreservingTheCurrentMode(unsigned int size);
extern void LS_FinallyIThinkIOnlyHaveThisSizeLeftToLoad(int SizeLeft);
extern transition_allocator_t fn_pfnCurrentTransitionAllocator(void);

void* TBF_pReadLevelTRSBloc(char* LevelName)
{
    char FileName[1024];
    int TBF_File;
    unsigned int Length;
    char* Buffer;

    printf("Reading Level textures ....\n");

    sprintf(FileName, "%s\\transit.TBF", LevelName);

    TBF_File = CD_OpenFileWithNameConversion(PLD_szPrependGamedataName(FileName));
    if (TBF_File < 0)
        return NULL;

    Length = CD_Length(TBF_File);
    CD_Seek(TBF_File, 0, 0);

    Buffer = fn_pfnCurrentTransitionAllocator()(Length + 127);

    if (Length)
        CD_Read(TBF_File, Buffer, Length);

    CD_Close(TBF_File);

    printf("Done reading Level textures !\n");

    return Buffer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 380–408 */
/* addr: 0x002be2f0  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 380
 *   +0x0018 -> line 386
 *   +0x0024 -> line 388
 *   +0x003c -> line 390
 *   +0x0050 -> line 391
 *   +0x0060 -> line 393
 *   +0x006c -> line 394
 *   +0x007c -> line 397
 *   +0x0088 -> line 400
 *   +0x0090 -> line 401
 *   +0x00a0 -> line 403
 *   +0x00a8 -> line 405
 *   +0x00b4 -> line 407
 *   +0x00b8 -> line 408
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* TBF_pReadLevel(char* LevelName)
{
    char FileName[1024];
    int TBF_File;
    unsigned int Length;
    char* Buffer;

    printf("Reading Level textures ....\n");

    sprintf(FileName, "%s\\%s.TBF", LevelName, LevelName);

    Buffer = PLD_szPrependGamedataName(FileName);
    TBF_File = CD_OpenFileWithNameConversion(Buffer);
    if (TBF_File < 0)
        return NULL;

    Length = CD_Length(TBF_File);
    CD_Seek(TBF_File, 0, 0);

    Buffer = fn_pvMallocInBinaryPreservingTheCurrentMode(Length + 127);

    LS_FinallyIThinkIOnlyHaveThisSizeLeftToLoad(Length);
    CD_Read(TBF_File, Buffer, Length);

    CD_Close(TBF_File);

    printf("Done reading Level textures !\n");

    return Buffer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 344–369 */
/* addr: 0x002be3c0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 344
 *   +0x0004 -> line 350
 *   +0x0008 -> line 344
 *   +0x000c -> line 350
 *   +0x0010 -> line 344
 *   +0x0018 -> line 350
 *   +0x0020 -> line 352
 *   +0x0038 -> line 353
 *   +0x0048 -> line 355
 *   +0x0054 -> line 356
 *   +0x0064 -> line 359
 *   +0x0070 -> line 362
 *   +0x0080 -> line 364
 *   +0x0088 -> line 366
 *   +0x0094 -> line 368
 *   +0x0098 -> line 369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* TBF_pReadFix(void)
{
    int TBF_File;
    unsigned int Length;
    char* Buffer;

    printf("Reading FIX textures...\n");

    TBF_File = CD_OpenFileWithNameConversion(PLD_szPrependGamedataName("FIX.TBF"));
    if (TBF_File < 0)
        return NULL;

    Length = CD_Length(TBF_File);
    CD_Seek(TBF_File, 0, 0);

    Buffer = fn_pvMallocInBinaryPreservingTheCurrentMode(Length + 127);

    CD_Read(TBF_File, Buffer, Length);

    CD_Close(TBF_File);

    printf("Done reading FIX textures !\n");

    return Buffer;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 322–334 */
/* addr: 0x002be470  size: 140 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 322
 *   +0x0008 -> line 325
 *   +0x0014 -> line 327
 *   +0x0018 -> line 328
 *   +0x001c -> line 327
 *   +0x0020 -> line 329
 *   +0x0024 -> line 327
 *   +0x0028 -> line 333
 *   +0x0080 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vCreateEmptyTexture(void)
{
    S_TXR_Header_ Header;
    if (TBF_g_CurrentFile >= 0) {
        Header.VersionID = 0x0AB9FC72;
        Header.Flags = 0;
        Header.SizeX = 0;
        Header.SizeY = 0;
        if (TBF_g_UseTBFWriteCache != 0) { TBF_ChangeCacheSize(0x10); } if (TBF_g_UseTBFWriteCache != 0) { memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, &Header, 0x10); TBF_g_CurrentFileSize += 0x10; } else { sceWrite(TBF_g_CurrentFile, &Header, 0x10); }
    }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 272–315 */
/* addr: 0x002be500  size: 412 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 272
 *   +0x002c -> line 276
 *   +0x0038 -> line 278
 *   +0x0070 -> line 282
 *   +0x0074 -> line 281
 *   +0x0078 -> line 283
 *   +0x0080 -> line 287
 *   +0x0084 -> line 288
 *   +0x0090 -> line 290
 *   +0x0098 -> line 293
 *   +0x00a0 -> line 295
 *   +0x00a4 -> line 297
 *   +0x00ac -> line 299
 *   +0x00b0 -> line 300
 *   +0x00b4 -> line 304
 *   +0x00b8 -> line 305
 *   +0x00bc -> line 304
 *   +0x00c0 -> line 306
 *   +0x00c4 -> line 304
 *   +0x00c8 -> line 310
 *   +0x0120 -> line 314
 *   +0x0178 -> line 315
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vWriteTexture(void* pTextureData, unsigned int SizeX, unsigned int SizeY, unsigned int Flags)
{
    S_TXR_Header_ Header;
    int iPaletteSize;
    int iDataSize;
    if (TBF_g_CurrentFile < 0)
        return;
    switch (Flags & 0xF) {
    case 1:
        iPaletteSize = 0x40;
        iDataSize = (SizeX * SizeY) >> 1;
        break;
    case 2:
        iDataSize = SizeX * SizeY;
        iPaletteSize = 0x400;
        if (Flags & 0x1000) {
            iDataSize = GetTotalSizeWithMipMaps(iDataSize);
        }
        break;
    case 3:
        iPaletteSize = 0;
        iDataSize = (SizeX * SizeY) * 2;
        break;
    case 4:
        iPaletteSize = 0;
        iDataSize = (SizeX * SizeY) * 4;
        break;
    }
    Header.VersionID = 0x0AB9FC72;
    Header.Flags = Flags;
    Header.SizeX = SizeX;
    Header.SizeY = SizeY;
    if (TBF_g_UseTBFWriteCache != 0) { TBF_ChangeCacheSize(0x10); } if (TBF_g_UseTBFWriteCache != 0) { memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, &Header, 0x10); TBF_g_CurrentFileSize += 0x10; } else { sceWrite(TBF_g_CurrentFile, &Header, 0x10); }
    iDataSize += iPaletteSize;
    if (TBF_g_UseTBFWriteCache != 0) { TBF_ChangeCacheSize(iDataSize); } if (TBF_g_UseTBFWriteCache != 0) { memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, pTextureData, iDataSize); TBF_g_CurrentFileSize += iDataSize; } else { sceWrite(TBF_g_CurrentFile, pTextureData, iDataSize); }
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 258–265 */
/* addr: 0x002be6a0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 258
 *   +0x0008 -> line 259
 *   +0x0014 -> line 261
 *   +0x0050 -> line 262
 *   +0x0058 -> line 264
 *   +0x0060 -> line 265
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vClose(void) {
    int Result; Result = -1; if (TBF_g_CurrentFile >= 0) {
        if (TBF_g_CurrentFile >= 0) { if (TBF_g_UseTBFWriteCache != 0 && TBF_g_CurrentFileBuffer != 0) { sceWrite(TBF_g_CurrentFile, (void*)TBF_g_CurrentFileBuffer, TBF_g_CurrentFileSize); free((void*)TBF_g_CurrentFileBuffer); TBF_g_CurrentFileBuffer = 0; TBF_g_CurrentFileAllocation = 0; TBF_g_CurrentFileSize = 0; } }
        sceClose(TBF_g_CurrentFile);
        Result = -1; } TBF_g_CurrentFile = Result;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 219–251 */
/* addr: 0x002be710  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 219
 *   +0x0004 -> line 226
 *   +0x0008 -> line 219
 *   +0x000c -> line 226
 *   +0x0014 -> line 227
 *   +0x001c -> line 251
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vCreateLevelTRSBloc(void)
{





    printf("\n\nOULA !! MasterPS2 mode, and no Fix Big texture file !!\n\n");
    TBF_g_CurrentFile = -1;






















}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 186–216 */
/* addr: 0x002be740  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 186
 *   +0x0004 -> line 193
 *   +0x0008 -> line 186
 *   +0x000c -> line 193
 *   +0x0014 -> line 194
 *   +0x001c -> line 216
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vCreateLevel(void)
{





    printf("\n\nOULA !! MasterPS2 mode, and no Fix Big texture file !!\n\n");
    TBF_g_CurrentFile = -1;




















}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_texture.c lines 150–183 */
/* addr: 0x002be770  size: 40 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 150
 *   +0x0004 -> line 158
 *   +0x0008 -> line 150
 *   +0x000c -> line 158
 *   +0x0014 -> line 159
 *   +0x001c -> line 183
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void TBF_vCreateFix(void)
{






    printf("\n\nOULA !! MasterPS2 mode, and no Fix Big texture file !!\n\n");
    TBF_g_CurrentFile = -1;






















}
