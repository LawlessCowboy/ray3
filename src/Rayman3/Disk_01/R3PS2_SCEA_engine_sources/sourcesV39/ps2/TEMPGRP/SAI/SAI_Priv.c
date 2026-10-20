/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SAI_tdstInternalStructure_ SAI_tdstInternalStructure_;
typedef struct tdstPointerData_ tdstPointerData_;
typedef struct tdstArrayData_ tdstArrayData_;
typedef struct tdstBooleanData_ tdstBooleanData_;
typedef union SAI_tduData_ SAI_tduData_;
typedef struct SAI_tdstListEntry_ SAI_tdstListEntry_;

struct SAI_tdstInternalStructure_ {
    SAI_tdstListEntry_* p_stFirstEntry; /* +0x0 */
    SAI_tdstListEntry_* p_stLastEntry; /* +0x4 */
};

struct tdstPointerData_ {
    int p_vPointer; /* +0x0 */
    unsigned short uwBlocAndModuleID; /* +0x4 */
};

struct tdstArrayData_ {
    int p_ucPointer; /* +0x0 */
    unsigned int ulArraySize; /* +0x4 */
};

struct tdstBooleanData_ {
    unsigned char ucBitPosition; /* +0x0 */
    /* The retail code loads this byte with a SIGNED byte load (lb) in
       SAI_fn_bRestoreAnElementFromList, so the member is a plain char here
       (the shared r3/SAI.h copy keeps the extracted 'unsigned char'). */
    char ucCharData; /* +0x1 */
};

union SAI_tduData_ {
    unsigned char ucCharData; /* +0x0 */
    unsigned short uwShortData; /* +0x0 */
    unsigned int ulLongData; /* +0x0 */
    long i64Long64Data; /* +0x0 */
    tdstPointerData_ stPointerData; /* +0x0 */
    tdstArrayData_ stArrayData; /* +0x0 */
    tdstBooleanData_ stBooleanData; /* +0x0 */
};

struct SAI_tdstListEntry_ {
    SAI_tdstListEntry_* p_stNextEntry; /* +0x0 */
    int p_vDataPointer; /* +0x4 */
    SAI_tduData_ uData; /* +0x8 */
    unsigned short eFlags; /* +0x10 */
    unsigned char ucMemoryLevel; /* +0x12 */
    unsigned char ucDummy; /* +0x13 */
};

/* Defined by Sai_main.c; this private TU accesses the shared SAI state. */
extern SAI_tdstInternalStructure_ SAI_g_stInternalStructure;

unsigned short SAI_fn_eVerifyFlags(unsigned short eFlags);

SAI_tdstListEntry_* fn_hSearchAnElementInList(SAI_tdstInternalStructure_* p_stInternalStructure, void* p_vData, unsigned short eUserFlags);

unsigned char g_ucSAIModuleId;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 32–45 */
/* addr: 0x003191f0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 32
 *   +0x0004 -> line 33
 *   +0x0008 -> line 32
 *   +0x000c -> line 33
 *   +0x0024 -> line 43
 *   +0x0028 -> line 44
 *   +0x002c -> line 45
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SAI_fn_vFirstInit(void)
{
    if (g_ucSAIModuleId == 255)
        g_ucSAIModuleId = Erm_fn_ucInitErrMsg(g_ucSAIModuleId);
    SAI_g_stInternalStructure.p_stFirstEntry = NULL;
    SAI_g_stInternalStructure.p_stLastEntry = NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 356–367 */
/* addr: 0x00319230  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 356
 *   +0x0010 -> line 357
 *   +0x0014 -> line 359
 *   +0x001c -> line 361
 *   +0x0038 -> line 362
 *   +0x0040 -> line 363
 *   +0x0044 -> line 364
 *   +0x0050 -> line 367
 *   +0x0058 -> line 366
 *   +0x005c -> line 367
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bRestoreAnElementFromList(SAI_tdstListEntry_* hListEntry);

unsigned char SAI_fn_bInitAllTableWhen(SAI_tdstInternalStructure_* p_stInternalStructure, unsigned short eUserFlags)
{
    SAI_tdstListEntry_* hListEntry;

    hListEntry = p_stInternalStructure->p_stFirstEntry;
    while (hListEntry)
    {
        if ((eUserFlags & hListEntry->eFlags) == eUserFlags)
            SAI_fn_bRestoreAnElementFromList(hListEntry);
        hListEntry = hListEntry->p_stNextEntry;
    }

    return 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 305–353 */
/* addr: 0x003192a0  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 305
 *   +0x0004 -> line 311
 *   +0x0008 -> line 305
 *   +0x0014 -> line 311
 *   +0x0068 -> line 314
 *   +0x0080 -> line 315
 *   +0x0090 -> line 316
 *   +0x0098 -> line 318
 *   +0x00a0 -> line 319
 *   +0x00a8 -> line 321
 *   +0x00b0 -> line 322
 *   +0x00b8 -> line 324
 *   +0x00c0 -> line 325
 *   +0x00c8 -> line 327
 *   +0x00d0 -> line 328
 *   +0x00d8 -> line 332
 *   +0x00e0 -> line 343
 *   +0x00e8 -> line 345
 *   +0x00f8 -> line 352
 *   +0x00fc -> line 353
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bRestoreAnElementFromList(SAI_tdstListEntry_* hListEntry)
{
    unsigned char bReturn;

    bReturn = 1;

    switch (hListEntry->eFlags & 0xFC00)
    {
    case 0x8000:
        *((signed char*)hListEntry->p_vDataPointer) &= ~hListEntry->uData.stBooleanData.ucCharData;
        *((signed char*)hListEntry->p_vDataPointer) |= hListEntry->uData.stBooleanData.ucCharData;
        break;
    case 0x1000:
        *((unsigned char*)hListEntry->p_vDataPointer) = hListEntry->uData.ucCharData;
        break;
    case 0x2000:
        *((unsigned short*)hListEntry->p_vDataPointer) = hListEntry->uData.uwShortData;
        break;
    case 0x3000:
        *((unsigned int*)hListEntry->p_vDataPointer) = hListEntry->uData.ulLongData;
        break;
    case 0x4000:
        *((long*)hListEntry->p_vDataPointer) = hListEntry->uData.i64Long64Data;
        break;
    case 0x7000:
        *((int*)hListEntry->p_vDataPointer) = hListEntry->uData.stPointerData.p_vPointer;
        break;
    case 0x5000:
        memcpy((void*)hListEntry->p_vDataPointer, (void*)hListEntry->uData.stArrayData.p_ucPointer, hListEntry->uData.stArrayData.ulArraySize);
        break;
    default:
        bReturn = 0;
        break;
    }

    return bReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 177–302 */
/* addr: 0x003193b0  size: 924 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 177
 *   +0x0010 -> line 178
 *   +0x0014 -> line 177
 *   +0x003c -> line 183
 *   +0x0044 -> line 184
 *   +0x0094 -> line 186
 *   +0x00f4 -> line 192
 *   +0x0104 -> line 194
 *   +0x0108 -> line 195
 *   +0x0114 -> line 196
 *   +0x011c -> line 198
 *   +0x0120 -> line 200
 *   +0x0128 -> line 204
 *   +0x0130 -> line 205
 *   +0x0134 -> line 206
 *   +0x0140 -> line 207
 *   +0x0144 -> line 218
 *   +0x01a4 -> line 222
 *   +0x01a8 -> line 221
 *   +0x01ac -> line 222
 *   +0x01b0 -> line 221
 *   +0x01b4 -> line 222
 *   +0x01f8 -> line 224
 *   +0x0208 -> line 225
 *   +0x0210 -> line 227
 *   +0x021c -> line 228
 *   +0x0220 -> line 229
 *   +0x0228 -> line 231
 *   +0x0234 -> line 232
 *   +0x0238 -> line 233
 *   +0x0240 -> line 235
 *   +0x024c -> line 236
 *   +0x0250 -> line 237
 *   +0x0258 -> line 239
 *   +0x0264 -> line 240
 *   +0x0268 -> line 241
 *   +0x0270 -> line 243
 *   +0x027c -> line 244
 *   +0x0288 -> line 246
 *   +0x0290 -> line 249
 *   +0x0298 -> line 250
 *   +0x029c -> line 258
 *   +0x02a4 -> line 261
 *   +0x02ac -> line 264
 *   +0x02b4 -> line 271
 *   +0x02c4 -> line 272
 *   +0x02d0 -> line 275
 *   +0x02e4 -> line 276
 *   +0x02f0 -> line 278
 *   +0x031c -> line 280
 *   +0x0320 -> line 282
 *   +0x032c -> line 283
 *   +0x0344 -> line 285
 *   +0x0370 -> line 301
 *   +0x0374 -> line 302
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bInsertAnElementInList(SAI_tdstInternalStructure_* p_stInternalStructure, void* p_stData, unsigned int ulSizeOfData, unsigned short eTypeOfData, unsigned short eUserFlags)
{
    void* p_vBeginBloc;
    unsigned short uwBlocId;
    SAI_tdstListEntry_* hListEntry;
    unsigned char bReturn;

    bReturn = 1;

    eUserFlags = SAI_fn_eVerifyFlags(eUserFlags);

    hListEntry = fn_hSearchAnElementInList(p_stInternalStructure, p_stData, eUserFlags);

    if (!hListEntry)
    {
        hListEntry = (SAI_tdstListEntry_*)HMU_fn_p_vMalloc(0x18, 1);
        if (!hListEntry)
        {
            Erm_fn_ClearLastError(0);
            Erm_fn_v_UpdateLastError(8, g_ucSAIModuleId, 0, 4, -1, 255, 255, NULL);
        }

        memset(hListEntry, 0, 0x18);
        hListEntry->ucMemoryLevel = HMU_fn_ucGetActualNormalMemoryBlockUsed();

        if ((eTypeOfData & 0xffff) == 0x8000)
        {
            hListEntry->p_stNextEntry = NULL;
            if (p_stInternalStructure->p_stLastEntry)
                p_stInternalStructure->p_stLastEntry->p_stNextEntry = hListEntry;
            else
                p_stInternalStructure->p_stFirstEntry = hListEntry;
            p_stInternalStructure->p_stLastEntry = hListEntry;
        }
        else
        {
            hListEntry->p_stNextEntry = p_stInternalStructure->p_stFirstEntry;
            p_stInternalStructure->p_stFirstEntry = hListEntry;
            if (!p_stInternalStructure->p_stLastEntry)
                p_stInternalStructure->p_stLastEntry = hListEntry;
        }
    }

    hListEntry->p_vDataPointer = (int)p_stData;

    switch (eTypeOfData & 0xffff)
    {
    case 0x8000:
    {
        unsigned int ulMask;
        unsigned char ucPos;

        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x8000);
        ulMask = (unsigned char)ulSizeOfData;
        ucPos = 0;
        while (ucPos < 8)
        {
            if (((unsigned char)ulMask) & 1)
            {
                hListEntry->uData.stBooleanData.ucBitPosition = ucPos;
                /* The retail code leaves the loop with the "no free bit" case
                   in the loop's exit block only, so the search needs a jump
                   over the fallback store (MWCC has no while/else). */
                goto ucBooleanFound;
            }
            ulMask = (unsigned char)(ulMask >> 1);
            ucPos = (unsigned char)(ucPos + 1);
        }
        hListEntry->uData.stBooleanData.ucBitPosition = 10;
ucBooleanFound:
        hListEntry->uData.stBooleanData.ucCharData = (char)((signed char*)p_stData)[0] & (char)ulSizeOfData;
    }
    break;
    case 0x1000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x1000);
        hListEntry->uData.ucCharData = ((unsigned char*)p_stData)[0];
        break;
    case 0x2000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x2000);
        hListEntry->uData.uwShortData = ((unsigned short*)p_stData)[0];
        break;
    case 0x3000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x3000);
        hListEntry->uData.ulLongData = ((unsigned int*)p_stData)[0];
        break;
    case 0x4000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x4000);
        hListEntry->uData.i64Long64Data = ((long*)p_stData)[0];
        break;
    case 0x7000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x7000);
        if (((int*)p_stData)[0])
        {
            Mmg_fn_vWhereIs(((int*)p_stData)[0], &uwBlocId, &p_vBeginBloc);
            hListEntry->uData.stPointerData.uwBlocAndModuleID = 0xffff;
            hListEntry->uData.stPointerData.p_vPointer = ((int*)p_stData)[0];
        }
        else
        {
            hListEntry->uData.stPointerData.uwBlocAndModuleID = 0xffff;
            hListEntry->uData.stPointerData.p_vPointer = 0;
        }
        break;
    case 0x5000:
        hListEntry->eFlags = (unsigned short)((short)eUserFlags | 0x5000);
        if (!hListEntry->uData.stArrayData.p_ucPointer)
        {
            hListEntry->uData.stArrayData.p_ucPointer = (int)HMU_fn_p_vMalloc((ulSizeOfData + 0xf) & ~0xf, 1);
            if (!hListEntry->uData.stArrayData.p_ucPointer)
            {
                Erm_fn_ClearLastError(0);
                Erm_fn_v_UpdateLastError(8, g_ucSAIModuleId, 0, 4, -1, 255, 255, NULL);
            }
            hListEntry->uData.stArrayData.ulArraySize = ulSizeOfData;
        }
        if (hListEntry->uData.stArrayData.ulArraySize == ulSizeOfData)
        {
            memcpy((void*)hListEntry->uData.stArrayData.p_ucPointer, p_stData, ulSizeOfData);
        }
        else
        {
            Erm_fn_ClearLastError(0);
            Erm_fn_v_UpdateLastError(8, g_ucSAIModuleId, 0, 6, -1, 255, 255, NULL);
        }
        break;
    default:
        bReturn = 0;
        break;
    }

    return bReturn;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 128–174 */
/* addr: 0x00319750  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 128
 *   +0x0020 -> line 131
 *   +0x0024 -> line 128
 *   +0x0028 -> line 130
 *   +0x002c -> line 129
 *   +0x0030 -> line 133
 *   +0x0038 -> line 135
 *   +0x0040 -> line 137
 *   +0x0060 -> line 140
 *   +0x0068 -> line 143
 *   +0x006c -> line 144
 *   +0x0070 -> line 145
 *   +0x0078 -> line 147
 *   +0x0080 -> line 157
 *   +0x0094 -> line 158
 *   +0x009c -> line 161
 *   +0x00a8 -> line 162
 *   +0x00ac -> line 173
 *   +0x00b0 -> line 174
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char SAI_fn_bFreeAnElementFromList(SAI_tdstInternalStructure_* p_stInternalStructure, void* p_stData, unsigned short eUserFlags)
{
    SAI_tdstListEntry_* p_stPreviousListEntry;
    SAI_tdstListEntry_* p_stListEntry;
    unsigned char bFound;

    bFound = 0;
    p_stListEntry = p_stInternalStructure->p_stFirstEntry;
    p_stPreviousListEntry = NULL;

    eUserFlags = SAI_fn_eVerifyFlags(eUserFlags);

    while (p_stListEntry != NULL)
    {
        if ((void*)p_stListEntry->p_vDataPointer == p_stData && (p_stListEntry->eFlags & 0x3ff) == eUserFlags)
        {
            bFound = 1;
            break;
        }
        p_stPreviousListEntry = p_stListEntry;
        p_stListEntry = p_stListEntry->p_stNextEntry;
    }

    if (bFound)
    {
        if (p_stPreviousListEntry) p_stPreviousListEntry->p_stNextEntry = p_stListEntry->p_stNextEntry;
        else p_stInternalStructure->p_stFirstEntry = p_stListEntry->p_stNextEntry;

        if (p_stListEntry->p_stNextEntry == NULL)
            p_stInternalStructure->p_stLastEntry = p_stPreviousListEntry;
    }

    return bFound;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SAI\SAI_Priv.c lines 114–125 */
/* addr: 0x00319820  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 114
 *   +0x0004 -> line 116
 *   +0x000c -> line 118
 *   +0x0028 -> line 119
 *   +0x0030 -> line 121
 *   +0x0034 -> line 122
 *   +0x0040 -> line 124
 *   +0x0044 -> line 125
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* The list search is inlined into its callers (SAI_fn_bInsertAnElementInList);
   the pragma has to stay enabled until the end of the unit because the
   deferred inlining pass reads the pragma state there. The out-of-line copy
   is kept because the other modules call this function too. */
#pragma auto_inline on
SAI_tdstListEntry_* fn_hSearchAnElementInList(SAI_tdstInternalStructure_* p_stInternalStructure, void* p_vData, unsigned short eUserFlags)
{
    SAI_tdstListEntry_* hListEntry;

    hListEntry = p_stInternalStructure->p_stFirstEntry; while (hListEntry != NULL)
    {
        if ((void*)hListEntry->p_vDataPointer == p_vData && (hListEntry->eFlags & 0x3ff) == eUserFlags)
            return hListEntry;

        hListEntry = hListEntry->p_stNextEntry;
    }

    return NULL;
}
