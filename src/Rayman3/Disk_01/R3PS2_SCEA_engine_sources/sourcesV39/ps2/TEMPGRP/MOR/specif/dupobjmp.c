/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\MOR\specif\dupobjmp.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/ENG.h"
#include "r3/COL.h"
#include "r3/MOR.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;

void Mmg_fn_cCheckAlignmentValidity(void)
{
    /* TODO: decompile from asm/... */
}

void HMU_fn_vFree(void** p_vPointer, unsigned char bTempMalloc);

void MOR_fn_vDeleteGeometricObject(GEO_tdstGeometricObject_** p_hObj);
void MOR_fn_vDeletePhysicalObject(PO_tdstPhysicalObject_* _pPhysicalObject)
{
    short i;

    for (i = 0; i < _pPhysicalObject->_hVisualSet->xNbLodDefinitions; i++)
        MOR_fn_vDeleteGeometricObject((GEO_tdstGeometricObject_**)&_pPhysicalObject->_hVisualSet->d_p_stLodDefinitions[i]);
    HMU_fn_vFree((void**)&_pPhysicalObject->_hVisualSet->d_xThresholdsTable, 1);
    HMU_fn_vFree((void**)&_pPhysicalObject->_hVisualSet->d_p_stLodDefinitions, 1);
    HMU_fn_vFree((void**)&_pPhysicalObject->_hVisualSet, 1);
    HMU_fn_vFree((void**)&_pPhysicalObject, 1);
}

void GLI_DRV_vFreeVertexBuffersForElementsInObject(GEO_tdstGeometricObject_* pObj, int lFlag);

void MOR_fn_vDeleteGeometricObject(GEO_tdstGeometricObject_** p_hObj)
{
    GEO_tdstGeometricObject_* p_hObject;
    int lElementCounter;

    p_hObject = *p_hObj;
    p_hObject->d_stListOfEdgesDI = NULL;
    p_hObject->xNbEdgesDI = 0;
    GLI_DRV_vFreeVertexBuffersForElementsInObject(p_hObject, 0);
    for (lElementCounter = 0; lElementCounter < p_hObject->xNbElements; lElementCounter++)
    {
        switch (((short*)p_hObject->d_xListOfElementsTypes)[lElementCounter])
        {
        case 5:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 6:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 2:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 3:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 7:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 8:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 9:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 4:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 1:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        case 12:
            HMU_fn_vFree(&((void**)p_hObject->d_stListOfElements)[lElementCounter], 1);
            break;
        }
    }
    HMU_fn_vFree((void**)&p_hObject->d_stListOfPoints, 1);
    HMU_fn_vFree((void**)&p_hObject->d_xListOfElementsTypes, 1);
    HMU_fn_vFree((void**)&p_hObject->d_stListOfElements, 1);
    if (p_hObject->xNbEdges)
        HMU_fn_vFree((void**)&p_hObject->d_stListOfEdges, 1);
    HMU_fn_vFree((void**)&p_hObject, 1);
    *p_hObj = NULL;
}
