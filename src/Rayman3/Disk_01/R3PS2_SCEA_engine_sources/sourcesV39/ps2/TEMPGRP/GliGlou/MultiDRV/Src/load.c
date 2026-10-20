/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\load.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstAligned3DVector_ GLI_tdstAligned3DVector_;
typedef struct MAT_tdstTransformation_ MAT_tdstTransformation_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct GLI_tdstTexturePS2GL_ GLI_tdstTexturePS2GL_;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_1 anon_1;
typedef struct anon_0 anon_0;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;

struct MTH3D_tdstVector_ {
    float xX;
    float xY;
    float xZ;
};

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

struct GLI_tdstTexturePS2GL_ {
    unsigned int TextureID; /* +0x0 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_1 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_0 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_1 st_UVStaticPos; /* +0xc */
    anon_1 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_0 a_stMultiMaterial[4]; /* +0x88 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

int GLI_g_pArrayOfVisualMaterial;
unsigned int GLI_g_ulNumberOfVisualMaterials;
char szTexturePath[256];
int GLI_g_StaticCopyOfArrayOfVisualMaterial[256];

typedef struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16))) MTH4D_tdstVector_;

typedef struct MTH4D_tdstMatrix_ {
    MTH4D_tdstVector_ stCol_0; /* +0x0 */
    MTH4D_tdstVector_ stCol_1; /* +0x10 */
    MTH4D_tdstVector_ stCol_2; /* +0x20 */
    MTH4D_tdstVector_ stCol_3; /* +0x30 */
} MTH4D_tdstMatrix_;

struct MAT_tdstTransformation_ {
    int eType; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* +0x4..0xf */
    MTH4D_tdstMatrix_ stTransformMatrix; /* +0x10 */
    MTH4D_tdstVector_ stScaleVector; /* +0x50 */
};

struct GLI_tdstAligned3DVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
};

/* R5900 accumulator dot product (no C form under the baseline). */
inline float MTH3D_M_xDotProduct(float _xAX, float _xBX, float _xAY, float _xBY, float _xAZ, float _xBZ)
{
    float _xResult;
    asm { mula.s _xAX, _xBX }
    asm { madda.s _xAY, _xBY }
    asm { madd.s _xResult, _xAZ, _xBZ }
    return _xResult;
}

/* A 16-byte vector with a word view: the retail copies the matrix columns
 * with integer loads and stores, and keeps the local at a 16-byte stride. */
typedef union {
    MTH4D_tdstVector_ v;
    int i[4];
} GLI_UV4;

void GLI_xSerialLinearOp(int lNbOfVertex, MTH3D_tdstVector_* p_stSource, GLI_tdstAligned3DVector_* p_stDest, MAT_tdstTransformation_* p_stMatrix)
{
    GLI_UV4 stX;
    GLI_UV4 stY;
    GLI_UV4 stZ;
    GLI_UV4 stTrans;
    GLI_tdstAligned3DVector_* param0;
    float fSwapValue;

    param0 = p_stDest + lNbOfVertex;
    stX.i[0] = *(int*)&p_stMatrix->stTransformMatrix.stCol_0.xX; stX.i[1] = *(int*)&p_stMatrix->stTransformMatrix.stCol_0.xY; stX.i[2] = *(int*)&p_stMatrix->stTransformMatrix.stCol_0.xZ; stY.i[0] = *(int*)&p_stMatrix->stTransformMatrix.stCol_1.xX; stY.i[1] = *(int*)&p_stMatrix->stTransformMatrix.stCol_1.xY; stY.i[2] = *(int*)&p_stMatrix->stTransformMatrix.stCol_1.xZ; stZ.i[0] = *(int*)&p_stMatrix->stTransformMatrix.stCol_2.xX; stZ.i[1] = *(int*)&p_stMatrix->stTransformMatrix.stCol_2.xY; stZ.i[2] = *(int*)&p_stMatrix->stTransformMatrix.stCol_2.xZ;
    fSwapValue = stX.v.xY; stX.v.xY = stY.v.xX; stY.v.xX = fSwapValue;
    fSwapValue = stX.v.xZ; stX.v.xZ = stZ.v.xX; stZ.v.xX = fSwapValue;
    fSwapValue = stY.v.xZ; stY.v.xZ = stZ.v.xY; stZ.v.xY = fSwapValue;
    stTrans.i[0] = *(int*)&p_stMatrix->stTransformMatrix.stCol_3.xX; stTrans.i[1] = *(int*)&p_stMatrix->stTransformMatrix.stCol_3.xY; stTrans.i[2] = *(int*)&p_stMatrix->stTransformMatrix.stCol_3.xZ;
    for (; p_stDest < param0; p_stDest++, p_stSource++)
    {
        p_stDest->xX = stTrans.v.xX + MTH3D_M_xDotProduct(stX.v.xX, p_stSource->xX, stX.v.xY, p_stSource->xY, stX.v.xZ, p_stSource->xZ);
        p_stDest->xY = stTrans.v.xY + MTH3D_M_xDotProduct(stY.v.xX, p_stSource->xX, stY.v.xY, p_stSource->xY, stY.v.xZ, p_stSource->xZ);
        p_stDest->xZ = stTrans.v.xZ + MTH3D_M_xDotProduct(stZ.v.xX, p_stSource->xX, stZ.v.xY, p_stSource->xY, stZ.v.xZ, p_stSource->xZ);
    }
}

int GLI_Precalc_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial);
void GLI_vAssignOptimizedFunctionToMaterial(GLI_tdstMaterial_* hVisualMaterial);

void GLI_fnvPrecalculateStuffForAllMaterials(void)
{
    unsigned int i;
    GLI_tdstMaterial_* pMat;
    int bOk;

    for (i = 0; i < GLI_g_ulNumberOfVisualMaterials; i++)
    {
        pMat = (GLI_tdstMaterial_*)GLI_g_StaticCopyOfArrayOfVisualMaterial[i];
        if (pMat)
        {
            pMat->lMaterialAdditionnalType = 0;
            if (GLI_Precalc_IsMaterialTransparent(pMat))
            {
                pMat->lMaterialAdditionnalType |= 1;
            }
            if (pMat && pMat->p_stTexture && (pMat->uiFlags & 4)) bOk = 1; else bOk = 0; if (bOk)
            {
                pMat->lMaterialAdditionnalType |= 2;
            }
            if (pMat && pMat->p_stTexture && (pMat->uiFlags & 8)) bOk = 1; else bOk = 0; if (bOk)
            {
                pMat->lMaterialAdditionnalType |= 4;
            }
            if (pMat && pMat->p_stTexture && strstr(pMat->p_stTexture->a255_cFileName, "SHADOWLOD")) bOk = 1; else bOk = 0; if (bOk)
            {
                pMat->lMaterialAdditionnalType |= 8;
            }
            if (pMat && pMat->p_stTexture && strstr(pMat->p_stTexture->a255_cFileName, "EVILSHADOW")) bOk = 1; else bOk = 0; if (bOk)
            {
                pMat->lMaterialAdditionnalType |= 0x10;
            }
            GLI_vAssignOptimizedFunctionToMaterial(pMat);
        }
    }
}

int GLI_Precalc_IsMaterialTransparent(GLI_tdstMaterial_* hVisualMaterial)
{
    anon_0* pMat;
    GLI_tdstTexturePS2GL_* p_stSpecParam;
    int ReturnValue;

    ReturnValue = 0;
    if (hVisualMaterial)
    {
        if (hVisualMaterial->ulNbTextureStages)
        {
            pMat = hVisualMaterial->a_stMultiMaterial;
            if (pMat)
            {
                if (pMat->c_Operator != 2 && pMat->c_Operator != 6 && pMat->c_Operator != 8)
                    ReturnValue = 1;
            }
        }
        else if (hVisualMaterial->p_stTexture && (p_stSpecParam = (GLI_tdstTexturePS2GL_*)hVisualMaterial->p_stTexture->p_stSpecParam))
        {
            if (p_stSpecParam->TextureID)
            {
                pMat = hVisualMaterial->a_stMultiMaterial;
                if (pMat)
                {
                    if ((hVisualMaterial->p_stTexture->lTextureCaps & 2) == 2 || (hVisualMaterial->p_stTexture->lTextureCaps & 0x100) == 0x100 || (hVisualMaterial->a_stMultiMaterial[0].ulTextureProperties & 0x40))
                        ReturnValue = 0;
                    else if ((hVisualMaterial->p_stTexture->lTextureCaps & 8) == 8 || (hVisualMaterial->p_stTexture->lTextureCaps & 0x20) == 0x20)
                        ReturnValue = 1;
                    else if (hVisualMaterial->a_stMultiMaterial[0].ulTextureProperties & 0x20)
                        ReturnValue = 1;
                }
            }
        }
    }
    return ReturnValue;
}
