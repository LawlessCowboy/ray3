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

int TBF_g_CurrentFile;
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
    int i;
    int j;
    unsigned int* p;
    char* pSprWork;
    char* pSprDest;
    unsigned int NbPointsToTransfert;
    unsigned int NbPointsToProcessNext;
    unsigned int NbPointsToProcess;
    unsigned int RemainingNbPoints;
    unsigned int RemainingNbPointsNext;
    unsigned int CurrentBuffer;
    unsigned short* param0;
    MTH3D_tdstVector_* p_stPointsArg;
    float* pV;
    /* TODO: decompile from asm/... */
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
void TBF_pReadLevelTRSBloc(char* LevelName)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    char FileName[1024];
    /* TODO: decompile from asm/... */
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
void TBF_pReadLevel(char* LevelName)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    char FileName[1024];
    /* TODO: decompile from asm/... */
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
void TBF_pReadFix(void)
{
    char* Buffer;
    unsigned int Length;
    int TBF_File;
    /* TODO: decompile from asm/... */
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
        if (TBF_g_UseTBFWriteCache != 0) {
            TBF_ChangeCacheSize(0x10);
            memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, &Header, 0x10);
            TBF_g_CurrentFileSize += 0x10;
        } else {
            sceWrite(TBF_g_CurrentFile, &Header, 0x10);
        }
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
    int iDataSize;
    int iPaletteSize;
    unsigned int Type;
    Header.VersionID = 0x0AB9FC72;
    Header.Flags = Flags;
    Header.SizeX = SizeX;
    Header.SizeY = SizeY;
    if (TBF_g_CurrentFile < 0)
        return;
    Type = Flags & 0xF;
    if (Type == 1) {
        iPaletteSize = 0x40;
        iDataSize = (SizeX * SizeY) >> 1;
    } else if (Type == 2) {
        iPaletteSize = 0;
        iDataSize = SizeX * SizeY * 2;
    } else if (Type == 3) {
        iPaletteSize = 0;
        iDataSize = SizeX * SizeY * 3;
    } else if (Type == 4) {
        iPaletteSize = 0x400;
        iDataSize = SizeX * SizeY * 4;
        if ((Flags & 0x1000) != 0)
            iDataSize = GetTotalSizeWithMipMaps(iDataSize);
    } else {
        iPaletteSize = 0;
        iDataSize = 0;
    }
    if (TBF_g_UseTBFWriteCache != 0) {
        TBF_ChangeCacheSize(0x10);
        memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, &Header, 0x10);
        TBF_g_CurrentFileSize += 0x10;
    } else {
        sceWrite(TBF_g_CurrentFile, &Header, 0x10);
    }
    iDataSize += iPaletteSize;
    if (TBF_g_UseTBFWriteCache != 0) {
        TBF_ChangeCacheSize(iDataSize);
        memcpy((char*)TBF_g_CurrentFileBuffer + TBF_g_CurrentFileSize, pTextureData, iDataSize);
        TBF_g_CurrentFileSize += iDataSize;
    } else {
        sceWrite(TBF_g_CurrentFile, pTextureData, iDataSize);
    }
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
void TBF_vClose(void)
{
    int Result;
    Result = -1;
    if (TBF_g_CurrentFile >= 0) {
        if (TBF_g_UseTBFWriteCache != 0 && TBF_g_CurrentFileBuffer != 0) {
            sceWrite(TBF_g_CurrentFile, (void*)TBF_g_CurrentFileBuffer, TBF_g_CurrentFileSize);
            free((void*)TBF_g_CurrentFileBuffer);
            TBF_g_CurrentFileBuffer = 0;
            TBF_g_CurrentFileAllocation = 0;
            TBF_g_CurrentFileSize = 0;
        }
        sceClose(TBF_g_CurrentFile);
        Result = -1;
    }
    TBF_g_CurrentFile = Result;
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
}
