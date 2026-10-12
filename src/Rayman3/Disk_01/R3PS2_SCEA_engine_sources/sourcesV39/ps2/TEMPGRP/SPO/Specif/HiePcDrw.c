/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SPO\Specif\HiePcDrw.c */
/* Language: C */
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
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;

long g_lDisplayPriority;
unsigned char g_ucNbRLIUse;
unsigned char g_ucIndex1;
unsigned char g_ucIndex2;
int g_cDrawAModifier;
float g_xPercent;
unsigned char bViewingInMirror;
int Global_CharacterModuleBeingDisplayed;

extern HIE_tdstSuperObject_* gd_hFixSPO[32];
extern short g_xFixIndex;
extern short g_xFixIndexSave;
extern unsigned char g_ucContext;

void SPO_ReinitSuperimposedArray(void)
{
    short xIndex;

    for (xIndex = 0; xIndex < g_xFixIndex; xIndex++)
        gd_hFixSPO[xIndex]->ulFlags &= ~0x21;
    g_xFixIndex = 0;
    g_ucContext = 0;
    g_xFixIndexSave = 0;
}

float GLI_vGetGlobalAlpha(void);
float GEO_xGetZFarTransparencyLevel(void);
void GLI_vSetGlobalAlpha(float Alpha);
GEO_tdstVisualSet_* PO_fn_hGetVisualSet(PO_tdstPhysicalObject_* _hPhysicalObject);
int GLI_hGetRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex);
void GLI_lSendVisualSetToViewportWithRLI2Flag(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask, void* hISI, unsigned int ulSuperObjectFlag);
void* GLI_hComputeBlendRLI(GEO_tdstVisualSet_* hVisualSet, unsigned char ucIndex1, unsigned char ucIndex2, short xNumISILOD, float xPercent);
void ISI_fn_vFreeISI(void* _hISI);
void GLI_lSendVisualSetToViewport2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask);
int IPO_fn_hGetRadiosity(IPO_tdstInstanciatedPhysicalObject_* _hInstanciatedPhysicalObject);
PO_tdstPhysicalObject_* IPO_fn_hGetPhysicalObject(IPO_tdstInstanciatedPhysicalObject_* _hInstanciatedPhysicalObject);
void GLI_lSendVisualSetToViewportWithRLI2(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstVisualSet_* p_stVisualSet, int lUnused, int lDrawModeMask, void* hISI);
void GLI_fn_vDrawMirror(int bMirror);
void GLI_xSendObjectToViewportWithLights(GLD_tdstViewportAttributes_* p_stVpt, GEO_tdstGeometricObject_* p_stObj, int lDrawModeMask);

void fn_vSendOneModuleToViewPort(GLD_tdstViewportAttributes_* _hVpt, HIE_tdstSuperObject_* _hSprObj, int _lDrawMask)
{
    IPO_tdstInstanciatedPhysicalObject_* hIPO;
    GEO_tdstVisualSet_* hVisualSet;
    float fCullingTransparency;
    float fGlobalAlphaTemp;
    void* hRad;
    int lType;

    g_lDisplayPriority = 0;
    fGlobalAlphaTemp = GLI_vGetGlobalAlpha();
    fCullingTransparency = GEO_xGetZFarTransparencyLevel();
    GLI_vSetGlobalAlpha(fCullingTransparency * _hSprObj->fTransparenceLevel);

    Global_CharacterModuleBeingDisplayed = (int)_hSprObj;

    lType = _hSprObj->ulTypeOfLinkedObject;
    if (lType == 8)
    {
        hVisualSet = PO_fn_hGetVisualSet(_hSprObj->hLinkedObject.p_stPhysicalObject);
        if (g_ucNbRLIUse == 0)
        {
            GLI_lSendVisualSetToViewportWithRLI2Flag(_hVpt, hVisualSet, 0, _lDrawMask, (void*)GLI_hGetRLI(hVisualSet, 0), _hSprObj->ulFlags);
        }
        else if (g_ucNbRLIUse == 1)
        {
            GLI_lSendVisualSetToViewportWithRLI2Flag(_hVpt, hVisualSet, 0, _lDrawMask, (void*)GLI_hGetRLI(hVisualSet, g_ucIndex1), _hSprObj->ulFlags);
        }
        else if (g_ucNbRLIUse == 2)
        {
            hRad = GLI_hComputeBlendRLI(hVisualSet, g_ucIndex1, g_ucIndex2, 0, g_xPercent);
            if (hRad)
            {
                GLI_lSendVisualSetToViewportWithRLI2Flag(_hVpt, hVisualSet, 0, _lDrawMask, hRad, _hSprObj->ulFlags);
                ISI_fn_vFreeISI(hRad);
            }
            else
            {
                GLI_lSendVisualSetToViewport2(_hVpt, hVisualSet, 0, _lDrawMask);
            }
        }
        else
        {
            GLI_lSendVisualSetToViewport2(_hVpt, hVisualSet, 0, _lDrawMask);
        }
    }
    else if (lType == 0x20)
    {
        hIPO = _hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject;
        g_lDisplayPriority = _hSprObj->lDisplayPrioriry;
        hRad = (void*)IPO_fn_hGetRadiosity(hIPO);
        GLI_lSendVisualSetToViewportWithRLI2(_hVpt, PO_fn_hGetVisualSet(IPO_fn_hGetPhysicalObject(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject)), 0, _lDrawMask, hRad);
    }
    else if (lType == 0x40)
    {
        if (bViewingInMirror)
        {
            hRad = (void*)IPO_fn_hGetRadiosity(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject);
            GLI_fn_vDrawMirror(1);
            GLI_lSendVisualSetToViewportWithRLI2(_hVpt, PO_fn_hGetVisualSet(IPO_fn_hGetPhysicalObject(_hSprObj->hLinkedObject.p_stInstanciatedPhysicalObject)), 0, _lDrawMask, hRad);
            GLI_fn_vDrawMirror(0);
        }
    }
    else if (lType & 0x480)
    {
        GLI_xSendObjectToViewportWithLights(_hVpt, _hSprObj->hLinkedObject.p_stGeometricObject, _lDrawMask);
    }
    else if (lType & 0x80000)
    {
        g_cDrawAModifier = 1;
        GLI_xSendObjectToViewportWithLights(_hVpt, _hSprObj->hLinkedObject.p_stModifierObject->p_stGeometricObject, _lDrawMask);
        g_cDrawAModifier = 0;
    }

    GLI_vSetGlobalAlpha(fGlobalAlphaTemp);
}
