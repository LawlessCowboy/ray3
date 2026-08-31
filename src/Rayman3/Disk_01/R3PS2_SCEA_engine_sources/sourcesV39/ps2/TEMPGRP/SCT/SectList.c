/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct SECT_tdstSector_ SECT_tdstSector_;
typedef struct SECT_tdstListOfDNMLights_ SECT_tdstListOfDNMLights_;
typedef struct SCT_tdstListOfSoundEvent_ SCT_tdstListOfSoundEvent_;
typedef struct GEO_tdstEdge_ GEO_tdstEdge_;
typedef union _SND_tduRefEvt _SND_tduRefEvt;

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
    int hDNMLights; /* +0x0 */
    int hNextBrotherDyn; /* +0x4 */
    int hPrevBrotherDyn; /* +0x8 */
    int hFatherDyn; /* +0xc */
};

struct SCT_tdstListOfSoundEvent_ {
    int hPointerOfSectorSO; /* +0x0 */
    _SND_tduRefEvt uSoundEvent; /* +0x4 */
};

struct GEO_tdstEdge_ {
    short xPoints[2]; /* +0x0 */
    /* array */ int st_VectorPoints[2]; /* +0x4 */
};

union _SND_tduRefEvt {
    unsigned int Id; /* +0x0 */
    int pstPtr; /* +0x0 */
};

int SECT_g_hActiveSectorList_Head;
int SECT_g_hActiveSectorList_Tail;
unsigned short SECT_g_uwActiveSectorList_NumberOfElements;

/* addr: 0x00319b60  size: 28 bytes */
unsigned char SAI_fn_bInsertBoolInTable(void* _p_vValue, unsigned char ucMask, unsigned short _eFlags)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c lines 129–129 */
/* addr: 0x00319b80  size: 12 bytes */
void SECT_fnvInitGlobalsForActivity(void)
{
    /* line map: */
    /*   line 129 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c lines 122–122 */
/* addr: 0x00319b90  size: 12 bytes */
void SECT_fn_hGetActiveSectorListNext(/* function pointer */ int _hCurrentSO)
{
    /* line map: */
    /*   line 122 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x00319ba0  size: 8 bytes */
void SECT_fn_hGetActiveSectorListHead(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c lines 100–104 */
/* addr: 0x00319bb0  size: 28 bytes */
void SECT_fn_vDesactivateSector(/* function pointer */ int _hSectorSO, SECT_tdstSector_* param1)
{
    /* line map: */
    /*   line 100 @ +0x000 */
    /*   line 104 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c lines 65–91 */
/* addr: 0x00319bd0  size: 160 bytes */
void SECT_fn_vRemoveSectorFromList(/* function pointer */ int _hSectorSO, SECT_tdstSector_* hSector)
{
    /* line map: */
    /*   line 65 @ +0x000 */
    /*   line 69 @ +0x000 */
    /*   line 73 @ +0x000 */
    /*   line 78 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 84 @ +0x000 */
    /*   line 89 @ +0x000 */
    /*   line 91 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\SCT\SectList.c lines 55–59 */
/* addr: 0x00319c70  size: 32 bytes */
void SECT_fn_vActivateSector(/* function pointer */ int _hSectorSO, SECT_tdstSector_* hSector)
{
    /* line map: */
    /*   line 55 @ +0x000 */
    /*   line 59 @ +0x000 */
    /* TODO: decompile from asm/... */
}
