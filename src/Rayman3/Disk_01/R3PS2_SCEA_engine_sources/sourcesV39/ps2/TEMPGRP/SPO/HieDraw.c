/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\HieDraw.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/ENG.h"
#include "r3/GEO.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/LST2.h"
#include "r3/MAT.h"
#include "r3/MOR.h"
#include "r3/MTH.h"
#include "r3/SECT.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct _tdstCheapCharacter _tdstCheapCharacter;
typedef struct _tdstCheapCharacterList _tdstCheapCharacterList;

struct _tdstCheapCharacter {
    MTH4D_tdstVector_ stPosition; /* +0x0 */
    MTH4D_tdstVector_ stDirection; /* +0x10 */
    unsigned int lTakenTime; /* +0x20 */
    char cActivity; /* +0x24 */
};

struct _tdstCheapCharacterList {
    HIE_tdstSuperObject_* pReferenceObject; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    _tdstCheapCharacter List[40]; /* +0x10 */
    unsigned int NumberOfCheapCharacter; /* +0x790 */
    unsigned int MaxNumberOfCheapCharacter; /* +0x794 */
    unsigned int lIndOfFurthestDesactivateCharacter; /* +0x798 */
    unsigned int lIndOfClosestDesactivateCharacter; /* +0x79c */
    unsigned int lIndOfReactivateCharacter; /* +0x7a0 */
    unsigned int lTimer; /* +0x7a4 */
    float fSquaredMinDistance; /* +0x7a8 */
    float fSquaredMaxDistance; /* +0x7ac */
    unsigned int ulOptionFlags; /* +0x7b0 */
    GLI_tdstMaterial_* hAuraVisualMaterial; /* +0x7b4 */
    float p_fAuraSizes[2]; /* +0x7b8 */
    float fAuraSizeBlinkRange; /* +0x7c0 */
    float fAuraTransparencyMidLevel; /* +0x7c4 */
    float fAuraTransparencyBlinkRange; /* +0x7c8 */
    unsigned int bAurasNeedToBeDrawn; /* +0x7cc */
    unsigned int SDL; /* +0x7d0 */
    MTH4D_tdstMatrix_* pMatrixList; /* +0x7d4 */
    unsigned int NbMatrices; /* +0x7d8 */
    char cTestMode; /* +0x7dc */
};

short g_xFixIndex;
short g_xFixIndexSave;
int Global_CharacterBeingDisplayed;
int g_hFakeInstance;
unsigned int GLI_g_NbSkinsForThisCharacter;
short GLI_g_SkinIndice[4];
int GLI_g_SkinMaterials[4];
int gd_hFixSPOSave[32];
int gd_hFixSPO[32];
int g_p_stCurrentInCamCoordsMatrix;
int g_p_stCurrentMatrix;
int HIE_g_hCurrentMatrix;
MAT_tdstTransformation_ PS2_MatStack[51];
unsigned int PS2_MatStackIndex;
int gs_CurrentNumberOfLightInViewport;
int gs_aDEF_p_CurrentListOfLight[300];
unsigned char g_ucCurrentViewport;
int HIE_gs_lCurrentFrame;
unsigned int g_lNbListOfCheapCharacterList;
unsigned int SCT_g_DrawingMirrored;
_tdstCheapCharacterList g_aListOfCheapCharacterList[10];
int GLI_g_CurrentSkinMaterial;
int GLI_g_CurrentSkinIndex;
int Global_CharacterModuleBeingDisplayed;
char GLI_cGlobalFogIsOn;
GEO_tdstGeometricObject_* GeoHandle;
float VoidReal;

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
void SHW_fn_vInitShadow(short _hGLDDevice, int bMustAlloc);
void HIE_fn_vSendCharacterToViewportPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult);
void HIE_fn_vSendCharacterModulesToViewPortPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask);
GEO_tdstGeometricObject_* HIE_fn_p_stGetGeometricObjectFromSuperObject(HIE_tdstSuperObject_* h_SuperObject);
unsigned char HIE_fn_bSendSPOToFixViewport(GLD_tdstViewportAttributes_* p_stFixViewportAttr, int _lDrawMask);
void HIE_fn_vSendSPOToFixViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult);
void HIE_fn_hFindAllMirrorsInHierarchy(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, HIE_tdstSuperObject_** p_hHandleOfMirror, GEO_tdstGeometricObject_** p_hHandleOfGeometricMirror, short* p_shNbOfMirrors, short shNbMaxOfMirrors);
int HIE_fn_bFindMirrorInHierarchy(HIE_tdstSuperObject_* _hSprObj);
void HIE_fn_vSendCharacterDynShadowToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask);
void HIE_fn_vSendStaticWorldToViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult);

/* The retail code drives the VU0 directly: MWCC PS2 cannot emit lqc2/sqc2 or
 * the macro-mode vmulax/vmadday/vmaddz/vmaddw sequence from C, so the two
 * matrix helpers below are reproduced with statement-level asm blocks. */
#define HIE_VU_COPY_MATRIX(m_src, m_dst)                                   \
    asm { lqc2 vf1, 0x0(m_src); lqc2 vf2, 0x10(m_src);                     \
          lqc2 vf3, 0x20(m_src); lqc2 vf4, 0x30(m_src);                    \
          sqc2 vf1, 0x0(m_dst); sqc2 vf2, 0x10(m_dst);                     \
          sqc2 vf3, 0x20(m_dst); sqc2 vf4, 0x30(m_dst); }

#define HIE_VU_MULTIPLY_MATRIX(m_a, m_b, m_c, m_d)                          \
    asm { lqc2 vf1, 0x0(m_a); lqc2 vf2, 0x10(m_a);                         \
          lqc2 vf3, 0x20(m_a); lqc2 vf4, 0x30(m_a);                        \
          lqc2 vf5, 0x0(m_b); lqc2 vf6, 0x10(m_b);                         \
          lqc2 vf7, 0x20(m_b); lqc2 vf8, 0x30(m_b);                        \
          vmulax.xyzw acc, vf1, vf5x; vmadday.xyzw acc, vf2, vf5y;          \
          vmaddz.xyzw vf9, vf3, vf5z; vmulax.xyzw acc, vf1, vf6x;            \
          vmadday.xyzw acc, vf2, vf6y; vmaddz.xyzw vf10, vf3, vf6z;          \
          vmulax.xyzw acc, vf1, vf7x; vmadday.xyzw acc, vf2, vf7y;          \
          vmaddz.xyzw vf11, vf3, vf7z; vmulax.xyzw acc, vf1, vf8x;           \
          vmadday.xyzw acc, vf2, vf8y; vmaddaz.xyzw acc, vf3, vf8z;          \
          vmaddw.xyzw vf12, vf4, vf0w;                                      \
          sqc2 vf9, 0x0(m_c); sqc2 vf10, 0x10(m_c);                         \
          sqc2 vf11, 0x20(m_c); sqc2 vf12, 0x30(m_c);                       \
          sqc2 vf9, 0x0(m_d); sqc2 vf10, 0x10(m_d);                        \
          sqc2 vf11, 0x20(m_d); sqc2 vf12, 0x30(m_d); }

void HIE_fn_SendListOfFakeInstanceToViewport(GLD_tdstViewportAttributes_* _hVpt, _tdstCheapCharacterList* pCharList);
unsigned int fn_ulStandardGameGetCustomBitsSO(HIE_tdstSuperObject_* hSprObj);
void HIE_fn_vRefreshHierarchy(HIE_tdstSuperObject_* hSprObj);
float GLI_vGetGlobalAlpha(void);
void GLI_vSetCurrentAnimatedTextureNumber(GLI_tdstMaterial_* hMaterial, int lTextureNumber);
void GLI_vLockAnimatedTexture(GLI_tdstMaterial_* hMaterial);
float GEO_xGetZFar(void);
float GEO_xGetZFarTransparencyZone(void);
int fn_ucStandardGameGetTransparencyZoneMaxSO(HIE_tdstSuperObject_* hSprObj);
int fn_ucStandardGameGetTransparencyZoneMinSO(HIE_tdstSuperObject_* hSprObj);
void GEO_vSetZFar(float xZ);
void GEO_vSetZFarTransparencyZone(float xZ);
MAT_tdstTransformation_* HIE_fn_pGetCurrentInCamCoordsMatrix(void);
int GEO_lMainCullingSphere(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stShereCenter, float xRadius, MAT_tdstTransformation_* p_stMatrix, MAT_tdstTransformation_* p_stObjectMatrix, int _lCullingResult);
void GLI_vSetDynShadowParam(int iOnOff, void* pUnused, float fLength, int lLevel, int lCloseState);
void HIE_fn_vSendCharacterDynShadowToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int ulDrawMask);
void GLI_vSetDynShadowState(unsigned char bOnOff);
void GLIPS2_vManageLightsForThisCharacter(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int bBoundingSphere, MTH3D_tdstVector_* p_stSphereCenter, float xSphereRadius);
void fn_vComputeGeometricJobs(HIE_tdstSuperObject_* p_stActorSO);
void HIE_fn_vSendCharacterModulesToViewPortPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int ulDrawMask);
void GLI_vSetGlobalAlpha(float fAlpha);

void GLI_vGetVisualSetLOD(GEO_tdstVisualSet_* p_stVisualSet, int lNumberOfLodToGet, float* p_xThreshold, GEO_tdstGeometricObject_** h_stObject);
GEO_tdstVisualSet_* PO_fn_hGetVisualSet(PO_tdstPhysicalObject_* _hPhysicalObject);
PO_tdstPhysicalObject_* IPO_fn_hGetPhysicalObject(IPO_tdstInstanciatedPhysicalObject_* _hInstanciatedPhysicalObject);
MTH3D_tdstVector_* COL_fn_pGetMinPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox);
MTH3D_tdstVector_* COL_fn_pGetMaxPointOfParallelBox(COL_tdstParallelBox_* _p_stParallelBox);
void MAT_fn_vSetIdentity(MAT_tdstTransformation_* _hTransform);
int GEO_lCullingSphere(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stSphereCenter, float xRadius, MAT_tdstTransformation_* p_stMatrix, int _lCullingResult);
int GEO_lCullingBox(GLD_tdstViewportAttributes_* p_stVpt, MTH3D_tdstVector_* p_stMin, MTH3D_tdstVector_* p_stMax, int _lCullingResult);

#define HIE_M_hGetGeoOfVisualSet(_hVisualSet) (GLI_vGetVisualSetLOD(_hVisualSet, 0, &VoidReal, &GeoHandle), GeoHandle)

extern GLI_tdstMaterial_* g_hShadowPolygonVisualMaterial;
extern GLI_tdstTexture_* g_p_stTextureOfTextureShadow;
extern GEO_tdstGeometricObject_* g_p_hHandleOfGeometricShadowObject[10];
extern short g_p_hHandleOfElementForShadow[10];
extern struct GLD_tdstDeviceAttributes_ g_stDevAttrib;
unsigned char HMU_fn_ucGetActualNormalMemoryBlockUsed(void);
unsigned char HMU_fn_ucGetActualTempMemoryBlockUsed(void);
void HMU_fn_vSetMemoriesInFixMode(void);
void HMU_fn_vSetActualNormalMemoryBlock(unsigned char ucBlocNumber);
void HMU_fn_vSetActualTempMemoryBlock(unsigned char ucBlocNumber);
void GLI_xCreateMaterial(GLI_tdstMaterial_** hMaterial);
void GLI_xSetMaterialAmbientCoef(GLI_tdstMaterial_* hMaterial, GEO_tdstColor_* p_stColor);
void GLI_xSetMaterialDiffuseCoef(GLI_tdstMaterial_* hMaterial, GEO_tdstColor_* p_stColor);
void GLI_xSetMaterialSpecularCoef(GLI_tdstMaterial_* hMaterial, int lSpecularExponent, GEO_tdstColor_* p_stColor);
void GLI_xSetMaterialType(GLI_tdstMaterial_* hMaterial, unsigned int xMType);
void GLI_xSetMaterialTexture(GLI_tdstMaterial_* hMaterial, GLI_tdstTexture_* p_stTexture);
void GLD_bGetDeviceAttributes(short hDev, struct GLD_tdstDeviceAttributes_* p_stAttrib);
void GEO_vCreateGeometricObject(GEO_tdstGeometricObject_** p_hObject, short xNbPoints, short xNbElements);
void GEO_vSetVisualMaterialOfIndexedTriangles(GEO_tdstGeometricObject_* hObject, short hElement, GLI_tdstMaterial_* hVisualMaterial);
void GEO_vCreateElementIndexedTriangles(GEO_tdstGeometricObject_* hObject, short* p_hElement, short xNbFaces, short xNbElementUV, short xNbUVStages);

void GLI_vFogOff(void);
void GLI_vFogOn(void);
char GLI_fn_SinusEffect_vGetState(void);
void GLI_fn_SinusEffect_vSetState(char cState);
char GLI_fn_SinusEffect_cIsSecondViewportAffected(void);
unsigned char HIE_fn_bInitCameraMatrixStack(GLD_tdstViewportAttributes_* p_stViewportAttr);
void GAM_fn_vClipFixObject(GLD_tdstViewportAttributes_* p_stViewportAttr);
void GAM_fn_vResetClipFixObject(GLD_tdstViewportAttributes_* p_stViewportAttr);
void HIE_fn_vSendSPOToFixViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult);

void GLI_vDrawVisualSetDynamicShadow(GEO_tdstVisualSet_* p_stVisualSet);

/* HIE_fn_vFastPS2PushMatrix is defined out of line in HieMtStk.c; this inline
 * copy is what its callers here expand (a nested expansion calls it instead). */
inline void HIE_fn_vFastPS2PushMatrix(HIE_tdstSuperObject_* _hSprObj)
{
    if (PS2_MatStackIndex == 0)
    {
        MAT_tdstTransformation_* p_stMatrix;
        MTH4D_tdstMatrix_* p_stSource;
        MTH4D_tdstMatrix_* p_stDestination;

        p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stSource = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stDestination = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix;
        HIE_VU_COPY_MATRIX(p_stSource, p_stDestination);
        HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = (int)p_stMatrix;
        _hSprObj->lLastComputeFrame = HIE_gs_lCurrentFrame;
        PS2_MatStackIndex++;
    }
    else
    {
        unsigned char bCopyMatrix;

        bCopyMatrix = (_hSprObj->lLastComputeFrame == HIE_gs_lCurrentFrame); if (!bCopyMatrix) { bCopyMatrix = (_hSprObj->lLastComputeFrame == -1); } if (bCopyMatrix != 0)
        {
            MAT_tdstTransformation_* p_stMatrix;
            MTH4D_tdstMatrix_* p_stSource;
            MTH4D_tdstMatrix_* p_stDestination;

            p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stSource = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stDestination = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix;
            HIE_VU_COPY_MATRIX(p_stSource, p_stDestination);
            HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = (int)p_stMatrix;
            PS2_MatStackIndex++;
        }
        else
        {
            MAT_tdstTransformation_* p_stMatrix;
            MAT_tdstTransformation_* p_stPrevious;
            MTH4D_tdstMatrix_* p_stStackMatrix;
            MTH4D_tdstMatrix_* p_stGlobalMatrix;
            MTH4D_tdstMatrix_* p_stPreviousMatrix;
            MTH4D_tdstMatrix_* p_stLocalMatrix;

            p_stMatrix = &PS2_MatStack[PS2_MatStackIndex]; p_stPrevious = &PS2_MatStack[PS2_MatStackIndex - 1]; p_stGlobalMatrix = &_hSprObj->hGlobalMatrix->stTransformMatrix; p_stPreviousMatrix = &p_stPrevious->stTransformMatrix; p_stStackMatrix = &PS2_MatStack[PS2_MatStackIndex].stTransformMatrix; p_stLocalMatrix = &_hSprObj->hLocalMatrix->stTransformMatrix;
            HIE_VU_MULTIPLY_MATRIX(p_stPreviousMatrix, p_stLocalMatrix, p_stGlobalMatrix, p_stStackMatrix);
            HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = (int)p_stMatrix;
            PS2_MatStackIndex++;
            _hSprObj->hGlobalMatrix->eType = MAT_eTransform_Rotation;
            _hSprObj->lLastComputeFrame = HIE_gs_lCurrentFrame;
        }
    }
}

inline void HIE_fn_vFastPS2PopMatrix(void)
{
    if (PS2_MatStackIndex)
    {
        MAT_tdstTransformation_* p_stMatrix;

        p_stMatrix = &PS2_MatStack[--PS2_MatStackIndex];
        HIE_g_hCurrentMatrix = (int)p_stMatrix; g_p_stCurrentMatrix = (int)p_stMatrix;
    }
}

float GEO_xGetZFarTransparencyLevel(void);
void GLI_xSetViewportLightsOnOff(unsigned char bOnOff);
GLI_tdstLight_* HIE_fn_hGetSuperObjectLight(HIE_tdstSuperObject_* p_SuperObjPerso);
void GLI_vAddLightToViewport(int lUnused, GLI_tdstLight_* p_stLight);
unsigned char fn_ucGetNumberOfRLIFromCharacter(HIE_tdstSuperObject_* hSprObj, unsigned char* p_ucIndex1, unsigned char* p_ucIndex2, float* p_xPercent);
void HIE_vSetCharactereRLI(unsigned char ucNbRLI, unsigned char ucIndex1, unsigned char ucIndex2, float xPercent);
void GLI_vPopLightsInViewport(int lUnused, unsigned int lNbLightsToPop);
void fn_vSendOneModuleToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _lDrawMask);
void GLIPS2_vSendCharacterVisualSetToViewport(GEO_tdstVisualSet_* p_stVisualSet, int lDrawModeMask);
void GLI_lSendVisualSetToViewportWithRLI2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask, void* hISI);
int IPO_fn_hGetRadiosity(IPO_tdstInstanciatedPhysicalObject_* _hInstanciatedPhysicalObject);

inline void HIE_fn_vSendCharacterModuleToViewPortPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask)
{
    float xAlpha;
    float xLevel;
    void* hRLI;

    if (!(unsigned char)(_hSprObj->ulFlags & 2))
    {
        xLevel = GEO_xGetZFarTransparencyLevel();
        xAlpha = xLevel * _hSprObj->fTransparenceLevel;
        if (xAlpha > 10.0f)
        {
            GLI_vSetGlobalAlpha(xAlpha);
            Global_CharacterModuleBeingDisplayed = (int)_hSprObj;
            if (_hSprObj->ulTypeOfLinkedObject == 8)
                GLIPS2_vSendCharacterVisualSetToViewport(PO_fn_hGetVisualSet(_hSprObj->hLinkedObject.p_stPhysicalObject), _DrawMask);
            else if (_hSprObj->ulTypeOfLinkedObject == 0x20)
            {
                hRLI = (void*)IPO_fn_hGetRadiosity(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject);
                GLI_lSendVisualSetToViewportWithRLI2(_hVpt, PO_fn_hGetVisualSet(IPO_fn_hGetPhysicalObject(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject)), 0, _DrawMask, hRLI);
            }
        }
    }
}

/* R5900 min.s (as in Proj.c): MWCC compiles the C comparison as
 * compare-and-branch instead. */
inline float MTH_M_xMin(float _xA, float _xB)
{
    float _xResult;
    asm { min.s _xResult, _xA, _xB }
    return _xResult;
}

/* Not original source, needs cleaning up: scoped auto_inline makes MWCC
 * inline the recursive call one level, as in retail. */
#pragma auto_inline on

#pragma auto_inline reset

#pragma auto_inline on
void HIE_fn_vSendStaticWorldToViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    HIE_tdstSuperObject_* hChild;

    _DrawMask &= _hSprObj->lDrawModeMask;
    HIE_fn_vFastPS2PushMatrix(_hSprObj);
    if (((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000)))
    {
        if (!(unsigned char)(_hSprObj->ulFlags & 2))
            fn_vSendOneModuleToViewPort(_hVpt, _hSprObj, _DrawMask);
    }

    for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
        HIE_fn_vSendStaticWorldToViewport(_hVpt, hChild, _DrawMask, _lCullingResult);

    HIE_fn_vFastPS2PopMatrix();
}
#pragma auto_inline reset

void HIE_fn_vSendCharacterDynShadowToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask)
{
    GEO_tdstVisualSet_* hVisualSet;
    HIE_tdstSuperObject_* hChild;

    if ((unsigned char)(_hSprObj->ulFlags & 0x20))
        return;

    HIE_fn_vFastPS2PushMatrix(_hSprObj);

    _DrawMask &= _hSprObj->lDrawModeMask;
    if (((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000)))
    {
        if (!(unsigned char)(_hSprObj->ulFlags & 2))
        {
            if (_hSprObj->ulTypeOfLinkedObject == 8)
                GLI_vDrawVisualSetDynamicShadow(PO_fn_hGetVisualSet(_hSprObj->hLinkedObject.p_stPhysicalObject));
        }
    }

    for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
    {
        if (hChild->ulTypeOfLinkedObject != 2)
            HIE_fn_vSendCharacterDynShadowToViewPort(_hVpt, hChild, _DrawMask);
    }

    HIE_fn_vFastPS2PopMatrix();
}

#pragma auto_inline on
int HIE_fn_bFindMirrorInHierarchy(HIE_tdstSuperObject_* _hSprObj)
{
    HIE_tdstSuperObject_* hChild;

    if (_hSprObj->ulTypeOfLinkedObject & 0x250)
        return 1;

    for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
    {
        if (HIE_fn_bFindMirrorInHierarchy(hChild))
            return 1;
    }

    return 0;
}
#pragma auto_inline reset

void HIE_fn_hFindAllMirrorsInHierarchy(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, HIE_tdstSuperObject_** p_hHandleOfMirror, GEO_tdstGeometricObject_** p_hHandleOfGeometricMirror, short* p_shNbOfMirrors, short shNbMaxOfMirrors)
{
    HIE_tdstSuperObject_* hChild;
    COL_tdstBoundingSphere_* hBoundingSphere;
    union { MTH3D_tdstVector_ v; int i[3]; } stSphereCenter;
    float xSphereRadius;
    COL_tdstParallelBox_* hParallelBox;
    MTH3D_tdstVector_ stMinPoint;
    MTH3D_tdstVector_ stMaxPoint;
    MAT_tdstTransformation_ stIdentityMatrix;
    int lType;
    MTH3D_tdstVector_* p_stMinPoint;
    MTH3D_tdstVector_* p_stMaxPoint;
    unsigned char bBoxBoundingVolume;

    hBoundingSphere = NULL;
    hParallelBox = NULL;
    lType = _hSprObj->ulTypeOfLinkedObject;
    xSphereRadius = 0.0f;

    bBoxBoundingVolume = (unsigned char)(_hSprObj->ulFlags & 0x10);
    if (bBoxBoundingVolume)
        hParallelBox = (COL_tdstParallelBox_*)_hSprObj->hVisualBoundingVolume;
    else
        hBoundingSphere = (COL_tdstBoundingSphere_*)_hSprObj->hVisualBoundingVolume;

    if (bBoxBoundingVolume && hParallelBox)
    {
        MTH3D_tdstVector_* p_stTranslation;

        p_stMinPoint = COL_fn_pGetMinPointOfParallelBox(hParallelBox);
        p_stMaxPoint = COL_fn_pGetMaxPointOfParallelBox(hParallelBox);
        p_stTranslation = (MTH3D_tdstVector_*)&_hSprObj->hGlobalMatrix->stTransformMatrix.stCol_3;
        stMinPoint.xX = p_stMinPoint->xX + p_stTranslation->xX; stMinPoint.xY = p_stMinPoint->xY + p_stTranslation->xY; stMinPoint.xZ = p_stMinPoint->xZ + p_stTranslation->xZ;
        stMaxPoint.xX = p_stMaxPoint->xX + p_stTranslation->xX; stMaxPoint.xY = p_stMaxPoint->xY + p_stTranslation->xY; stMaxPoint.xZ = p_stMaxPoint->xZ + p_stTranslation->xZ;
        MAT_fn_vSetIdentity(&stIdentityMatrix);
    }

    if (!bBoxBoundingVolume && hBoundingSphere)
    {
        stSphereCenter.i[0] = ((int*)&hBoundingSphere->stCenterPoint)[0]; stSphereCenter.i[1] = ((int*)&hBoundingSphere->stCenterPoint)[1]; stSphereCenter.i[2] = ((int*)&hBoundingSphere->stCenterPoint)[2];
        xSphereRadius = hBoundingSphere->xRadius;
    }

    if ((!hBoundingSphere && !hParallelBox)
        || (!bBoxBoundingVolume && GEO_lCullingSphere(_hVpt, &stSphereCenter.v, xSphereRadius, _hSprObj->hGlobalMatrix, 0))
        || (bBoxBoundingVolume && GEO_lCullingBox(_hVpt, &stMinPoint, &stMaxPoint, 0)))
    {
        if (lType & 0x250)
        {
            if (*p_shNbOfMirrors < shNbMaxOfMirrors)
            {
                p_hHandleOfMirror[*p_shNbOfMirrors] = _hSprObj;
                if (lType == 0x200)
                    p_hHandleOfGeometricMirror[*p_shNbOfMirrors] = _hSprObj->hLinkedObject.p_stGeometricObject;
                else if (lType == 0x10)
                    p_hHandleOfGeometricMirror[*p_shNbOfMirrors] = HIE_M_hGetGeoOfVisualSet(PO_fn_hGetVisualSet(_hSprObj->hLinkedObject.p_stPhysicalObject));
                else if (lType == 0x40)
                    p_hHandleOfGeometricMirror[*p_shNbOfMirrors] = HIE_M_hGetGeoOfVisualSet(PO_fn_hGetVisualSet(IPO_fn_hGetPhysicalObject(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject)));
                (*p_shNbOfMirrors)++;
            }
        }

        hChild = _hSprObj->hFirstElementDyn;
        while (hChild)
        {
            HIE_fn_hFindAllMirrorsInHierarchy(_hVpt, hChild, p_hHandleOfMirror, p_hHandleOfGeometricMirror, p_shNbOfMirrors, shNbMaxOfMirrors);
            hChild = hChild->hNextBrotherDyn;
        }
    }
}

void HIE_fn_vSendSPOToFixViewport(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    HIE_tdstSuperObject_* hChild;
    GLI_tdstLight_* hLight;
    COL_tdstBoundingSphere_* hBoundingSphere;
    unsigned char bDisplayed;
    union { MTH3D_tdstVector_ v; int i[3]; } stSphereCenter;
    float xSphereRadius;
    unsigned int ulCustomBit;
    unsigned char ucIndex1;
    unsigned char ucIndex2;
    unsigned char ucNbRLIUse;
    float xPercent;
    tdstStandardGame_* hStdGame;

    xSphereRadius = 0.0f;
    if (_hSprObj->ucSuperImposedOnWhichViewport != g_ucCurrentViewport)
        return;

    HIE_fn_vFastPS2PushMatrix(_hSprObj);

    if (_hSprObj->ulTypeOfLinkedObject == 2)
    {
        if (_hSprObj->lNumberOfElementsDyn > 0)
        {
            hStdGame = _hSprObj->hLinkedObject.p_stCharacter->h_StandardGame;
            hBoundingSphere = (COL_tdstBoundingSphere_*)_hSprObj->hVisualBoundingVolume;
            if (hBoundingSphere)
            {
                stSphereCenter.i[0] = ((int*)&hBoundingSphere->stCenterPoint)[0]; stSphereCenter.i[1] = ((int*)&hBoundingSphere->stCenterPoint)[1]; stSphereCenter.i[2] = ((int*)&hBoundingSphere->stCenterPoint)[2];
                xSphereRadius = hBoundingSphere->xRadius;
            }

            if (_lCullingResult != 0x7F && hBoundingSphere)
                _lCullingResult = GEO_lMainCullingSphere(_hVpt, &stSphereCenter.v, xSphereRadius, HIE_fn_pGetCurrentInCamCoordsMatrix(), _hSprObj->hGlobalMatrix, _lCullingResult);
            else
                _lCullingResult = 0x7F;

            _DrawMask |= 0xFC67F7FB;
            _DrawMask &= _hSprObj->lDrawModeMask;
            ulCustomBit = fn_ulStandardGameGetCustomBitsSO(_hSprObj);

            if ((((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000))) && !(unsigned char)(_hSprObj->ulFlags & 2) && _lCullingResult)
            {
                ulCustomBit &= ~0x800;
                bDisplayed = 1;
                hStdGame->ucMiscFlags |= 0x20;
            }
            else
            {
                if (!g_ucCurrentViewport)
                    ulCustomBit |= 0x800;
                bDisplayed = 0;
                hStdGame->ucMiscFlags &= ~0x20;
            }
            hStdGame->ulCustomBits = ulCustomBit;

            if (bDisplayed)
            {
                if ((unsigned char)((_hSprObj->ulFlags & 0x20000) >> 16)) GLI_xSetViewportLightsOnOff(0); hLight = HIE_fn_hGetSuperObjectLight(_hSprObj); if (hLight) GLI_vAddLightToViewport((int)_hVpt, hLight);
                ucNbRLIUse = fn_ucGetNumberOfRLIFromCharacter(_hSprObj, &ucIndex1, &ucIndex2, &xPercent);
                HIE_vSetCharactereRLI(ucNbRLIUse, ucIndex1, ucIndex2, xPercent);

                for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
                {
                    if (hChild->ulTypeOfLinkedObject != 2)
                    {
                        hChild->ucSuperImposedOnWhichViewport = _hSprObj->ucSuperImposedOnWhichViewport;
                        HIE_fn_vSendSPOToFixViewport(_hVpt, hChild, _DrawMask, _lCullingResult);
                    }
                }

                if (hLight) GLI_vPopLightsInViewport((int)_hVpt, 1); if ((unsigned char)((_hSprObj->ulFlags & 0x20000) >> 16)) GLI_xSetViewportLightsOnOff(1);
                HIE_vSetCharactereRLI(0, 0, 0, 0.0f);
            }
        }
    }
    else
    {
        _DrawMask &= _hSprObj->lDrawModeMask;
        if (((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000)))
        {
            if (!(unsigned char)(_hSprObj->ulFlags & 2))
                fn_vSendOneModuleToViewPort(_hVpt, _hSprObj, _DrawMask);
        }

        for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
        {
            if (hChild->ulTypeOfLinkedObject != 2)
            {
                hChild->ucSuperImposedOnWhichViewport = _hSprObj->ucSuperImposedOnWhichViewport;
                HIE_fn_vSendSPOToFixViewport(_hVpt, hChild, _DrawMask, _lCullingResult);
            }
        }
    }

    HIE_fn_vFastPS2PopMatrix();
}

unsigned char HIE_fn_bSendSPOToFixViewport(GLD_tdstViewportAttributes_* p_stFixViewportAttr, int _lDrawMask)
{
    short xI;
    HIE_tdstSuperObject_** hSPO;
    char cSaveSinusEffectState;
    char cSaveGlobalFog;

    cSaveGlobalFog = GLI_cGlobalFogIsOn;
    GLI_cGlobalFogIsOn = 0;
    GLI_vFogOff();
    cSaveSinusEffectState = GLI_fn_SinusEffect_vGetState();
    if (!GLI_fn_SinusEffect_cIsSecondViewportAffected())
        GLI_fn_SinusEffect_vSetState(0);
    HIE_fn_bInitCameraMatrixStack(p_stFixViewportAttr);
    for (xI = 0, hSPO = (HIE_tdstSuperObject_**)gd_hFixSPO; xI < g_xFixIndex; xI++, hSPO++)
    {
        if ((*hSPO)->ulFlags |= 0x40000)
            GAM_fn_vClipFixObject(p_stFixViewportAttr);
        HIE_fn_vSendSPOToFixViewport(p_stFixViewportAttr, (*hSPO), _lDrawMask & (*hSPO)->lDrawModeMask, 0);
        if ((*hSPO)->ulFlags |= 0x40000)
            GAM_fn_vResetClipFixObject(p_stFixViewportAttr);
    }
    GLI_fn_SinusEffect_vSetState(cSaveSinusEffectState);
    GLI_cGlobalFogIsOn = cSaveGlobalFog;
    if (cSaveGlobalFog)
        GLI_vFogOn();
    return 1;
}

GEO_tdstGeometricObject_* HIE_fn_p_stGetGeometricObjectFromSuperObject(HIE_tdstSuperObject_* h_SuperObject)
{
    int lSOType;
    PO_tdstPhysicalObject_* h_PO;
    float p_xThreshold;
    GEO_tdstGeometricObject_* p_stObject;

    p_stObject = NULL;

    lSOType = h_SuperObject->ulTypeOfLinkedObject;

    if (lSOType == 0x400)
    {
        p_stObject = h_SuperObject->hLinkedObject.p_stGeometricObject;
    }
    else if (lSOType & 0x18)
    {
        GLI_vGetVisualSetLOD(PO_fn_hGetVisualSet(h_SuperObject->hLinkedObject.p_stPhysicalObject), 0, &p_xThreshold, &p_stObject);
    }
    else if (lSOType & 0x60)
    {
        h_PO = IPO_fn_hGetPhysicalObject(h_SuperObject->hLinkedObject.p_stInstanciatedPhysicalObject);
        GLI_vGetVisualSetLOD(PO_fn_hGetVisualSet(h_PO), 0, &p_xThreshold, &p_stObject);
    }

    return p_stObject;
}

void HIE_fn_vSendCharacterModulesToViewPortPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask)
{
    HIE_tdstSuperObject_* hChild;

    HIE_fn_vFastPS2PushMatrix(_hSprObj);

    _DrawMask &= _hSprObj->lDrawModeMask;
    if (((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000)))
        HIE_fn_vSendCharacterModuleToViewPortPS2(_hVpt, _hSprObj, _DrawMask);

    for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
    {
        if (hChild->ulTypeOfLinkedObject != 2)
            HIE_fn_vSendCharacterModulesToViewPortPS2(_hVpt, hChild, _DrawMask);
    }

    HIE_fn_vFastPS2PopMatrix();
}

void HIE_fn_vSendCharacterToViewportPS2(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _DrawMask, int _lCullingResult)
{
    HIE_tdstSuperObject_* hChild;
    COL_tdstBoundingSphere_* hBoundingSphere;
    unsigned char bDisplayed;
    unsigned char bIsACinematicActor;
    unsigned char bOnPlatform;
    float xTransparencyZoneLevel;
    float xTransparencyZoneMax;
    float xMaxZone;
    float xMinZone;
    unsigned int ulCustomBit;
    unsigned int ulDrawMask;
    MTH3D_tdstVector_* p_stSphereCenter;
    float xSphereRadius;
    HIE_tdstSuperObject_* hFather;
    MTH3D_tdstVector_* p_stLightDir;
    tdst3dData_* h_Current3dData;
    float fGlobalAlphaTemp;
    unsigned char bDynamicShadowOn;
    unsigned int ulFlags;
    tdstStandardGame_* param0;
    unsigned int i;
    tdst3dData_* h_3dData;
    float xHeight;
    MTH3D_tdstVector_ stShadowCenter;
    float xShadowRadius;
    int lShadowCullingResult;
    _tdstCheapCharacterList* pCharList;
    _tdstCheapCharacterList* pCharListArray;

    xTransparencyZoneLevel = 0.0f; xMaxZone = 0.0f;
    ulFlags = 0; ulDrawMask = 0;
    p_stSphereCenter = NULL;
    xSphereRadius = 0.0f;
    bDynamicShadowOn = 0;

    pCharListArray = g_aListOfCheapCharacterList;
    for (i = 0; i < g_lNbListOfCheapCharacterList; i++)
    {
        pCharList = &pCharListArray[i];
        if (pCharList->NumberOfCheapCharacter != 0 && pCharList->pReferenceObject == _hSprObj && (SCT_g_DrawingMirrored == 0 || !(pCharList->ulOptionFlags & 1)))
            HIE_fn_SendListOfFakeInstanceToViewport(_hVpt, pCharList);
    }

    if ((unsigned char)(_hSprObj->ulFlags & 0x20))
        return;

    switch ((unsigned char)((_hSprObj->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags & 4) ? 1 : 0))
    {
    default:
        return;
    case 1:
        ulCustomBit = fn_ulStandardGameGetCustomBitsSO(_hSprObj);
        break;
    }

    if ((unsigned char)(_hSprObj->ulFlags & 2))
    {
        param0 = _hSprObj->hLinkedObject.p_stCharacter->h_StandardGame;
        param0->ulCustomBits = ulCustomBit | 0x800;
        param0->ucMiscFlags &= 0xDF;
        return;
    }

    HIE_fn_vRefreshHierarchy(_hSprObj);
    fGlobalAlphaTemp = GLI_vGetGlobalAlpha();

    bIsACinematicActor = 0;
    hFather = _hSprObj->hFatherDyn;
    if (hFather != NULL && hFather->ulTypeOfLinkedObject == 2 && hFather->hLinkedObject.p_stCharacter->h_StandardGame->ucPlatFormType)
    {
        bIsACinematicActor = 1;
        HIE_fn_vFastPS2PushMatrix(hFather);
    }

    HIE_fn_vFastPS2PushMatrix(_hSprObj);

    h_3dData = _hSprObj->hLinkedObject.p_stCharacter->h_3dData;
    bOnPlatform = (unsigned char)(h_3dData->h_CurrentCineActor ? 1 : 0);
    GLI_g_CurrentSkinIndex = -1;
    GLI_g_CurrentSkinMaterial = 0;

    if (h_3dData->NbSkinMaterials != 0)
    {
        GLI_g_NbSkinsForThisCharacter = h_3dData->NbSkinMaterials;
        for (i = 0; i < h_3dData->NbSkinMaterials; i++)
        {
            GLI_vSetCurrentAnimatedTextureNumber((GLI_tdstMaterial_*)h_3dData->hSkinMaterial[i], h_3dData->xSkinIndex[i]);
            GLI_vLockAnimatedTexture((GLI_tdstMaterial_*)h_3dData->hSkinMaterial[i]);
            GLI_g_SkinMaterials[i] = h_3dData->hSkinMaterial[i];
            GLI_g_SkinIndice[i] = h_3dData->xSkinIndex[i];
        }
    }
    else
    {
        GLI_g_NbSkinsForThisCharacter = 0;
    }

    hBoundingSphere = (COL_tdstBoundingSphere_*)_hSprObj->hVisualBoundingVolume;
    if (hBoundingSphere != NULL)
    {
        p_stSphereCenter = (MTH3D_tdstVector_*)&hBoundingSphere->stCenterPoint;
        xSphereRadius = hBoundingSphere->xRadius;
    }

    if (ulCustomBit & 0x200000)
    {
        xMaxZone = GEO_xGetZFar();
        xTransparencyZoneLevel = GEO_xGetZFarTransparencyZone();
        xTransparencyZoneMax = (float)(unsigned int)fn_ucStandardGameGetTransparencyZoneMaxSO(_hSprObj);
        xMinZone = (float)(unsigned int)fn_ucStandardGameGetTransparencyZoneMinSO(_hSprObj);
        if (0.0f == xMaxZone)
        {
            GEO_vSetZFar(xTransparencyZoneMax);
            GEO_vSetZFarTransparencyZone(xTransparencyZoneMax - xMinZone);
        }
        else if (xMinZone < xMaxZone)
        {
            GEO_vSetZFar(MTH_M_xMin(xMaxZone, xTransparencyZoneMax));
            GEO_vSetZFarTransparencyZone(GEO_xGetZFar() - xMinZone);
        }
        ulFlags = _hSprObj->ulFlags;
        _hSprObj->ulFlags = ulFlags | 0x10000;
        ulDrawMask = _hSprObj->lDrawModeMask;
        _hSprObj->lDrawModeMask = ulDrawMask & ~8;
        _lCullingResult &= ~0x30;
    }

    if (_lCullingResult != 0x7F && hBoundingSphere)
        _lCullingResult = GEO_lMainCullingSphere(_hVpt, p_stSphereCenter, xSphereRadius, HIE_fn_pGetCurrentInCamCoordsMatrix(), _hSprObj->hGlobalMatrix, _lCullingResult);
    else
        _lCullingResult = 0x7F;

    _DrawMask |= 0xFC67F7FB;
    _DrawMask &= _hSprObj->lDrawModeMask;
    if ((((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000))) && !(unsigned char)(_hSprObj->ulFlags & 2) && (_lCullingResult || bOnPlatform))
    {
        ulCustomBit &= ~0x800;
        bDisplayed = 1;
        _hSprObj->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags |= 0x20;
    }
    else
    {
        if (!g_ucCurrentViewport)
            ulCustomBit |= 0x800;
        bDisplayed = 0;
        _hSprObj->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags &= ~0x20;
    }
    _hSprObj->hLinkedObject.p_stCharacter->h_StandardGame->ulCustomBits = ulCustomBit;

    h_Current3dData = _hSprObj->hLinkedObject.p_stCharacter->h_3dData;
    if (h_Current3dData->xShadowQuality == 3 && (((_DrawMask & 0x800000) && (_DrawMask & 0x2000000)) || ((_DrawMask & 0x1000000) && !(_DrawMask & 0x2000000))) && (ulCustomBit & 0x100) && !(unsigned char)(_hSprObj->ulFlags & 2))
    {
        xHeight = h_Current3dData->xSHWHeight;
        p_stLightDir = &h_Current3dData->stLightDirForDynamicShadow;
        if (_lCullingResult == 0)
        {
            xShadowRadius = 0.5f * xHeight;
            stShadowCenter.xX = xShadowRadius * p_stLightDir->xX;
            stShadowCenter.xY = xShadowRadius * p_stLightDir->xY;
            stShadowCenter.xZ = xShadowRadius * p_stLightDir->xZ;
            xShadowRadius += xSphereRadius;
            stShadowCenter.xX = p_stSphereCenter->xX + stShadowCenter.xX;
            stShadowCenter.xY = p_stSphereCenter->xY + stShadowCenter.xY;
            stShadowCenter.xZ = p_stSphereCenter->xZ + stShadowCenter.xZ;
            lShadowCullingResult = GEO_lMainCullingSphere(_hVpt, &stShadowCenter, xShadowRadius, HIE_fn_pGetCurrentInCamCoordsMatrix(), _hSprObj->hGlobalMatrix, 0);
            if (lShadowCullingResult)
            {
                GLI_vSetDynShadowParam(0, p_stLightDir, xHeight, h_Current3dData->ucShadowRecLevel, h_Current3dData->ucIsShadowClosed);
                for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
                {
                    if (hChild->ulTypeOfLinkedObject != 2)
                        HIE_fn_vSendCharacterDynShadowToViewPort(_hVpt, hChild, _DrawMask);
                }
            }
        }
        else
        {
            GLI_vSetDynShadowParam(1, p_stLightDir, xHeight, h_Current3dData->ucShadowRecLevel, h_Current3dData->ucIsShadowClosed);
            bDynamicShadowOn = 1;
        }
    }

    Global_CharacterBeingDisplayed = (int)_hSprObj;

    if (bDisplayed && _hSprObj->lNumberOfElementsDyn > 0)
    {
        GLIPS2_vManageLightsForThisCharacter(_hVpt, _hSprObj, (int)hBoundingSphere, p_stSphereCenter, xSphereRadius);
        fn_vComputeGeometricJobs(_hSprObj);
        for (hChild = _hSprObj->hFirstElementDyn; hChild != NULL; hChild = hChild->hNextBrotherDyn)
        {
            if (hChild->ulTypeOfLinkedObject != 2)
                HIE_fn_vSendCharacterModulesToViewPortPS2(_hVpt, hChild, _DrawMask);
        }
    }

    if (bDynamicShadowOn)
        GLI_vSetDynShadowState(0);

    if (ulCustomBit & 0x200000)
    {
        GEO_vSetZFar(xMaxZone);
        GEO_vSetZFarTransparencyZone(xTransparencyZoneLevel);
        _hSprObj->ulFlags = ulFlags;
        _hSprObj->lDrawModeMask = ulDrawMask;
    }

    HIE_fn_vFastPS2PopMatrix();

    if (bIsACinematicActor)
        HIE_fn_vFastPS2PopMatrix();

    if (!SCT_g_DrawingMirrored)
        ((HIE_tdstSuperObject_*)Global_CharacterBeingDisplayed)->lDisplayPrioriry = 0;

    Global_CharacterBeingDisplayed = NULL;
    GLI_g_CurrentSkinIndex = -1;
    GLI_g_CurrentSkinMaterial = 0;
    GLI_g_NbSkinsForThisCharacter = 0;
    GLI_vSetGlobalAlpha(fGlobalAlphaTemp);
}

void SHW_fn_vInitShadow(short _hGLDDevice, int bMustAlloc)
{
    static GLI_tdstMaterial_* s_hShadowPolygonVisualMaterialLocal;
    GEO_tdstColor_ stShadowPolygonColor;
    short i;
    GEO_tdstGeometricObject_** p_hHandleGeoShwObj;
    short* p_hHandleOfElementForShadow;
    unsigned char ucOldHMUNormalBloc;
    unsigned char ucOldHMUTempBloc;

    if (!bMustAlloc && !g_hShadowPolygonVisualMaterial)
        return;

    ucOldHMUNormalBloc = HMU_fn_ucGetActualNormalMemoryBlockUsed();
    ucOldHMUTempBloc = HMU_fn_ucGetActualTempMemoryBlockUsed();
    HMU_fn_vSetMemoriesInFixMode();

    if (!g_hShadowPolygonVisualMaterial)
    {
        GLI_xCreateMaterial(&g_hShadowPolygonVisualMaterial);
        s_hShadowPolygonVisualMaterialLocal = g_hShadowPolygonVisualMaterial;
    }
    else
    {
        g_hShadowPolygonVisualMaterial = s_hShadowPolygonVisualMaterialLocal;
    }

    stShadowPolygonColor.xR = 0.0f;
    stShadowPolygonColor.xG = 0.0f;
    stShadowPolygonColor.xB = 0.0f;
    stShadowPolygonColor.xA = 0.0f;
    GLI_xSetMaterialAmbientCoef(g_hShadowPolygonVisualMaterial, &stShadowPolygonColor);
    GLI_xSetMaterialDiffuseCoef(g_hShadowPolygonVisualMaterial, &stShadowPolygonColor);
    GLI_xSetMaterialSpecularCoef(g_hShadowPolygonVisualMaterial, 2, &stShadowPolygonColor);
    GLI_xSetMaterialType(g_hShadowPolygonVisualMaterial, 0xFFFFFFFF);
    GLD_bGetDeviceAttributes(_hGLDDevice, &g_stDevAttrib);
    GLI_xSetMaterialTexture(g_hShadowPolygonVisualMaterial, g_p_stTextureOfTextureShadow);

    p_hHandleGeoShwObj = g_p_hHandleOfGeometricShadowObject;
    p_hHandleOfElementForShadow = g_p_hHandleOfElementForShadow;
    for (i = 0; i < 10; i++, p_hHandleGeoShwObj++, p_hHandleOfElementForShadow++)
    {
        if (bMustAlloc && !*p_hHandleGeoShwObj)
        {
            GEO_vCreateGeometricObject(p_hHandleGeoShwObj, 100, 1);
            GEO_vCreateElementIndexedTriangles(*p_hHandleGeoShwObj, p_hHandleOfElementForShadow, 48, 100, 1);
        }
        GEO_vSetVisualMaterialOfIndexedTriangles(*p_hHandleGeoShwObj, *p_hHandleOfElementForShadow, g_hShadowPolygonVisualMaterial);
    }

    HMU_fn_vSetActualNormalMemoryBlock(ucOldHMUNormalBloc);
    HMU_fn_vSetActualTempMemoryBlock(ucOldHMUTempBloc);
}
