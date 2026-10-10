/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZeMem.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct tdstZdxIndexList_ tdstZdxIndexList_;
typedef struct tdstZdxList_ tdstZdxList_;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZeMem.c lines 100–139 */
/* addr: 0x0026ced0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 100
 *   +0x001c -> line 109
 *   +0x0048 -> line 110
 *   +0x0054 -> line 112
 *   +0x005c -> line 114
 *   +0x0074 -> line 116
 *   +0x007c -> line 119
 *   +0x0094 -> line 120
 *   +0x009c -> line 122
 *   +0x00a0 -> line 124
 *   +0x00a4 -> line 123
 *   +0x00a8 -> line 125
 *   +0x00b0 -> line 127
 *   +0x00b4 -> line 128
 *   +0x00b8 -> line 129
 *   +0x00d8 -> line 130
 *   +0x00f4 -> line 132
 *   +0x0100 -> line 134
 *   +0x0118 -> line 138
 *   +0x011c -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstEngineObject_ tdstEngineObject_;
typedef struct tdstCollideZdxList_ tdstCollideZdxList_;
typedef struct tdstZoneSetList_ tdstZoneSetList_;
typedef union HIE_tduLinkedObject_ HIE_tduLinkedObject_;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt;
typedef struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt;

struct tdstEngineObject_ {
    void* h_3dData; /* +0x0 */
    void* h_StandardGame; /* +0x4 */
    void* h_Dynam; /* +0x8 */
    void* h_Brain; /* +0xc */
    void* h_Cineinfo; /* +0x10 */
    tdstCollSet_* h_CollSet; /* +0x14 */
};

union HIE_tduLinkedObject_ {
    HIE_tdstSuperObject_* p_stSuperObject; /* +0x0 */
    tdstEngineObject_* p_stCharacter; /* +0x0 */
};

struct HIE_tdstSuperObject_ {
    unsigned int ulTypeOfLinkedObject; /* +0x0 */
    HIE_tduLinkedObject_ hLinkedObject; /* +0x4 */
};

struct tdstCollideZdxList_ {
    COL_tdstCollideObject_* hGeoObj; /* +0x0 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt {
    tdstCollideZdxList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZdxList_ {
    LST2_tdstAnchorToZDX_tdxHandleToGeoZdxListOpt hGeoZdxList; /* +0x0 */
    unsigned short uwNumberOfZdx; /* +0x8 */
};

struct tdstZdxIndexList_ {
    unsigned short uwZdxIndex; /* +0x0 */
};

struct LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt {
    tdstZdxIndexList_* hFirstElementOpt; /* +0x0 */
    int lNumberOfElementsOpt; /* +0x4 */
};

struct tdstZoneSetList_ {
    LST2_tdstAnchorToZDX_tdxHandleToZdxIndexListOpt hZdxIndexList; /* +0x0 */
};

unsigned char CS_fn_eGetPrivilegedActivationZone(unsigned char _ucZoneType, tdstCollSet_* _hCollSet, short _wIndex);
tdstZdxList_* CS_fn_hGetZdxList(unsigned char ucZoneType, HIE_tdstSuperObject_* hSuperObj);
tdstZoneSetList_* fn_hGetCurrentZoneSetOfType(unsigned char _ucZoneType, tdstCollSet_* _hCollSet);

COL_tdstCollideObject_* fn_hIsThisZoneActive(HIE_tdstSuperObject_* _hCharacter, unsigned char _ucZoneType, unsigned char _ucZoneNumber)
{
    unsigned char ePrivileged;
    tdstZoneSetList_* hZoneSet;
    tdstZdxList_* p_stZdxList;
    tdstZdxIndexList_* param0;
    int iIndex;
    int iMax;

    if (_hCharacter->hLinkedObject.p_stCharacter->h_CollSet)
        ePrivileged = CS_fn_eGetPrivilegedActivationZone(_ucZoneType, _hCharacter->hLinkedObject.p_stCharacter->h_CollSet, _ucZoneNumber);
    else
        ePrivileged = 3;
    if (ePrivileged == 1)
    {
        p_stZdxList = CS_fn_hGetZdxList(_ucZoneType, _hCharacter);
        return p_stZdxList->hGeoZdxList.hFirstElementOpt[_ucZoneNumber].hGeoObj;
    }
    else if (ePrivileged == 0)
    {
        hZoneSet = _hCharacter->hLinkedObject.p_stCharacter->h_CollSet ? fn_hGetCurrentZoneSetOfType(_ucZoneType, _hCharacter->hLinkedObject.p_stCharacter->h_CollSet) : NULL;
        if (hZoneSet)
        {
            param0 = hZoneSet->hZdxIndexList.hFirstElementOpt;
            iIndex = 0;
            iMax = hZoneSet->hZdxIndexList.lNumberOfElementsOpt;
            while (iIndex < iMax && _ucZoneNumber > param0->uwZdxIndex)
            {
                param0++;
                iIndex++;
            }
            if (iIndex < iMax && _ucZoneNumber == param0->uwZdxIndex)
            {
                p_stZdxList = CS_fn_hGetZdxList(_ucZoneType, _hCharacter);
                return p_stZdxList->hGeoZdxList.hFirstElementOpt[_ucZoneNumber].hGeoObj;
            }
        }
    }
    return NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GAM\ZeMem.c lines 458–468 */
/* addr: 0x0026d010  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 458
 *   +0x0008 -> line 460
 *   +0x0010 -> line 461
 *   +0x0018 -> line 462
 *   +0x0020 -> line 468
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PLD_fn_vUnLoadTransition(void);
void fn_vSetLevelHasTransitionMemory(unsigned char _ucLevelHasTransitionMemory);
void HMU_fn_vSetMemoriesInFixMode(void);

void fn_vFreeTransitionAllocatedMemory(void)
{
    PLD_fn_vUnLoadTransition();
    fn_vSetLevelHasTransitionMemory(0);
    HMU_fn_vSetMemoriesInFixMode();
}
