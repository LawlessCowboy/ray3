/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

int J_New_g_pNoiseTable;
float J_New_g_NoiseLevel;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 105–139 */
/* addr: 0x002cf570  size: 308 bytes */
void C_VertexArrayContainer(unsigned int NbSprites, float (*) pV2[4], float (*) param2[4])
{
    unsigned int i;
    unsigned int MemSize;
    /* line map: */
    /*   line 107 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 105 @ +0x000 */
    /*   line 107 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 116 @ +0x000 */
    /*   line 118 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 202–307 */
/* addr: 0x002cf6b0  size: 1372 bytes */
unsigned int J_New_CreateParticlesOnFace(float (*) pParticles[4], unsigned int MaxParticles, /* function pointer */ int pFace, float _fU, float _fV, float NoiseLevel, /* function pointer */ int pt2, /* function pointer */ int pt1)
{
    int Edge[3];
    int NbEdges;
    float Noise[4];
    float InvfV;
    float InvfU;
    unsigned int NbGenerated;
    float V;
    float FirstV;
    float LastV;
    float RealMaxV;
    float RealMinV;
    float MaxV;
    float MinV;
    /* aggregate */ int p2;
    /* aggregate */ int p1;
    float RealMaxU;
    float RealMinU;
    float U;
    float LastU;
    float FirstU;
    float MaxU;
    float MinU;
    unsigned int i;
    /* line map: */
    /*   line 206 @ +0x000 */
    /*   line 206 @ +0x000 */
    /*   line 202 @ +0x000 */
    /*   line 209 @ +0x000 */
    /*   line 207 @ +0x000 */
    /*   line 211 @ +0x000 */
    /*   line 217 @ +0x000 */
    /*   line 225 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 139–187 */
/* addr: 0x002cfc10  size: 276 bytes */
void J_New_GetInterpolPointOnEdge(/* function pointer */ int pFace, /* function pointer */ int pPoint, unsigned int Edge, float U)
{
    float A[4];
    int p2;
    int p1;
    /* line map: */
    /*   line 139 @ +0x000 */
    /*   line 141 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 148 @ +0x000 */
    /*   line 143 @ +0x000 */
    /* TODO: decompile from asm/... */
}
