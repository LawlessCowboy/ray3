/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct J_InterpolPoint_ J_InterpolPoint_;
typedef struct J_ParticleFace_ J_ParticleFace_;
typedef struct J_ParticleSprite_ J_ParticleSprite_;

struct J_InterpolPoint_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float UVs[2]; /* +0x20 */
};

struct J_ParticleFace_ {
    float pPoints[3][4]; /* +0x0 */
    float pColors[3][4]; /* +0x30 */
    float pUVs[3][2]; /* +0x60 */
    unsigned int Pad[2]; /* +0x78 */
};

struct J_ParticleSprite_ {
    float Pos[4]; /* +0x0 */
    float Color[4]; /* +0x10 */
    float FaceNormal[4]; /* +0x20 */
    unsigned int Flags; /* +0x30 */
    unsigned int bFirst; /* +0x34 */
    unsigned int Pad[2]; /* +0x38 */
};

int J_g_pNoiseTable;
float J_g_NoiseLevel;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 156–157 */
/* addr: 0x002b0860  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 156
 *   +0x0004 -> line 157
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vInitLensFlare(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 229–412 */
/* addr: 0x002b0870  size: 1480 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 229
 *   +0x0004 -> line 242
 *   +0x0008 -> line 229
 *   +0x000c -> line 242
 *   +0x0010 -> line 229
 *   +0x0018 -> line 238
 *   +0x001c -> line 229
 *   +0x0030 -> line 237
 *   +0x0034 -> line 229
 *   +0x0068 -> line 245
 *   +0x0074 -> line 242
 *   +0x0080 -> line 243
 *   +0x008c -> line 245
 *   +0x0094 -> line 247
 *   +0x0100 -> line 252
 *   +0x010c -> line 253
 *   +0x0110 -> line 254
 *   +0x0114 -> line 255
 *   +0x0118 -> line 257
 *   +0x011c -> line 258
 *   +0x0120 -> line 260
 *   +0x0124 -> line 262
 *   +0x0128 -> line 263
 *   +0x012c -> line 266
 *   +0x0130 -> line 267
 *   +0x0134 -> line 268
 *   +0x0138 -> line 270
 *   +0x013c -> line 271
 *   +0x0140 -> line 273
 *   +0x0144 -> line 275
 *   +0x0148 -> line 313
 *   +0x014c -> line 312
 *   +0x0154 -> line 313
 *   +0x0158 -> line 320
 *   +0x015c -> line 322
 *   +0x0164 -> line 320
 *   +0x0168 -> line 324
 *   +0x0188 -> line 325
 *   +0x01a0 -> line 326
 *   +0x01b0 -> line 333
 *   +0x01c0 -> line 334
 *   +0x01d4 -> line 338
 *   +0x01f8 -> line 341
 *   +0x0200 -> line 343
 *   +0x0204 -> line 341
 *   +0x0208 -> line 343
 *   +0x0228 -> line 347
 *   +0x0230 -> line 356
 *   +0x02c8 -> line 357
 *   +0x02d0 -> line 358
 *   +0x0368 -> line 359
 *   +0x0380 -> line 360
 *   +0x0408 -> line 361
 *   +0x0420 -> line 363
 *   +0x042c -> line 367
 *   +0x0440 -> line 368
 *   +0x0454 -> line 370
 *   +0x0478 -> line 371
 *   +0x0480 -> line 375
 *   +0x0484 -> line 380
 *   +0x0494 -> line 381
 *   +0x04a8 -> line 385
 *   +0x04cc -> line 388
 *   +0x04d4 -> line 390
 *   +0x04d8 -> line 388
 *   +0x04dc -> line 390
 *   +0x04f4 -> line 392
 *   +0x0500 -> line 395
 *   +0x050c -> line 397
 *   +0x0514 -> line 405
 *   +0x051c -> line 404
 *   +0x0520 -> line 405
 *   +0x0524 -> line 404
 *   +0x052c -> line 405
 *   +0x053c -> line 406
 *   +0x0558 -> line 409
 *   +0x0578 -> line 411
 *   +0x057c -> line 412
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int J_CreateParticlesOnFace(J_ParticleSprite_* pGeneratedSprites, unsigned int MaxParticles, J_ParticleFace_* pFace, float _fU, float _fV, float NoiseLevel)
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
    J_InterpolPoint_* pt2;
    J_InterpolPoint_* pt1;
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
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 173–223 */
/* addr: 0x002b0e40  size: 276 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 173
 *   +0x0014 -> line 174
 *   +0x002c -> line 175
 *   +0x003c -> line 176
 *   +0x0040 -> line 178
 *   +0x0048 -> line 183
 *   +0x004c -> line 178
 *   +0x0050 -> line 183
 *   +0x0054 -> line 178
 *   +0x005c -> line 183
 *   +0x0060 -> line 178
 *   +0x006c -> line 183
 *   +0x0070 -> line 178
 *   +0x0078 -> line 183
 *   +0x0084 -> line 179
 *   +0x0088 -> line 178
 *   +0x008c -> line 179
 *   +0x0094 -> line 178
 *   +0x0098 -> line 179
 *   +0x009c -> line 183
 *   +0x00a0 -> line 179
 *   +0x00a8 -> line 185
 *   +0x00ac -> line 186
 *   +0x00b0 -> line 187
 *   +0x00b4 -> line 188
 *   +0x00b8 -> line 189
 *   +0x00bc -> line 191
 *   +0x00c0 -> line 192
 *   +0x00c4 -> line 193
 *   +0x00c8 -> line 195
 *   +0x00cc -> line 196
 *   +0x00d0 -> line 198
 *   +0x00d4 -> line 199
 *   +0x00d8 -> line 201
 *   +0x00dc -> line 202
 *   +0x00e0 -> line 222
 *   +0x00ec -> line 221
 *   +0x00f0 -> line 222
 *   +0x010c -> line 223
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_GetInterpolPointOnEdge(J_ParticleFace_* pFace, J_InterpolPoint_* pPoint, unsigned int Edge, float U)
{
    float A[4];
    int p2;
    int p1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\MultiDRV\Src\jparticle.c lines 95–166 */
/* addr: 0x002b0f60  size: 300 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 100
 *   +0x0004 -> line 95
 *   +0x0008 -> line 100
 *   +0x000c -> line 101
 *   +0x001c -> line 100
 *   +0x0020 -> line 101
 *   +0x0034 -> line 100
 *   +0x0038 -> line 102
 *   +0x003c -> line 107
 *   +0x0044 -> line 100
 *   +0x0050 -> line 101
 *   +0x0054 -> line 102
 *   +0x005c -> line 107
 *   +0x0060 -> line 101
 *   +0x0068 -> line 102
 *   +0x006c -> line 101
 *   +0x0074 -> line 102
 *   +0x0078 -> line 101
 *   +0x007c -> line 107
 *   +0x0080 -> line 101
 *   +0x0088 -> line 107
 *   +0x00b0 -> line 109
 *   +0x00b4 -> line 110
 *   +0x00bc -> line 113
 *   +0x00c0 -> line 120
 *   +0x00dc -> line 122
 *   +0x00e0 -> line 123
 *   +0x00e4 -> line 124
 *   +0x00e8 -> line 125
 *   +0x00ec -> line 126
 *   +0x00f0 -> line 127
 *   +0x00f4 -> line 128
 *   +0x00f8 -> line 129
 *   +0x00fc -> line 131
 *   +0x0100 -> line 132
 *   +0x0104 -> line 133
 *   +0x0108 -> line 135
 *   +0x010c -> line 137
 *   +0x0110 -> line 138
 *   +0x0114 -> line 140
 *   +0x0118 -> line 142
 *   +0x011c -> line 144
 *   +0x0120 -> line 145
 *   +0x0124 -> line 166
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void J_GetParticleSpriteFromInterpolatedPoints(J_ParticleSprite_* p, J_InterpolPoint_* p1, J_InterpolPoint_* p2, float V)
{
    float vA[4];
    unsigned int index;
    /* TODO: decompile from asm/... */
}
