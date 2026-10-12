/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/SECT.h"
#include "r3/HIE.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
/* SAI's private table state is referenced by the recovered wrapper below.
 * The original project supplied this through its shared SAI declarations;
 * extraction leaves each translation unit self-contained, so retain the
 * ABI-visible two-pointer layout and external linkage here. */
typedef struct SAI_tdstInternalStructure_ SAI_tdstInternalStructure_;
struct SAI_tdstInternalStructure_ {
    void *p_stFirstEntry; /* +0x0 */
    void *p_stLastEntry; /* +0x4 */
};
extern SAI_tdstInternalStructure_ SAI_g_stInternalStructure;
extern unsigned char SAI_fn_bInsertAnElementInList(
    SAI_tdstInternalStructure_ *, void *, unsigned int,
    unsigned short, unsigned short);

HIE_tdstSuperObject_* SECT_g_hActiveSectorList_Head;
HIE_tdstSuperObject_* SECT_g_hActiveSectorList_Tail;
unsigned short SECT_g_uwActiveSectorList_NumberOfElements;

unsigned char SAI_fn_bInsertBoolInTable(void* _p_vValue, unsigned char ucMask, unsigned short _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, ucMask, 0x8000, _eFlags);
}

void SECT_fnvInitGlobalsForActivity(void)
{
    SECT_g_hActiveSectorList_Head = SECT_g_hActiveSectorList_Tail = 0;
}

HIE_tdstSuperObject_* SECT_fn_hGetActiveSectorListNext(HIE_tdstSuperObject_* _hCurrentSO)
{
    return _hCurrentSO->hLinkedObject.p_stSector->h_NextSectorInList;
}

HIE_tdstSuperObject_* SECT_fn_hGetActiveSectorListHead(void)
{
    return (HIE_tdstSuperObject_ *)SECT_g_hActiveSectorList_Head;
}

void SECT_fn_vDesactivateSector(HIE_tdstSuperObject_* _hSectorSO)
{
    SECT_tdstSector_* param0;
    param0 = _hSectorSO->hLinkedObject.p_stSector;

    if (param0->cCurrentActivity != 0)
    {
        param0->cCurrentActivity = 0;
    }
}

void SECT_fn_vRemoveSectorFromList(HIE_tdstSuperObject_* _hSectorSO)
{
    SECT_tdstSector_* hSector;

    hSector = _hSectorSO->hLinkedObject.p_stSector;
    if (hSector->ucInList)
    {
        if (hSector->h_PreviousSectorInList)
            hSector->h_PreviousSectorInList->hLinkedObject.p_stSector->h_NextSectorInList = hSector->h_NextSectorInList;
        else
        {
            SECT_g_hActiveSectorList_Head = hSector->h_NextSectorInList;
            if (SECT_g_hActiveSectorList_Head)
                SECT_g_hActiveSectorList_Head->hLinkedObject.p_stSector->h_PreviousSectorInList = NULL;
        }
        if (hSector->h_NextSectorInList)
            hSector->h_NextSectorInList->hLinkedObject.p_stSector->h_PreviousSectorInList = hSector->h_PreviousSectorInList;
        else
        {
            SECT_g_hActiveSectorList_Tail = hSector->h_PreviousSectorInList;
            if (SECT_g_hActiveSectorList_Tail)
                SECT_g_hActiveSectorList_Tail->hLinkedObject.p_stSector->h_NextSectorInList = NULL;
        }
        hSector->h_NextSectorInList = NULL;
        hSector->h_PreviousSectorInList = NULL;
        hSector->ucInList = 0;
        SECT_g_uwActiveSectorList_NumberOfElements--;
    }
}

void SECT_fn_vActivateSector(HIE_tdstSuperObject_* _hSectorSO)
{
    SECT_tdstSector_* hSector;
    hSector = _hSectorSO->hLinkedObject.p_stSector;

    if (hSector->cCurrentActivity != 1)
    {
        hSector->cCurrentActivity = 1;
    }
}
