/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLAccess.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/HIE.h"

extern "C" int printf(const char*, ...);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef union unFunction unFunction;
typedef struct C_SdlRef C_SdlRef;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct C_Sdl C_Sdl;
typedef struct sceGifTag sceGifTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagListData tagListData;

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
    /* vtable pointer at +0x10 (retail __vt__8C_SdlRef). */
    C_SdlRef(void* pOrigin, unsigned int uIndex)
    {
        m_uIndexInList = uIndex;
        m_uRefType = 0;
        m_vpOriginPointer = (int)pOrigin;
        m_vpDestinationPointer = 0;
    }
    virtual void Process(void);
    virtual void ProcessWithInterpol(void);
    virtual void ProcessNoInterpol(void);
    static void* operator new(unsigned int uSize);
};

struct C_SdlRef_LocalMatrix : C_SdlRef {
    unsigned char _padding_00[12]; /* +0x14..0x1f */
    float OldMat[4][4] __attribute__((aligned(16))); /* +0x20 */
    int m_bNoInterpolation; /* +0x60 */
    C_SdlRef_LocalMatrix(void* pOrigin, unsigned int uIndex) : C_SdlRef(pOrigin, uIndex)
    {
        m_uRefType = 1;
        m_bNoInterpolation = 1;
    }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct C_SdlRef_TextureOffset : C_SdlRef {
    GLI_tdstMaterial_* m_hMaterial; /* +0x14 */
    float m_du; /* +0x18 */
    float m_dv; /* +0x1c */
    int m_fpOffsetU; /* +0x20 */
    int m_fpOffsetV; /* +0x24 */
    C_SdlRef_TextureOffset(float du, float dv, unsigned int uIndex, GLI_tdstMaterial_* hMaterial) : C_SdlRef(0, uIndex)
    {
        m_uRefType = 2;
        m_du = du;
        m_dv = dv;
        m_hMaterial = hMaterial;
    }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct C_SdlRef_FogParameters : C_SdlRef {
    int m_pDestFogColor; /* +0x14 */
    int m_pDestFogStart; /* +0x18 */
    int m_pDestFogEnd; /* +0x1c */
    C_SdlRef_FogParameters(unsigned int uIndex) : C_SdlRef(0, uIndex)
    {
        m_pDestFogColor = 0;
        m_pDestFogStart = 0;
        m_pDestFogEnd = 0;
        m_uRefType = 4;
    }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct C_SdlRef_TextureMatrix : C_SdlRef {
    int m_fpOffsetU; /* +0x14 */
    int m_fpOffsetV; /* +0x18 */
    C_SdlRef_TextureMatrix(void* pOrigin, unsigned int uIndex) : C_SdlRef(pOrigin, uIndex) { m_uRefType = 8; }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct C_SdlRef_TextureIdMatrix : C_SdlRef {
    C_SdlRef_TextureIdMatrix(void* pOrigin, unsigned int uIndex) : C_SdlRef(pOrigin, uIndex) { m_uRefType = 0x10; }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct C_SdlRef_PointLighting : C_SdlRef {
    C_SdlRef_PointLighting(void* pOrigin, unsigned int uIndex) : C_SdlRef(pOrigin, uIndex) { m_uRefType = 0x20; }
    void Process(void);
    void ProcessWithInterpol(void);
    void ProcessNoInterpol(void);
};

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct GLI_tdstMultiTextureMaterial {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    GLI_tdstUVTransformation st_UVStaticPos; /* +0xc */
    GLI_tdstUVTransformation st_UVDynamicPos; /* +0x24 */
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
    GLI_tdstMultiTextureMaterial a_stMultiMaterial[4]; /* +0x88 */
};

struct tag_stVU1Parameters {
    int tagDMA[4]; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float vAmbient[4]; /* +0x20 */
    float vScreenScale[4]; /* +0x30 */
    float vScreenOrg[4]; /* +0x40 */
    float vColorRange[4]; /* +0x50 */
    float fAlpha; /* +0x60 */
    float fShininess; /* +0x64 */
    unsigned int nColorMatMasks; /* +0x68 */
    unsigned int bFogging; /* +0x6c */
    unsigned int eFogMode; /* +0x70 */
    float fFogDensity; /* +0x74 */
    float fFogLinearStart; /* +0x78 */
    float fFogLinearEnd; /* +0x7c */
    unsigned int bTriangleFan; /* +0x80 */
    unsigned int uiClippingMask; /* +0x84 */
    unsigned int uiClippingStep; /* +0x88 */
    unsigned int bAutoNormalize; /* +0x8c */
    unsigned int uiNurbsReturnAddr; /* +0x90 */
    unsigned int ui_TandL_Entrance; /* +0x94 */
    unsigned int uiNurbsRowCount; /* +0x98 */
    unsigned int eClippingMode; /* +0x9c */
};

struct GLI_tdstZBufferForLight_ {
    int lSizeX; /* +0x0 */
    int lSizeY; /* +0x4 */
    float fCoefX; /* +0x8 */
    float fCoefY; /* +0xc */
    int p_stZBufferMap; /* +0x10 */
    int p_stMiddleZBufferMap; /* +0x14 */
};

struct GLI_tdstLight_ {
    int b_lOnOff; /* +0x0 */
    int bThisLightIsZBuffered; /* +0x4 */
    int lTypeOfLight; /* +0x8 */
    float xFar; /* +0xc */
    float xNear; /* +0x10 */
    float xLittleAlpha; /* +0x14 */
    float xBigAlpha; /* +0x18 */
    float xLittleTangent; /* +0x1c */
    float xBigTangent; /* +0x20 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x24..0x2f */
    MAT_tdstTransformation_ stMatrix; /* +0x30 */
    GEO_tdstColor_ stColor; /* +0x90 */
    float SqNear; /* +0xa0 */
    float SqFar; /* +0xa4 */
    float OOSqDiv; /* +0xa8 */
    GLI_tdstZBufferForLight_ stZBuffer; /* +0xac */
    unsigned char bValid; /* +0xc4 */
    unsigned char ucObjectLighted; /* +0xc5 */
    unsigned char bIsPainting; /* +0xc6 */
    unsigned char ucIsAlpha; /* +0xc7 */
    MTH3D_tdstVector_ xInter_Min_Pos; /* +0xc8 */
    MTH3D_tdstVector_ xExter_Min_Pos; /* +0xd4 */
    MTH3D_tdstVector_ xInter_Max_Pos; /* +0xe0 */
    MTH3D_tdstVector_ xExter_Max_Pos; /* +0xec */
    MTH3D_tdstVector_ xCenterBox; /* +0xf8 */
    float xRadius; /* +0x104 */
    float xIntensity_Min; /* +0x108 */
    float xIntensity_Max; /* +0x10c */
    GEO_tdstColor_ stBackgroundColor; /* +0x110 */
    int bCreatesShadows; /* +0x120 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct C_Sdl {
    void AddRef(C_SdlRef* pRef);
    int m_SDL_Size; /* +0x0 */
    unsigned int m_SDL_InitSize; /* +0x4 */
    unsigned int m_bReduce; /* +0x8 */
    unsigned int m_DisplayList; /* +0xc */
    tagListData* m_pListData; /* +0x10 */
    unsigned int m_NbRefs; /* +0x14 */
    unsigned int m_NbReservedRefs; /* +0x18 */
    unsigned int m_NbFaces; /* +0x1c */
    unsigned int m_NbElements; /* +0x20 */
    C_SdlRef** m_ppRefs; /* +0x24 */
    tag_stVU1Parameters** m_ppP; /* +0x28 */
    unsigned int m_LastFrameUsed; /* +0x2c */
    unsigned int m_LastFrameInterpolated; /* +0x30 */
    unsigned int m_bIsTransparent; /* +0x34 */
    unsigned int m_bNoInterpolation; /* +0x38 */
    int m_SkinIndex; /* +0x3c */
    GLI_tdstMaterial_* m_SkinMaterial; /* +0x40 */
    int m_bIsBlinking; /* +0x44 */
    /* vtable pointer at +0x48 (retail __vt__5C_Sdl: Start). */
    virtual void Start(void);
    ~C_Sdl() { Destruct(); }
    void Destruct(void);
    static void operator delete(void* p);
    void UpdateFogs(void);
    void Draw(int);
    void Preprocess(void);
    void End(void);
};

struct sceGifTag {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    sceGifTag tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

unsigned int hCurrentSDL;
int __vt__22C_SdlRef_FogParameters;
int __vt__8C_SdlRef;
int __vt__22C_SdlRef_TextureOffset;
int __vt__22C_SdlRef_PointLighting;
int __vt__24C_SdlRef_TextureIdMatrix;
int __vt__22C_SdlRef_TextureMatrix;
int __vt__28C_SdlRef_LocalMatrixForCheap;
int __vt__20C_SdlRef_LocalMatrix;
int __vt__5C_Sdl;
int __vt__14C_CharacterSdl;

#pragma auto_inline on
void CHEAP_CountMatrices(HIE_tdstSuperObject_* pSPO, unsigned int* pNbMatrices)
{
    HIE_tdstSuperObject_* hChild;

    (*pNbMatrices)++;
    for (hChild = pSPO->hFirstElementDyn; hChild; hChild = hChild->hNextBrotherDyn)
    {
        if (hChild->ulTypeOfLinkedObject != 2)
        {
            CHEAP_CountMatrices(hChild, pNbMatrices);
        }
    }
}

unsigned int SDL_REF_GetNewFogRef(unsigned int Index)
{
    return (unsigned int)new C_SdlRef_FogParameters(Index);
}

unsigned int SDL_REF_GetNewTextureOffsetRef(float du, float dv, unsigned int Index, GLI_tdstMaterial_* hMaterial)
{
    return (unsigned int)new C_SdlRef_TextureOffset(du, dv, Index, hMaterial);
}

unsigned int SDL_REF_GetNewPointLightingDataRef(HIE_tdstSuperObject_* pSPO, unsigned int Index)
{
    return (unsigned int)new C_SdlRef_PointLighting(pSPO, Index);
}

unsigned int SDL_REF_GetNewTextureIdMatrixRef(HIE_tdstSuperObject_* pSPO, unsigned int Index)
{
    return (unsigned int)new C_SdlRef_TextureIdMatrix(pSPO, Index);
}

unsigned int SDL_REF_GetNewTextureMatrixRef(HIE_tdstSuperObject_* pSPO, unsigned int Index)
{
    return (unsigned int)new C_SdlRef_TextureMatrix(pSPO, Index);
}

unsigned int SDL_REF_GetNewLocalMatrixRef(HIE_tdstSuperObject_* pSPO, unsigned int Index)
{
    return (unsigned int)new C_SdlRef_LocalMatrix(pSPO, Index);
}

void SDL_IncNbElements(unsigned int hSDL)
{
    unsigned int* p = (unsigned int*)(hSDL + 0x20);
    *p = *p + 1;
}

void SDL_SetNbFaces(unsigned int hSDL, unsigned int NbFaces)
{
    *(unsigned int*)(hSDL + 0x1C) = NbFaces;
}

void SDL_UpdateFogs(unsigned int hSDL)
{
    ((C_Sdl*)hSDL)->UpdateFogs();
}

void SDL_Draw(unsigned int hSDL)
{
    ((C_Sdl*)hSDL)->Draw(1);
}

void SDL_Preprocess(unsigned int hSDL)
{
    ((C_Sdl*)hSDL)->Preprocess();
}

void SDL_End(unsigned int hSDL)
{
    ((C_Sdl*)hSDL)->End();
}

void SDL_Start(unsigned int hSDL)
{
    hCurrentSDL = hSDL;
    ((C_Sdl*)hSDL)->Start();
}

void SDL_AddRef(unsigned int hSDL, unsigned int hRef)
{
    C_SdlRef* pSdlRef;
    C_Sdl* pSdl;
    pSdlRef = (C_SdlRef*)hRef;
    pSdl = (C_Sdl*)hSDL;
    if (pSdl && pSdlRef)
    {
        pSdl->AddRef(pSdlRef);
    }
    else
    {
        printf("Ooops !! One parameter is null in SDL_AddRef\n");
    }
}

void SDL_Destroy(unsigned int* phSDL)
{
    C_Sdl* pSdl;

    if (phSDL)
    {
        pSdl = (C_Sdl*)*phSDL;
        if (pSdl)
            delete pSdl;
        *phSDL = 0;
    }
}
