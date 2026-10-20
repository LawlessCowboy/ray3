/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

/* The debug records mark this .c unit as C++: the vertex-array container is
 * built by a C++ constructor (__ct__22C_VertexArrayContainerFUi).  The game
 * entry points keep C linkage. */
#pragma cplusplus on

#include <stddef.h>

extern "C" {

extern int printf(const char*, ...);
extern void* (*PS2glAllocator64)(unsigned int size);
extern void* malloc(unsigned int size);
extern int rand(void);

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct J_New_ParticleFace_ J_New_ParticleFace_;
typedef struct J_New_InterpolPoint_ J_New_InterpolPoint_;

struct J_New_ParticleFace_ {
    float pPoints[3][4]; /* +0x0 */
    float pColors[3][4]; /* +0x30 */
    float pUVs[3][2]; /* +0x60 */
    unsigned int Pad[2]; /* +0x78 */
};

struct J_New_InterpolPoint_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float UVs[2]; /* +0x20 */
};

float* J_New_g_pNoiseTable;
float J_New_g_NoiseLevel;

} /* extern "C" */

/* Recovered from the DWARF type record of C_VertexArrayContainer; the same
 * class is declared in u_SPGArray.cpp.  The constructor only touches the
 * members up to m_CurrentIndex. */
class C_VertexArrayContainer {
public:
    unsigned int m_CurrentFrameIndex; /* +0x0 */
    float (*m_pV[2])[4]; /* +0x4 */
    float (*m_pC[2])[4]; /* +0xc */
    float (*m_pT[2])[4]; /* +0x14 */
    int m_TotalNbVertices; /* +0x1c */
    int m_CurrentIndex; /* +0x20 */
    unsigned int m_bMatrixWasSet; /* +0x24 */
    unsigned int m_Pad00[2]; /* +0x28 */
    float m_Matrix[4][4]; /* +0x30 */
    void* m_pMat; /* +0x70 */
    int m_AnimatedTextureToUse; /* +0x74 */

    C_VertexArrayContainer(unsigned int NbSprites);
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 95–139 */
/* addr: 0x002cf570  size: 308 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 95
 *   +0x0004 -> line 107
 *   +0x0008 -> line 95
 *   +0x000c -> line 107
 *   +0x0010 -> line 95
 *   +0x0014 -> line 107
 *   +0x0018 -> line 95
 *   +0x0020 -> line 105
 *   +0x0024 -> line 106
 *   +0x0028 -> line 107
 *   +0x002c -> line 113
 *   +0x0030 -> line 116
 *   +0x0034 -> line 113
 *   +0x0038 -> line 116
 *   +0x0044 -> line 117
 *   +0x0054 -> line 118
 *   +0x0064 -> line 119
 *   +0x0074 -> line 120
 *   +0x0084 -> line 121
 *   +0x0094 -> line 124
 *   +0x00dc -> line 128
 *   +0x00e8 -> line 132
 *   +0x00ec -> line 134
 *   +0x00f0 -> line 133
 *   +0x00f4 -> line 134
 *   +0x00fc -> line 136
 *   +0x0100 -> line 138
 *   +0x0104 -> line 137
 *   +0x0108 -> line 136
 *   +0x010c -> line 137
 *   +0x0110 -> line 138
 *   +0x0120 -> line 139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
C_VertexArrayContainer::C_VertexArrayContainer(unsigned int NbSprites)
{
    float (*pV2)[4];
    float (*pC2)[4];
    unsigned int i;
    unsigned int MemSize;

    m_CurrentFrameIndex = 0;
    m_CurrentIndex = 0;
    m_TotalNbVertices = NbSprites * 6;
    MemSize = m_TotalNbVertices * sizeof(float[4]);
    m_pV[0] = (float(*)[4])PS2glAllocator64(MemSize);
    m_pC[0] = (float(*)[4])PS2glAllocator64(MemSize);
    m_pT[0] = (float(*)[4])PS2glAllocator64(MemSize);
    m_pV[1] = (float(*)[4])PS2glAllocator64(MemSize);
    m_pC[1] = (float(*)[4])PS2glAllocator64(MemSize);
    m_pT[1] = (float(*)[4])PS2glAllocator64(MemSize);
    if (m_pV[0] == 0 || m_pV[1] == 0 || m_pC[0] == 0 || m_pC[1] == 0 || m_pT[0] == 0 || m_pT[1] == 0)
    {
        printf("\n\n*** COULDN'T ALLOCATE SPRITEGEN VERTEX ARRAYS ***\n\n");
    }
    pV2 = m_pV[0];
    pC2 = m_pV[1];
    for (i = 0; i < m_TotalNbVertices; i++)
    {
        pV2[0][3] = 1.0f;
        pC2[0][3] = 1.0f;
        pV2++;
        pC2++;
    }
}

extern "C" {

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 194–308 */
/* addr: 0x002cf6b0  size: 1372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 194
 *   +0x0004 -> line 206
 *   +0x0008 -> line 194
 *   +0x000c -> line 206
 *   +0x0010 -> line 194
 *   +0x002c -> line 202
 *   +0x0030 -> line 194
 *   +0x0060 -> line 209
 *   +0x006c -> line 206
 *   +0x0078 -> line 207
 *   +0x0084 -> line 209
 *   +0x008c -> line 211
 *   +0x00f8 -> line 218
 *   +0x00fc -> line 217
 *   +0x0104 -> line 218
 *   +0x0108 -> line 225
 *   +0x010c -> line 227
 *   +0x0114 -> line 225
 *   +0x0118 -> line 229
 *   +0x0138 -> line 230
 *   +0x0150 -> line 231
 *   +0x0160 -> line 238
 *   +0x0170 -> line 239
 *   +0x0184 -> line 243
 *   +0x01a8 -> line 246
 *   +0x01b0 -> line 248
 *   +0x01b4 -> line 246
 *   +0x01b8 -> line 248
 *   +0x01d8 -> line 252
 *   +0x01e0 -> line 261
 *   +0x0278 -> line 262
 *   +0x0280 -> line 263
 *   +0x0318 -> line 264
 *   +0x0330 -> line 265
 *   +0x03b8 -> line 266
 *   +0x03d0 -> line 268
 *   +0x03dc -> line 272
 *   +0x03f0 -> line 273
 *   +0x0404 -> line 275
 *   +0x0428 -> line 276
 *   +0x0430 -> line 280
 *   +0x0434 -> line 285
 *   +0x0444 -> line 286
 *   +0x0458 -> line 290
 *   +0x047c -> line 293
 *   +0x0484 -> line 295
 *   +0x0488 -> line 293
 *   +0x048c -> line 295
 *   +0x04a4 -> line 297
 *   +0x04b0 -> line 300
 *   +0x04c8 -> line 302
 *   +0x04cc -> line 300
 *   +0x04d4 -> line 301
 *   +0x04d8 -> line 302
 *   +0x04f0 -> line 305
 *   +0x0510 -> line 307
 *   +0x0514 -> line 308
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_New_GetInterpolPointOnEdge(J_New_ParticleFace_* pFace, J_New_InterpolPoint_* pPoint, unsigned int Edge, float U);
void J_New_GetParticleSpriteFromInterpolatedPoints(float (*pParticles)[4], J_New_InterpolPoint_* p1, J_New_InterpolPoint_* p2, float V);

unsigned int J_New_CreateParticlesOnFace(float (*pParticles)[4], unsigned int MaxParticles, J_New_ParticleFace_* pFace, float _fU, float _fV, float NoiseLevel)
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
    J_New_InterpolPoint_* pt2;
    J_New_InterpolPoint_* pt1;
    J_New_InterpolPoint_ p2;
    J_New_InterpolPoint_ p1;
    float RealMaxU;
    float RealMinU;
    float U;
    float LastU;
    float FirstU;
    float MaxU;
    float MinU;
    unsigned int i;
    float* pNoise;
    int bFound;

    InvfU = 1.0f / _fU;
    InvfV = 1.0f / _fV;

    if (J_New_g_pNoiseTable == 0)
    {
        J_New_g_pNoiseTable = (float*)malloc(0x2010);
        for (i = 0; i < 0x804; i++)
        {
            J_New_g_pNoiseTable[i] = 10.0f * ((float)rand() / 2147483648.0f) - 5.0f;
        }
    }

    J_New_g_NoiseLevel = NoiseLevel;
    Noise[0] = NoiseLevel;
    pNoise = &Noise[0];
    asm {
        lqc2 vf25, 0(pNoise)
    }

    MinV = pFace->pUVs[0][0];
    MaxV = MinV;
    for (i = 1; i < 3; i++)
    {
        V = pFace->pUVs[i][0];
        if (V < MinV) { MinV = V; }
        if (!(V <= MaxV)) { MaxV = V; }
    }

    RealMinV = _fU * (float)(int)(MinV * InvfU);
    if (RealMinV < MinV) { RealMinV += _fU; }
    FirstV = RealMinV;
    while (FirstV + _fU <= MaxV) { FirstV += _fU; }
    if (RealMinV <= MaxV)
    {
        LastV = FirstV + 0.5f * _fU;
        if (LastV < MinV) { return 0; }
    }
    else
    {
        return 0;
    }

    NbGenerated = 0;
    i = 0;
    for (U = RealMinV; U <= LastV; U += _fU)
    {
        NbEdges = 0;

        if (U == pFace->pUVs[0][0] && U == pFace->pUVs[1][0]) { bFound = 0; }
        else if ((U >= pFace->pUVs[0][0] && U <= pFace->pUVs[1][0]) || (U >= pFace->pUVs[1][0] && U <= pFace->pUVs[0][0])) { bFound = 1; }
        else { bFound = 0; }
        if (bFound) { Edge[NbEdges] = 0; NbEdges = NbEdges + 1; }

        if (U == pFace->pUVs[1][0] && U == pFace->pUVs[2][0]) { bFound = 0; }
        else if ((U >= pFace->pUVs[1][0] && U <= pFace->pUVs[2][0]) || (U >= pFace->pUVs[2][0] && U <= pFace->pUVs[1][0])) { bFound = 1; }
        else { bFound = 0; }
        if (bFound) { Edge[NbEdges] = 1; NbEdges = NbEdges + 1; }

        if (U == pFace->pUVs[2][0] && U == pFace->pUVs[0][0]) { bFound = 0; }
        else if ((U >= pFace->pUVs[2][0] && U <= pFace->pUVs[0][0]) || (U >= pFace->pUVs[0][0] && U <= pFace->pUVs[2][0])) { bFound = 1; }
        else { bFound = 0; }
        if (bFound) { Edge[NbEdges] = 2; NbEdges = NbEdges + 1; }

        if (NbEdges == 2)
        {
            J_New_GetInterpolPointOnEdge(pFace, &p1, Edge[0], U);
            J_New_GetInterpolPointOnEdge(pFace, &p2, Edge[1], U);
            if (p1.UVs[1] < p2.UVs[1]) { pt1 = &p1; pt2 = &p2; }
            else { pt1 = &p2; pt2 = &p1; }

            MinU = pt1->UVs[1];
            MaxU = pt2->UVs[1];
            RealMinU = _fV * (float)(int)(MinU * InvfV);
            if (RealMinU < MinU) { RealMinU += _fV; }
            FirstU = RealMinU;
            while (FirstU + _fV <= MaxU) { FirstU += _fV; }
            if (RealMinU <= MaxU)
            {
                LastU = FirstU + 0.5f * _fV;
                if (!(LastU < MinU))
                {
                    for (V = RealMinU; V <= LastU; V += _fV)
                    {
                        if (NbGenerated < MaxParticles)
                        {
                            J_New_GetParticleSpriteFromInterpolatedPoints(&pParticles[i], pt1, pt2, V);
                            NbGenerated = NbGenerated + 1;
                            i = i + 2;
                        }
                    }
                }
            }
        }
    }
    return NbGenerated;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c lines 138–188 */
/* addr: 0x002cfc10  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 138
 *   +0x0014 -> line 139
 *   +0x002c -> line 140
 *   +0x003c -> line 141
 *   +0x0040 -> line 143
 *   +0x0048 -> line 148
 *   +0x004c -> line 143
 *   +0x0050 -> line 148
 *   +0x0054 -> line 143
 *   +0x005c -> line 148
 *   +0x0060 -> line 143
 *   +0x006c -> line 148
 *   +0x0070 -> line 143
 *   +0x0078 -> line 148
 *   +0x0084 -> line 144
 *   +0x0088 -> line 143
 *   +0x008c -> line 144
 *   +0x0094 -> line 143
 *   +0x0098 -> line 144
 *   +0x009c -> line 148
 *   +0x00a0 -> line 144
 *   +0x00a8 -> line 150
 *   +0x00ac -> line 151
 *   +0x00b0 -> line 152
 *   +0x00b4 -> line 153
 *   +0x00b8 -> line 154
 *   +0x00bc -> line 156
 *   +0x00c0 -> line 157
 *   +0x00c4 -> line 158
 *   +0x00c8 -> line 160
 *   +0x00cc -> line 161
 *   +0x00d0 -> line 163
 *   +0x00d4 -> line 164
 *   +0x00d8 -> line 166
 *   +0x00dc -> line 167
 *   +0x00e0 -> line 187
 *   +0x00ec -> line 186
 *   +0x00f0 -> line 187
 *   +0x010c -> line 188
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_New_GetInterpolPointOnEdge(J_New_ParticleFace_* pFace, J_New_InterpolPoint_* pPoint, unsigned int Edge, float U)
{
    float A[4];
    int p2;
    int p1;
    float* pPts1;
    float* pPts2;
    float* pCol1;
    float* pCol2;
    float* pW;
    float* pDstCol;
    float* pUV0;
    float* pUV1;

    /* Edge selects the (p1, p2) vertex pair of the triangle face. */
    if (Edge == 0) { p1 = 0; p2 = 1; }
    else if (Edge == 1) { p1 = 1; p2 = 2; }
    else if (Edge == 2) { p1 = 2; p2 = 0; }
    else { p1 = 0; p2 = 1; }

    pUV0 = &pFace->pUVs[0][0];
    pUV1 = &pFace->pUVs[0][1];
    A[1] = (U - pUV0[p1 * 2]) / (pUV0[p2 * 2] - pUV0[p1 * 2]);
    A[0] = 1.0f - A[1];
    pPts1 = &pFace->pPoints[p1][0];
    pPts2 = &pFace->pPoints[p2][0];
    pCol1 = &pFace->pColors[p1][0];
    pCol2 = &pFace->pColors[p2][0];
    pW = &A[0];
    pDstCol = &pPoint->Color[0];

    /* VU0 macro-mode interpolation: MWCC cannot emit lqc2/sqc2 from C. */
    asm {
        lqc2 vf2, 0(pPts1)
        lqc2 vf3, 0(pPts2)
        lqc2 vf4, 0(pCol1)
        lqc2 vf5, 0(pCol2)
        lqc2 vf6, 0(pW)
        vmulx.xyz vf8, vf2, vf6x
        vmuly.xyz vf9, vf3, vf6y
        vsubx.w vf12, vf0, vf0x
        vmulx.xyzw vf10, vf4, vf6x
        vmuly.xyzw vf11, vf5, vf6y
        vadd.xyz vf12, vf8, vf9
        vadd.xyzw vf13, vf10, vf11
        sqc2 vf12, 0(pPoint)
        sqc2 vf13, 0(pDstCol)
    }

    pPoint->UVs[0] = U;
    pPoint->UVs[1] = pUV1[p1 * 2] * A[0] + pUV1[p2 * 2] * A[1];
}

} /* extern "C" */
