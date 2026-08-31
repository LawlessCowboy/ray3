/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;

struct SECT_tdstSector_ {
    /* aggregate */ int stListOfCharacters; /* +0x0 */
    /* aggregate */ int stListOfStaticLights; /* +0xc */
    /* aggregate */ int stListOfDNMLights; /* +0x14 */
    /* aggregate */ int stListOfSectorsInGraphicInteraction; /* +0x20 */
    /* aggregate */ int stListOfSectorsInCollisionInteraction; /* +0x28 */
    /* aggregate */ int stListOfSectorsInActivityInteraction; /* +0x30 */
    /* aggregate */ int stListOfSectorsInSoundInteraction; /* +0x38 */
    /* aggregate */ int stListOfSoundEvent; /* +0x40 */
    /* array */ int stMinMaxPoints[2]; /* +0x48 */
    float xZFar; /* +0x60 */
    unsigned char xVirtual; /* +0x64 */
    char cCameraType; /* +0x65 */
    char cCounter; /* +0x66 */
    char cPriority; /* +0x67 */
    int pSkyVisualMaterial; /* +0x68 */
    unsigned char FogIntensity; /* +0x6c */
    int h_PreviousSectorInList; /* +0x70 */
    int h_NextSectorInList; /* +0x74 */
    int lModifierMulIntensity; /* +0x78 */
    int lModifierAddIntensity; /* +0x7c */
    unsigned int glOpaqueDisplayList; /* +0x80 */
    unsigned int glTransparentDisplayList; /* +0x84 */
    char cCurrentActivity; /* +0x88 */
    char cWantedActivity; /* +0x89 */
    unsigned char ucInList; /* +0x8a */
    int xTransition; /* +0x8c */
    _SND_tduRefEvt hTransitionSoundEvent; /* +0x90 */
};

struct SECT_tdstListOfDNMLights_ {
    GLI_tdstLight_* hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

unsigned char g_ucSCTModuleId;
short SCT_xNbChange;
/* aggregate */ int SCT_a10_hSectorChangeHistory;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 96–140 */
/* addr: 0x0031c080  size: 652 bytes */
void SCT_fn_vGetSymMatrixOfCameraInMirror(/* function pointer */ int hMatrixOfCamera, /* function pointer */ int hMatrixOfSymCamera, /* function pointer */ int pstGlobalPositionOfSymCamera, /* function pointer */ int pstGlobalNormalOfMirror, /* function pointer */ int pstGlobalPointOfMirror)
{
    float a23;
    float a13;
    float a12;
    float a33;
    float a22;
    /* array */ int pstModuleAxes[3];
    /* aggregate */ int stTransVectorOfCamera;
    float xTemp;
    /* aggregate */ int stTransVector;
    /* aggregate */ int stTempMatrixForMultiplication;
    /* aggregate */ int stMulMatrixScale;
    /* aggregate */ int stGlobalMatrixOfCamera;
    /* line map: */
    /*   line 96 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 110 @ +0x000 */
    /*   line 111 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 113 @ +0x000 */
    /*   line 103 @ +0x000 */
    /*   line 103 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031c310  size: 8 bytes */
void SECT_fn_p_stGetMaxPointInBorder(SECT_tdstSector_* _hSector)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031c320  size: 8 bytes */
void SECT_fn_p_stGetMinPointInBorder(SECT_tdstSector_* _hSector)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 1014–1014 */
/* addr: 0x0031c330  size: 12 bytes */
float fn_xGetSectorZFar(/* function pointer */ int _hSprObjSector)
{
    /* line map: */
    /*   line 1014 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 995–1002 */
/* addr: 0x0031c340  size: 56 bytes */
void SECT_fn_vInitActivationSector(/* function pointer */ int hSectorRoot, SECT_tdstSector_* param1, /* function pointer */ int hCurrentSector)
{
    /* line map: */
    /*   line 995 @ +0x000 */
    /*   line 997 @ +0x000 */
    /*   line 999 @ +0x000 */
    /*   line 1002 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 962–979 */
/* addr: 0x0031c380  size: 192 bytes */
void SECT_fn_hResolveSectorNextActivity(/* function pointer */ int _hSectorObject, SECT_tdstSector_* hSector, /* function pointer */ int hNextSO)
{
    /* line map: */
    /*   line 962 @ +0x000 */
    /*   line 966 @ +0x000 */
    /*   line 971 @ +0x000 */
    /*   line 974 @ +0x000 */
    /*   line 979 @ +0x000 */
    /*   line 979 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 953–953 */
/* addr: 0x0031c440  size: 44 bytes */
int SECT_fn_bIsSectorNewlyInactive(/* function pointer */ int _hSectorObject, SECT_tdstSector_* param1)
{
    /* line map: */
    /*   line 953 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 943–943 */
/* addr: 0x0031c470  size: 44 bytes */
int SECT_fn_bIsSectorNewlyActive(/* function pointer */ int _hSectorObject, SECT_tdstSector_* param1)
{
    /* line map: */
    /*   line 943 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 909–935 */
/* addr: 0x0031c4a0  size: 152 bytes */
int SECT_fn_cSetWantedActivity(/* function pointer */ int _hSectorObject, char _cWantedActivity, SECT_tdstSector_* hSector)
{
    /* line map: */
    /*   line 909 @ +0x000 */
    /*   line 909 @ +0x000 */
    /*   line 913 @ +0x000 */
    /*   line 916 @ +0x000 */
    /*   line 925 @ +0x000 */
    /*   line 930 @ +0x000 */
    /*   line 935 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 895–895 */
/* addr: 0x0031c540  size: 12 bytes */
char fn_cGetSectorCameraType(/* function pointer */ int _hSprObjSector)
{
    /* line map: */
    /*   line 895 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 885–885 */
/* addr: 0x0031c550  size: 12 bytes */
unsigned char SECT_fn_bIsThisSectorVirtual(/* function pointer */ int _hSprObjSector)
{
    /* line map: */
    /*   line 885 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 505–505 */
/* addr: 0x0031c560  size: 216 bytes */
void SECT_fn_vAddTailDNMLightsListNode(/* function pointer */ int hSector, SECT_tdstListOfDNMLights_* hNode)
{
    /* line map: */
    /*   line 505 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 499–499 */
/* addr: 0x0031c640  size: 132 bytes */
void SECT_fn_vIsolateDNMLightsListNode(SECT_tdstListOfDNMLights_* hNode)
{
    /* line map: */
    /*   line 499 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 493–493 */
/* addr: 0x0031c6d0  size: 212 bytes */
void SECT_fn_vAddHeadCharListNode(/* function pointer */ int hSector, /* function pointer */ int hNode)
{
    /* line map: */
    /*   line 493 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 487–487 */
/* addr: 0x0031c7b0  size: 212 bytes */
void SECT_fn_vAddTailCharListNode(/* function pointer */ int hSector, /* function pointer */ int hNode)
{
    /* line map: */
    /*   line 487 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 481–481 */
/* addr: 0x0031c890  size: 132 bytes */
void SECT_fn_vIsolateCharListNode(/* function pointer */ int hNode)
{
    /* line map: */
    /*   line 481 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 368–407 */
/* addr: 0x0031c920  size: 876 bytes */
void SCT_fn_vTestChangeSectorWithHistory(/* function pointer */ int _p_stAfterAbsolutePosition, /* function pointer */ int _p_hSectorSOWhereIWas, /* function pointer */ int param2, SECT_tdstSector_* hCurrentSectorObject, SECT_tdstSector_* hSectorObject, /* function pointer */ int hCollisionNode)
{
    int iInd;
    /* line map: */
    /*   line 368 @ +0x000 */
    /*   line 371 @ +0x000 */
    /*   line 377 @ +0x000 */
    /*   line 378 @ +0x000 */
    /*   line 383 @ +0x000 */
    /*   line 388 @ +0x000 */
    /*   line 394 @ +0x000 */
    /*   line 398 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 292–349 */
/* addr: 0x0031cc90  size: 608 bytes */
void SECT_fn_hResearchInWhatSectorIAm(/* function pointer */ int SECT_hFatherSector, /* function pointer */ int p_stAbsolutePosition, /* function pointer */ int hLastSector, /* function pointer */ int hCurrentSector, /* function pointer */ int hVirtualSectorWhereIAm, /* function pointer */ int hSectorWhereIAm, SECT_tdstSector_* param6)
{
    char cVirtualPriority;
    char cCurrentPriority;
    float xVirtualDistance;
    float xCurrentDistance;
    /* line map: */
    /*   line 294 @ +0x000 */
    /*   line 294 @ +0x000 */
    /*   line 292 @ +0x000 */
    /*   line 297 @ +0x000 */
    /*   line 300 @ +0x000 */
    /*   line 303 @ +0x000 */
    /*   line 309 @ +0x000 */
    /*   line 309 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 242–257 */
/* addr: 0x0031cef0  size: 224 bytes */
int SECT_fn_bIsInBorderBox(/* function pointer */ int _p_stPosition, SECT_tdstSector_* _hSector)
{
    /* aggregate */ int stMax;
    /* aggregate */ int stMin;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 250 @ +0x000 */
    /*   line 247 @ +0x000 */
    /*   line 251 @ +0x000 */
    /*   line 254 @ +0x000 */
    /*   line 257 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031cfd0  size: 8 bytes */
void SECT_fn_vSetHandleOfLightsInDNMLightsList(SECT_tdstListOfDNMLights_* hDNMLightsElement, GLI_tdstLight_* hDNMLights)
{
    hDNMLightsElement->hDNMLights = hDNMLights;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 224–228 */
/* addr: 0x0031cfe0  size: 44 bytes */
void SECT_fn_hCreateElementLstDNMLights(SECT_tdstListOfDNMLights_* hDNMLightsElement)
{
    /* line map: */
    /*   line 224 @ +0x000 */
    /*   line 224 @ +0x000 */
    /*   line 228 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0031d010  size: 8 bytes */
void SECT_fn_vSetCharacterPointerInCharacterList(/* function pointer */ int hCharacterElement, /* function pointer */ int hSectorSuperObject)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\Sector.c lines 204–208 */
/* addr: 0x0031d020  size: 44 bytes */
void SECT_fn_hCreateElementLstCharacter(/* function pointer */ int hCharacterElement)
{
    /* line map: */
    /*   line 204 @ +0x000 */
    /*   line 204 @ +0x000 */
    /*   line 208 @ +0x000 */
    /* TODO: decompile from asm/... */
}
