/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\u_newSG.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

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

int J_New_g_pNoiseTable;
float J_New_g_NoiseLevel;

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
void C_VertexArrayContainer(unsigned int NbSprites)
{
    unsigned int i;
    float (*) pV2[4];
    float (*) param0[4];
    unsigned int MemSize;
    /* TODO: decompile from asm/... */
}

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
unsigned int J_New_CreateParticlesOnFace(float (*) pParticles[4], unsigned int MaxParticles, J_New_ParticleFace_* pFace, float _fU, float _fV, float NoiseLevel)
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
    /* TODO: decompile from asm/... */
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
    /* TODO: decompile from asm/... */
}
