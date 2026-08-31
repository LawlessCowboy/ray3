/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;

struct anon_0 {
    /* aggregate */ int A; /* +0x0 */
    /* aggregate */ int B; /* +0xc */
    int Ind; /* +0x18 */
};

int COL_g_stCollisionCaseReal;
int COL_g_lNbElementsInTable;
int g_NbCollidedEdges;
int g_pstGV;
anon_0 g_aCollidedEdges[50];
/* aggregate */ int COL_g_stGVForCol;
/* array */ int COL_g_stCollisionCase[75];
int COL_g_lMaxNumberOfCollisions;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 121–163 */
/* addr: 0x0024d180  size: 352 bytes */
float MAT_fn_xGetMaxScaleTest(/* function pointer */ int _hTransform, /* function pointer */ int p_stScale, /* function pointer */ int p_stMatrix)
{
    float xMax;
    /* line map: */
    /*   line 121 @ +0x000 */
    /*   line 127 @ +0x000 */
    /*   line 140 @ +0x000 */
    /*   line 143 @ +0x000 */
    /*   line 147 @ +0x000 */
    /*   line 154 @ +0x000 */
    /*   line 158 @ +0x000 */
    /*   line 163 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 136–267 */
/* addr: 0x0024d2e0  size: 1728 bytes */
void COL_fn_vAddInStaticCollisionTable(float _xT, /* function pointer */ int _p_stTranslation, /* function pointer */ int _p_stHit, /* function pointer */ int _p_stNormal, /* function pointer */ int _hDynMat, /* function pointer */ int _hStatMat, short _xDynamicGeomEntity, short _xStaticGeomEntity, void* _p_vParameter1, short _sParameter2, /* function pointer */ int _p_stMovement, float _xSphereRadius, /* function pointer */ int _p_stEndPosition, /* function pointer */ int end, /* function pointer */ int p, /* function pointer */ int end, /* function pointer */ int p, /* function pointer */ int hCollideMaterial, /* function pointer */ int p_stCollisionCase)
{
    int iNumberOfElementToCopy;
    int iNumberOfElementToCopy;
    int i;
    /* line map: */
    /*   line 136 @ +0x000 */
    /*   line 136 @ +0x000 */
    /*   line 142 @ +0x000 */
    /*   line 145 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 155 @ +0x000 */
    /*   line 167 @ +0x000 */
    /*   line 173 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\COL\CollGOCo.c lines 81–83 */
/* addr: 0x0024d9a0  size: 96 bytes */
void COL_fn_vGetCollidedEgde(int Ind, /* function pointer */ int _pV1, /* function pointer */ int _pV2, int* i)
{
    /* line map: */
    /*   line 82 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 82 @ +0x000 */
    /*   line 81 @ +0x000 */
    /*   line 83 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0024da00  size: 8 bytes */
int COL_fn_iNbCollidedEdges(void)
{
    /* TODO: decompile from asm/... */
}
