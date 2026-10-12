/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Pub.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/SAI.h"

/* Recovered aggregate layouts from MWCC debug type records. */

SAI_tdstInternalStructure_ SAI_g_stInternalStructure;

extern unsigned char g_ucSAIModuleId;
void Erm_fn_ClearLastError();

unsigned short SAI_fn_eVerifyFlags(unsigned short eFlags)
{
    eFlags &= 0x3FF;

    if (((eFlags & 0x40) && (eFlags & 0x80)) || ((eFlags & 0x100) && (eFlags & 0x200)))
    {
        Erm_fn_ClearLastError(0); Erm_fn_v_UpdateLastError(8, g_ucSAIModuleId, 0, 5, -1, 255, 255, NULL);
    }

    if ((eFlags & 0x40) || (eFlags & 0x80))
        eFlags |= 4;

    if ((eFlags & 0x100) || (eFlags & 0x200))
        eFlags |= 8;

    if ((eFlags & 0x80) || (eFlags & 0x200))
    {
        if (eFlags & 0x32)
            Erm_fn_v_UpdateLastError(8, g_ucSAIModuleId, 0, 9, -1, 255, 255, NULL);
    }

    return eFlags;
}

int SAI_fn_bInitAllWhen(int _eUserFlags)
{
    return SAI_fn_bInitAllTableWhen(&SAI_g_stInternalStructure, _eUserFlags);
}

int SAI_fn_bInsertArrayInTable(void* param0, unsigned int _ulSize, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, param0, _ulSize, 0x5000, _eFlags);
}

SAI_tdstListEntry_* fn_hSearchAnElementInList(SAI_tdstInternalStructure_* p_stInternalStructure, void* p_vData, unsigned short eUserFlags);

/* Debug signature records no return type; the target returns p_vReturn in v0. */
void* SAI_fn_p_vGetTableValuePointerOf(void* _p_vValue, unsigned short _eFlags)
{
    unsigned short eIntarnalFlags;
    SAI_tdstListEntry_* hListEntry;
    void* p_vReturn;

    p_vReturn = NULL;
    eIntarnalFlags = SAI_fn_eVerifyFlags(_eFlags);
    hListEntry = fn_hSearchAnElementInList(&SAI_g_stInternalStructure, _p_vValue, eIntarnalFlags);
    if (hListEntry)
    {
        switch (hListEntry->eFlags & 0xFC00)
        {
        case 0x8000:
        case 0x1000:
            p_vReturn = &hListEntry->uData.ucCharData;
            break;
        case 0x2000:
            p_vReturn = &hListEntry->uData.uwShortData;
            break;
        case 0x3000:
            p_vReturn = &hListEntry->uData.ulLongData;
            break;
        case 0x4000:
            p_vReturn = &hListEntry->uData.i64Long64Data;
            break;
        case 0x7000:
            p_vReturn = &hListEntry->uData.stPointerData;
            break;
        case 0x5000:
            p_vReturn = (void*)hListEntry->uData.stArrayData.p_ucPointer;
            break;
        default:
            p_vReturn = NULL;
            break;
        }
    }
    return p_vReturn;
}

int SAI_fn_bRemoveValueFromTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bFreeAnElementFromList(&SAI_g_stInternalStructure, _p_vValue, _eFlags);
}

int SAI_fn_bInsertMTHVectorInTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, 0xC, 0x5000, _eFlags);
}

int SAI_fn_bInsertMTHRealInTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, 4, 0x3000, _eFlags);
}

int SAI_fn_bInsertPointerInTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, 8, 0x7000, _eFlags);
}

int SAI_fn_bInsertLongInTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, 4, 0x3000, _eFlags);
}

int SAI_fn_bInsertCharInTable(void* _p_vValue, int _eFlags)
{
    return SAI_fn_bInsertAnElementInList(&SAI_g_stInternalStructure, _p_vValue, 1, 0x1000, _eFlags);
}
