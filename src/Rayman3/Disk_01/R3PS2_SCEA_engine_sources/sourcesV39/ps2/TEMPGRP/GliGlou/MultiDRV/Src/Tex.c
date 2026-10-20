/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\Tex.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/MTH.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstAligned2DVector_ GLI_tdstAligned2DVector_;
typedef struct GLI_tdstCamera_ GLI_tdstCamera_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tdstGliCaps_ tdstGliCaps_;

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct tdstGliCaps_ {
    unsigned int ulSize; /* +0x0 */
    unsigned int ulDriverCaps; /* +0x4 */
    unsigned int ulTextureCaps; /* +0x8 */
    unsigned int ulSurfaceCaps; /* +0xc */
    unsigned int ulMemoryCaps; /* +0x10 */
    unsigned int ulTextureMaxSize; /* +0x14 */
    unsigned int ulTotalTextureMemory; /* +0x18 */
    unsigned int ulTotalVideoMemory; /* +0x1c */
    unsigned int ulTotalAGPMemory; /* +0x20 */
    unsigned int ulTexturePerChannelMemory[4]; /* +0x24 */
    unsigned char ucPrimarySurfacePixelFormat; /* +0x34 */
    float fRefreshRate; /* +0x38 */
};

int g_lTextureMode;
GLI_tdstTexture_ gst_Texture;
unsigned int GLI_g_ExternalTextureHeader;
unsigned char GLI_g_GlobalBpp;
unsigned char GLI_g_GlobalPalette[1024];
int GLI_gs_lConvertBufferMipMappingSizeInBytes;
int GLI_gs_p_ConvertBufferMipMapping;
unsigned int GLI_gsCurrentMemoryChannel;
char g_sLanguage[255];
unsigned int GLI_g_ulNumberOfLoadedTexture;
int gs_aDEFTableOfTextureAlreadyRead;
int gs_aDEFTableOfTextureMemoryChannels;
tdstGliCaps_ GLI_g_stCaps;
int gs_lNumberOfTextureToCreate;
unsigned char g_ucGEOModuleId;

struct GLI_tdstAligned2DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
    unsigned int ulPackedColor; /* +0xc */
};

typedef struct GLI_tdst2DVertex_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xOoZ; /* +0x8 */
} GLI_tdst2DVertex_;

struct GLI_tdstCamera_ {
    int lCameraMode; /* +0x0 */
    unsigned char _padding_04[0x6c]; /* +0x4..0x6f (stMatrix etc.) */
    float xAlphaX; /* +0x70 */
    float xAlphaY; /* +0x74 */
    float xNear; /* +0x78 */
    float xFar; /* +0x7c */
    float xScreen; /* +0x80 */
    GLI_tdst2DVertex_ stScale; /* +0x84 */
    GLI_tdst2DVertex_ stTrans; /* +0x90 */
};

void GLI_xSerialProjection(GLI_tdstCamera_* p_stCam, int lNbOfVertex, MTH4D_tdstVector_* p_stSource, GLI_tdstAligned2DVector_* p_stDest)
{
    GLI_tdstAligned2DVector_* p_stDestLast = p_stDest + lNbOfVertex;
    volatile int lNewX = 0x45FA0000;
    int lVertexIndex;
    float xInterm;

    switch (p_stCam->lCameraMode)
    {
    case 0x66:
    case 0x67:
        for (; p_stDest < p_stDestLast; p_stDest++, p_stSource++)
        {
            if (*(int*)&p_stSource->xZ < *(int*)&p_stCam->xNear)
            {
                *(unsigned int*)&p_stDest->xOoZ |= 0x80000000;
                *(unsigned int*)&p_stDest->xX = lNewX | ((*(unsigned int*)&p_stSource->xX & 0x80000000) ^ 0x80000000);
                *(unsigned int*)&p_stDest->xY = lNewX | ((*(unsigned int*)&p_stSource->xY & 0x80000000) ^ 0x80000000);
            }
            else
            {
                p_stDest->xOoZ = 1.0f / p_stSource->xZ;
                xInterm = p_stCam->xScreen * p_stDest->xOoZ;
                p_stDest->xOoZ *= 0.25f;
                p_stDest->xX = p_stCam->stTrans.xX + xInterm * (p_stSource->xX * p_stCam->stScale.xX);
                p_stDest->xY = p_stCam->stTrans.xY + xInterm * (p_stSource->xY * p_stCam->stScale.xY);
            }
        }
        break;
    case 0x64:
    case 0x65:
        for (lVertexIndex = 0; lVertexIndex < lNbOfVertex; lVertexIndex++)
        {
            if (!(p_stSource[lVertexIndex].xZ < p_stCam->xNear))
            {
                p_stDest[lVertexIndex].xOoZ = 1.0f;
                p_stDest[lVertexIndex].xX = p_stCam->stTrans.xX + p_stCam->stScale.xX * p_stSource[lVertexIndex].xX;
                p_stDest[lVertexIndex].xY = p_stCam->stTrans.xY + p_stCam->stScale.xY * p_stSource[lVertexIndex].xY;
            } }
        break;
    }
}

void GLI_DRV_vUnLoadTextures(void);
void GLI_vUnCompressExistantTexture(void);
void GLI_vRealyComputeLod(GLI_tdstTexture_* p_stTexture);
int GLI_lGetBigestSizeOfTexture(void);
/* Called with three arguments here; the driver definition's debug record
 * drops its unreferenced parameters. */
void GLI_DRV_vDownLoadTextures(int bRestore, int lTextureMode, int bReloading);
void* HMU_fn_p_vMalloc(unsigned int u32Size, unsigned char bTempMalloc);
void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);

void GLI_vComputeTextures(void)
{
    int i;

    GLI_DRV_vUnLoadTextures();
    GLI_vUnCompressExistantTexture();
    for (i = 0; i < 400; i++)
    {
        if (((int*)gs_aDEFTableOfTextureMemoryChannels)[i] != 0xC0DE0005 && ((GLI_tdstTexture_**)gs_aDEFTableOfTextureAlreadyRead)[i]->lNumberOfLod)
            GLI_vRealyComputeLod(((GLI_tdstTexture_**)gs_aDEFTableOfTextureAlreadyRead)[i]);
    }
    GLI_gs_lConvertBufferMipMappingSizeInBytes = GLI_lGetBigestSizeOfTexture();
    if (GLI_gs_lConvertBufferMipMappingSizeInBytes)
        GLI_gs_p_ConvertBufferMipMapping = (int)HMU_fn_p_vMalloc(GLI_gs_lConvertBufferMipMappingSizeInBytes, 1);
    GLI_g_ulNumberOfLoadedTexture = 0;
    GLI_DRV_vDownLoadTextures(0, g_lTextureMode, 0);
    if (GLI_gs_lConvertBufferMipMappingSizeInBytes)
        HMU_fn_vFree((void**)&GLI_gs_p_ConvertBufferMipMapping, 1);
}

int GLI_lGetLog2n(int ln);

void GLI_vRealyComputeLod(GLI_tdstTexture_* p_stTexture)
{
    if (p_stTexture->lHeight <= 1 || p_stTexture->lWidth <= 1)
        return;

    if (GLI_lGetLog2n(p_stTexture->lHeight) < GLI_lGetLog2n(p_stTexture->lWidth))
        p_stTexture->lNumberOfLod = GLI_lGetLog2n(p_stTexture->lHeight) + 1;
    else
        p_stTexture->lNumberOfLod = GLI_lGetLog2n(p_stTexture->lWidth) + 1;
}

void GLI_fn_vCloseBigFileTextures(void)
{
}

void GLI_fn_vOpenBigFileTextures(void)
{
}

void GLI_vIniTextRead(void)
{
    GLI_fn_vUnallocAllTextures();
    gs_lNumberOfTextureToCreate = 0;
}

int GLI_lGetLog2n(int ln)
{
    return ln > 0x2000 ? 13 :
           ln > 0x1000 ? 12 :
           ln > 0x800 ? 11 :
           ln > 0x400 ? 10 :
           ln > 0x200 ? 9 :
           ln > 0x100 ? 8 :
           ln > 0x80 ? 7 :
           ln > 0x40 ? 6 :
           ln > 0x20 ? 5 :
           ln > 0x10 ? 4 :
           ln > 8 ? 3 :
           ln > 4 ? 2 :
           ln > 2;
}

void GLI_vUnloadTexturePartial(unsigned char ucChannel);
void GLI_fn_vUnallocTextureInChannel(unsigned char _ucChannel);

void GLI_TEX_vKillMemoryChannel(unsigned char ucCurrentChannel)
{
    GLI_vUnloadTexturePartial(ucCurrentChannel);
    GLI_fn_vUnallocTextureInChannel(ucCurrentChannel);
}
