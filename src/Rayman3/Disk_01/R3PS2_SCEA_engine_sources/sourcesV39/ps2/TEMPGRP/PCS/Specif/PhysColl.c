/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct HIE_tdstSuperObject_ HIE_tdstSuperObject_;
typedef struct MOR_stMorphStruct_ MOR_stMorphStruct_;
typedef struct PO_tdstPhysicalObject_ PO_tdstPhysicalObject_;
typedef struct tdstPhysicalCollSet_ tdstPhysicalCollSet_;
typedef struct MTH4D_tdstVector_ MTH4D_tdstVector_;
typedef struct COL_tdstCollideObject_ COL_tdstCollideObject_;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct COL_tdstOctree_ COL_tdstOctree_;
typedef struct COL_tdstParallelBox_ COL_tdstParallelBox_;
typedef struct COL_tdstOctreeNode_ COL_tdstOctreeNode_;

struct tdstPhysicalCollSet_ {
    COL_tdstCollideObject_* hZdm; /* +0x0 */
    COL_tdstCollideObject_* hZdd; /* +0x4 */
    COL_tdstCollideObject_* hZde; /* +0x8 */
    COL_tdstCollideObject_* hZdr; /* +0xc */
};

struct MTH4D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
    float xW; /* +0xc */
} __attribute__((aligned(16)));

struct COL_tdstCollideObject_ {
    short xNbPoints; /* +0x0 */
    short xNbElements; /* +0x2 */
    short xNbParallelBoxes; /* +0x4 */
    MTH3D_tdstVector_* d_stListOfPoints; /* +0x8 */
    int d_xListOfElementsTypes; /* +0xc */
    int d_stListOfElements; /* +0x10 */
    COL_tdstOctree_* p_stOctree; /* +0x14 */
    COL_tdstParallelBox_* d_stListOfParallelBoxes; /* +0x18 */
    float xBoudingSphereRadius; /* +0x1c */
    MTH4D_tdstVector_ xBoudingSphereCenter; /* +0x20 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct COL_tdstOctree_ {
    COL_tdstOctreeNode_* p_stOctreeRoot; /* +0x0 */
    short xNbFaces; /* +0x4 */
    int d_xElementBasesTable; /* +0x8 */
    MTH3D_tdstVector_ stMinBoundingBox; /* +0xc */
    MTH3D_tdstVector_ stMaxBoundingBox; /* +0x18 */
};

struct COL_tdstParallelBox_ {
    MTH4D_tdstVector_ stMinPoint; /* +0x0 */
    MTH4D_tdstVector_ stMaxPoint; /* +0x10 */
};

struct COL_tdstOctreeNode_ {
    MTH3D_tdstVector_ stMinPart; /* +0x0 */
    MTH3D_tdstVector_ stMaxPart; /* +0xc */
    COL_tdstOctreeNode_** p_pstChildList; /* +0x18 */
    int d_xFaceIndexList; /* +0x1c */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 162–312 */
/* addr: 0x003178f0  size: 1596 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 162
 *   +0x003c -> line 176
 *   +0x0040 -> line 165
 *   +0x004c -> line 176
 *   +0x0080 -> line 179
 *   +0x00fc -> line 176
 *   +0x0104 -> line 180
 *   +0x0108 -> line 179
 *   +0x010c -> line 180
 *   +0x0110 -> line 179
 *   +0x011c -> line 180
 *   +0x0138 -> line 183
 *   +0x015c -> line 184
 *   +0x0198 -> line 185
 *   +0x01a0 -> line 188
 *   +0x01b4 -> line 190
 *   +0x01c0 -> line 192
 *   +0x01c8 -> line 193
 *   +0x01d4 -> line 195
 *   +0x01f8 -> line 196
 *   +0x021c -> line 199
 *   +0x0220 -> line 200
 *   +0x0224 -> line 199
 *   +0x0258 -> line 200
 *   +0x0260 -> line 202
 *   +0x028c -> line 204
 *   +0x02a8 -> line 205
 *   +0x02b0 -> line 207
 *   +0x02b8 -> line 209
 *   +0x02e8 -> line 213
 *   +0x0320 -> line 216
 *   +0x0328 -> line 218
 *   +0x0354 -> line 219
 *   +0x0358 -> line 218
 *   +0x035c -> line 219
 *   +0x0374 -> line 229
 *   +0x0378 -> line 223
 *   +0x0384 -> line 229
 *   +0x0388 -> line 223
 *   +0x0398 -> line 224
 *   +0x039c -> line 223
 *   +0x03a4 -> line 234
 *   +0x03a8 -> line 223
 *   +0x03ac -> line 224
 *   +0x03b4 -> line 227
 *   +0x03bc -> line 228
 *   +0x03c0 -> line 229
 *   +0x03c4 -> line 231
 *   +0x03cc -> line 232
 *   +0x03d0 -> line 234
 *   +0x03d8 -> line 236
 *   +0x03e0 -> line 240
 *   +0x03e4 -> line 237
 *   +0x03e8 -> line 239
 *   +0x03ec -> line 240
 *   +0x03f0 -> line 237
 *   +0x03f8 -> line 238
 *   +0x03fc -> line 236
 *   +0x0400 -> line 238
 *   +0x0404 -> line 237
 *   +0x0408 -> line 239
 *   +0x040c -> line 237
 *   +0x0410 -> line 238
 *   +0x0418 -> line 239
 *   +0x0420 -> line 240
 *   +0x0434 -> line 241
 *   +0x0438 -> line 247
 *   +0x043c -> line 241
 *   +0x0440 -> line 247
 *   +0x0448 -> line 251
 *   +0x0458 -> line 254
 *   +0x045c -> line 257
 *   +0x0470 -> line 258
 *   +0x0480 -> line 259
 *   +0x048c -> line 262
 *   +0x0494 -> line 266
 *   +0x049c -> line 267
 *   +0x04c8 -> line 269
 *   +0x04e0 -> line 271
 *   +0x04f8 -> line 272
 *   +0x0500 -> line 275
 *   +0x0508 -> line 276
 *   +0x0514 -> line 279
 *   +0x051c -> line 280
 *   +0x0524 -> line 282
 *   +0x0528 -> line 285
 *   +0x0548 -> line 286
 *   +0x0550 -> line 288
 *   +0x0554 -> line 291
 *   +0x055c -> line 295
 *   +0x0568 -> line 297
 *   +0x058c -> line 298
 *   +0x05a8 -> line 299
 *   +0x05b4 -> line 298
 *   +0x05c4 -> line 299
 *   +0x05e4 -> line 302
 *   +0x05fc -> line 305
 *   +0x0604 -> line 311
 *   +0x060c -> line 312
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
short MOR_fn_xPrepareMorph(HIE_tdstSuperObject_* _hActorSuperObject, short _xStartIndexInObjectTable, short* _axEndIndexInObjectTable, unsigned char _ucNbTarget, int _iNbMillisecond, float* _axStart, float* _axEnd, unsigned char _ucMorphType, short _xChannelIndex)
{
    unsigned char uc;
    PO_tdstPhysicalObject_* pNewPhysicalObject;
    PO_tdstPhysicalObject_* pEndPhysicalObject;
    PO_tdstPhysicalObject_* pStartPhysicalObject;
    MOR_stMorphStruct_* mp;
    short xFreePosition;
    short j;
    short xMorphListIndex;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 112–130 */
/* addr: 0x00317f30  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 112
 *   +0x0034 -> line 115
 *   +0x003c -> line 118
 *   +0x0044 -> line 121
 *   +0x004c -> line 124
 *   +0x0054 -> line 130
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetGeoObjOfPhysicalCollSet(unsigned char ucZoneType, tdstPhysicalCollSet_* _hPhyCollSet)
{
    switch (ucZoneType)
    {
    case 0:

        return _hPhyCollSet->hZdd;
    case 1:

        return _hPhyCollSet->hZdm;
    case 3:

        return _hPhyCollSet->hZdr;
    case 2:

        return _hPhyCollSet->hZde;
    }



    return NULL;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 99–99 */
/* addr: 0x00317f90  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 99
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdmGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZdm;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 86–86 */
/* addr: 0x00317fa0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 86
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdrGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZdr;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\PCS\Specif\PhysColl.c lines 73–73 */
/* addr: 0x00317fb0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 73
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
COL_tdstCollideObject_* PCS_fn_hGetZdeGeoObjOfPhysicalCollSet(tdstPhysicalCollSet_* _hPhyCollSet)
{
    return _hPhyCollSet->hZde;
}
