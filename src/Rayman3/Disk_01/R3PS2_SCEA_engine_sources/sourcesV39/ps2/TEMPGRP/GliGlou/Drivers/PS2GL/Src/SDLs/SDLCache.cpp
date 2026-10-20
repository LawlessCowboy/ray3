/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SDLs\SDLCache.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/GMT.h"
#include "r3/MOR.h"
#include "r3/SECT.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct AI_tdstMind_ AI_tdstMind_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct sceGifTag sceGifTag;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct GLI_tdstZBufferForLight_ GLI_tdstZBufferForLight_;
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct tdstSDLCacheEntry_ tdstSDLCacheEntry_;
typedef struct C_SdlCache C_SdlCache;
typedef struct _SDC_Instance_ _SDC_Instance_;
typedef struct tagListData tagListData;
typedef struct GLI_tdstUVTransformation GLI_tdstUVTransformation;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct C_InstanceList C_InstanceList;
typedef struct GLI_tdstMultiTextureMaterial GLI_tdstMultiTextureMaterial;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct C_Sdl C_Sdl;
typedef struct C_SdlRef C_SdlRef;

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

struct tdstSDLCacheEntry_ {
    _SDC_Instance_* m_pInstance; /* +0x0 */
    tdstSDLCacheEntry_* m_pNext; /* +0x4 */
};

struct C_SdlCache {
    tdstSDLCacheEntry_* m_pList; /* +0x0 */
    C_SdlCache() : m_pList(0) {}
    ~C_SdlCache();
    unsigned int FindOldestSDLInstanceAndRemoveIt(void);
    void RemoveSdlInstance(_SDC_Instance_* pInstance);
};

struct _SDC_Instance_ {
    HIE_tdstSuperObject_* pSPO; /* +0x0 */
    unsigned int ulElementNumber; /* +0x4 */
    float (*pVertexArray)[4]; /* +0x8 */
    int pInstanceNormals; /* +0xc */
    C_Sdl* pSDL; /* +0x10 */
    unsigned int ulFrameNumber; /* +0x14 */
    unsigned int ulFrameNumberForNormals; /* +0x18 */
    C_InstanceList* pList; /* +0x1c */
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

struct GLI_tdstUVTransformation {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
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

struct C_InstanceList {
    unsigned int m_NbInstances; /* +0x0 */
    _SDC_Instance_** m_pList; /* +0x4 */
    void Stealth_RemoveAndDeleteInstance(_SDC_Instance_* pInstance);
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

struct C_Sdl {
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
    static void* __nw(unsigned int Size);
};

struct C_SdlRef {
    unsigned int m_uRefType; /* +0x0 */
    unsigned int m_uIndexInList; /* +0x4 */
    int m_vpOriginPointer; /* +0x8 */
    int m_vpDestinationPointer; /* +0xc */
};

int GLI_g_SdlCache;
void (*PS2glLiberator)(void*);
unsigned int GLI_g_FrameNumber;
extern void* (*PS2glAllocator64)(unsigned int);

void* C_Sdl::__nw(unsigned int Size)
{
    return PS2glAllocator64(Size);
}

inline C_SdlCache::~C_SdlCache()
{
    tdstSDLCacheEntry_* pEntry = m_pList;
    while (pEntry)
    {
        tdstSDLCacheEntry_* pNext = pEntry->m_pNext;
        PS2glLiberator(pEntry);
        pEntry = pNext;
    }
    m_pList = 0;
}

extern "C" void GLI_vDeleteSdlCache(void)
{
    delete (C_SdlCache*)GLI_g_SdlCache;
    GLI_g_SdlCache = 0;
}

extern "C" void GLI_vInitSdlCache(void)
{
    GLI_g_SdlCache = (int)new C_SdlCache;
}

unsigned int C_SdlCache::FindOldestSDLInstanceAndRemoveIt(void)
{
    _SDC_Instance_* pOldestInstance;
    unsigned int MinValue;
    tdstSDLCacheEntry_* p;

    MinValue = GLI_g_FrameNumber - 3;
    pOldestInstance = 0;
    for (p = m_pList; p; p = p->m_pNext)
    {
        if (p->m_pInstance->ulFrameNumber <= MinValue)
        {
            MinValue = p->m_pInstance->ulFrameNumber;
            pOldestInstance = p->m_pInstance;
        }
    }

    if (!pOldestInstance)
        return 0;

    RemoveSdlInstance(pOldestInstance);
    pOldestInstance->pList->Stealth_RemoveAndDeleteInstance(pOldestInstance);
    return 1;
}

void C_SdlCache::RemoveSdlInstance(_SDC_Instance_* pInstance)
{
    tdstSDLCacheEntry_* pPrevious;
    tdstSDLCacheEntry_* p;

    pPrevious = m_pList;
    if (pPrevious->m_pInstance == pInstance)
    {
        p = pPrevious->m_pNext;
        PS2glLiberator(pPrevious);
        m_pList = p;
    }
    else
    {
        for (p = pPrevious->m_pNext; p; pPrevious = p, p = p->m_pNext)
        {
            if (p->m_pInstance == pInstance)
            {
                pPrevious->m_pNext = p->m_pNext;
                PS2glLiberator(p);
                return;
            }
        }
    }
}
