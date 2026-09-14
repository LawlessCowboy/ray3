/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndmicro.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _tdstAllRetMicroSound _tdstAllRetMicroSound;
typedef struct _stVector _stVector;

struct _tdstAllRetMicroSound {
    int (*X)(int); /* +0x0 */
    int (*Y)(int); /* +0x4 */
    int (*Z)(int); /* +0x8 */
    int (*VX)(int); /* +0xc */
    int (*VY)(int); /* +0x10 */
    int (*VZ)(int); /* +0x14 */
    int (*DNX)(int); /* +0x18 */
    int (*DNY)(int); /* +0x1c */
    int (*DNZ)(int); /* +0x20 */
    int (*DTX)(int); /* +0x24 */
    int (*DTY)(int); /* +0x28 */
    int (*DTZ)(int); /* +0x2c */
    int (*Filtre)(int); /* +0x30 */
    int (*pfnPosition)(int, _stVector*); /* +0x34 */
    int (*pfnVelocity)(int, _stVector*); /* +0x38 */
    int (*pfnNormal)(int, _stVector*); /* +0x3c */
    int (*pfnTangent)(int, _stVector*); /* +0x40 */
};

struct _stVector {
    float f32x; /* +0x0 */
    float f32y; /* +0x4 */
    float f32z; /* +0x8 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndmicro.cpp lines 132–132 */
/* addr: 0x00186660  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 132
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void f_vSetValue__Q24usnd12TTypedVar<f>Ff(float oValue)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndmicro.cpp lines 38–40 */
/* addr: 0x00186670  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 38
 *   +0x000c -> line 39
 *   +0x0020 -> line 40
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vSetRetMicroSound(_tdstAllRetMicroSound* pst_IMicro)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\sndmicro.cpp lines 34–36 */
/* addr: 0x001866a0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 34
 *   +0x000c -> line 35
 *   +0x0020 -> line 36
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void SND_fn_vDestroyMicroSound(int s32_MicroId)
{
    /* TODO: decompile from asm/... */
}
