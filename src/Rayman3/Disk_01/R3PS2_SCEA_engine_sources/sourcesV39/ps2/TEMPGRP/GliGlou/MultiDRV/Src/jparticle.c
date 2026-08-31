/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct J_InterpolPoint_ J_InterpolPoint_;

struct J_InterpolPoint_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float UVs[2]; /* +0x20 */
};

int J_g_pNoiseTable;
float J_g_NoiseLevel;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 157–157 */
/* addr: 0x002b0860  size: 12 bytes */
void GLI_vInitLensFlare(void)
{
    /* line map: */
    /*   line 157 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 237–412 */
/* addr: 0x002b0870  size: 1480 bytes */
unsigned int J_CreateParticlesOnFace(/* function pointer */ int pGeneratedSprites, unsigned int MaxParticles, /* function pointer */ int pFace, float _fU, float _fV, float NoiseLevel, J_InterpolPoint_* pt2, J_InterpolPoint_* pt1)
{
    int Edge[3];
    int NbEdges;
    float Noise[4];
    float InvfV;
    float InvfU;
    float FaceNormal[4];
    unsigned char bFirst;
    unsigned int NbGenerated;
    float V;
    float FirstV;
    float LastV;
    float RealMaxV;
    float RealMinV;
    float MaxV;
    float MinV;
    J_InterpolPoint_ p2;
    J_InterpolPoint_ p1;
    float RealMaxU;
    float RealMinU;
    float U;
    float LastU;
    float FirstU;
    float MaxU;
    float MinU;
    unsigned int i;
    /* line map: */
    /*   line 242 @ +0x000 */
    /*   line 242 @ +0x000 */
    /*   line 238 @ +0x000 */
    /*   line 237 @ +0x000 */
    /*   line 245 @ +0x000 */
    /*   line 243 @ +0x000 */
    /*   line 247 @ +0x000 */
    /*   line 253 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 174–222 */
/* addr: 0x002b0e40  size: 276 bytes */
void J_GetInterpolPointOnEdge(/* function pointer */ int pFace, J_InterpolPoint_* pPoint, unsigned int Edge, float U)
{
    float A[4];
    int p2;
    int p1;
    /* line map: */
    /*   line 174 @ +0x000 */
    /*   line 176 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 183 @ +0x000 */
    /*   line 178 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 95–166 */
/* addr: 0x002b0f60  size: 300 bytes */
void J_GetParticleSpriteFromInterpolatedPoints(/* function pointer */ int p, J_InterpolPoint_* p1, J_InterpolPoint_* p2, float V)
{
    float vA[4];
    unsigned int index;
    /* line map: */
    /*   line 95 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 100 @ +0x000 */
    /*   line 102 @ +0x000 */
    /*   line 101 @ +0x000 */
    /*   line 101 @ +0x000 */
    /* TODO: decompile from asm/... */
}
