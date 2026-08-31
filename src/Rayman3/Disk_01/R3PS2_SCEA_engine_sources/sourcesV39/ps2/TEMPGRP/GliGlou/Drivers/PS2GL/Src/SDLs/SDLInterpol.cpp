/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct PS2GL_VU1_InterpolMatrixData_ PS2GL_VU1_InterpolMatrixData_;
typedef struct tag_stVU1MatriceT tag_stVU1MatriceT;
typedef struct tdstMatrixesOutSDLRemember_ tdstMatrixesOutSDLRemember_;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tag_stVU1MatriceToutSDL tag_stVU1MatriceToutSDL;

struct PS2GL_VU1_InterpolMatrixData_ {
    tag_stVU1MatriceT* pstMatriceT; /* +0x0 */
    unsigned int Mode; /* +0x4 */
    int Compute; /* +0x8 */
    char bMirror; /* +0xc */
    char bStore; /* +0xd */
    float OriginalModelView[4][4]; /* +0x10 */
    float ProjectionMatrix[4][4]; /* +0x50 */
    float GuardBandProjectionMatrix[4][4]; /* +0x90 */
    float (*) pCameraMatrix[4][4]; /* +0xd0 */
};

struct tag_stVU1MatriceT {
    int ivUnpackCode[4]; /* +0x0 */
    float mClipping[4][4]; /* +0x10 */
    float mNormal[4][4]; /* +0x50 */
    float mClippingScreen[4][4]; /* +0x90 */
    int ivUnpackCode2[4]; /* +0xd0 */
    float mLocalScreen[4][4]; /* +0xe0 */
    float mModelView[4][4]; /* +0x120 */
    int ivUnpackCode3[4]; /* +0x160 */
    float mGuardBandClipping[4][4]; /* +0x170 */
    float mGuardBandClippingScreen[4][4]; /* +0x1b0 */
};

struct tdstMatrixesOutSDLRemember_ {
    tag_stVU1MatriceToutSDL* p; /* +0x0 */
    unsigned int bDrawingMirrored; /* +0x4 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct tag_stVU1MatriceToutSDL {
    _sceDmaTag tagDMA; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float mClippingScreen[4][4]; /* +0x20 */
    int ivUnpackCode2[4]; /* +0x60 */
    float mProjection[4][4]; /* +0x70 */
    float mWorldView[4][4]; /* +0xb0 */
    float mGuardBandProjection[4][4]; /* +0xf0 */
    float mGuardBandClipping[4][4]; /* +0x130 */
    float mGuardBandClippingScreen[4][4]; /* +0x170 */
};

unsigned int GLI_g_NumberOfPS2GLMatricesToInterpol;
PS2GL_VU1_InterpolMatrixData_ GLI_g_MatricesToInterpol[1000];
unsigned int GLI_g_bInterpol;
float GLI_g_SDL_pHalfVect[4];
float GLI_g_SDL_pNonInterpolatedCameraMatrix[4][4];
unsigned int GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME;
float GLI_g_PreviousCameraMatrix[4][4];
float GLI_g_SDL_pInterpolatedCameraMatrix[4][4];
float GLI_g_SDL_pInterpolatedCameraMatrixDifference[4][4];
float GLI_g_PreviousCameraMatrixMirror[4][4];
float GLI_g_SDL_pNonInterpolatedCameraMatrixMirror[4][4];
float GLI_g_SDL_pInterpolatedCameraMatrixMirror[4][4];
float val1;
float val2;
unsigned int GLI_g_MatricesInterpolationTime[2];
unsigned int GLI_gNumberOfMatricesOutSDL;
tdstMatrixesOutSDLRemember_ GLI_g_TheMatricesOutSDL[1000];
char GLI_g_bStoreMatrixOnly;
float g_LeftHandedIdentityMatrix[16];
float GLI_g_NegVect[4];
int PS2GL_g_pInterpol;
unsigned int SCT_g_DrawingMirrored;
int pst_LastUpdatedMatriceToutSDL;
unsigned int GLI_g_FrameNumber;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 17–17 */
/* addr: 0x002d7ec0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 17
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void C_SdlRef::__nw(unsigned int Size)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 460–488 */
/* addr: 0x002d7ed0  size: 216 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 460
 *   +0x0004 -> line 465
 *   +0x0008 -> line 460
 *   +0x000c -> line 465
 *   +0x0010 -> line 460
 *   +0x0018 -> line 468
 *   +0x001c -> line 465
 *   +0x0020 -> line 468
 *   +0x0024 -> line 466
 *   +0x0028 -> line 470
 *   +0x002c -> line 466
 *   +0x0030 -> line 470
 *   +0x0038 -> line 472
 *   +0x0044 -> line 474
 *   +0x0050 -> line 476
 *   +0x0080 -> line 477
 *   +0x0088 -> line 480
 *   +0x00a0 -> line 482
 *   +0x00a8 -> line 484
 *   +0x00ac -> line 485
 *   +0x00c0 -> line 487
 *   +0x00c4 -> line 488
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vFinalUpdateAllNormalMatrix(void)
{
    int pCamMat[2];
    PS2GL_VU1_InterpolMatrixData_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 424–457 */
/* addr: 0x002d7fb0  size: 260 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 424
 *   +0x0010 -> line 429
 *   +0x001c -> line 431
 *   +0x0024 -> line 432
 *   +0x002c -> line 436
 *   +0x0030 -> line 435
 *   +0x0034 -> line 436
 *   +0x0038 -> line 439
 *   +0x003c -> line 435
 *   +0x0040 -> line 439
 *   +0x0044 -> line 436
 *   +0x0048 -> line 441
 *   +0x0050 -> line 443
 *   +0x005c -> line 445
 *   +0x0068 -> line 447
 *   +0x00b0 -> line 448
 *   +0x00b8 -> line 451
 *   +0x00d0 -> line 453
 *   +0x00d8 -> line 455
 *   +0x00dc -> line 456
 *   +0x00f0 -> line 457
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInterpolAllNormalMatrix(void)
{
    int pCamMat[2];
    PS2GL_VU1_InterpolMatrixData_* p;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 385–420 */
/* addr: 0x002d80c0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 385
 *   +0x0008 -> line 388
 *   +0x0018 -> line 390
 *   +0x0034 -> line 392
 *   +0x003c -> line 394
 *   +0x0040 -> line 393
 *   +0x0044 -> line 394
 *   +0x0048 -> line 396
 *   +0x0050 -> line 399
 *   +0x0058 -> line 402
 *   +0x005c -> line 403
 *   +0x0060 -> line 404
 *   +0x0064 -> line 405
 *   +0x0068 -> line 406
 *   +0x006c -> line 407
 *   +0x0070 -> line 408
 *   +0x0074 -> line 409
 *   +0x0078 -> line 410
 *   +0x007c -> line 412
 *   +0x0084 -> line 415
 *   +0x008c -> line 418
 *   +0x0098 -> line 420
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_AddNormalInterpolation(float (*) ModelView[4][4])
{
    PS2GL_VU1_InterpolMatrixData_* p;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 353–374 */
/* addr: 0x002d8170  size: 168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 353
 *   +0x0018 -> line 360
 *   +0x001c -> line 353
 *   +0x0020 -> line 359
 *   +0x0028 -> line 360
 *   +0x002c -> line 362
 *   +0x0034 -> line 364
 *   +0x004c -> line 366
 *   +0x0058 -> line 367
 *   +0x0060 -> line 370
 *   +0x006c -> line 371
 *   +0x0070 -> line 370
 *   +0x0074 -> line 372
 *   +0x0088 -> line 373
 *   +0x008c -> line 374
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vUpdateAllMatricesOutSDL(void)
{
    float (*) pNewMirrorCameraMatrix[4][4];
    float (*) pNewCameraMatrix[4][4];
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 341–350 */
/* addr: 0x002d8220  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 341
 *   +0x000c -> line 343
 *   +0x001c -> line 345
 *   +0x0028 -> line 346
 *   +0x002c -> line 345
 *   +0x0030 -> line 346
 *   +0x0034 -> line 345
 *   +0x0038 -> line 346
 *   +0x003c -> line 345
 *   +0x0040 -> line 346
 *   +0x0050 -> line 348
 *   +0x0054 -> line 350
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vAddMatriceOutSDL(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 231–265 */
/* addr: 0x002d8280  size: 252 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 231
 *   +0x0004 -> line 232
 *   +0x000c -> line 234
 *   +0x001c -> line 236
 *   +0x0020 -> line 238
 *   +0x0050 -> line 240
 *   +0x0064 -> line 245
 *   +0x006c -> line 248
 *   +0x007c -> line 252
 *   +0x0080 -> line 253
 *   +0x00b0 -> line 254
 *   +0x00c4 -> line 256
 *   +0x00cc -> line 261
 *   +0x00d8 -> line 262
 *   +0x00f0 -> line 265
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InterpolAndSaveCameraMatrix(unsigned int Mirror)
{
    float TempMatrix1[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 161–226 */
/* addr: 0x002d8380  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 161
 *   +0x0010 -> line 163
 *   +0x0014 -> line 164
 *   +0x0018 -> line 167
 *   +0x001c -> line 168
 *   +0x0020 -> line 169
 *   +0x0024 -> line 170
 *   +0x0028 -> line 171
 *   +0x002c -> line 172
 *   +0x0030 -> line 174
 *   +0x0034 -> line 175
 *   +0x0038 -> line 176
 *   +0x003c -> line 177
 *   +0x0040 -> line 179
 *   +0x0044 -> line 180
 *   +0x0048 -> line 181
 *   +0x004c -> line 182
 *   +0x0050 -> line 184
 *   +0x0054 -> line 185
 *   +0x0058 -> line 186
 *   +0x005c -> line 187
 *   +0x0060 -> line 190
 *   +0x0064 -> line 191
 *   +0x0068 -> line 194
 *   +0x006c -> line 195
 *   +0x0070 -> line 196
 *   +0x0074 -> line 199
 *   +0x0078 -> line 200
 *   +0x007c -> line 201
 *   +0x0080 -> line 202
 *   +0x0084 -> line 204
 *   +0x0088 -> line 205
 *   +0x008c -> line 206
 *   +0x0090 -> line 207
 *   +0x0094 -> line 210
 *   +0x0098 -> line 211
 *   +0x009c -> line 212
 *   +0x00a0 -> line 213
 *   +0x00a4 -> line 215
 *   +0x00a8 -> line 216
 *   +0x00ac -> line 217
 *   +0x00b0 -> line 218
 *   +0x00b4 -> line 226
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InterpolateMatrixAndStoreWithThreshold(float* pDest, float* pSrc, float* pDest2)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 91–156 */
/* addr: 0x002d8440  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 91
 *   +0x0014 -> line 94
 *   +0x0018 -> line 96
 *   +0x001c -> line 97
 *   +0x0020 -> line 98
 *   +0x0024 -> line 99
 *   +0x0028 -> line 101
 *   +0x002c -> line 102
 *   +0x0030 -> line 103
 *   +0x0034 -> line 104
 *   +0x0038 -> line 107
 *   +0x003c -> line 108
 *   +0x0040 -> line 109
 *   +0x0044 -> line 111
 *   +0x0048 -> line 112
 *   +0x004c -> line 113
 *   +0x0050 -> line 114
 *   +0x0054 -> line 115
 *   +0x0058 -> line 116
 *   +0x005c -> line 117
 *   +0x0060 -> line 119
 *   +0x0064 -> line 120
 *   +0x0068 -> line 122
 *   +0x006c -> line 124
 *   +0x0070 -> line 125
 *   +0x0074 -> line 126
 *   +0x0078 -> line 127
 *   +0x007c -> line 129
 *   +0x0080 -> line 134
 *   +0x0084 -> line 135
 *   +0x0088 -> line 136
 *   +0x008c -> line 137
 *   +0x0090 -> line 139
 *   +0x0094 -> line 140
 *   +0x0098 -> line 141
 *   +0x009c -> line 142
 *   +0x00a0 -> line 144
 *   +0x00a4 -> line 145
 *   +0x00a8 -> line 146
 *   +0x00ac -> line 147
 *   +0x00b0 -> line 156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int InterpolateMatrixAndTest__FPfPf(float* pDest, float* pSrc)
{
    int Result;
    /* TODO: decompile from asm/... */
}
