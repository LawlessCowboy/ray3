/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\Collisio.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
#include "r3/CINE.h"
#include "r3/COL.h"
#include "r3/DNM.h"
#include "r3/FIL.h"
#include "r3/GMT.h"
#include "r3/HIE.h"
#include "r3/IPT.h"
#include "r3/MOR.h"
#include "r3/SAI.h"
#include "r3/SECT.h"
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;

int COL_g_lMaxNumberOfCollisions;
int COL_g_lNbElementsInTable;
int COL_g_stCollisionCaseReal;
unsigned char g_ucIsEdInGhostMode;

extern tdstEngineStructure_ g_stEngineStructure;
short TMR_fn_wInitLibrary(void);
short TMR_fn_wCreateTimer(short wTimerType);
/* The debug record says unsigned int (void), but callers pass a timer type
 * and divide the result with __udivdi3, so it returns a 64-bit count. */
unsigned long long fn_ulTimerTickPerSecond(short wTimerType);
PO_tdstPhysicalObject_* IPO_fn_hGetPhysicalObject(IPO_tdstInstanciatedPhysicalObject_* _hIPO);
tdstPhysicalCollSet_* PO_fn_hGetCollideSet(PO_tdstPhysicalObject_* _hPO);
COL_tdstCollideObject_* PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPCS);
unsigned char COL_fn_bDetectCollisionStaticGeomObjWithStaticGeomObj(COL_tdstBoundingSphere_* _hDynamicGeometricObject, MAT_tdstTransformation_* _p_stDynamicGeometricObjectMatrix, void* _hStaticGeometricObject, MAT_tdstTransformation_* _p_stStaticGeometricObjectMatrix, unsigned char _bStaticGeomObjHasNoTransformationMatrix, unsigned char _bDynamicGeomObjHasZoomInsteadOfScale, unsigned char _bHasABoxBoundingVolume);
void COL_fn_vCollideStaticGeomObj1WithStaticGeomObj2(COL_tdstCollideObject_* _hGeometricObject1, MAT_tdstTransformation_* _p_stGeometricObjectStartMatrix1, MAT_tdstTransformation_* _p_stGeometricObjectEndMatrix1, COL_tdstCollideObject_* _hGeometricObject2, MAT_tdstTransformation_* _p_stGeometricObjectMatrix2, void* _p_vParameter1, short _sParameter2, unsigned char _bStaticGeomObjHasNoTransformationMatrix, unsigned char _bDynamicGeomObjHasZoomInsteadOfScale);
COL_tdstCollideObject_* fn_hStaticMakeOneObjectFromManyZdx(unsigned char _ucZoneType, HIE_tdstSuperObject_* _hCharacter);
short COL_xGetCollideObjectNumberOfPoints(COL_tdstCollideObject_* hObject);
COL_tdstCollideObject_* PCS_fn_hGetGeoObjOfPhysicalCollSet(unsigned char ucZoneType, tdstPhysicalCollSet_* _hPhyCollSet);
unsigned char CS_fn_ucGetCharacterPriority(tdstCollSet_* _hCollSet);
extern unsigned char fn_ucIsAnAlwaysObject(tdstEngineObject_* p_stObject);
extern unsigned int fn_ulStandardGameGetCustomBitsSO(HIE_tdstSuperObject_* _hSupObj);
unsigned char fn_bCollSetGetCharacterNoCollisionWithProjectile(tdstCollSet_* _hCollSet);
unsigned char fn_bCollSetGetCharacterNoCollisionWithMainCharacter(tdstCollSet_* _hCollSet);
unsigned char fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(tdstCollSet_* _hCollSet);
extern HIE_tdstSuperObject_* MC_fn_hGetCharacterInMainCharacterNode(tdstNodeMainCharacter_* hMainCharNode);
extern tdstNodeMainCharacter_* MC_fn_hGetFirstMainCharNode(void);
COL_tdstCollideObject_* fn_hMakeOneObjectFromManyZdx(unsigned char _ucZoneType, HIE_tdstSuperObject_* _hCharacter);
unsigned char SECT_fn_bIsThisSectorVirtual(HIE_tdstSuperObject_* _hSprObjSector);
unsigned char fn_bCollSetGetCharacterNoCollisionWithOtherSectors(tdstCollSet_* _hCollSet);
unsigned char fn_bCollSetGetCharacterNoCollisionWithMap(tdstCollSet_* _hCollSet);
extern void* memcpy(void*, const void*, unsigned int);

/* R5900 accumulator norm, as in Sector.c (mula/madda/madd + sqrt.s). */
inline float MTH3D_M_xNorm3(float xX, float xY, float xZ)
{
    float xResult;
    asm { mula.s xX, xX }
    asm { madda.s xY, xY }
    asm { madd.s xResult, xZ, xZ }
    asm { sqrt.s xResult, xResult }
    return xResult;
}

/* The functions below are in their original source-line order (retail
 * emits them in reverse); these prototypes keep earlier calls valid. */
void fn_vFirstInitEngineClock(void);
void COL_fn_vStaticCollisionWithPartOfTreeForSector(HIE_tdstSuperObject_* _p_stEngineObj, HIE_tdstSuperObject_* _p_stSuperObj, COL_tdstCollideObject_* _p_stDynamicGeoColl, MAT_tdstTransformation_* _p_stStartMatrix, MAT_tdstTransformation_* _p_stEndMatrix);
void COL_fn_vNewStaticCollisionForCharacter(HIE_tdstSuperObject_* _hCharacter, HIE_tdstSuperObject_* _hSector, MAT_tdstTransformation_* _p_stStartMatrix, MAT_tdstTransformation_* _p_stEndMatrix);
void fn_vNewTestStaticCollideFor2Characters(HIE_tdstSuperObject_* hCharacter, COL_tdstCollideObject_* _hDynamicZdm, HIE_tdstSuperObject_* hStaticCharacter, MAT_tdstTransformation_* p_stStartMatrix, MAT_tdstTransformation_* p_stEndMatrix);

/* Same channel-module helper as ZdxStuff.c: retail leaves the then-arm's
 * branch delay slot empty and pads the else label, as for an inlined call. */
inline HIE_tdstSuperObject_* fn_hGetChannelModule(tdstAChannel_* _hChannel)
{
    return _hChannel->hZoomSupObject ? _hChannel->hZoomSupObject : _hChannel->hSupObject;
}

void fn_vNewTestStaticCollideFor2Characters(HIE_tdstSuperObject_* hCharacter, COL_tdstCollideObject_* _hDynamicZdm, HIE_tdstSuperObject_* hStaticCharacter, MAT_tdstTransformation_* p_stStartMatrix, MAT_tdstTransformation_* p_stEndMatrix)
{
    COL_tdstCollideObject_* hStaticZdr;
    HIE_tdstSuperObject_* hMainChar;
    tdstCollSet_* hDynamicCollSet;
    tdstCollSet_* hStaticCollSet;
    tdstAChannel_* hChannel;
    COL_tdstBoundingSphere_* hBoundingVolumeStaticCharacter;
    COL_tdstBoundingSphere_* hBoundingVolumeCharacter;

    if ((unsigned char)((hStaticCharacter->hLinkedObject.p_stCharacter->h_StandardGame->ucMiscFlags & 0x4) ? 1 : 0) != 1)
        return;

    if (hStaticCharacter->ulFlags & 0x1)
        return;

    hDynamicCollSet = hCharacter->hLinkedObject.p_stCharacter->h_CollSet;
    hStaticCollSet = hStaticCharacter->hLinkedObject.p_stCharacter->h_CollSet;

    if (CS_fn_ucGetCharacterPriority(hDynamicCollSet) < (hStaticCollSet ? CS_fn_ucGetCharacterPriority(hStaticCollSet) : 0))
        return;

    hMainChar = MC_fn_hGetCharacterInMainCharacterNode(MC_fn_hGetFirstMainCharNode());

    if (hDynamicCollSet)
    {
        if (fn_bCollSetGetCharacterNoCollisionWithProjectile(hDynamicCollSet) && (fn_ulStandardGameGetCustomBitsSO(hStaticCharacter) & 0x8))
            return;

        if (hStaticCharacter == hMainChar)
        {
            if (fn_bCollSetGetCharacterNoCollisionWithMainCharacter(hDynamicCollSet))
                return;
        }
        else if (fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(hDynamicCollSet) && !fn_ucIsAnAlwaysObject(hStaticCharacter->hLinkedObject.p_stCharacter))
            return;
    }

    if (hStaticCollSet)
    {
        if (fn_bCollSetGetCharacterNoCollisionWithProjectile(hStaticCollSet) && (fn_ulStandardGameGetCustomBitsSO(hCharacter) & 0x8))
            return;

        if (hMainChar == hCharacter)
        {
            if (fn_bCollSetGetCharacterNoCollisionWithMainCharacter(hStaticCollSet))
                return;
        }
        else if (fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(hStaticCollSet) && !fn_ucIsAnAlwaysObject(hCharacter->hLinkedObject.p_stCharacter))
            return;
    }

    hBoundingVolumeCharacter = (COL_tdstBoundingSphere_*)hCharacter->hCollideBoundingVolume;
    hBoundingVolumeStaticCharacter = (COL_tdstBoundingSphere_*)hStaticCharacter->hCollideBoundingVolume;
    if (hBoundingVolumeCharacter && hBoundingVolumeStaticCharacter)
    {
        if (!COL_fn_bDetectCollisionStaticGeomObjWithStaticGeomObj(hBoundingVolumeCharacter, p_stEndMatrix, hBoundingVolumeStaticCharacter, hStaticCharacter->hGlobalMatrix, (unsigned char)(hStaticCharacter->ulFlags & 0x4), (unsigned char)(hCharacter->ulFlags & 0x8), 0))
            return;
    }

    if (hStaticCollSet)
    {
        hStaticZdr = fn_hStaticMakeOneObjectFromManyZdx(3, hStaticCharacter);
        if ((unsigned char)(COL_xGetCollideObjectNumberOfPoints(hStaticZdr) >= 1))
        {
            COL_fn_vCollideStaticGeomObj1WithStaticGeomObj2(_hDynamicZdm, p_stStartMatrix, p_stEndMatrix, hStaticZdr, hStaticCharacter->hGlobalMatrix, hStaticCharacter, 1, (unsigned char)(hStaticCharacter->ulFlags & 0x4), (unsigned char)(hCharacter->ulFlags & 0x8));
        }
    }

    hChannel = hStaticCharacter->hLinkedObject.p_stCharacter->h_3dData->hFirstActiveChannel;
    while (hChannel)
    {
        hStaticCharacter = fn_hGetChannelModule(hChannel);

        if (hStaticCharacter->ulTypeOfLinkedObject == 8 && !(hStaticCharacter->ulFlags & 0x2))
        {
            /* Retail puts this whole block on one source line (442). */
            tdstPhysicalCollSet_* hPhyCollSet = PO_fn_hGetCollideSet(hStaticCharacter->hLinkedObject.p_stPhysicalObject);
            if (hPhyCollSet)
            {
                hStaticZdr = PCS_fn_hGetGeoObjOfPhysicalCollSet(3, hPhyCollSet);
                if (hStaticZdr)
                    COL_fn_vCollideStaticGeomObj1WithStaticGeomObj2(_hDynamicZdm, p_stStartMatrix, p_stEndMatrix, hStaticZdr, hStaticCharacter->hGlobalMatrix, hStaticCharacter, 1, (unsigned char)(hStaticCharacter->ulFlags & 0x4), (unsigned char)(hCharacter->ulFlags & 0x8));
            }
        }
        hChannel = hChannel->p_stNextActiveChannel;
    }
}

void COL_fn_vNewStaticCollisionForCharacter(HIE_tdstSuperObject_* _hCharacter, HIE_tdstSuperObject_* _hSector, MAT_tdstTransformation_* _p_stStartMatrix, MAT_tdstTransformation_* _p_stEndMatrix)
{
    int i;
    /* Not in the retail debug locals (likely a nested block); this order
     * gives retail's float registers. */
    float xDX;
    float xDY;
    float xDZ;
    float xBackupSphereRadius;
    COL_tdstParallelBox_ stBackupParallelBox;
    COL_tdstBoundingSphere_* hBoundingSphereStatic;
    COL_tdstParallelBox_* hParallelBoxStatic;
    COL_tdstCollideObject_* hDynamicZDM;
    SECT_tdstListOfSOSectorsInCollisionInteraction_* hCollisionList;
    SECT_tdstListOfSOCharacters_* hCharacterList;
    tdstCollSet_* hCollSet;
    HIE_tdstSuperObject_* hOtherSector;

    xBackupSphereRadius = 1.0f;

    hDynamicZDM = fn_hMakeOneObjectFromManyZdx(1, _hCharacter);

    hCollSet = _hCharacter->hLinkedObject.p_stCharacter->h_CollSet;

    xDX = _p_stEndMatrix->stTransformMatrix.stCol_3.xX - _p_stStartMatrix->stTransformMatrix.stCol_3.xX;
    xDY = _p_stEndMatrix->stTransformMatrix.stCol_3.xY - _p_stStartMatrix->stTransformMatrix.stCol_3.xY;
    xDZ = _p_stEndMatrix->stTransformMatrix.stCol_3.xZ - _p_stStartMatrix->stTransformMatrix.stCol_3.xZ;

    if ((unsigned char)(_hCharacter->ulFlags & 0x10))
    {
        hParallelBoxStatic = (COL_tdstParallelBox_*)_hCharacter->hCollideBoundingVolume;
        memcpy(&stBackupParallelBox, hParallelBoxStatic, sizeof(COL_tdstParallelBox_));
        if (xDX > 0.0f)
            hParallelBoxStatic->stMaxPoint.xX += xDX;
        else
            hParallelBoxStatic->stMinPoint.xX += xDX;

        if (xDY > 0.0f)
            hParallelBoxStatic->stMaxPoint.xY += xDY;
        else
            hParallelBoxStatic->stMinPoint.xY += xDY;

        if (xDZ > 0.0f)
            hParallelBoxStatic->stMaxPoint.xZ += xDZ;
        else
            hParallelBoxStatic->stMinPoint.xZ += xDZ;
    }
    else
    {
        hBoundingSphereStatic = (COL_tdstBoundingSphere_*)_hCharacter->hCollideBoundingVolume;
        xBackupSphereRadius = hBoundingSphereStatic->xRadius;
        hBoundingSphereStatic->xRadius = xBackupSphereRadius + MTH3D_M_xNorm3(xDX, xDY, xDZ);
    }

    if (!(fn_bCollSetGetCharacterNoCollisionWithProjectile(hCollSet) && fn_bCollSetGetCharacterNoCollisionWithSecondaryCharacter(hCollSet) && fn_bCollSetGetCharacterNoCollisionWithMainCharacter(hCollSet)))
    {
        for (i = 0, hCharacterList = _hSector->hLinkedObject.p_stSector->stListOfCharacters.hFirstElementDyn; hCharacterList; hCharacterList = hCharacterList->hNextBrotherDyn, i++)
        {
            if (_hCharacter != hCharacterList->hPointerOfCharacter)
                fn_vNewTestStaticCollideFor2Characters(_hCharacter, hDynamicZDM, hCharacterList->hPointerOfCharacter, _p_stStartMatrix, _p_stEndMatrix);
        }

        if (!fn_bCollSetGetCharacterNoCollisionWithOtherSectors(hCollSet))
        {
            for (i = _hSector->hLinkedObject.p_stSector->stListOfSectorsInCollisionInteraction.lNumberOfElementsOpt, hCollisionList = _hSector->hLinkedObject.p_stSector->stListOfSectorsInCollisionInteraction.hFirstElementOpt; i > 0; i--, hCollisionList++)
            {
                for (hCharacterList = hCollisionList->hPointerOfSectorSO->hLinkedObject.p_stSector->stListOfCharacters.hFirstElementDyn; hCharacterList; hCharacterList = hCharacterList->hNextBrotherDyn)
                {
                    if (_hCharacter != hCharacterList->hPointerOfCharacter)
                        fn_vNewTestStaticCollideFor2Characters(_hCharacter, hDynamicZDM, hCharacterList->hPointerOfCharacter, _p_stStartMatrix, _p_stEndMatrix);
                }
            }
        }
    }

    if (!fn_bCollSetGetCharacterNoCollisionWithMap(hCollSet) && !SECT_fn_bIsThisSectorVirtual(_hSector))
    {
        COL_fn_vStaticCollisionWithPartOfTreeForSector(_hCharacter, _hSector, hDynamicZDM, _p_stStartMatrix, _p_stEndMatrix);

        if (!fn_bCollSetGetCharacterNoCollisionWithOtherSectors(hCollSet))
        {
            for (i = _hSector->hLinkedObject.p_stSector->stListOfSectorsInCollisionInteraction.lNumberOfElementsOpt, hCollisionList = _hSector->hLinkedObject.p_stSector->stListOfSectorsInCollisionInteraction.hFirstElementOpt; i > 0; i--, hCollisionList++)
            {
                hOtherSector = hCollisionList->hPointerOfSectorSO;
                if (!SECT_fn_bIsThisSectorVirtual(hOtherSector))
                    COL_fn_vStaticCollisionWithPartOfTreeForSector(_hCharacter, hOtherSector, hDynamicZDM, _p_stStartMatrix, _p_stEndMatrix);
            }
        }
    }

    if ((unsigned char)(_hCharacter->ulFlags & 0x10))
        memcpy((COL_tdstParallelBox_*)_hCharacter->hCollideBoundingVolume, &stBackupParallelBox, sizeof(COL_tdstParallelBox_));
    else
        ((COL_tdstBoundingSphere_*)_hCharacter->hCollideBoundingVolume)->xRadius = xBackupSphereRadius;
}

void COL_fn_vStaticCollisionWithPartOfTreeForSector(HIE_tdstSuperObject_* _p_stEngineObj, HIE_tdstSuperObject_* _p_stSuperObj, COL_tdstCollideObject_* _p_stDynamicGeoColl, MAT_tdstTransformation_* _p_stStartMatrix, MAT_tdstTransformation_* _p_stEndMatrix)
{
    void* hBoundingVolumeStatic;
    COL_tdstBoundingSphere_* hBoundingVolumeCharacter;
    tdstPhysicalCollSet_* hPhyCollSet;
    PO_tdstPhysicalObject_* hPhysicalObject;
    COL_tdstCollideObject_* p_stStaticGeoColl;
    HIE_tdstSuperObject_* pChild;

    if (_p_stSuperObj->ulFlags & 0x1)
        return;

    hBoundingVolumeCharacter = (COL_tdstBoundingSphere_*)_p_stEngineObj->hCollideBoundingVolume;
    if ((unsigned char)(_p_stSuperObj->ulFlags & 0x10))
    {
        hBoundingVolumeStatic = (void*)_p_stSuperObj->hCollideBoundingVolume;
    }
    else
    {
        hBoundingVolumeStatic = (void*)_p_stSuperObj->hCollideBoundingVolume;
    }

    if (hBoundingVolumeCharacter && hBoundingVolumeStatic)
    {
        if (!COL_fn_bDetectCollisionStaticGeomObjWithStaticGeomObj(hBoundingVolumeCharacter, _p_stEndMatrix, hBoundingVolumeStatic, _p_stSuperObj->hGlobalMatrix, (unsigned char)(_p_stSuperObj->ulFlags & 0x4), (unsigned char)(_p_stEngineObj->ulFlags & 0x8), (unsigned char)(_p_stSuperObj->ulFlags & 0x10)))
        {
            if (!(unsigned char)((_p_stSuperObj->ulFlags & 0x200) >> 8))
                return;

            for (pChild = _p_stSuperObj->hFirstElementDyn; pChild; pChild = pChild->hNextBrotherDyn)
            {
                COL_fn_vStaticCollisionWithPartOfTreeForSector(_p_stEngineObj, pChild, _p_stDynamicGeoColl, _p_stStartMatrix, _p_stEndMatrix);
            }
            return;
        }
    }

    if (_p_stSuperObj->ulTypeOfLinkedObject & 0x60)
    {
        hPhysicalObject = IPO_fn_hGetPhysicalObject(_p_stSuperObj->hLinkedObject.p_stInstanciatedPhysicalObject);
        hPhyCollSet = PO_fn_hGetCollideSet(hPhysicalObject);
        if (hPhyCollSet)
        {
            p_stStaticGeoColl = PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(hPhyCollSet);
            COL_fn_vCollideStaticGeomObj1WithStaticGeomObj2(_p_stDynamicGeoColl, _p_stStartMatrix, _p_stEndMatrix, p_stStaticGeoColl, _p_stSuperObj->hGlobalMatrix, _p_stSuperObj, 0, (unsigned char)(_p_stSuperObj->ulFlags & 0x4), (unsigned char)(_p_stEngineObj->ulFlags & 0x8));
        }
    }

    for (pChild = _p_stSuperObj->hFirstElementDyn; pChild; pChild = pChild->hNextBrotherDyn)
    {
        COL_fn_vStaticCollisionWithPartOfTreeForSector(_p_stEngineObj, pChild, _p_stDynamicGeoColl, _p_stStartMatrix, _p_stEndMatrix);
    }
}

void fn_vFirstInitEngineClock(void)
{

    TMR_fn_wInitLibrary();

    g_stEngineStructure.stEngineTimer.sTimerHandle = TMR_fn_wCreateTimer(1);
    g_stEngineStructure.stEngineTimer.ulTickPerMS = fn_ulTimerTickPerSecond(1) / 1000;
}
