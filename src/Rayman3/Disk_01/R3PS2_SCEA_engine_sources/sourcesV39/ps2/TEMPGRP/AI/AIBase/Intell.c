/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tdstAnim3d_ tdstAnim3d_;
typedef struct tdstGetSetParam_ tdstGetSetParam_;

struct tdstAnim3d_ {
    unsigned short uwNumberOfFrames; /* +0x0 */
    unsigned char ucFrameRate; /* +0x2 */
    unsigned char ucMaxNumberOfElements; /* +0x3 */
    int d_stAnimEvent; /* +0x4 */
    int d_stMorphDataArray; /* +0x8 */
    unsigned short uwNumOfA3dGENERAL; /* +0xc */
    unsigned char ucNumberOfEvents; /* +0xe */
    unsigned char ucFlagMergeAnim; /* +0xf */
};

struct tdstGetSetParam_ {
    anon_1 uDummy; /* +0x0 */
    /* aggregate */ int eType; /* +0xc */
};

unsigned char g_ucAIModuleId;
unsigned char ucIsInSchedule;
unsigned char g_ucIsInMacro;
int g_p_stTreeMacro;
/* aggregate */ int a_stTypeTable;
unsigned char ucProcedureActionReturn;
unsigned char bSomethingDone;
unsigned char g_ucNRule;
int g_p_stIntelligence;
int iNumLoop;
int GROS_ANTIBUG_DE_LA_MORT_QUI_TUE;
unsigned char g_ucUseDefaultActionReturn;
unsigned char g_ucNewActionReturn;

/* addr: 0x001fc4d0  size: 8 bytes */
void fn_vSetFieldTypeComport(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1939–1939 */
/* addr: 0x001fc4e0  size: 12 bytes */
void fn_p_stEvalCineRef(/* function pointer */ int p_stTree)
{
    /* line map: */
    /*   line 1939 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1852–1934 */
/* addr: 0x001fc4f0  size: 296 bytes */
unsigned char fn_bIntelligenceEngine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stIntelligence)
{
    unsigned char ucReturn;
    unsigned char ReturnValue;
    /* line map: */
    /*   line 1852 @ +0x000 */
    /*   line 1887 @ +0x000 */
    /*   line 1894 @ +0x000 */
    /*   line 1899 @ +0x000 */
    /*   line 1899 @ +0x000 */
    /*   line 1909 @ +0x000 */
    /*   line 1911 @ +0x000 */
    /*   line 1913 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1781–1824 */
/* addr: 0x001fc620  size: 216 bytes */
unsigned char fn_ucIntelligenceScheduleEngine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stIntelligence, /* function pointer */ int p_stTree)
{
    unsigned char ucReturn;
    tdstGetSetParam_ stValue;
    unsigned char ucIndTabAction;
    /* line map: */
    /*   line 1781 @ +0x000 */
    /*   line 1781 @ +0x000 */
    /*   line 1783 @ +0x000 */
    /*   line 1787 @ +0x000 */
    /*   line 1794 @ +0x000 */
    /*   line 1800 @ +0x000 */
    /*   line 1806 @ +0x000 */
    /*   line 1817 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1708–1763 */
/* addr: 0x001fc700  size: 384 bytes */
unsigned char fn_ucIntelligenceRulesEngine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stIntelligence, /* function pointer */ int p_stTree)
{
    int count;
    unsigned char ucTableNbEntries;
    char cNIntelligenceRule;
    tdstGetSetParam_ stValue;
    unsigned char ucIndTabAction;
    char cNRule;
    /* line map: */
    /*   line 1708 @ +0x000 */
    /*   line 1711 @ +0x000 */
    /*   line 1719 @ +0x000 */
    /*   line 1715 @ +0x000 */
    /*   line 1715 @ +0x000 */
    /*   line 1721 @ +0x000 */
    /*   line 1729 @ +0x000 */
    /*   line 1732 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1635–1685 */
/* addr: 0x001fc880  size: 432 bytes */
void fn_p_stIntelligenceEvalTreeEngine(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    unsigned char ucDepthInit;
    unsigned char ucActionReturn;
    /* line map: */
    /*   line 1635 @ +0x000 */
    /*   line 1635 @ +0x000 */
    /*   line 1635 @ +0x000 */
    /*   line 1638 @ +0x000 */
    /*   line 1643 @ +0x000 */
    /*   line 1653 @ +0x000 */
    /*   line 1660 @ +0x000 */
    /*   line 1663 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001fca30  size: 32 bytes */
void fn_p_stEvalTree(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1294–1474 */
/* addr: 0x001fca50  size: 472 bytes */
void fn_p_stEvalMetaAction(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_stTreeInit)
{
    /* aggregate */ int eMetaActionId;
    /* line map: */
    /*   line 1294 @ +0x000 */
    /*   line 1426 @ +0x000 */
    /*   line 1429 @ +0x000 */
    /*   line 1433 @ +0x000 */
    /*   line 1442 @ +0x000 */
    /*   line 1443 @ +0x000 */
    /*   line 1448 @ +0x000 */
    /*   line 1458 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1260–1264 */
/* addr: 0x001fcc30  size: 64 bytes */
void fn_p_stSkipThisArgument(/* function pointer */ int p_stTree)
{
    unsigned char ucDepth;
    /* line map: */
    /*   line 1260 @ +0x000 */
    /*   line 1264 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1246–1250 */
/* addr: 0x001fcc70  size: 64 bytes */
void fn_p_stSwapNextParameter2(/* function pointer */ int p_stTree)
{
    unsigned char ucDepth;
    /* line map: */
    /*   line 1246 @ +0x000 */
    /*   line 1250 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1235–1239 */
/* addr: 0x001fccb0  size: 64 bytes */
void fn_p_stSwapNextParameter(/* function pointer */ int p_stTree)
{
    unsigned char ucDepth;
    /* line map: */
    /*   line 1235 @ +0x000 */
    /*   line 1239 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1204–1220 */
/* addr: 0x001fccf0  size: 108 bytes */
void fn_p_stEvalProcedure(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_fn_p_stProcedureFunctionPtr)
{
    /* line map: */
    /*   line 1204 @ +0x000 */
    /*   line 1220 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001fcd60  size: 8 bytes */
void fn_vSetProcedureActionReturn(unsigned char ucActionReturn)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 1111–1119 */
/* addr: 0x001fcd70  size: 80 bytes */
void fn_p_stEvalFunction(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue, /* function pointer */ int p_fn_p_stFunctionFunctionPtr)
{
    /* line map: */
    /*   line 1111 @ +0x000 */
    /*   line 1119 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 919–919 */
/* addr: 0x001fcdc0  size: 12 bytes */
void fn_p_stEvalNULL(/* function pointer */ int p_stTree)
{
    /* line map: */
    /*   line 919 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 901–902 */
/* addr: 0x001fcdd0  size: 28 bytes */
void fn_p_stEvalGraph(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 901 @ +0x000 */
    /*   line 902 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 893–894 */
/* addr: 0x001fcdf0  size: 28 bytes */
void fn_p_stEvalCaps(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 893 @ +0x000 */
    /*   line 894 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 884–885 */
/* addr: 0x001fce10  size: 28 bytes */
void fn_p_stEvalLight(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 884 @ +0x000 */
    /*   line 885 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 875–876 */
/* addr: 0x001fce30  size: 28 bytes */
void fn_p_stEvalVisualMaterialRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 875 @ +0x000 */
    /*   line 876 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 867–868 */
/* addr: 0x001fce50  size: 28 bytes */
void fn_p_stEvalGameMaterialRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 867 @ +0x000 */
    /*   line 868 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 858–859 */
/* addr: 0x001fce70  size: 28 bytes */
void fn_p_stEvalParticleGenerator(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 858 @ +0x000 */
    /*   line 859 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 846–847 */
/* addr: 0x001fce90  size: 28 bytes */
void fn_p_stEvalTextRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 846 @ +0x000 */
    /*   line 847 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 832–833 */
/* addr: 0x001fceb0  size: 28 bytes */
void fn_p_stEvalComportRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 832 @ +0x000 */
    /*   line 833 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 818–819 */
/* addr: 0x001fced0  size: 24 bytes */
void fn_p_stEvalEndMacro(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 818 @ +0x000 */
    /*   line 819 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 809–810 */
/* addr: 0x001fcef0  size: 24 bytes */
void fn_p_stEvalBeginMacro(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 809 @ +0x000 */
    /*   line 810 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 799–799 */
/* addr: 0x001fcf10  size: 24 bytes */
void fn_p_stEvalEndOfTree(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 799 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 790–791 */
/* addr: 0x001fcf30  size: 28 bytes */
void fn_p_stEvalFamilyRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 790 @ +0x000 */
    /*   line 791 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 776–777 */
/* addr: 0x001fcf50  size: 28 bytes */
void fn_p_stEvalSoundEventRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 776 @ +0x000 */
    /*   line 777 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 762–763 */
/* addr: 0x001fcf70  size: 28 bytes */
void fn_p_stEvalLipsSynchroRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 762 @ +0x000 */
    /*   line 763 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 748–749 */
/* addr: 0x001fcf90  size: 28 bytes */
void fn_p_stEvalString(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 748 @ +0x000 */
    /*   line 749 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 734–735 */
/* addr: 0x001fcfb0  size: 28 bytes */
void fn_p_stEvalMask(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 734 @ +0x000 */
    /*   line 735 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 720–721 */
/* addr: 0x001fcfd0  size: 28 bytes */
void fn_p_stEvalDsgVarId(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 720 @ +0x000 */
    /*   line 721 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 706–707 */
/* addr: 0x001fcff0  size: 28 bytes */
void fn_p_stEvalModuleRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 706 @ +0x000 */
    /*   line 707 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 692–693 */
/* addr: 0x001fd010  size: 28 bytes */
void fn_p_stEvalWayPointRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 692 @ +0x000 */
    /*   line 693 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 678–678 */
/* addr: 0x001fd030  size: 56 bytes */
void fn_p_stEvalConstantVector(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 678 @ +0x000 */
    /*   line 678 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 650–665 */
/* addr: 0x001fd070  size: 292 bytes */
void fn_p_stEvalVector(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 650 @ +0x000 */
    /*   line 650 @ +0x000 */
    /*   line 653 @ +0x000 */
    /*   line 656 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 660 @ +0x000 */
    /*   line 665 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 600–601 */
/* addr: 0x001fd1a0  size: 28 bytes */
void fn_p_stEvalReal(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 600 @ +0x000 */
    /*   line 601 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 584–589 */
/* addr: 0x001fd1c0  size: 28 bytes */
void fn_p_stEvalActionRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 584 @ +0x000 */
    /*   line 588 @ +0x000 */
    /*   line 589 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 571–576 */
/* addr: 0x001fd1e0  size: 28 bytes */
void fn_p_stEvalPersoRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 571 @ +0x000 */
    /*   line 575 @ +0x000 */
    /*   line 576 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 561–563 */
/* addr: 0x001fd200  size: 28 bytes */
void fn_p_stEvalObjectTableRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 561 @ +0x000 */
    /*   line 562 @ +0x000 */
    /*   line 563 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 545–551 */
/* addr: 0x001fd220  size: 28 bytes */
void fn_p_stEvalSOLinksRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 545 @ +0x000 */
    /*   line 550 @ +0x000 */
    /*   line 551 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 531–537 */
/* addr: 0x001fd240  size: 28 bytes */
void fn_p_stEvalSuperObjectRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 531 @ +0x000 */
    /*   line 536 @ +0x000 */
    /*   line 537 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 521–522 */
/* addr: 0x001fd260  size: 28 bytes */
void fn_p_stEvalButton(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 521 @ +0x000 */
    /*   line 522 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 504–505 */
/* addr: 0x001fd280  size: 28 bytes */
void fn_p_stEvalConstant(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 504 @ +0x000 */
    /*   line 505 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 328–344 */
/* addr: 0x001fd2a0  size: 76 bytes */
void fn_p_stEvalField(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 328 @ +0x000 */
    /*   line 344 @ +0x000 */
    /*   line 344 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 320–321 */
/* addr: 0x001fd2f0  size: 28 bytes */
void fn_p_stEvalModelRef(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 320 @ +0x000 */
    /*   line 321 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIBase\Intell.c lines 311–312 */
/* addr: 0x001fd310  size: 28 bytes */
void fn_p_stEvalColor(/* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* line map: */
    /*   line 311 @ +0x000 */
    /*   line 312 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x001fd330  size: 8 bytes */
void fn_p_stEvalMacro(/* function pointer */ int p_SuperObjPerso, /* function pointer */ int p_stTree, tdstGetSetParam_* p_stValue)
{
    /* TODO: decompile from asm/... */
}
