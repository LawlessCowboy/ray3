/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MOR_stMorphStruct_ MOR_stMorphStruct_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;
typedef struct GEO_tdstVisualSet_ GEO_tdstVisualSet_;
typedef struct GEO_tdstGeometricObject_ GEO_tdstGeometricObject_;
typedef struct COL_tdstBoundingSphere_ COL_tdstBoundingSphere_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdst3dData_ tdst3dData_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstObjectsTableElement_ tdstObjectsTableElement_;
typedef struct LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;

struct tdstPhysicalCollSet_ {
    COL_tdstCollideObject_* hZdm; /* +0x0 */
    COL_tdstCollideObject_* hZdd; /* +0x4 */
    COL_tdstCollideObject_* hZde; /* +0x8 */
    COL_tdstCollideObject_* hZdr; /* +0xc */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

struct COL_tdstBoundingSphere_ {
    MTH4D_tdstVector_ stCenterPoint; /* +0x0 */
    float xRadius; /* +0x10 */
};

struct GEO_tdstVisualSet_ {
    float xLastDistance; /* +0x0 */
    short xNbLodDefinitions; /* +0x4 */
    short xType; /* +0x6 */
    float* d_xThresholdsTable; /* +0x8 */
    GEO_tdstGeometricObject_** d_p_stLodDefinitions; /* +0xc */
};

struct GEO_tdstGeometricObject_ {
    unsigned char _extractor_padding_00[0x20]; /* implicitly added by extractor; +0x0..0x1f */
    short xNbPoints; /* +0x20 */
};

struct tdstObjectsTableElement_ {
    MTH3D_tdstVector_* p_stCustomZoom; /* +0x0 */
    int h_Target; /* +0x4 */
    unsigned int uwChannelNumber; /* +0x8 */
    unsigned short wTypeOfTarget; /* +0xc */
    unsigned char ucPhoneme; /* +0xe */
    unsigned char ucIntensity; /* +0xf */
    unsigned char ucExpression; /* +0x10 */
};

struct tdstObjectsTablesList_ {
    tdstObjectsTableElement_* d_stObjectsTable; /* +0x0 */
};

struct tdst3dData_ {
    unsigned char _extractor_padding_00[0x10]; /* implicitly added by extractor; +0x0..0xf */
    tdstObjectsTablesList_* h_CurrentObjectsTable; /* +0x10 */
    unsigned char _extractor_padding_01[0xc4]; /* implicitly added by extractor; +0x14..0xd7 */
    LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphChannelList; /* +0xd8 */
};

struct tdstEngineObject_ {
    tdst3dData_* h_3dData; /* +0x0 */
};

union HIE_tduLinkedObject_ {
    PO_tdstPhysicalObject_* p_stPhysicalObject; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
    int p_Void; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
};

struct PO_tdstPhysicalObject_ {
    GEO_tdstVisualSet_* _hVisualSet; /* +0x0 */
    tdstPhysicalCollSet_* _hCollideSet; /* +0x4 */
    COL_tdstBoundingSphere_* _hVisualBoundingVolume; /* +0x8 */
    COL_tdstBoundingSphere_* _hCollideBoundingVolume; /* +0xc */
};

struct MOR_stMorphStruct_ {
    unsigned char bInUse; /* +0x0 */
    HIE_tdstSuperObject_* hActorSuperObject; /* +0x4 */
    short xStartIndexInObjectTable; /* +0x8 */
    short axEndIndexInObjectTable[10]; /* +0xa */
    unsigned char ucMorphType; /* +0x1e */
    unsigned char ucbMarkedForTermination; /* +0x1f */
    int iNbMillisecond; /* +0x20 */
    short xChannelIndex; /* +0x24 */
    unsigned char ucNbTarget; /* +0x26 */
    float axStart[10]; /* +0x28 */
    float axEnd[10]; /* +0x50 */
    float axCurrent[10]; /* +0x78 */
    PO_tdstPhysicalObject_* pOriginalPhysicalObject; /* +0xa0 */
    PO_tdstPhysicalObject_* pMorphedPhysicalObject; /* +0xa4 */
};

extern MOR_stMorphStruct_ g_MorphTasksList[50];

extern short fn_hMorphListIndex(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphList, short uwChannel);
extern void fn_vPutMorphElementInChannel(LST2_tdstAnchorToCHN_tdxHandleToMorphElementDyn* hMorphList, unsigned short uwChannel, short IndexOfMorphList);
extern void fn_vPushAllocModeAccordingToObject(HIE_tdstSuperObject_* hSuperObject);
extern void GAM_fn_vPopAllocMode(void);
extern void* HMU_fn_p_vMalloc(unsigned int ulSize, unsigned char ucMode);
extern int GLI_lGetVisualSetNumbertOfLOD(GEO_tdstVisualSet_* p_stVisualSet);
extern GEO_tdstVisualSet_* GLI_p_stCreateTMPVisualSet(int lNbLOD);
extern GEO_tdstGeometricObject_* GLI_hGetVisualSetGeometricForADistance(GEO_tdstVisualSet_* p_stVSE, float xThreshold);
extern GEO_tdstGeometricObject_* MOR_fn_xCopyGeometricObjectForMorph(GEO_tdstGeometricObject_* hObject1);

extern int printf(const char* format, ...);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 162–312 */
/* addr: 0x003178f0  size: 1596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x003c -> line 176
 *   +0x0040 -> line 165
 *   +0x004c -> line 176
 *   +0x0080 -> line 179
 *   +0x00fc -> line 176
 *   +0x0104 -> line 180
 *   +0x0108 -> line 179
 *   +0x010c -> line 180
 *   +0x0110 -> line 179
 *   +0x011c -> line 180
 *   +0x0138 -> line 183
 *   +0x015c -> line 184
 *   +0x0198 -> line 185
 *   +0x01a0 -> line 188
 *   +0x01b4 -> line 190
 *   +0x01c0 -> line 192
 *   +0x01c8 -> line 193
 *   +0x01d4 -> line 195
 *   +0x01f8 -> line 196
 *   +0x021c -> line 199
 *   +0x0220 -> line 200
 *   +0x0224 -> line 199
 *   +0x0258 -> line 200
 *   +0x0260 -> line 202
 *   +0x028c -> line 204
 *   +0x02a8 -> line 205
 *   +0x02b0 -> line 207
 *   +0x02b8 -> line 209
 *   +0x02e8 -> line 213
 *   +0x0320 -> line 216
 *   +0x0328 -> line 218
 *   +0x0354 -> line 219
 *   +0x0358 -> line 218
 *   +0x035c -> line 219
 *   +0x0374 -> line 229
 *   +0x0378 -> line 223
 *   +0x0384 -> line 229
 *   +0x0388 -> line 223
 *   +0x0398 -> line 224
 *   +0x039c -> line 223
 *   +0x03a4 -> line 234
 *   +0x03a8 -> line 223
 *   +0x03ac -> line 224
 *   +0x03b4 -> line 227
 *   +0x03bc -> line 228
 *   +0x03c0 -> line 229
 *   +0x03c4 -> line 231
 *   +0x03cc -> line 232
 *   +0x03d0 -> line 234
 *   +0x03d8 -> line 236
 *   +0x03e0 -> line 240
 *   +0x03e4 -> line 237
 *   +0x03e8 -> line 239
 *   +0x03ec -> line 240
 *   +0x03f0 -> line 237
 *   +0x03f8 -> line 238
 *   +0x03fc -> line 236
 *   +0x0400 -> line 238
 *   +0x0404 -> line 237
 *   +0x0408 -> line 239
 *   +0x040c -> line 237
 *   +0x0410 -> line 238
 *   +0x0418 -> line 239
 *   +0x0420 -> line 240
 *   +0x0434 -> line 241
 *   +0x0438 -> line 247
 *   +0x043c -> line 241
 *   +0x0440 -> line 247
 *   +0x0448 -> line 251
 *   +0x0458 -> line 254
 *   +0x045c -> line 257
 *   +0x0470 -> line 258
 *   +0x0480 -> line 259
 *   +0x048c -> line 262
 *   +0x0494 -> line 266
 *   +0x049c -> line 267
 *   +0x04c8 -> line 269
 *   +0x04e0 -> line 271
 *   +0x04f8 -> line 272
 *   +0x0500 -> line 275
 *   +0x0508 -> line 276
 *   +0x0514 -> line 279
 *   +0x051c -> line 280
 *   +0x0524 -> line 282
 *   +0x0528 -> line 285
 *   +0x0548 -> line 286
 *   +0x0550 -> line 288
 *   +0x0554 -> line 291
 *   +0x055c -> line 295
 *   +0x0568 -> line 297
 *   +0x058c -> line 298
 *   +0x05a8 -> line 299
 *   +0x05b4 -> line 298
 *   +0x05c4 -> line 299
 *   +0x05e4 -> line 302
 *   +0x05fc -> line 305
 *   +0x0604 -> line 311
 *   +0x060c -> line 312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Reconstruction notes:
 * - The retail keeps _xStartIndexInObjectTable in its parameter home slot and
 *   reloads it at both use points; 'volatile' reproduces that memory-resident
 *   handling (and the retail's 0x100 frame).  A plain 'short' parameter is
 *   kept in a register across the calls and no longer matches.
 * - The retail debug record for this function lists the parameters
 *   (_hActorSuperObject .. _xChannelIndex) and the locals uc, pNewPhysicalObject,
 *   pEndPhysicalObject, pStartPhysicalObject, mp, xFreePosition, j and
 *   xMorphListIndex; there is no uwChannel, so the (unsigned short) cast of
 *   _xChannelIndex is written as an assignment expression inside the
 *   fn_hMorphListIndex argument (MWCC then spills the cast value to 0xd0(sp)
 *   and reloads it with lhu for fn_vPutMorphElementInChannel, exactly as the
 *   retail does).
 * - The objects table element's +4 field (h_Target) is the physical object
 *   POINTER: the retail loads the field value, not its address.  The retail
 *   addresses it as (base+4)+index*20 with the load at +0, i.e. the member
 *   offset is not folded into the load displacement; the pointer-to-field
 *   spelling '((char*)&table[0].h_Target + index*sizeof(elem))' reproduces
 *   that, while table[index].h_Target folds the +4 into the load.  The loop
 *   body keeps the folded form in the retail, so only the two straight-line
 *   accesses use the idiom.
 * - TODO: the remaining residual is MWCC instruction scheduling, not source
 *   shape: the candidate is now the exact retail size (1596 bytes) with all
 *   26 relocations resolved, but the retail evaluates the start-index
 *   expression before the object-table chain (+0x21e) and reloads the volatile
 *   _xStartIndexInObjectTable at the top of the morph-task setup block
 *   (+0x374) where MWCC keeps it next to its use.  65 of 399 instructions
 *   still differ, all of them the same instructions in a different order.
 */
short MOR_fn_xPrepareMorph(HIE_tdstSuperObject_* _hActorSuperObject, volatile short _xStartIndexInObjectTable, short* _axEndIndexInObjectTable, unsigned char _ucNbTarget, int _iNbMillisecond, float* _axStart, float* _axEnd, unsigned char _ucMorphType, short _xChannelIndex)
{
    unsigned char uc;
    short j;
    short xFreePosition;
    int iNbTarget;
    short xMorphListIndex;
    MOR_stMorphStruct_* mp;
    PO_tdstPhysicalObject_* pStartPhysicalObject;
    PO_tdstPhysicalObject_* pEndPhysicalObject;
    PO_tdstPhysicalObject_* pNewPhysicalObject;
    int iFreePosition;
    unsigned short uwChannel;
    short iIndex;

    iNbTarget = _ucNbTarget;
    xFreePosition = -1;

    for (uc = 0; uc < iNbTarget; uc++)
    {
        _axEndIndexInObjectTable[uc]--;
    }

    xMorphListIndex = fn_hMorphListIndex(((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->hMorphChannelList, uwChannel = (unsigned short)_xChannelIndex);
    if ((xMorphListIndex != -1) && (g_MorphTasksList[xMorphListIndex].bInUse == 1))
    {
        return -1;
    }

    for (j = 0; j < 50; j++)
    {
        if (g_MorphTasksList[j].bInUse == 0)
        {
            xFreePosition = j;
            break;
        }
    }

    iFreePosition = xFreePosition;
    if (iFreePosition == -1)
    {
        return -1;
    }

    iIndex = (short)(_xStartIndexInObjectTable - 1);
    pStartPhysicalObject = *(PO_tdstPhysicalObject_**)((char*)&((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->h_CurrentObjectsTable->d_stObjectsTable[0].h_Target + iIndex * sizeof(tdstObjectsTableElement_));

    for (uc = 0; uc < iNbTarget; uc++)
    {
        pEndPhysicalObject = (PO_tdstPhysicalObject_*)((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->h_CurrentObjectsTable->d_stObjectsTable[_axEndIndexInObjectTable[uc]].h_Target;

        if (GLI_lGetVisualSetNumbertOfLOD(pStartPhysicalObject->_hVisualSet) != GLI_lGetVisualSetNumbertOfLOD(pEndPhysicalObject->_hVisualSet))
        {
            return -1;
        }

        for (j = 0; j < GLI_lGetVisualSetNumbertOfLOD(pStartPhysicalObject->_hVisualSet); j++)
        {
            if (GLI_hGetVisualSetGeometricForADistance(pStartPhysicalObject->_hVisualSet, (float)j)->xNbPoints != GLI_hGetVisualSetGeometricForADistance(pEndPhysicalObject->_hVisualSet, (float)j)->xNbPoints)
            {
                printf("***** MORPHING IMPOSSIBLE : %d != %d *******\n", pStartPhysicalObject->_hVisualSet->d_p_stLodDefinitions[j]->xNbPoints, pEndPhysicalObject->_hVisualSet->d_p_stLodDefinitions[j]->xNbPoints);
                return -1;
            }
        }
    }

    mp = &g_MorphTasksList[iFreePosition];
    mp->bInUse = 1;
    mp->xChannelIndex = _xChannelIndex;
    mp->hActorSuperObject = _hActorSuperObject;
    mp->xStartIndexInObjectTable = _xStartIndexInObjectTable - 1;
    mp->iNbMillisecond = _iNbMillisecond;
    mp->ucNbTarget = _ucNbTarget;

    for (uc = 0; uc < mp->ucNbTarget; uc++)
    {
        mp->axEndIndexInObjectTable[uc] = _axEndIndexInObjectTable[uc];
        mp->axStart[uc] = _axStart[uc];
        mp->axEnd[uc] = _axEnd[uc];
        mp->axCurrent[uc] = _axStart[uc];
    }

    mp->ucMorphType = _ucMorphType;
    mp->pOriginalPhysicalObject = pStartPhysicalObject;

    fn_vPushAllocModeAccordingToObject(_hActorSuperObject);
    pNewPhysicalObject = (PO_tdstPhysicalObject_*)HMU_fn_p_vMalloc(0x10, 1);
    mp->pMorphedPhysicalObject = pNewPhysicalObject;
    pNewPhysicalObject->_hVisualSet = GLI_p_stCreateTMPVisualSet(GLI_lGetVisualSetNumbertOfLOD(pStartPhysicalObject->_hVisualSet));
    pNewPhysicalObject->_hVisualSet->xLastDistance = pStartPhysicalObject->_hVisualSet->xLastDistance;
    pNewPhysicalObject->_hVisualSet->xNbLodDefinitions = (short)GLI_lGetVisualSetNumbertOfLOD(pStartPhysicalObject->_hVisualSet);
    GAM_fn_vPopAllocMode();
    pNewPhysicalObject->_hCollideSet = pStartPhysicalObject->_hCollideSet;

    pEndPhysicalObject = *(PO_tdstPhysicalObject_**)((char*)&((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->h_CurrentObjectsTable->d_stObjectsTable[0].h_Target + _axEndIndexInObjectTable[0] * sizeof(tdstObjectsTableElement_));
    if ((pEndPhysicalObject->_hCollideBoundingVolume != NULL) && (pStartPhysicalObject->_hCollideBoundingVolume != NULL))
    {
        if (pEndPhysicalObject->_hCollideBoundingVolume->xRadius < pStartPhysicalObject->_hCollideBoundingVolume->xRadius)
        {
            pNewPhysicalObject->_hCollideBoundingVolume = pStartPhysicalObject->_hCollideBoundingVolume;
        }
        else
        {
            pNewPhysicalObject->_hCollideBoundingVolume = pEndPhysicalObject->_hCollideBoundingVolume;
        }
    }
    else if (pStartPhysicalObject->_hCollideBoundingVolume != NULL)
    {
        pNewPhysicalObject->_hCollideBoundingVolume = pStartPhysicalObject->_hCollideBoundingVolume;
    }
    else if (pEndPhysicalObject->_hCollideBoundingVolume != NULL)
    {
        pNewPhysicalObject->_hCollideBoundingVolume = pEndPhysicalObject->_hCollideBoundingVolume;
    }

    if (pEndPhysicalObject->_hVisualBoundingVolume->xRadius < pStartPhysicalObject->_hVisualBoundingVolume->xRadius)
    {
        pNewPhysicalObject->_hVisualBoundingVolume = pStartPhysicalObject->_hVisualBoundingVolume;
    }
    else
    {
        pNewPhysicalObject->_hVisualBoundingVolume = pEndPhysicalObject->_hVisualBoundingVolume;
    }

    fn_vPushAllocModeAccordingToObject(_hActorSuperObject);

    for (j = 0; j < GLI_lGetVisualSetNumbertOfLOD(pNewPhysicalObject->_hVisualSet); j++)
    {
        pNewPhysicalObject->_hVisualSet->d_xThresholdsTable[j] = mp->pOriginalPhysicalObject->_hVisualSet->d_xThresholdsTable[j];
        pNewPhysicalObject->_hVisualSet->d_p_stLodDefinitions[j] = MOR_fn_xCopyGeometricObjectForMorph(mp->pOriginalPhysicalObject->_hVisualSet->d_p_stLodDefinitions[j]);
    }

    fn_vPutMorphElementInChannel(((tdstEngineObject_*)_hActorSuperObject->hLinkedObject.p_stCharacter)->h_3dData->hMorphChannelList, uwChannel, xFreePosition);
    GAM_fn_vPopAllocMode();

    return xFreePosition;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 112–130 */
/* addr: 0x00317f30  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0034 -> line 115
 *   +0x003c -> line 118
 *   +0x0044 -> line 121
 *   +0x004c -> line 124
 *   +0x0054 -> line 130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetGeoObjOfPhysicalCollSet(unsigned char ucZoneType, tdstPhysicalCollSet_* _hPhyCollSet)
{
    switch (ucZoneType)
    {
    case 0:

        return _hPhyCollSet->hZdd;
    case 1:

        return _hPhyCollSet->hZdm;
    case 3:

        return _hPhyCollSet->hZdr;
    case 2:

        return _hPhyCollSet->hZde;
    }



    return NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 99–99 */
/* addr: 0x00317f90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdmGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZdm;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 86–86 */
/* addr: 0x00317fa0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 86
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZdr;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 73–73 */
/* addr: 0x00317fb0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdeGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZde;
}
