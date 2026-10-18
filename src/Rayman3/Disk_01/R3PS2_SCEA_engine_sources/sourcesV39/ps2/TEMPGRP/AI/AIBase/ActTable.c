/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\ActTable.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>
#include "r3/AI.h"
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
#include "r3/WP.h"

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstLight_ GLI_tdstLight_;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct IPO_tdstInstanciatedPhysicalObject_ IPO_tdstInstanciatedPhysicalObject_;
typedef struct IPT_tdstEntryElement_ IPT_tdstEntryElement_;
typedef struct WP_tdstListOfArc_ WP_tdstListOfArc_;
typedef struct WP_tdstWayPoint_ WP_tdstWayPoint_;
typedef struct _SND_tdstBlockEvent _SND_tdstBlockEvent;
typedef struct tdstCollSet_ tdstCollSet_;
typedef struct tdstDynam_ tdstDynam_;
typedef struct tdstLipsSynchroTable_ tdstLipsSynchroTable_;
typedef struct tdstMSLight_ tdstMSLight_;
typedef struct tdstMSWay_ tdstMSWay_;
typedef struct tdstMicro_ tdstMicro_;
typedef struct tdstObjectsTablesList_ tdstObjectsTablesList_;
typedef struct tdstParticleGenerator_ tdstParticleGenerator_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct tdstSectInfo_ tdstSectInfo_;
typedef struct tdstSuperObjectLinks_ tdstSuperObjectLinks_;
typedef union anon_0 anon_0;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;

union anon_0 {
    tduIdInterpret_ uId; /* +0x0 */
    tduGetSetParamForNode_ uParam; /* +0x0 */
};

struct tdstNodeInterpret_ {
    anon_0 uDummy; /* +0x0 */
    unsigned short uwNodeToSkip; /* +0x4 */
    unsigned char ucDepth; /* +0x6 */
    unsigned char eType; /* +0x7 */
};

unsigned char g_ucNewActionReturn;
unsigned char g_ucUseDefaultActionReturn;

void fn_vSetActionParamxValue(unsigned char ucN, HIE_tdstSuperObject_* p_SuperObjPerso, float xValue)
{
    unsigned char* p;
    unsigned char* base;
    unsigned char* array;
    unsigned int stride;

    p = *(unsigned char**)((char*)p_SuperObjPerso + 4);
    p = *(unsigned char**)(p + 0xc);
    p = *(unsigned char**)p;
    if (*(unsigned char*)(p + 0x10) != 0)
        p = *(unsigned char**)(p + 4);
    else
        p = *(unsigned char**)(p + 8);
    base = *(unsigned char**)(p + 0x10);
    stride = (unsigned int)*(unsigned char*)(base + 6);
    array = *(unsigned char**)base;
    ucN &= 0xff;
    p = array + stride * 104 + (unsigned int)ucN * 12;
    *(float*)p = xValue;
}

tdstNodeInterpret_* fn_p_stGetTableAction(tdstIntelligence_* p_stIntelligence, unsigned char ucNEntry)
{
    g_ucUseDefaultActionReturn = *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x66) + ucNEntry * sizeof(tdstActionTableEntry_));
    g_ucNewActionReturn = *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x67) + ucNEntry * sizeof(tdstActionTableEntry_));
    return *(tdstNodeInterpret_**)((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x60) + ucNEntry * sizeof(tdstActionTableEntry_));
}

void fn_vInitActionTable(tdstIntelligence_* p_stIntelligence)
{
    unsigned char ucNEntry;
    unsigned char ucNbEntries;

    p_stIntelligence->p_stActionTable->ucNbEntriesUsed = 0;
    p_stIntelligence->p_stActionTable->ucCurrentEntry = 0;
    ucNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;

    for (ucNEntry = 0; ucNEntry < ucNbEntries; ucNEntry++)
    {
        p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].bUseDefaultActionReturn = g_ucUseDefaultActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].ucNewActionReturn = g_ucNewActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].bUsed = 0; p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].p_stNode = NULL; p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].ucNumRule = 0; memset(&p_stIntelligence->p_stActionTable->p_stEntry[ucNEntry].stActionParam, 0, sizeof(tdstActionParam_));
    }
}

void fn_vUnuseAllRulesFromSchedule(tdstIntelligence_* p_stIntelligence)
{
    unsigned char ucNbEntries;
    unsigned char ucCurrentEntry;
    tdstActionTableEntry_* p_stEntry;

    if (p_stIntelligence->p_stActionTable->ucNbEntriesUsed ? 1 : 0)
    {
        ucNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;
        p_stEntry = p_stIntelligence->p_stActionTable->p_stEntry;
        for (ucCurrentEntry = 0; ucCurrentEntry < ucNbEntries; ucCurrentEntry++, p_stEntry++)
        {
            if (p_stEntry->bUsed)
            {
                if (p_stEntry->ucNumRule == 0)
                {
                    p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].bUseDefaultActionReturn = g_ucUseDefaultActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].ucNewActionReturn = g_ucNewActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].bUsed = 0; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].p_stNode = NULL; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].ucNumRule = 0; memset(&p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].stActionParam, 0, sizeof(tdstActionParam_));
                    ucNbEntries--;
                }
            }
        }
        p_stIntelligence->p_stActionTable->ucNbEntriesUsed = ucNbEntries;
    }
}

void fn_vUnuseAllRulesWhichHaveGreaterNumRule(tdstIntelligence_* p_stIntelligence, unsigned char ucNumRule)
{
    unsigned char ucNbEntries;
    unsigned char ucCurrentEntry;
    tdstActionTableEntry_* p_stEntry;

    ucNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;
    if (p_stIntelligence->p_stActionTable->ucNbEntriesUsed ? 1 : 0)
    {
        p_stEntry = p_stIntelligence->p_stActionTable->p_stEntry;
        for (ucCurrentEntry = 0; ucCurrentEntry < ucNbEntries; ucCurrentEntry++, p_stEntry++)
        {
            if (p_stEntry->bUsed)
            {
                if (p_stEntry->ucNumRule > ucNumRule)
                {
                    p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].bUseDefaultActionReturn = g_ucUseDefaultActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].ucNewActionReturn = g_ucNewActionReturn; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].bUsed = 0; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].p_stNode = NULL; p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].ucNumRule = 0; memset(&p_stIntelligence->p_stActionTable->p_stEntry[ucCurrentEntry].stActionParam, 0, sizeof(tdstActionParam_));
                    p_stIntelligence->p_stActionTable->ucNbEntriesUsed--;
                }
            }
        }
    }
}

void fn_vUnuseCurrentActionTableEntry(tdstIntelligence_* p_stIntelligence)
{
    unsigned char ucCurrentEntry;

    ucCurrentEntry = p_stIntelligence->p_stActionTable->ucCurrentEntry;
    if (*((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x64) + ucCurrentEntry * sizeof(tdstActionTableEntry_)))
    {
        *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x66) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = g_ucUseDefaultActionReturn; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x67) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = g_ucNewActionReturn; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x64) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = 0; *(tdstNodeInterpret_**)((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x60) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = 0; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x65) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = 0; memset((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + ucCurrentEntry * sizeof(tdstActionTableEntry_), 0, sizeof(tdstActionParam_));
        p_stIntelligence->p_stActionTable->ucNbEntriesUsed--;
    }
}

void fn_vUseCurrentActionTableEntry(tdstIntelligence_* p_stIntelligence, unsigned char ucNRule, tdstNodeInterpret_* p_stNode)
{
    unsigned char ucCurrentEntry;

    ucCurrentEntry = p_stIntelligence->p_stActionTable->ucCurrentEntry;
    if (!*((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x64) + ucCurrentEntry * sizeof(tdstActionTableEntry_)))
    {
        *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x66) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = g_ucUseDefaultActionReturn; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x67) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = g_ucNewActionReturn; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x64) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = 1; *(tdstNodeInterpret_**)((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x60) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = p_stNode; *((unsigned char*)((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + 0x65) + ucCurrentEntry * sizeof(tdstActionTableEntry_)) = ucNRule; memset((unsigned char*)p_stIntelligence->p_stActionTable->p_stEntry + ucCurrentEntry * sizeof(tdstActionTableEntry_), 0, sizeof(tdstActionParam_));
        p_stIntelligence->p_stActionTable->ucNbEntriesUsed++;
    }
}

unsigned char fn_ucFindPlaceInActionTable(tdstIntelligence_* p_stIntelligence)
{
    tdstActionTableEntry_* param0;
    unsigned char ucCurrentEntry;
    unsigned char ucNbEntries;

    ucNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;

    if (p_stIntelligence->p_stActionTable->ucNbEntriesUsed < ucNbEntries)
    {
        param0 = p_stIntelligence->p_stActionTable->p_stEntry;

        for (ucCurrentEntry = 0; ucCurrentEntry < ucNbEntries; param0 += 1, ucCurrentEntry += 1)
        {
            if (param0->bUsed == 0)
            {
                return ucCurrentEntry;
            }
        }
    }
    return ucNbEntries;
}

unsigned char fn_ucIsRuleAndNodeInActionTable(tdstIntelligence_* p_stIntelligence, unsigned char ucNumRule, tdstNodeInterpret_* p_stNode)
{
    unsigned char ucNbEntries;
    unsigned char ucCurrentEntry;
    tdstActionTableEntry_* p_stEntry;

    ucNbEntries = p_stIntelligence->p_stActionTable->ucNbEntries;
    if (p_stIntelligence->p_stActionTable->ucNbEntriesUsed ? 1 : 0)
    {
        p_stEntry = p_stIntelligence->p_stActionTable->p_stEntry;
        for (ucCurrentEntry = 0; ucCurrentEntry < ucNbEntries; ucCurrentEntry++, p_stEntry++)
        {
            if (p_stEntry->bUsed)
            {
                if (p_stEntry->ucNumRule == ucNumRule)
                {
                    if (p_stEntry->p_stNode == p_stNode)
                    {
                        return ucCurrentEntry;
                    }
                }
            }
        }
    }
    return ucNbEntries;
}
