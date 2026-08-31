/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _sceDmaTag _sceDmaTag;

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    int next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

unsigned int GLI_g_NumberOfPS2GLMatricesToInterpol;
/* array */ int GLI_g_MatricesToInterpol[1000];
unsigned int GLI_g_bInterpol;
float GLI_g_SDL_pHalfVect[4];
/* array */ int GLI_g_SDL_pNonInterpolatedCameraMatrix[4];
unsigned int GLI_g_NO_INTERPOLATION_FOR_NEXT_FRAME;
/* array */ int GLI_g_PreviousCameraMatrix[4];
/* array */ int GLI_g_SDL_pInterpolatedCameraMatrix[4];
/* array */ int GLI_g_SDL_pInterpolatedCameraMatrixDifference[4];
/* array */ int GLI_g_PreviousCameraMatrixMirror[4];
/* array */ int GLI_g_SDL_pNonInterpolatedCameraMatrixMirror[4];
/* array */ int GLI_g_SDL_pInterpolatedCameraMatrixMirror[4];
float val1;
float val2;
unsigned int GLI_g_MatricesInterpolationTime[2];
unsigned int GLI_gNumberOfMatricesOutSDL;
/* array */ int GLI_g_TheMatricesOutSDL[1000];
char GLI_g_bStoreMatrixOnly;
float g_LeftHandedIdentityMatrix[16];
float GLI_g_NegVect[4];
int PS2GL_g_pInterpol;
unsigned int SCT_g_DrawingMirrored;
int pst_LastUpdatedMatriceToutSDL;
unsigned int GLI_g_FrameNumber;

/* addr: 0x002d7ec0  size: 12 bytes */
void C_SdlRef::__nw(unsigned int Size)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 465–488 */
/* addr: 0x002d7ed0  size: 216 bytes */
void GLI_vFinalUpdateAllNormalMatrix(/* function pointer */ int p)
{
    unsigned int i;
    /* line map: */
    /*   line 465 @ +0x000 */
    /*   line 465 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 468 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 470 @ +0x000 */
    /*   line 474 @ +0x000 */
    /*   line 477 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 429–456 */
/* addr: 0x002d7fb0  size: 260 bytes */
void GLI_vInterpolAllNormalMatrix(/* function pointer */ int p)
{
    /* aggregate */ int pCamMat;
    unsigned int i;
    /* line map: */
    /*   line 429 @ +0x000 */
    /*   line 432 @ +0x000 */
    /*   line 435 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 439 @ +0x000 */
    /*   line 441 @ +0x000 */
    /*   line 445 @ +0x000 */
    /*   line 448 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 388–420 */
/* addr: 0x002d80c0  size: 164 bytes */
void GLI_AddNormalInterpolation(/* array */ int (*) ModelView[4], /* function pointer */ int p)
{
    /* line map: */
    /*   line 388 @ +0x000 */
    /*   line 392 @ +0x000 */
    /*   line 393 @ +0x000 */
    /*   line 396 @ +0x000 */
    /*   line 402 @ +0x000 */
    /*   line 404 @ +0x000 */
    /*   line 406 @ +0x000 */
    /*   line 408 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 359–373 */
/* addr: 0x002d8170  size: 168 bytes */
void GLI_vUpdateAllMatricesOutSDL(/* array */ int (*) pNewMirrorCameraMatrix[4], /* array */ int (*) pNewCameraMatrix[4])
{
    unsigned int i;
    /* line map: */
    /*   line 360 @ +0x000 */
    /*   line 359 @ +0x000 */
    /*   line 362 @ +0x000 */
    /*   line 366 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 370 @ +0x000 */
    /*   line 373 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 343–350 */
/* addr: 0x002d8220  size: 92 bytes */
void GLI_vAddMatriceOutSDL(void)
{
    /* line map: */
    /*   line 343 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 346 @ +0x000 */
    /*   line 350 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 232–262 */
/* addr: 0x002d8280  size: 252 bytes */
void InterpolAndSaveCameraMatrix(unsigned int Mirror)
{
    /* array */ int TempMatrix1[4];
    /* line map: */
    /*   line 232 @ +0x000 */
    /*   line 236 @ +0x000 */
    /*   line 240 @ +0x000 */
    /*   line 248 @ +0x000 */
    /*   line 253 @ +0x000 */
    /*   line 256 @ +0x000 */
    /*   line 262 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 163–218 */
/* addr: 0x002d8380  size: 188 bytes */
void InterpolateMatrixAndStoreWithThreshold(float* pDest, float* pSrc, float* pDest2)
{
    /* line map: */
    /*   line 163 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 169 @ +0x000 */
    /*   line 171 @ +0x000 */
    /*   line 174 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 179 @ +0x000 */
    /*   line 181 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLInterpol.cpp lines 94–147 */
/* addr: 0x002d8440  size: 184 bytes */
int InterpolateMatrixAndTest__FPfPf(float* pDest, float* pSrc)
{
    int Result;
    /* line map: */
    /*   line 94 @ +0x000 */
    /*   line 97 @ +0x000 */
    /*   line 99 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 104 @ +0x000 */
    /*   line 108 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 113 @ +0x000 */
    /* TODO: decompile from asm/... */
}
