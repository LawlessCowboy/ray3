/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct _tdstCheapCharacterList _tdstCheapCharacterList;
typedef struct tdstGetSetParam_ tdstGetSetParam_;
typedef struct tdstNodeInterpret_ tdstNodeInterpret_;

/* These declarations are used by the recovered local-variable records below.
 * The extractor retained the names but this TU did not receive the shared
 * engine header definitions.  Keep the records complete so MWCC can compile
 * the translation unit; their members will be recovered from the owning
 * shared types before these functions are decompiled. */
typedef int tdeProcedureId_;
typedef int tdeFuncId_;
struct MTH3D_tdstVector_ {
    float x;
    float y;
    float z;
};
typedef enum tdeVariableType_ { eVariableType_Dummy = 0 } tdeVariableType_;
typedef struct MTH4D_tdstVector_ { float x; float y; float z; float w; } MTH4D_tdstVector_;
typedef struct MTH4D_tdstMatrix_ MTH4D_tdstMatrix_;
typedef struct tdstStandardGame_ tdstStandardGame_;
typedef struct tdstEngineObject_ {
    void* h3dData; /* +0x0 */
    tdstStandardGame_* hStandardGame; /* +0x4 */
} tdstEngineObject_;
typedef union tduGetSetParam_ {
    float xValue;
    int lValue;
    unsigned int ulValue;
    char cValue;
    unsigned char ucValue;
    HIE_tdstSuperObject_* hSuperObject;
    tdstEngineObject_* p_stEngObjValue;
    GLI_tdstMaterial_* hVisualMaterial;
    MTH3D_tdstVector_ stVectorValue;
    void* pValue;
} tduGetSetParam_;
struct tdstGetSetParam_ {
    tduGetSetParam_ uParam; /* +0x0 */
    tdeVariableType_ eType; /* +0xc */
};
struct tdstNodeInterpret_ {
    unsigned int uDummy; /* +0x0 */
    unsigned char _raw[4];
};

typedef struct _tdstCheapCharacter {
    MTH4D_tdstVector_ stPosition; /* +0x0 */
    MTH4D_tdstVector_ stDirection; /* +0x10 */
    unsigned int lTakenTime; /* +0x20 */
    char cActivity; /* +0x24 */
    unsigned char _extractor_padding_25[11]; /* +0x25..0x2f */
} _tdstCheapCharacter;

struct _tdstCheapCharacterList {
    HIE_tdstSuperObject_* pReferenceObject; /* +0x0 */
    unsigned char _extractor_padding_00[12]; /* implicitly added by extractor; +0x4..0xf */
    _tdstCheapCharacter List[40]; /* +0x10 */
    unsigned int NumberOfCheapCharacter; /* +0x790 */
    unsigned int MaxNumberOfCheapCharacter; /* +0x794 */
    unsigned int lIndOfFurthestDesactivateCharacter; /* +0x798 */
    unsigned int lIndOfClosestDesactivateCharacter; /* +0x79c */
    unsigned int lIndOfReactivateCharacter; /* +0x7a0 */
    unsigned int lTimer; /* +0x7a4 */
    float fSquaredMinDistance; /* +0x7a8 */
    float fSquaredMaxDistance; /* +0x7ac */
    unsigned int ulOptionFlags; /* +0x7b0 */
    GLI_tdstMaterial_* hAuraVisualMaterial; /* +0x7b4 */
    float p_fAuraSizes[2]; /* +0x7b8 */
    float fAuraSizeBlinkRange; /* +0x7c0 */
    float fAuraTransparencyMidLevel; /* +0x7c4 */
    float fAuraTransparencyBlinkRange; /* +0x7c8 */
    unsigned int bAurasNeedToBeDrawn; /* +0x7cc */
    unsigned int SDL; /* +0x7d0 */
    MTH4D_tdstMatrix_* pMatrixList; /* +0x7d4 */
    unsigned int NbMatrices; /* +0x7d8 */
    char cTestMode; /* +0x7dc */
};

extern _tdstCheapCharacterList g_aListOfCheapCharacterList[10];

extern unsigned int g_lNbListOfCheapCharacterList;
extern "C" void HIE_fn_CleanAllListOfFakeInstanceToViewport(void);
extern "C" HIE_tdstSuperObject_* fn_h_StandardGameGetSuperObject(tdstStandardGame_* h_StdGame);
extern "C" unsigned char fn_ucGetFunctionUltraOperator(tdeFuncId_ eFuncId);
extern "C" void fn_vGetUltraOperatorPerso(unsigned char bYouHaveRightToUseThisFunction, HIE_tdstSuperObject_* hCurrentSuperObjPerso, HIE_tdstSuperObject_** hNewSuperObjPerso);
extern "C" int Erm_fn_iMessageBox(char* _szText, char* _szTitle, int _iType);
extern "C" int lCreateCheapCharacterList(unsigned int ulMax, HIE_tdstSuperObject_* pRefObj);
extern "C" void AddCheapCharacter(unsigned int ulInd, MTH3D_tdstVector_* pPos);
extern "C" void InitCheapCharacterList(unsigned int ulInd, unsigned int ulMax, HIE_tdstSuperObject_* pRefObj);
extern "C" tdstNodeInterpret_* fn_p_stEvalTree(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue);

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 643–677 */
/* addr: 0x002290b0  size: 196 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 643
 *   +0x0008 -> line 650
 *   +0x000c -> line 643
 *   +0x0018 -> line 646
 *   +0x001c -> line 650
 *   +0x0024 -> line 652
 *   +0x0028 -> line 650
 *   +0x002c -> line 652
 *   +0x0030 -> line 655
 *   +0x0034 -> line 652
 *   +0x0038 -> line 655
 *   +0x003c -> line 652
 *   +0x0048 -> line 655
 *   +0x0050 -> line 662
 *   +0x0058 -> line 656
 *   +0x005c -> line 662
 *   +0x0064 -> line 669
 *   +0x0070 -> line 671
 *   +0x007c -> line 672
 *   +0x0094 -> line 674
 *   +0x00ac -> line 677
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterOptions(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    unsigned int ulBit;
    unsigned int ulValue;
    tdeProcedureId_ eProcedureId;
    _tdstCheapCharacterList* pCheapList;

    eProcedureId = (p_stTree - 1)->uDummy;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pCheapList = &g_aListOfCheapCharacterList[stParam.uParam.ulValue];
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulBit = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulValue = stParam.uParam.ulValue;
    if (eProcedureId == 848) {
        if (ulValue == 1)
            pCheapList->ulOptionFlags |= 1 << (ulBit - 1);
        else
            pCheapList->ulOptionFlags &= ~(1 << (ulBit - 1));
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 607–639 */
/* addr: 0x00229180  size: 264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 607
 *   +0x0008 -> line 616
 *   +0x000c -> line 607
 *   +0x0020 -> line 616
 *   +0x0028 -> line 617
 *   +0x002c -> line 616
 *   +0x0030 -> line 620
 *   +0x003c -> line 621
 *   +0x0040 -> line 624
 *   +0x0050 -> line 626
 *   +0x0054 -> line 630
 *   +0x0058 -> line 627
 *   +0x005c -> line 630
 *   +0x0060 -> line 628
 *   +0x0064 -> line 630
 *   +0x0068 -> line 626
 *   +0x006c -> line 627
 *   +0x0070 -> line 630
 *   +0x0078 -> line 631
 *   +0x009c -> line 633
 *   +0x00ac -> line 636
 *   +0x00b0 -> line 633
 *   +0x00b4 -> line 636
 *   +0x00e4 -> line 638
 *   +0x00e8 -> line 639
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
extern "C" void AddCheapCharacterListAura(unsigned int, GLI_tdstMaterial_*, MTH3D_tdstVector_*, float, float);
tdstNodeInterpret_* fn_p_stSetCheapCharacterListAura(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    float fTransparencyBlinkParam;
    float fTransparencyParam;
    unsigned int ulInd;
    GLI_tdstMaterial_* hVisualMaterial;
    MTH3D_tdstVector_ vSizeParam;
    tdstGetSetParam_ stParam;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hVisualMaterial = stParam.uParam.hVisualMaterial;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    vSizeParam = stParam.uParam.stVectorValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fTransparencyParam = (stParam.eType == 8) ? stParam.uParam.xValue : (float)stParam.uParam.lValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fTransparencyBlinkParam = (stParam.eType == 8) ? stParam.uParam.xValue : (float)stParam.uParam.lValue;
    AddCheapCharacterListAura(ulInd, hVisualMaterial, &vSizeParam, fTransparencyParam, fTransparencyBlinkParam);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 568–603 */
/* addr: 0x00229290  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 568
 *   +0x0008 -> line 575
 *   +0x000c -> line 568
 *   +0x0014 -> line 571
 *   +0x0018 -> line 575
 *   +0x0020 -> line 578
 *   +0x0024 -> line 575
 *   +0x0028 -> line 578
 *   +0x002c -> line 581
 *   +0x0030 -> line 578
 *   +0x0034 -> line 581
 *   +0x0038 -> line 578
 *   +0x0044 -> line 581
 *   +0x004c -> line 582
 *   +0x0050 -> line 584
 *   +0x0060 -> line 586
 *   +0x0068 -> line 587
 *   +0x0080 -> line 593
 *   +0x0088 -> line 594
 *   +0x009c -> line 603
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stActivateCheapCharacter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    unsigned int ulIndChar;
    tdeProcedureId_ eProcedureId;
    _tdstCheapCharacterList* pCheapList;

    eProcedureId = (p_stTree - 1)->uDummy;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pCheapList = &g_aListOfCheapCharacterList[stParam.uParam.ulValue];
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulIndChar = stParam.uParam.ulValue;
    if (ulIndChar < pCheapList->NumberOfCheapCharacter) {
        if (eProcedureId == 846)
            pCheapList->List[ulIndChar].cActivity = 1;
        else
            pCheapList->List[ulIndChar].cActivity = 0;
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 554–564 */
/* addr: 0x00229340  size: 128 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 554
 *   +0x0008 -> line 559
 *   +0x0010 -> line 562
 *   +0x0014 -> line 559
 *   +0x0018 -> line 562
 *   +0x006c -> line 563
 *   +0x0070 -> line 562
 *   +0x0074 -> line 564
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stResetCheapCharacterList(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdstGetSetParam_ stParam;
    _tdstCheapCharacterList* pCheapList;
    unsigned int i;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    pCheapList = &g_aListOfCheapCharacterList[stParam.uParam.ulValue];
    pCheapList->NumberOfCheapCharacter = 0;
    pCheapList->pReferenceObject = NULL;
    pCheapList->ulOptionFlags = 0;
    for (i = 0; i < pCheapList->MaxNumberOfCheapCharacter; i++)
        pCheapList->List[i].cActivity = 0;
    pCheapList->hAuraVisualMaterial = NULL;
    pCheapList->bAurasNeedToBeDrawn = 0;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 530–550 */
/* addr: 0x002293c0  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 530
 *   +0x0008 -> line 536
 *   +0x000c -> line 530
 *   +0x0010 -> line 536
 *   +0x0018 -> line 540
 *   +0x001c -> line 536
 *   +0x0020 -> line 537
 *   +0x0024 -> line 540
 *   +0x002c -> line 541
 *   +0x0030 -> line 543
 *   +0x0034 -> line 541
 *   +0x003c -> line 543
 *   +0x0040 -> line 541
 *   +0x0044 -> line 543
 *   +0x0048 -> line 541
 *   +0x004c -> line 543
 *   +0x0058 -> line 541
 *   +0x005c -> line 543
 *   +0x0170 -> line 550
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stAddCheapCharacter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulInd;
    MTH3D_tdstVector_ stPosition;
    tdstGetSetParam_ stParam;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    stPosition = stParam.uParam.stVectorValue;
    AddCheapCharacter(ulInd, &stPosition);
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 479–526 */
/* addr: 0x00229540  size: 432 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 479
 *   +0x0008 -> line 487
 *   +0x000c -> line 479
 *   +0x0024 -> line 484
 *   +0x0028 -> line 487
 *   +0x0030 -> line 488
 *   +0x0034 -> line 487
 *   +0x0038 -> line 491
 *   +0x0044 -> line 492
 *   +0x0048 -> line 496
 *   +0x0058 -> line 497
 *   +0x0068 -> line 499
 *   +0x006c -> line 497
 *   +0x0070 -> line 499
 *   +0x0084 -> line 497
 *   +0x0088 -> line 501
 *   +0x0098 -> line 503
 *   +0x00a0 -> line 506
 *   +0x00ac -> line 508
 *   +0x00c4 -> line 509
 *   +0x00cc -> line 510
 *   +0x00d0 -> line 508
 *   +0x00d4 -> line 510
 *   +0x00d8 -> line 509
 *   +0x00e0 -> line 510
 *   +0x00e4 -> line 511
 *   +0x00ec -> line 513
 *   +0x00f4 -> line 515
 *   +0x010c -> line 516
 *   +0x0114 -> line 517
 *   +0x0118 -> line 515
 *   +0x011c -> line 517
 *   +0x0120 -> line 516
 *   +0x0128 -> line 517
 *   +0x0130 -> line 519
 *   +0x0188 -> line 525
 *   +0x018c -> line 526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterPos(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    _tdstCheapCharacterList* pCheapList;
    MTH3D_tdstVector_ stPosition;
    unsigned int ulIndChar;
    unsigned int ulInd;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 461–475 */
/* addr: 0x00229700  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 461
 *   +0x0008 -> line 466
 *   +0x000c -> line 461
 *   +0x0010 -> line 466
 *   +0x0018 -> line 470
 *   +0x001c -> line 466
 *   +0x0020 -> line 467
 *   +0x0024 -> line 470
 *   +0x002c -> line 473
 *   +0x004c -> line 475
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterMode(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulInd;
    tdstGetSetParam_ stParam;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    g_aListOfCheapCharacterList[ulInd].cTestMode = stParam.uParam.cValue;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 442–457 */
/* addr: 0x00229760  size: 116 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 442
 *   +0x0008 -> line 448
 *   +0x000c -> line 442
 *   +0x0014 -> line 448
 *   +0x001c -> line 449
 *   +0x0020 -> line 452
 *   +0x0024 -> line 448
 *   +0x0028 -> line 452
 *   +0x0034 -> line 453
 *   +0x0040 -> line 455
 *   +0x005c -> line 456
 *   +0x0060 -> line 457
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterRefObj(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulInd;
    HIE_tdstSuperObject_* hCharacter;
    tdstGetSetParam_ stParam;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    hCharacter = fn_h_StandardGameGetSuperObject(stParam.uParam.p_stEngObjValue->hStandardGame);
    g_aListOfCheapCharacterList[ulInd].pReferenceObject = hCharacter;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 423–438 */
/* addr: 0x002297e0  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 423
 *   +0x0008 -> line 429
 *   +0x000c -> line 423
 *   +0x0010 -> line 429
 *   +0x0018 -> line 433
 *   +0x001c -> line 429
 *   +0x0020 -> line 430
 *   +0x0024 -> line 433
 *   +0x002c -> line 436
 *   +0x004c -> line 438
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterTimer(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    unsigned int ulInd;
    tdstGetSetParam_ stParam;

    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    g_aListOfCheapCharacterList[ulInd].lTimer = stParam.uParam.ulValue;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 399–419 */
/* addr: 0x00229840  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 399
 *   +0x0008 -> line 406
 *   +0x000c -> line 399
 *   +0x0014 -> line 400
 *   +0x0018 -> line 406
 *   +0x0020 -> line 410
 *   +0x0024 -> line 406
 *   +0x0028 -> line 407
 *   +0x002c -> line 410
 *   +0x0034 -> line 413
 *   +0x0040 -> line 414
 *   +0x0064 -> line 416
 *   +0x0084 -> line 419
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stSetCheapCharacterDistance(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree)
{
    tdeProcedureId_ eProcedureId;
    tdstGetSetParam_ stParam;
    float fDistance;
    unsigned int ulInd;

    eProcedureId = (p_stTree - 1)->uDummy;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulInd = stParam.uParam.ulValue;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    fDistance = stParam.uParam.xValue;
    if (eProcedureId == 836)
        g_aListOfCheapCharacterList[ulInd].fSquaredMinDistance = fDistance * fDistance;
    else
        g_aListOfCheapCharacterList[ulInd].fSquaredMaxDistance = fDistance * fDistance;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 362–391 */
/* addr: 0x002298e0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 362
 *   +0x0010 -> line 365
 *   +0x0018 -> line 369
 *   +0x0024 -> line 372
 *   +0x0050 -> line 375
 *   +0x0064 -> line 376
 *   +0x006c -> line 378
 *   +0x0080 -> line 379
 *   +0x0088 -> line 381
 *   +0x00a8 -> line 389
 *   +0x00b4 -> line 390
 *   +0x00b8 -> line 391
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stGetCheapCharacter(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    tdeFuncId_ eFuncId;
    unsigned int ulRes;
    unsigned int ulIndList;
    tdstGetSetParam_ stParam;

    eFuncId = (p_stTree - 1)->uDummy;
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulIndList = stParam.uParam.ulValue;
    switch (eFuncId) {
    case 134:
        ulRes = g_aListOfCheapCharacterList[ulIndList].lIndOfClosestDesactivateCharacter;
        break;
    case 135:
        ulRes = g_aListOfCheapCharacterList[ulIndList].lIndOfFurthestDesactivateCharacter;
        break;
    case 136:
        ulRes = g_aListOfCheapCharacterList[ulIndList].lIndOfReactivateCharacter;
        break;
    default:
        ulRes = 0;
        break;
    }
    p_stValue->uParam.ulValue = ulRes;
    p_stValue->eType = (tdeVariableType_)6;
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 340–358 */
/* addr: 0x002299b0  size: 312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 340
 *   +0x0018 -> line 346
 *   +0x001c -> line 340
 *   +0x0020 -> line 346
 *   +0x0028 -> line 350
 *   +0x002c -> line 346
 *   +0x0030 -> line 347
 *   +0x0034 -> line 350
 *   +0x0040 -> line 351
 *   +0x004c -> line 353
 *   +0x00fc -> line 354
 *   +0x010c -> line 356
 *   +0x0114 -> line 357
 *   +0x0118 -> line 356
 *   +0x011c -> line 358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stTestCheapCharacterList(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hCharacter;
    unsigned int ulTestRes;
    unsigned int ulInd;
    tdstGetSetParam_ stParam;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 303–334 */
/* addr: 0x00229af0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 303
 *   +0x001c -> line 313
 *   +0x0038 -> line 316
 *   +0x0048 -> line 319
 *   +0x004c -> line 317
 *   +0x0050 -> line 319
 *   +0x0080 -> line 321
 *   +0x0088 -> line 328
 *   +0x0090 -> line 329
 *   +0x0098 -> line 331
 *   +0x00ac -> line 333
 *   +0x00b0 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tdstNodeInterpret_* fn_p_stCreateCheapCharacterList(HIE_tdstSuperObject_* p_SuperObjPerso, tdstNodeInterpret_* p_stTree, tdstGetSetParam_* p_stValue)
{
    HIE_tdstSuperObject_* hNewSuperObjPerso;
    unsigned int ulMax;
    tdstGetSetParam_ stParam;
    int lListIndex;

    fn_vGetUltraOperatorPerso(fn_ucGetFunctionUltraOperator((p_stTree - 1)->uDummy), p_SuperObjPerso, &hNewSuperObjPerso);
    p_stTree = fn_p_stEvalTree(p_SuperObjPerso, p_stTree, &stParam);
    ulMax = stParam.uParam.ulValue;
    lListIndex = lCreateCheapCharacterList(ulMax, hNewSuperObjPerso);
    if (lListIndex >= 0) {
        p_stValue->uParam.lValue = lListIndex;
        p_stValue->eType = (tdeVariableType_)6;
    } else {
        Erm_fn_iMessageBox("too many cheap character lists", "ERROR", 0x10);
    }
    return p_stTree;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 167–242 */
/* addr: 0x00229bc0  size: 476 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 167
 *   +0x0008 -> line 172
 *   +0x001c -> line 182
 *   +0x0020 -> line 172
 *   +0x0024 -> line 174
 *   +0x002c -> line 167
 *   +0x0030 -> line 175
 *   +0x0034 -> line 168
 *   +0x0038 -> line 180
 *   +0x0040 -> line 182
 *   +0x0048 -> line 184
 *   +0x0054 -> line 188
 *   +0x005c -> line 187
 *   +0x0064 -> line 189
 *   +0x006c -> line 188
 *   +0x0070 -> line 189
 *   +0x0074 -> line 187
 *   +0x0078 -> line 190
 *   +0x0088 -> line 192
 *   +0x0098 -> line 195
 *   +0x009c -> line 194
 *   +0x00a0 -> line 197
 *   +0x00b0 -> line 199
 *   +0x00b4 -> line 200
 *   +0x00bc -> line 203
 *   +0x00d0 -> line 205
 *   +0x00e0 -> line 207
 *   +0x00f4 -> line 209
 *   +0x00fc -> line 210
 *   +0x0104 -> line 218
 *   +0x0108 -> line 209
 *   +0x011c -> line 210
 *   +0x0134 -> line 218
 *   +0x013c -> line 221
 *   +0x0144 -> line 223
 *   +0x0158 -> line 225
 *   +0x0160 -> line 233
 *   +0x0164 -> line 225
 *   +0x0178 -> line 233
 *   +0x0184 -> line 235
 *   +0x01a4 -> line 237
 *   +0x01c8 -> line 238
 *   +0x01d0 -> line 241
 *   +0x01d4 -> line 242
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int TestPositionOfCheapCharacter(unsigned int ulIndList, HIE_tdstSuperObject_* hCharacter)
{
    _tdstCheapCharacterList* pCheapList;
    float z;
    float y;
    float x;
    float fSquaredDistance;
    float fMaxSqDistance;
    float fMinSqDistance;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 156–157 */
/* addr: 0x00229da0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x0034 -> line 157
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateCheapCharacter(unsigned int ulInd, unsigned int ulIndChar, unsigned char bActivate)
{
    g_aListOfCheapCharacterList[ulInd].List[ulIndChar].cActivity = bActivate ? 1 : 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 137–152 */
/* addr: 0x00229de0  size: 228 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 140
 *   +0x0004 -> line 137
 *   +0x0008 -> line 140
 *   +0x000c -> line 137
 *   +0x001c -> line 140
 *   +0x0038 -> line 141
 *   +0x0060 -> line 142
 *   +0x007c -> line 143
 *   +0x00a0 -> line 145
 *   +0x00a4 -> line 149
 *   +0x00a8 -> line 146
 *   +0x00ac -> line 149
 *   +0x00bc -> line 146
 *   +0x00c0 -> line 147
 *   +0x00c4 -> line 150
 *   +0x00c8 -> line 147
 *   +0x00cc -> line 148
 *   +0x00d4 -> line 149
 *   +0x00d8 -> line 150
 *   +0x00dc -> line 152
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AddCheapCharacterListAura(unsigned int ulInd, GLI_tdstMaterial_* hVisualMaterial, MTH3D_tdstVector_* pSizeParam, float fTransparencyParam, float fTransparencyBlinkParam)
{
    _tdstCheapCharacterList* param0;
    param0 = &g_aListOfCheapCharacterList[ulInd];
    if (pSizeParam->x - pSizeParam->z < 0.0f)
        pSizeParam->z = pSizeParam->x;
    if (pSizeParam->y - pSizeParam->z < 0.0f)
        pSizeParam->z = pSizeParam->y;
    if (fTransparencyParam - fTransparencyBlinkParam < 0.0f)
        fTransparencyBlinkParam = fTransparencyParam;
    if (fTransparencyParam + fTransparencyBlinkParam > 255.0f)
        fTransparencyBlinkParam = 255.0f - fTransparencyParam;
    param0->hAuraVisualMaterial = hVisualMaterial;
    param0->p_fAuraSizes[0] = pSizeParam->x;
    param0->p_fAuraSizes[1] = pSizeParam->y;
    param0->fAuraSizeBlinkRange = pSizeParam->z;
    param0->fAuraTransparencyMidLevel = (1.0f / 255.0f) * fTransparencyParam;
    param0->fAuraTransparencyBlinkRange = (1.0f / 255.0f) * fTransparencyBlinkParam;
    param0->bAurasNeedToBeDrawn = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 106–128 */
/* addr: 0x00229ed0  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 106
 *   +0x0018 -> line 108
 *   +0x002c -> line 115
 *   +0x0034 -> line 117
 *   +0x0040 -> line 118
 *   +0x0044 -> line 117
 *   +0x0050 -> line 119
 *   +0x0054 -> line 121
 *   +0x0058 -> line 122
 *   +0x005c -> line 123
 *   +0x0060 -> line 125
 *   +0x0064 -> line 117
 *   +0x0068 -> line 125
 *   +0x006c -> line 118
 *   +0x0074 -> line 126
 *   +0x0078 -> line 118
 *   +0x008c -> line 119
 *   +0x00a8 -> line 121
 *   +0x00c0 -> line 122
 *   +0x00d8 -> line 123
 *   +0x00f0 -> line 125
 *   +0x0108 -> line 126
 *   +0x0120 -> line 127
 *   +0x012c -> line 128
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* Not original source, needs cleaning up: retail adds each member offset to
 * the list base before adding the scaled character index; only the char*
 * temp plus the dead iIndex assignment reproduces that. */
#pragma auto_inline on
void AddCheapCharacter(unsigned int ulInd, MTH3D_tdstVector_* pPos)
{
    _tdstCheapCharacterList* pCheapList;
    char* pc;
    int iIndex;

    pCheapList = &g_aListOfCheapCharacterList[ulInd];
    if (pCheapList->NumberOfCheapCharacter < pCheapList->MaxNumberOfCheapCharacter) {
        if (pCheapList->NumberOfCheapCharacter < pCheapList->MaxNumberOfCheapCharacter) {
            pc = (char*)pCheapList;
            pc = pc + 0x10;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = pPos->x;
            pc = (char*)pCheapList;
            pc = pc + 0x14;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = pPos->y;
            pc = (char*)pCheapList;
            pc = pc + 0x18;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = pPos->z;
            pc = (char*)pCheapList;
            pc = pc + 0x20;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = 0.0f;
            pc = (char*)pCheapList;
            pc = pc + 0x24;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = 0.0f;
            pc = (char*)pCheapList;
            pc = pc + 0x28;
            ((float*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = 0.0f;
            pc = (char*)pCheapList;
            pc = pc + 0x34;
            ((char*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 48] = 1;
            pc = (char*)pCheapList;
            pc = pc + 0x30;
            ((unsigned int*)pc)[iIndex = (int)pCheapList->NumberOfCheapCharacter * 12] = 0;
            pCheapList->NumberOfCheapCharacter++;
        }
    }
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 73–84 */
/* addr: 0x0022a010  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 *   +0x000c -> line 78
 *   +0x002c -> line 80
 *   +0x0034 -> line 81
 *   +0x0040 -> line 83
 *   +0x0044 -> line 84
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
#pragma auto_inline on
int lCreateCheapCharacterList(unsigned int ulMax, HIE_tdstSuperObject_* pRefObj)
{
    int lListIndex;

    if (g_lNbListOfCheapCharacterList < 10)
        lListIndex = g_lNbListOfCheapCharacterList++;
    else
        lListIndex = -1;
    if (lListIndex >= 0)
        InitCheapCharacterList(lListIndex, ulMax, pRefObj);
    return lListIndex;
}
#pragma auto_inline reset

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 39–69 */
/* addr: 0x0022a070  size: 152 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 39
 *   +0x0004 -> line 45
 *   +0x0008 -> line 39
 *   +0x001c -> line 45
 *   +0x0024 -> line 46
 *   +0x0028 -> line 47
 *   +0x002c -> line 49
 *   +0x0030 -> line 48
 *   +0x0034 -> line 50
 *   +0x0038 -> line 49
 *   +0x003c -> line 63
 *   +0x0040 -> line 50
 *   +0x0044 -> line 52
 *   +0x0048 -> line 51
 *   +0x004c -> line 63
 *   +0x0050 -> line 52
 *   +0x0054 -> line 53
 *   +0x0058 -> line 56
 *   +0x005c -> line 57
 *   +0x0060 -> line 59
 *   +0x0064 -> line 63
 *   +0x0070 -> line 65
 *   +0x007c -> line 66
 *   +0x0080 -> line 65
 *   +0x0084 -> line 66
 *   +0x0090 -> line 69
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitCheapCharacterList(unsigned int ulInd, unsigned int ulMax, HIE_tdstSuperObject_* pRefObj)
{
    unsigned int i;
    _tdstCheapCharacterList* pCheapList;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\AI\AIGame\ProcOptim.cxx lines 28–34 */
/* addr: 0x0022a110  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 28
 *   +0x0008 -> line 31
 *   +0x0010 -> line 33
 *   +0x0014 -> line 34
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void InitListOfCheapCharacterList(void)
{
    HIE_fn_CleanAllListOfFakeInstanceToViewport();
    g_lNbListOfCheapCharacterList = 0;
}
