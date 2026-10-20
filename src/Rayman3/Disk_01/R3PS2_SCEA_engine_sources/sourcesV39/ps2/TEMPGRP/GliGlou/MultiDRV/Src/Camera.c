/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Camera.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GLI.h"
#include "r3/MAT.h"
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct J_ParticleSprite_ J_ParticleSprite_;
typedef struct stRECT stRECT;
typedef struct stPOINT stPOINT;
typedef struct GLI_tdstAligned2DVector_ GLI_tdstAligned2DVector_;
typedef struct GLD_tdstDeviceAttributes_ GLD_tdstDeviceAttributes_;

struct J_ParticleSprite_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float FaceNormal[4]; /* +0x20 */
    unsigned int Flags; /* +0x30 */
    unsigned int bFirst; /* +0x34 */
    unsigned int Pad[2]; /* +0x38 */
};

struct stRECT {
    int left; /* +0x0 */
    int top; /* +0x4 */
    int right; /* +0x8 */
    int bottom; /* +0xc */
};

struct stPOINT {
    int x; /* +0x0 */
    int y; /* +0x4 */
};

struct GLI_tdstAligned2DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
    unsigned int ulPackedColor; /* +0xc */
};

struct GLD_tdstDeviceAttributes_ {
    unsigned int dwHeight; /* +0x0 */
    unsigned int dwWidth; /* +0x4 */
    float xPixelDimensionX; /* +0x8 */
    float xPixelDimensionY; /* +0xc */
    int p_cVirtualScreen; /* +0x10 */
    int lPitch; /* +0x14 */
    int p_sZBuffer; /* +0x18 */
    unsigned int dwFullScreenModeX; /* +0x1c */
    unsigned int dwFullScreenModeY; /* +0x20 */
    unsigned int dwFullScreenModeBpp; /* +0x24 */
    int hFullScreenModeWnd; /* +0x28 */
    int hNormalModeWnd; /* +0x2c */
    int bFullScreen; /* +0x30 */
    unsigned int uiTypeDriver; /* +0x34 */
    stPOINT pClientOnPrimary; /* +0x38 */
    stRECT rtClientRect; /* +0x40 */
    stRECT rtWindowRect; /* +0x50 */
};

static GLI_tdstCamera_* p_stCamAntiBug;
int GLI_BIG_GLOBALS_gs_st_CameraMatrix;
float GLI_g_fCurrentCameraxAngle;
char GLI_g_StereoVisionMode;
char g_cSinusEffectState;
float GLI_g_fCurrentCameraRatio;

/* R5900 absolute value: MWCC never emits abs.s from plain C. */
inline float J_M_xAbs(float x)
{
    float r = x;
    asm { abs.s r, r }
    return r;
}

void J_RemoveRedundantSprites(J_ParticleSprite_* pList, unsigned int NbSprites)
{
    unsigned int i;
    unsigned int j;
    int bSame;
    float xEps;

    xEps = 1.0e-7f;
    for (i = 0; i < NbSprites; i++)
    {
        if (pList[i].Flags == 1)
        {
            for (j = i + 1; j < NbSprites; j++)
            {
                if (pList[j].Flags == 1)
                {
                    if (J_M_xAbs(pList[j].Pos[0] - pList[i].Pos[0]) < xEps && J_M_xAbs(pList[j].Pos[1] - pList[i].Pos[1]) < xEps && J_M_xAbs(pList[j].Pos[2] - pList[i].Pos[2]) < xEps) bSame = 1; else bSame = 0; if (bSame)
                    {
                        pList[j].Flags = 2;
                    }
                }
            }
        }
    }
}

void GLI_vReinitViewport();

void GLD_fn_vD3DUpdateViewMatrixFromCamera(GLD_tdstViewportAttributes_* _p_stVpt)
{
    GLI_vReinitViewport(_p_stVpt);
    if (*(GLI_tdstCamera_**)_p_stVpt->p_vSpecificToXD) GLI_g_fCurrentCameraxAngle = 0.75f * (180.0f * (*(GLI_tdstCamera_**)_p_stVpt->p_vSpecificToXD)->xAlphaX) / 3.1415927f;
    GLI_BIG_GLOBALS_gs_st_CameraMatrix = (int)&(*(GLI_tdstCamera_**)_p_stVpt->p_vSpecificToXD)->stMatrix;
}

void GLI_fn_vSetCameraMirrorMode(GLI_tdstCamera_* p_stCam, unsigned char _bMirrorMode)
{
    p_stCam->bCameraIsMirrored = _bMirrorMode;
}

int GLD_bGetViewportAttributes(short hDev, short hVP, GLD_tdstViewportAttributes_* pstViewAttrib);
int GLD_bGetDeviceAttributes(short hDev, GLD_tdstDeviceAttributes_* pstDevAttrib);
void GLI_xAdjustCameraToViewport2(GLD_tdstDeviceAttributes_* p_stDev, GLD_tdstViewportAttributes_* p_stVpt, GLI_tdstCamera_* p_stCam);

void GLI_xGetViewportCamera(short hDevice, short hViewport, GLI_tdstCamera_** p_stCam)
{
    GLD_tdstViewportAttributes_ stViewAttrib;
    if (GLD_bGetViewportAttributes(hDevice, hViewport, &stViewAttrib))
    {
        *p_stCam = *(GLI_tdstCamera_**)stViewAttrib.p_vSpecificToXD;
    }
}

void GLI_xSetViewportCamera(short hDevice, short hViewport, GLI_tdstCamera_* p_stCam)
{
    GLD_tdstViewportAttributes_ stViewAttrib;
    GLD_tdstViewportAttributes_ stViewAttrib2;
    GLD_tdstDeviceAttributes_ stDevAttrib;
    GLI_tdstCamera_* p_stCamUsed;
    GLI_tdstSpecificAttributesFor3D_* p_stSpecific;

    GLI_vReinitViewport();
    if (GLD_bGetViewportAttributes(hDevice, hViewport, &stViewAttrib))
    {
        p_stSpecific = (GLI_tdstSpecificAttributesFor3D_*)stViewAttrib.p_vSpecificToXD;
        if (p_stCam != p_stSpecific->p_stCam)
        {
            p_stSpecific->p_stCam = p_stCam;
            p_stCamUsed = p_stCam; if (GLD_bGetDeviceAttributes(hDevice, &stDevAttrib)) { if (GLD_bGetViewportAttributes(hDevice, hViewport, &stViewAttrib2)) { if (p_stCam == NULL) p_stCamUsed = p_stCamAntiBug; else p_stCamAntiBug = p_stCam; GLI_xAdjustCameraToViewport2(&stDevAttrib, &stViewAttrib2, p_stCamUsed); } }
        }
        if (p_stCam) { GLI_g_fCurrentCameraxAngle = 0.75f * (180.0f * p_stCam->xAlphaX) / 3.1415927f; }
    }
}

void GLI_xSetCameraRatio(GLI_tdstCamera_* p_stCam, float xRatio)
{
    p_stCam->xRatio = xRatio;
    p_stCam->xAlphaY = p_stCam->xAlphaX * xRatio;
}

void GLI_xGetCameraAspectAndRatio(GLI_tdstCamera_* p_stCam, float* p_xAlphaX, float* p_xRatio)
{
    *p_xAlphaX = p_stCam->xAlphaX;
    *p_xRatio = p_stCam->xRatio;
}

void GLI_xSetCameraAspectAndRatio(GLI_tdstCamera_* p_stCam, float xAlphaX, float xRatio)
{
    p_stCam->xAlphaX = xAlphaX;
    p_stCam->xRatio = xRatio;
    p_stCam->xAlphaY = xAlphaX * xRatio;
}

void GLI_xSetCameraMatrix(GLI_tdstCamera_* p_stCam, MAT_tdstTransformation_* p_stMatrix)
{
    p_stCam->stMatrix = *p_stMatrix;

















































    if (GLI_g_StereoVisionMode == 2)
        p_stCam->stMatrix.stTransformMatrix.stCol_3.xX += 0.4f;
}

void GLI_xGetCameraMatrix(GLI_tdstCamera_* p_stCam, MAT_tdstTransformation_* p_stMatrix)
{
    *p_stMatrix = p_stCam->stMatrix;

}

/* MultiVP's target call supplies near in f12 and far in f13; the unused
 * near parameter was omitted by debug extraction. */
#pragma optimize_for_size off
void GLI_xSetCameraNearFar(GLI_tdstCamera_* p_stCam, float xNear, float xFar)
{
    p_stCam->xNear = 0.25f;
    if (xFar == 0.0f)
        p_stCam->xFar = 100000.0f;
    else
        p_stCam->xFar = xFar;
}
#pragma optimize_for_size reset

void GLI_vCopyCamera(GLI_tdstCamera_* p_stCamDest, GLI_tdstCamera_* p_stCamSource)
{
    *p_stCamDest = *p_stCamSource;
}
