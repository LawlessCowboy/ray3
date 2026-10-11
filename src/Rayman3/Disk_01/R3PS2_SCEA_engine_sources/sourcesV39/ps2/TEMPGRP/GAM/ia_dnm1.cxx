/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ia_dnm1.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct DNM_stDynamics DNM_stDynamics;
typedef struct DNM_stReport DNM_stReport;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct DNM_stObstacle DNM_stObstacle;
typedef struct tdstEngineObject_ tdstEngineObject_;

/* Layouts as in DNMCame.c; parts this unit does not use are padding. */
struct DNM_stObstacle {
    float m_xRate; /* +0x0 */
    float m_stNorm[3]; /* +0x4 */
    float m_stContact[3]; /* +0x10 */
    void* hMyMaterial; /* +0x1c */
    void* hCollidedMaterial; /* +0x20 */
    HIE_tdstSuperObject_* mp_stSupObj; /* +0x24 */
};

struct DNM_stReport {
    unsigned int m_ulPrevSurfaceState; /* +0x0 */
    unsigned int m_ulCurrSurfaceState; /* +0x4 */
    DNM_stObstacle m_stObstacle; /* +0x8 */
    DNM_stObstacle m_stGround; /* +0x30 */
    DNM_stObstacle m_stWall; /* +0x58 */
    DNM_stObstacle m_stCharacter; /* +0x80 */
};

struct DNM_stDynamics {
    unsigned char a_ucBaseBlockAndOthers[0x168]; /* +0x0 */
    DNM_stReport* m_pstReport; /* +0x168 */
};

struct tdstEngineObject_ {
    void* h3dData; /* +0x0 */
    void* hStandardGame; /* +0x4 */
    tdstDynam_* h_Dynam; /* +0x8 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulType; /* +0x0 */
    struct { tdstEngineObject_* p_stCharacter; } hLinkedObject; /* +0x4 */
    HIE_tdstSuperObject_* hFirstChildDyn; /* +0x8 */
    HIE_tdstSuperObject_* hLastChildDyn; /* +0xc */
    int lNumberOfChildrenDyn; /* +0x10 */
    HIE_tdstSuperObject_* hNextBrotherDyn; /* +0x14 */
    HIE_tdstSuperObject_* hPrevBrotherDyn; /* +0x18 */
    HIE_tdstSuperObject_* hFatherDyn; /* +0x1c */
};

extern "C" DNM_stDynamics* fn_p_stDynamGetDynamics(tdstDynam_* h_Dynam);

HIE_tdstSuperObject_* fn_hSuperObjectGetLastCollidedCharacter(HIE_tdstSuperObject_* hCharacter)
{
    HIE_tdstSuperObject_* p_stObjectCollided;
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    DNM_stReport* p_stDynamReport;

    h_Dynam = hCharacter->hLinkedObject.p_stCharacter->h_Dynam;
    if (!h_Dynam)
        return NULL;
    p_stDynamics = fn_p_stDynamGetDynamics(h_Dynam);
    if (!p_stDynamics)
        return NULL;
    p_stDynamReport = p_stDynamics->m_pstReport;
    if (!p_stDynamReport)
        return NULL;

    for (p_stObjectCollided = p_stDynamReport->m_stCharacter.mp_stSupObj;
         p_stObjectCollided && (p_stObjectCollided->ulType != 2);
         p_stObjectCollided = p_stObjectCollided->hFatherDyn)
        ;
    if (p_stObjectCollided && (p_stObjectCollided->hLinkedObject.p_stCharacter->hStandardGame == NULL))
    {
        p_stDynamReport->m_stCharacter.mp_stSupObj = NULL;
        p_stObjectCollided = NULL;
    }
    return p_stObjectCollided;
}

void fn_vSuperObjectSetLastCollidedCharacter(HIE_tdstSuperObject_* hCharacter, HIE_tdstSuperObject_* _h_LastCollidedCharacter)
{
    DNM_stDynamics* p_stDynamics;
    tdstDynam_* h_Dynam;
    DNM_stReport* p_stDynamReport;

    h_Dynam = hCharacter->hLinkedObject.p_stCharacter->h_Dynam;
    if (h_Dynam)
    {
        p_stDynamics = fn_p_stDynamGetDynamics(h_Dynam);
        if (p_stDynamics)
        {
            p_stDynamReport = p_stDynamics->m_pstReport;
            if (p_stDynamReport)
            {
                p_stDynamReport->m_stCharacter.mp_stSupObj = _h_LastCollidedCharacter;
                if (_h_LastCollidedCharacter == NULL)
                    p_stDynamReport->m_ulCurrSurfaceState &= ~0x00010000;
            }
        }
    }
}
