/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

typedef struct C_SdlRef C_SdlRef;
struct C_SdlRef {
    static void* __nw(unsigned int Size);
};

extern void* (*PS2glAllocator64)(unsigned int);
extern "C" int printf(const char*, ...);

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
    float (*pCameraMatrix)[4][4]; /* +0xd0 */
} __attribute__((aligned(16)));

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

/* A 4x4 matrix, 16-byte aligned like the retail VU matrices. */
typedef float __attribute__((aligned(16))) tMatrix4x4[4][4];

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

extern "C" void VU1_RE_UpdateMatriceOutsideSDL(tag_stVU1MatriceToutSDL* pstMatriceToutSDL, float (*NewModelView)[4][4]);
extern "C" void VU1ReUpdateMatrice(PS2GL_VU1_InterpolMatrixData_* pInterpolData);
extern "C" void sceVu0InversMatrix(float (*dest)[4], float (*src)[4]);
extern "C" void sceVu0MulMatrix(float (*dest)[4], float (*left)[4], float (*right)[4]);
int InterpolateMatrixAndTest(float* pDest, float* pSrc);

/* VU0 macro-mode matrix copy (lqc2/sqc2 are not emitted by MWCC from C). */
inline void PS2_M_vCopyMatrix(float (*_src)[4][4], float (*_dst)[4][4])
{
    asm {
        lqc2 vf1, 0x0(_src)
        lqc2 vf2, 0x10(_src)
        lqc2 vf3, 0x20(_src)
        lqc2 vf4, 0x30(_src)
        sqc2 vf1, 0x0(_dst)
        sqc2 vf2, 0x10(_dst)
        sqc2 vf3, 0x20(_dst)
        sqc2 vf4, 0x30(_dst)
    }
}

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
PS2GL_VU1_InterpolMatrixData_* PS2GL_g_pInterpol;
unsigned int SCT_g_DrawingMirrored;
tag_stVU1MatriceToutSDL* pst_LastUpdatedMatriceToutSDL;
unsigned int GLI_g_FrameNumber;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 17–17 */
/* addr: 0x002d7ec0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 17
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void* C_SdlRef::__nw(unsigned int Size)
{
    return PS2glAllocator64(Size);
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
extern "C" void GLI_vFinalUpdateAllNormalMatrix(float (*pCameraMatrix)[4][4])
{
    tMatrix4x4* pCamMat[2];
    unsigned int i;
    PS2GL_VU1_InterpolMatrixData_* p;

    pCamMat[0] = (tMatrix4x4*)&GLI_g_SDL_pNonInterpolatedCameraMatrix;
    pCamMat[1] = (tMatrix4x4*)&GLI_g_SDL_pNonInterpolatedCameraMatrixMirror;
    p = GLI_g_MatricesToInterpol;
    for (i = 0; i < GLI_g_NumberOfPS2GLMatricesToInterpol; p++, i++)
    {
        if (p->pstMatriceT)
        {
            if (p->bStore)
            {
                unsigned int w0;
                unsigned int w1;
                int n;
                unsigned int* pDst;
                unsigned int* pSrc;
                n = 8;
                pDst = (unsigned int*)&p->OriginalModelView;
                pSrc = (unsigned int*)g_LeftHandedIdentityMatrix;
                for (n = 8; n > 0; n--)
                {
                    w0 = pSrc[0];
                    w1 = pSrc[1];
                    pDst[1] = w1;
                    pDst[0] = w0;
                    pDst += 2;
                    pSrc += 2;
                }
            }
            else
            {
                p->pCameraMatrix = pCamMat[p->bMirror];
            }
            VU1ReUpdateMatrice(p);
        }
    }
    GLI_g_NumberOfPS2GLMatricesToInterpol = 0;
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
extern "C" void GLI_vInterpolAllNormalMatrix(void)
{
    tMatrix4x4* pCamMat[2];
    unsigned int i;
    PS2GL_VU1_InterpolMatrixData_* p;
    tMatrix4x4* pMat;

    pMat = &GLI_g_SDL_pInterpolatedCameraMatrix;
    if (GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME)
    {
        GLI_vFinalUpdateAllNormalMatrix(pMat);
    }
    else
    {
        pCamMat[0] = &GLI_g_SDL_pInterpolatedCameraMatrix;
        pCamMat[1] = (tMatrix4x4*)&GLI_g_SDL_pInterpolatedCameraMatrixMirror;
        p = GLI_g_MatricesToInterpol;
        for (i = 0; i < GLI_g_NumberOfPS2GLMatricesToInterpol; p++, i++)
        {
            if (p->pstMatriceT)
            {
                if (p->bStore)
                {
                    float* pNeg;
                    float* pDiff;
                    float* pDst;
                    pNeg = (float*)&GLI_g_NegVect[0];
                    pDiff = (float*)&GLI_g_SDL_pInterpolatedCameraMatrixDifference[0][0];
                    pDst = (float*)&p->OriginalModelView[0][0];
                    asm {
                        lqc2 vf5, 0x0(pNeg)
                        lqc2 vf1, 0x0(pDiff)
                        lqc2 vf2, 0x10(pDiff)
                        lqc2 vf3, 0x20(pDiff)
                        lqc2 vf4, 0x30(pDiff)
                        vmul.xyzw vf1, vf1, vf5
                        vmul.xyzw vf2, vf2, vf5
                        vmul.xyzw vf3, vf3, vf5
                        vmul.xyzw vf4, vf4, vf5
                        sqc2 vf1, 0x0(pDst)
                        sqc2 vf2, 0x10(pDst)
                        sqc2 vf3, 0x20(pDst)
                        sqc2 vf4, 0x30(pDst)
                    }
                    p->OriginalModelView[3][3] = 1.0f;
                }
                else
                {
                    p->pCameraMatrix = pCamMat[p->bMirror];
                }
                VU1ReUpdateMatrice(p);
            }
        }
    }
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
extern "C" void GLI_AddNormalInterpolation(float (*ModelView)[4][4])
{
    PS2GL_VU1_InterpolMatrixData_* p;
    float (*pDst)[4][4];

    if (GLI_g_NumberOfPS2GLMatricesToInterpol < 1000)
    {
        p = &GLI_g_MatricesToInterpol[GLI_g_NumberOfPS2GLMatricesToInterpol++];
        p->bStore = GLI_g_bStoreMatrixOnly;
        GLI_g_bStoreMatrixOnly = 0;
        p->bMirror = (unsigned char)SCT_g_DrawingMirrored;
        p->pstMatriceT = 0;
        if (!ModelView)
        {
            p->Compute = 0;
        }
        else
        {
            pDst = &p->OriginalModelView;
            asm {
                lqc2 vf1, 0x0(ModelView)
                lqc2 vf2, 0x10(ModelView)
                lqc2 vf3, 0x20(ModelView)
                lqc2 vf4, 0x30(ModelView)
                sqc2 vf1, 0x0(pDst)
                sqc2 vf2, 0x10(pDst)
                sqc2 vf3, 0x20(pDst)
                sqc2 vf4, 0x30(pDst)
            }
            p->Compute = 1;
        }
        PS2GL_g_pInterpol = p;
    }
    else
    {
        printf("Too Much to interpol\n");
    }
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
extern "C" void GLI_vUpdateAllMatricesOutSDL(void)
{
    unsigned int i;
    float (*pNewCameraMatrix)[4][4];
    float (*pNewMirrorCameraMatrix)[4][4];

    pNewCameraMatrix = &GLI_g_SDL_pNonInterpolatedCameraMatrix;
    pNewMirrorCameraMatrix = &GLI_g_SDL_pNonInterpolatedCameraMatrixMirror;

    for (i = 0; i < GLI_gNumberOfMatricesOutSDL; i++)
    {
        if (GLI_g_TheMatricesOutSDL[i].bDrawingMirrored)
        {
            VU1_RE_UpdateMatriceOutsideSDL(GLI_g_TheMatricesOutSDL[i].p, pNewMirrorCameraMatrix);
        }
        else
        {
            VU1_RE_UpdateMatriceOutsideSDL(GLI_g_TheMatricesOutSDL[i].p, pNewCameraMatrix);
        }
    }
    GLI_gNumberOfMatricesOutSDL = 0;
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
extern "C" void GLI_vAddMatriceOutSDL(void)
{
    if (pst_LastUpdatedMatriceToutSDL)
    {
        if (GLI_gNumberOfMatricesOutSDL < 1000)
        {
            GLI_g_TheMatricesOutSDL[GLI_gNumberOfMatricesOutSDL].bDrawingMirrored = SCT_g_DrawingMirrored;
            GLI_g_TheMatricesOutSDL[GLI_gNumberOfMatricesOutSDL].p = pst_LastUpdatedMatriceToutSDL; GLI_gNumberOfMatricesOutSDL++;
        }
        pst_LastUpdatedMatriceToutSDL = 0;
    }
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
extern "C" void InterpolAndSaveCameraMatrix(unsigned int Mirror)
{
    float TempMatrix1[4][4];

    if (Mirror)
    {
        if (GLI_g_MatricesInterpolationTime[1] != GLI_g_FrameNumber)
        {
            GLI_g_MatricesInterpolationTime[1] = GLI_g_FrameNumber;
            PS2_M_vCopyMatrix(&GLI_g_SDL_pInterpolatedCameraMatrixMirror, &GLI_g_SDL_pNonInterpolatedCameraMatrixMirror);
            if (InterpolateMatrixAndTest((float*)&GLI_g_SDL_pInterpolatedCameraMatrixMirror, (float*)&GLI_g_PreviousCameraMatrixMirror))
            {
                GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME = 1;
            }
        }
    }
    else
    {
        if (GLI_g_MatricesInterpolationTime[0] != GLI_g_FrameNumber)
        {
            GLI_g_MatricesInterpolationTime[0] = GLI_g_FrameNumber;
            PS2_M_vCopyMatrix(&GLI_g_SDL_pInterpolatedCameraMatrix, &GLI_g_SDL_pNonInterpolatedCameraMatrix);
            if (InterpolateMatrixAndTest((float*)&GLI_g_SDL_pInterpolatedCameraMatrix, (float*)&GLI_g_PreviousCameraMatrix))
            {
                GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME = 1;
            }
            sceVu0InversMatrix(TempMatrix1, GLI_g_SDL_pInterpolatedCameraMatrix);
            sceVu0MulMatrix(GLI_g_SDL_pInterpolatedCameraMatrixDifference, TempMatrix1, GLI_g_SDL_pNonInterpolatedCameraMatrix);
        }
    }
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
/* The retail body needs VU vector arithmetic (vsub.xyzw, vmul.xyz, vaddy.x,
 * vaddz.x, vmove.xyzw, vmulx.xyzw) which MWCC cannot emit from C at all, so the
 * VU sequence is written as an inline asm block. */
extern "C" void InterpolateMatrixAndStoreWithThreshold(float* pDest, float* pSrc, float* pDest2)
{
    float fLimit = 500.0f;
    float* pHalf = GLI_g_SDL_pHalfVect;

    asm {
        lqc2 vf9, 0x30(pSrc)
        lqc2 vf5, 0x30(pDest)
        vsub.xyzw vf10, vf9, vf5
        vmul.xyz vf11, vf10, vf10
        vaddy.x vf11, vf11, vf11y
        vaddz.x vf11, vf11, vf11z
        qmfc2.ni v0, vf11
        mtc1 v0, $f1
        c.le.s $f1, fLimit
        lqc2 vf1, 0x0(pHalf)
        bc1t LInterpolate
        lqc2 vf2, 0x0(pDest)
        lqc2 vf2, 0x0(pSrc)
        lqc2 vf3, 0x10(pSrc)
        lqc2 vf4, 0x20(pSrc)
        vmove.xyzw vf5, vf9
        vmove.xyzw vf6, vf2
        vmove.xyzw vf7, vf3
        b LStore
        lqc2 vf8, 0x20(pSrc)
    LInterpolate:
        lqc2 vf3, 0x10(pDest)
        lqc2 vf4, 0x20(pDest)
        lqc2 vf6, 0x0(pSrc)
        lqc2 vf7, 0x10(pSrc)
        lqc2 vf8, 0x20(pSrc)
        vadd.xyzw vf2, vf2, vf6
        vadd.xyzw vf3, vf3, vf7
        vadd.xyzw vf4, vf4, vf8
        vadd.xyzw vf5, vf5, vf9
        vmulx.xyzw vf2, vf2, vf1x
        vmulx.xyzw vf3, vf3, vf1x
        vmulx.xyzw vf4, vf4, vf1x
        vmulx.xyzw vf5, vf5, vf1x
    LStore:
        sqc2 vf2, 0x0(pDest)
        sqc2 vf3, 0x10(pDest)
        sqc2 vf4, 0x20(pDest)
        sqc2 vf5, 0x30(pDest)
        sqc2 vf6, 0x0(pDest2)
        sqc2 vf7, 0x10(pDest2)
        sqc2 vf8, 0x20(pDest2)
        sqc2 vf9, 0x30(pDest2)
    }
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
/* The retail body is flagged as hand-written assembly (one debug line per
 * instruction and a hand-written "add v0,zero,zero" that MWCC would spell
 * "move v0,zero"), and the VU vector ops (vsub/vabs/vmax/vmulx .xyzw) have no
 * C form, so the VU sequence is written as inline asm blocks. */
int InterpolateMatrixAndTest(float* pDest, float* pSrc)
{
    float fLimit = 0.3f;
    float* pHalf = GLI_g_SDL_pHalfVect;
    float fDist;
    int Result;

    asm {
        lqc2 vf1, 0x0(pHalf)
        lqc2 vf2, 0x0(pDest)
        lqc2 vf3, 0x10(pDest)
        lqc2 vf4, 0x20(pDest)
        lqc2 vf5, 0x30(pDest)
        lqc2 vf6, 0x0(pSrc)
        lqc2 vf7, 0x10(pSrc)
        lqc2 vf8, 0x20(pSrc)
        lqc2 vf9, 0x30(pSrc)
        vsub.xyzw vf10, vf6, vf2
        vsub.xyzw vf11, vf7, vf3
        vsub.xyzw vf12, vf8, vf4
        vabs.xyzw vf10, vf10
        vabs.xyzw vf11, vf11
        vabs.xyzw vf12, vf12
        vmax.xyzw vf10, vf10, vf11
        vmax.xyzw vf10, vf10, vf12
        vmaxz.x vf10, vf10, vf10z
        vmaxy.x vf10, vf10, vf10y
        qmfc2.ni v0, vf10
        mtc1 v0, fDist
    }
    Result = 0;
    if (fDist > fLimit)
    {
        Result = 1;
    }
    asm {
        vadd.xyzw vf2, vf2, vf6
        vadd.xyzw vf3, vf3, vf7
        vadd.xyzw vf4, vf4, vf8
        vadd.xyzw vf5, vf5, vf9
        vmulx.xyzw vf2, vf2, vf1x
        vmulx.xyzw vf3, vf3, vf1x
        vmulx.xyzw vf4, vf4, vf1x
        vmulx.xyzw vf5, vf5, vf1x
        sqc2 vf2, 0x0(pDest)
        sqc2 vf3, 0x10(pDest)
        sqc2 vf4, 0x20(pDest)
        sqc2 vf5, 0x30(pDest)
    }
    return Result;
}
