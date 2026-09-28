/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_3 anon_3;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_0 anon_0;
typedef struct tagsceGsReg tagsceGsReg;
typedef union anon_1 anon_1;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct anon_2 anon_2;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_42 anon_42;
typedef struct anon_9 anon_9;
typedef struct anon_23 anon_23;
typedef struct anon_28 anon_28;
typedef struct anon_36 anon_36;
typedef struct anon_35 anon_35;
typedef struct anon_33 anon_33;
typedef struct anon_22 anon_22;
typedef struct anon_14 anon_14;
typedef struct anon_41 anon_41;
typedef struct anon_30 anon_30;
typedef struct anon_5 anon_5;
typedef struct anon_11 anon_11;
typedef struct anon_12 anon_12;
typedef struct anon_27 anon_27;
typedef struct anon_34 anon_34;
typedef struct anon_4 anon_4;
typedef struct anon_18 anon_18;
typedef struct anon_16 anon_16;
typedef struct anon_7 anon_7;
typedef struct anon_31 anon_31;
typedef struct anon_8 anon_8;
typedef struct anon_29 anon_29;
typedef struct anon_25 anon_25;
typedef struct anon_39 anon_39;
typedef struct anon_10 anon_10;
typedef struct anon_20 anon_20;
typedef struct anon_38 anon_38;
typedef struct anon_13 anon_13;
typedef struct anon_19 anon_19;
typedef struct anon_24 anon_24;
typedef struct anon_17 anon_17;
typedef struct anon_21 anon_21;
typedef struct anon_26 anon_26;
typedef struct anon_32 anon_32;
typedef struct tagGScontext tagGScontext;
typedef struct Water2DEffect_ Water2DEffect_;
typedef struct GLI_tdstAnimatedTextureNode_ GLI_tdstAnimatedTextureNode_;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_15 anon_15;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct GLI_tdstTexture_ GLI_tdstTexture_;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct GEO_tdstColor_ GEO_tdstColor_;
typedef struct anon_37 anon_37;
typedef struct anon_40 anon_40;
typedef struct GLI_tdstMaterial_ GLI_tdstMaterial_;
typedef struct anon_6 anon_6;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct MTH3D_tdstVector_ MTH3D_tdstVector_;
typedef struct GLD_tdstViewportAttributes_ GLD_tdstViewportAttributes_;
typedef struct tagstVIFCode tagstVIFCode;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagListData tagListData;
typedef struct GLI_tdstMatrixDeformationEffect_ GLI_tdstMatrixDeformationEffect_;

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_3 {
    unsigned long NLOOP : 15; /* bit 0, byte +0x0 */
    unsigned long EOP : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long id : 14; /* bit 32, byte +0x0 */
    unsigned long PRE : 1; /* bit 46, byte +0x0 */
    unsigned long PRIM : 11; /* bit 47, byte +0x0 */
    unsigned long FLG : 2; /* bit 58, byte +0x0 */
    unsigned long NREG : 4; /* bit 60, byte +0x0 */
    unsigned long REGS0 : 4; /* bit 0, byte +0x8 */
    unsigned long REGS1 : 4; /* bit 4, byte +0x8 */
    unsigned long REGS2 : 4; /* bit 8, byte +0x8 */
    unsigned long REGS3 : 4; /* bit 12, byte +0x8 */
    unsigned long REGS4 : 4; /* bit 16, byte +0x8 */
    unsigned long REGS5 : 4; /* bit 20, byte +0x8 */
    unsigned long REGS6 : 4; /* bit 24, byte +0x8 */
    unsigned long REGS7 : 4; /* bit 28, byte +0x8 */
    unsigned long REGS8 : 4; /* bit 32, byte +0x8 */
    unsigned long REGS9 : 4; /* bit 36, byte +0x8 */
    unsigned long REGS10 : 4; /* bit 40, byte +0x8 */
    unsigned long REGS11 : 4; /* bit 44, byte +0x8 */
    unsigned long REGS12 : 4; /* bit 48, byte +0x8 */
    unsigned long REGS13 : 4; /* bit 52, byte +0x8 */
    unsigned long REGS14 : 4; /* bit 56, byte +0x8 */
    unsigned long REGS15 : 4; /* bit 60, byte +0x8 */
};

struct tagGLprimbuf {
    tagGLprimbuf* pNext; /* +0x0 */
    unsigned int nCount; /* +0x4 */
    unsigned char bEOP; /* +0x8 */
    int pCode; /* +0xc */
    float (*pData)[4]; /* +0x10 */
    int pTexUnit; /* +0x14 */
    unsigned char _extractor_padding_00[8]; /* implicitly added by extractor; +0x18..0x1f */
    _sceDmaTag tagDma; /* +0x20 */
    anon_3 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_0 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

union anon_1 {
    signed char bData[16]; /* +0x0 */
    unsigned char ubData[16]; /* +0x0 */
    short sData[8]; /* +0x0 */
    unsigned short usData[8]; /* +0x0 */
    int iData[4]; /* +0x0 */
    unsigned int uiData[4]; /* +0x0 */
    long i64Data[2]; /* +0x0 */
    unsigned long u64Data[2]; /* +0x0 */
    float fData[4]; /* +0x0 */
    double dData[2]; /* +0x0 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
};

struct anon_2 {
    unsigned long pad00 : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct tag_GLtexture {
    float vTexBorderColor[4]; /* +0x0 */
    unsigned int eDimension; /* +0x10 */
    unsigned int eTexFilterMin; /* +0x14 */
    unsigned int eTexFilterMag; /* +0x18 */
    unsigned int eTexWrapS; /* +0x1c */
    unsigned int eTexWrapT; /* +0x20 */
    int Image[7]; /* +0x24 */
    int iClutOffset; /* +0x40 */
    int iClutSize; /* +0x44 */
    int clut; /* +0x48 */
    unsigned char bClutUserMaintain; /* +0x4c */
};

struct anon_42 {
    unsigned long PRIM : 3; /* bit 0, byte +0x0 */
    unsigned long IIP : 1; /* bit 3, byte +0x0 */
    unsigned long TME : 1; /* bit 4, byte +0x0 */
    unsigned long FGE : 1; /* bit 5, byte +0x0 */
    unsigned long ABE : 1; /* bit 6, byte +0x0 */
    unsigned long AA1 : 1; /* bit 7, byte +0x0 */
    unsigned long FST : 1; /* bit 8, byte +0x0 */
    unsigned long CTXT : 1; /* bit 9, byte +0x0 */
    unsigned long FIX : 1; /* bit 10, byte +0x0 */
    unsigned long pad11 : 53; /* bit 11, byte +0x0 */
};

struct anon_9 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_23 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_28 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_36 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_35 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_33 {
    unsigned long TBP0 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW : 6; /* bit 14, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long TW : 4; /* bit 26, byte +0x0 */
    unsigned long TH : 4; /* bit 30, byte +0x0 */
    unsigned long TCC : 1; /* bit 34, byte +0x0 */
    unsigned long TFX : 2; /* bit 35, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_22 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_14 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_41 {
    unsigned long LCM : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 1; /* bit 1, byte +0x0 */
    unsigned long MXL : 3; /* bit 2, byte +0x0 */
    unsigned long MMAG : 1; /* bit 5, byte +0x0 */
    unsigned long MMIN : 3; /* bit 6, byte +0x0 */
    unsigned long MTBA : 1; /* bit 9, byte +0x0 */
    unsigned long pad10 : 9; /* bit 10, byte +0x0 */
    unsigned long L : 2; /* bit 19, byte +0x0 */
    unsigned long pad21 : 11; /* bit 21, byte +0x0 */
    unsigned long K : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_30 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_5 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_11 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_12 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_27 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_34 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_4 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_18 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_16 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_7 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_31 {
    unsigned long DIMX00 : 3; /* bit 0, byte +0x0 */
    unsigned long pad00 : 1; /* bit 3, byte +0x0 */
    unsigned long DIMX01 : 3; /* bit 4, byte +0x0 */
    unsigned long pad01 : 1; /* bit 7, byte +0x0 */
    unsigned long DIMX02 : 3; /* bit 8, byte +0x0 */
    unsigned long pad02 : 1; /* bit 11, byte +0x0 */
    unsigned long DIMX03 : 3; /* bit 12, byte +0x0 */
    unsigned long pad03 : 1; /* bit 15, byte +0x0 */
    unsigned long DIMX10 : 3; /* bit 16, byte +0x0 */
    unsigned long pad10 : 1; /* bit 19, byte +0x0 */
    unsigned long DIMX11 : 3; /* bit 20, byte +0x0 */
    unsigned long pad11 : 1; /* bit 23, byte +0x0 */
    unsigned long DIMX12 : 3; /* bit 24, byte +0x0 */
    unsigned long pad12 : 1; /* bit 27, byte +0x0 */
    unsigned long DIMX13 : 3; /* bit 28, byte +0x0 */
    unsigned long pad13 : 1; /* bit 31, byte +0x0 */
    unsigned long DIMX20 : 3; /* bit 32, byte +0x0 */
    unsigned long pad20 : 1; /* bit 35, byte +0x0 */
    unsigned long DIMX21 : 3; /* bit 36, byte +0x0 */
    unsigned long pad21 : 1; /* bit 39, byte +0x0 */
    unsigned long DIMX22 : 3; /* bit 40, byte +0x0 */
    unsigned long pad22 : 1; /* bit 43, byte +0x0 */
    unsigned long DIMX23 : 3; /* bit 44, byte +0x0 */
    unsigned long pad23 : 1; /* bit 47, byte +0x0 */
    unsigned long DIMX30 : 3; /* bit 48, byte +0x0 */
    unsigned long pad30 : 1; /* bit 51, byte +0x0 */
    unsigned long DIMX31 : 3; /* bit 52, byte +0x0 */
    unsigned long pad31 : 1; /* bit 55, byte +0x0 */
    unsigned long DIMX32 : 3; /* bit 56, byte +0x0 */
    unsigned long pad32 : 1; /* bit 59, byte +0x0 */
    unsigned long DIMX33 : 3; /* bit 60, byte +0x0 */
    unsigned long pad33 : 1; /* bit 63, byte +0x0 */
};

struct anon_8 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_29 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_25 {
    unsigned long ATE : 1; /* bit 0, byte +0x0 */
    unsigned long ATST : 3; /* bit 1, byte +0x0 */
    unsigned long AREF : 8; /* bit 4, byte +0x0 */
    unsigned long AFAIL : 2; /* bit 12, byte +0x0 */
    unsigned long DATE : 1; /* bit 14, byte +0x0 */
    unsigned long DATM : 1; /* bit 15, byte +0x0 */
    unsigned long ZTE : 1; /* bit 16, byte +0x0 */
    unsigned long ZTST : 2; /* bit 17, byte +0x0 */
    unsigned long pad19 : 45; /* bit 19, byte +0x0 */
};

struct anon_39 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_10 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_20 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_38 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_13 {
    unsigned long SBP : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long SBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long SPSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long DBP : 14; /* bit 32, byte +0x0 */
    unsigned long pad46 : 2; /* bit 46, byte +0x0 */
    unsigned long DBW : 6; /* bit 48, byte +0x0 */
    unsigned long pad54 : 2; /* bit 54, byte +0x0 */
    unsigned long DPSM : 6; /* bit 56, byte +0x0 */
    unsigned long pad62 : 2; /* bit 62, byte +0x0 */
};

struct anon_19 {
    unsigned long SSAX : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SSAY : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long DSAX : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long DSAY : 11; /* bit 48, byte +0x0 */
    unsigned long DIR : 2; /* bit 59, byte +0x0 */
    unsigned long pad61 : 3; /* bit 61, byte +0x0 */
};

struct anon_24 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_17 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_21 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_26 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_32 {
    unsigned long PRIM_Modified : 1; /* bit 0, byte +0x0 */
    unsigned long RGBAQ_Modified : 1; /* bit 1, byte +0x0 */
    unsigned long ST_Modified : 1; /* bit 2, byte +0x0 */
    unsigned long UV_Modified : 1; /* bit 3, byte +0x0 */
    unsigned long XYZF2_Modified : 1; /* bit 4, byte +0x0 */
    unsigned long XYZ2_Modified : 1; /* bit 5, byte +0x0 */
    unsigned long TEX0_1_Modified : 1; /* bit 6, byte +0x0 */
    unsigned long TEX0_2_Modified : 1; /* bit 7, byte +0x0 */
    unsigned long CLAMP_1_Modified : 1; /* bit 8, byte +0x0 */
    unsigned long CLAMP_2_Modified : 1; /* bit 9, byte +0x0 */
    unsigned long FOG_Modified : 1; /* bit 10, byte +0x0 */
    unsigned long XYZF3_Modified : 1; /* bit 11, byte +0x0 */
    unsigned long XYZ3_Modified : 1; /* bit 12, byte +0x0 */
    unsigned long TEX1_1_Modified : 1; /* bit 13, byte +0x0 */
    unsigned long TEX1_2_Modified : 1; /* bit 14, byte +0x0 */
    unsigned long TEX2_1_Modified : 1; /* bit 15, byte +0x0 */
    unsigned long TEX2_2_Modified : 1; /* bit 16, byte +0x0 */
    unsigned long XYOFFSET_1_Modified : 1; /* bit 17, byte +0x0 */
    unsigned long XYOFFSET_2_Modified : 1; /* bit 18, byte +0x0 */
    unsigned long PRMODECONT_Modified : 1; /* bit 19, byte +0x0 */
    unsigned long PRMODE_Modified : 1; /* bit 20, byte +0x0 */
    unsigned long TEXCLUT_Modified : 1; /* bit 21, byte +0x0 */
    unsigned long SCANMSK_Modified : 1; /* bit 22, byte +0x0 */
    unsigned long MIPTBP1_1_Modified : 1; /* bit 23, byte +0x0 */
    unsigned long MIPTBP1_2_Modified : 1; /* bit 24, byte +0x0 */
    unsigned long MIPTBP2_1_Modified : 1; /* bit 25, byte +0x0 */
    unsigned long MIPTBP2_2_Modified : 1; /* bit 26, byte +0x0 */
    unsigned long TEXA_Modified : 1; /* bit 27, byte +0x0 */
    unsigned long FOGCOL_Modified : 1; /* bit 28, byte +0x0 */
    unsigned long TEXFLUSH_Modified : 1; /* bit 29, byte +0x0 */
    unsigned long SCISSOR_1_Modified : 1; /* bit 30, byte +0x0 */
    unsigned long SCISSOR_2_Modified : 1; /* bit 31, byte +0x0 */
    unsigned long ALPHA_1_Modified : 1; /* bit 32, byte +0x0 */
    unsigned long ALPHA_2_Modified : 1; /* bit 33, byte +0x0 */
    unsigned long DIMX_Modified : 1; /* bit 34, byte +0x0 */
    unsigned long DTHE_Modified : 1; /* bit 35, byte +0x0 */
    unsigned long COLCLAMP_Modified : 1; /* bit 36, byte +0x0 */
    unsigned long TEST_1_Modified : 1; /* bit 37, byte +0x0 */
    unsigned long TEST_2_Modified : 1; /* bit 38, byte +0x0 */
    unsigned long PABE_Modified : 1; /* bit 39, byte +0x0 */
    unsigned long FBA_1_Modified : 1; /* bit 40, byte +0x0 */
    unsigned long FBA_2_Modified : 1; /* bit 41, byte +0x0 */
    unsigned long FRAME_1_Modified : 1; /* bit 42, byte +0x0 */
    unsigned long FRAME_2_Modified : 1; /* bit 43, byte +0x0 */
    unsigned long ZBUF_1_Modified : 1; /* bit 44, byte +0x0 */
    unsigned long ZBUF_2_Modified : 1; /* bit 45, byte +0x0 */
    unsigned long BITBLTBUF_Modified : 1; /* bit 46, byte +0x0 */
    unsigned long TRXPOS_Modified : 1; /* bit 47, byte +0x0 */
    unsigned long TRXREG_Modified : 1; /* bit 48, byte +0x0 */
    unsigned long TRXDIR_Modified : 1; /* bit 49, byte +0x0 */
    unsigned long HWREG_Modified : 1; /* bit 50, byte +0x0 */
    unsigned long SIGNAL_Modified : 1; /* bit 51, byte +0x0 */
    unsigned long FINISH_Modified : 1; /* bit 52, byte +0x0 */
    unsigned long LABEL_Modified : 1; /* bit 53, byte +0x0 */
};

struct tagGScontext {
    anon_42 PRIM; /* +0x0 */
    anon_9 RGBAQ; /* +0x8 */
    anon_23 ST; /* +0x10 */
    anon_28 UV; /* +0x18 */
    anon_36 XYZF2; /* +0x20 */
    anon_35 XYZ2; /* +0x28 */
    anon_33 TEX0_1; /* +0x30 */
    anon_33 TEX0_2; /* +0x38 */
    anon_22 CLAMP_1; /* +0x40 */
    anon_22 CLAMP_2; /* +0x48 */
    anon_14 FOG; /* +0x50 */
    anon_36 XYZF3; /* +0x58 */
    anon_35 XYZ3; /* +0x60 */
    anon_41 TEX1_1; /* +0x68 */
    anon_41 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_30 XYOFFSET_1; /* +0x88 */
    anon_30 XYOFFSET_2; /* +0x90 */
    anon_5 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_11 TEXCLUT; /* +0xa8 */
    anon_12 SCANMSK; /* +0xb0 */
    anon_27 MIPTBP1_1; /* +0xb8 */
    anon_27 MIPTBP1_2; /* +0xc0 */
    anon_34 MIPTBP2_1; /* +0xc8 */
    anon_34 MIPTBP2_2; /* +0xd0 */
    anon_4 TEXA; /* +0xd8 */
    anon_18 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_16 SCISSOR_1; /* +0xf0 */
    anon_16 SCISSOR_2; /* +0xf8 */
    anon_7 ALPHA_1; /* +0x100 */
    anon_7 ALPHA_2; /* +0x108 */
    anon_31 DIMX; /* +0x110 */
    anon_8 DTHE; /* +0x118 */
    anon_29 COLCLAMP; /* +0x120 */
    anon_25 TEST_1; /* +0x128 */
    anon_25 TEST_2; /* +0x130 */
    anon_39 PABE; /* +0x138 */
    anon_10 FBA_1; /* +0x140 */
    anon_10 FBA_2; /* +0x148 */
    anon_20 FRAME_1; /* +0x150 */
    anon_20 FRAME_2; /* +0x158 */
    anon_38 ZBUF_1; /* +0x160 */
    anon_38 ZBUF_2; /* +0x168 */
    anon_13 BITBLTBUF; /* +0x170 */
    anon_19 TRXPOS; /* +0x178 */
    anon_24 TRXREG; /* +0x180 */
    anon_17 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_21 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_26 LABEL; /* +0x1a8 */
    anon_32 ModFlgs; /* +0x1b0 */
    anon_32 GlobalModFlgs; /* +0x1b8 */
    anon_1 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_1* pqCurrent; /* +0x2224 */
    anon_3* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct Water2DEffect_ {
    float Position3D[4]; /* +0x0 */
    float fSizeX; /* +0x10 */
    float fSizeY; /* +0x14 */
    float fAlpha; /* +0x18 */
    unsigned int Type; /* +0x1c */
    float fAngleSpeed; /* +0x20 */
    float fSizeMultiplier; /* +0x24 */
};

struct GLI_tdstAnimatedTextureNode_ {
    GLI_tdstTexture_* p_stTexture; /* +0x0 */
    float xDisplayTime; /* +0x4 */
    GLI_tdstAnimatedTextureNode_* p_stNextDisplayNode; /* +0x8 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tag_GLtexture_set {
    float vTexEnvColor[4]; /* +0x0 */
    unsigned int eTexEnvMode; /* +0x10 */
    unsigned int nTexGenBits; /* +0x14 */
    unsigned short nTexGenModeS; /* +0x18 */
    unsigned short nTexGenModeT; /* +0x1a */
    unsigned short nTexGenModeR; /* +0x1c */
    unsigned short nTexGenModeQ; /* +0x1e */
    float vTexGenCoeffS[4]; /* +0x20 */
    float vTexGenCoeffT[4]; /* +0x30 */
    float vTexGenCoeffR[4]; /* +0x40 */
    float vTexGenCoeffQ[4]; /* +0x50 */
};

struct tagGsLoadImage {
    anon_3 gifTag; /* +0x0 */
    anon_13 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_19 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_24 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_17 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_15 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_3 gifTag; /* +0x0 */
    anon_15 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_33 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_41 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_27 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_34 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_22 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tagGLtexname {
    unsigned char bAllocated; /* +0x0 */
    unsigned char bResident; /* +0x1 */
    float fPrioritize; /* +0x4 */
    unsigned int eDimension; /* +0x8 */
    int iTexBlock; /* +0xc */
    tag_GLtexture* pTex1D; /* +0x10 */
    tag_GLtexture* pTex2D; /* +0x14 */
    tag_GLtexture* pTexCube; /* +0x18 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct tag_GLlight {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vPosition[4]; /* +0x30 */
    float vDirection[4]; /* +0x40 */
    float fSpotExponent; /* +0x50 */
    float fSpotCutoff; /* +0x54 */
    float fCosCutoff; /* +0x58 */
    float fConstantAttenuation; /* +0x5c */
    float fLinearAttenuation; /* +0x60 */
    float fQuadraticAttenuation; /* +0x64 */
};

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
};

struct tagGLArrayInfo {
    int size; /* +0x0 */
    unsigned int type; /* +0x4 */
    int stride; /* +0x8 */
    int pointer; /* +0xc */
};

struct tagGLcontext {
    unsigned int nEnableBits; /* +0x0 */
    float fPointSize; /* +0x4 */
    int iLineFactor; /* +0x8 */
    unsigned short nLineMask; /* +0xc */
    float fLineWidth; /* +0x10 */
    unsigned int eCullFaceMode; /* +0x14 */
    unsigned int eFrontFaceMode; /* +0x18 */
    unsigned int ePolygonMode[2]; /* +0x1c */
    unsigned char aPolygonMask[128]; /* +0x24 */
    unsigned int eClippingFunction; /* +0xa4 */
    unsigned int eSPRMode; /* +0xa8 */
    unsigned char bSPRSynchronization; /* +0xac */
    unsigned int eTexConvMode; /* +0xb0 */
    unsigned int eClutConvMode; /* +0xb4 */
    unsigned int eTexUserMaintainMode; /* +0xb8 */
    unsigned int uiMotionBlurIntensity; /* +0xbc */
    unsigned short iAccumDepth; /* +0xc0 */
    unsigned char bAlphaChannelReduce; /* +0xc2 */
    unsigned int uiCurrentDmaBuffer; /* +0xc4 */
    unsigned short usDontUpdateBits; /* +0xc8 */
    unsigned int uiFastPathBits; /* +0xcc */
    unsigned int uiDmaOmitDataBits; /* +0xd0 */
    unsigned int uiBoundingSphereBits; /* +0xd4 */
    unsigned int uiStaticDisplayListMaxSize; /* +0xd8 */
    unsigned int uiStaticDisplayListBits; /* +0xdc */
    signed char ucSDLObjectReserveSize; /* +0xe0 */
    unsigned char _extractor_padding_08[15]; /* explicit retail gap; +0xe1..0xef */
    float vScissorBox[4]; /* +0xf0 */
    float fIndexClearValue; /* +0x100 */
    unsigned int eAlphaTestFunc; /* +0x104 */
    float fAlphaTestRef; /* +0x108 */
    unsigned char _extractor_padding_00[4]; /* implicitly added by extractor; +0x10c..0x10f */
    float vAccumClearValue[4]; /* +0x110 */
    unsigned int eBlendSrcFactor; /* +0x120 */
    unsigned int eBlendDstFactor; /* +0x124 */
    unsigned int eDrawBuffer; /* +0x128 */
    unsigned int eBufferReadMode; /* +0x12c */
    float vColorClearValue[4]; /* +0x130 */
    unsigned char abColorMask[4]; /* +0x140 */
    unsigned int eDepthFunc; /* +0x144 */
    float fDepthClearValue; /* +0x148 */
    unsigned char eDepthWriteMask; /* +0x14c */
    unsigned int eStencilFunc; /* +0x150 */
    int iStencilRef; /* +0x154 */
    unsigned int nStencilValueMask; /* +0x158 */
    unsigned int nStencilWriteMask; /* +0x15c */
    unsigned int eOpFail; /* +0x160 */
    unsigned int eOpZFail; /* +0x164 */
    unsigned int eOpZPass; /* +0x168 */
    int iStencilClearValue; /* +0x16c */
    unsigned int eLogicOpCode; /* +0x170 */
    unsigned int nLightBits; /* +0x174 */
    unsigned int bPointLighting; /* +0x178 */
    unsigned int nTextureEnableBits; /* +0x17c */
    tag_GLtexture_set TextureSet[2]; /* +0x180 */
    tag_GLtexture_set* pCurTexture; /* +0x240 */
    unsigned char _extractor_padding_01[12]; /* implicitly added by extractor; +0x244..0x24f */
    tagGsLoadImage stGsLoadImage; /* +0x250 */
    tagGsSetTex astGsSetTex[2]; /* +0x2a0 */
    tagGsSetTex* pstCurGsSetTex; /* +0x380 */
    unsigned int anCurTexName1D[2]; /* +0x384 */
    unsigned int anCurTexName2D[2]; /* +0x38c */
    unsigned int nCurTexNameCube; /* +0x394 */
    tagGLtexname aTexName[512]; /* +0x398 */
    unsigned int eTexLastBindTarget; /* +0x3b98 */
    unsigned int nTexLastBindName; /* +0x3b9c */
    int iMaxTexBlockCount; /* +0x3ba0 */
    tagGLtexblock aBlockMap[604]; /* +0x3ba4 */
    unsigned int nTexMemBegin; /* +0x4514 */
    unsigned int nTexMemEnd; /* +0x4518 */
    int aTexLevelCount[10]; /* +0x451c */
    tagGLtexindex aTexLevelIndex[1203]; /* +0x4544 */
    int iClutSize; /* +0x5810 */
    unsigned char bClutResident; /* +0x5814 */
    int clut; /* +0x5818 */
    unsigned char bMatrixChanged; /* +0x581c */
    unsigned char bBSParamChanged; /* +0x581d */
    unsigned char bLightsChanged; /* +0x581e */
    unsigned char bMaterialChanged; /* +0x581f */
    unsigned char bFogChanged; /* +0x5820 */
    unsigned char bCullfaceChanged; /* +0x5821 */
    unsigned int eOldBeginMode; /* +0x5824 */
    unsigned char abTex1DChanged[2]; /* +0x5828 */
    unsigned char abTex2DChanged[2]; /* +0x582a */
    unsigned char bTexCubeChanged; /* +0x582c */
    int pfnLastCall; /* +0x5830 */
    unsigned int nEvaluatorBits; /* +0x5834 */
    unsigned char bNeedNormal; /* +0x5838 */
    tag_GLlight Lights[8]; /* +0x5840 */
    unsigned char bLocalViewer; /* +0x5bc0 */
    unsigned char bLightModelTwoSide; /* +0x5bc1 */
    unsigned char _extractor_padding_09[14]; /* explicit retail gap; +0x5bc2..0x5bcf */
    float vAmbient[4]; /* +0x5bd0 */
    unsigned int eColorControl; /* +0x5be0 */
    unsigned char bLightModelDiffuseOnly; /* +0x5be4 */
    tag_GLmaterial Materials[2]; /* +0x5bf0 */
    unsigned int eColorMaterialFace; /* +0x5c90 */
    unsigned int eColorMaterialMode; /* +0x5c94 */
    unsigned int eShadeModel; /* +0x5c98 */
    unsigned int eFogMode; /* +0x5c9c */
    int ivFogColor[4]; /* +0x5ca0 */
    float fFogDensity; /* +0x5cb0 */
    float fFogLinearStart; /* +0x5cb4 */
    float fFogLinearEnd; /* +0x5cb8 */
    float fFogIndex; /* +0x5cbc */
    unsigned int eHintPerspectiveCorrection; /* +0x5cc0 */
    unsigned int eHintSmoothPoint; /* +0x5cc4 */
    unsigned int eHintSmoothLine; /* +0x5cc8 */
    unsigned int eHintSmoothPolygon; /* +0x5ccc */
    unsigned int eHintFog; /* +0x5cd0 */
    unsigned int uiListBase; /* +0x5cd4 */
    tagListData* pCurListData; /* +0x5cd8 */
    tagGLlistcalls* pCurListCalls; /* +0x5cdc */
    tagGLlistcalls* pPreListCalls; /* +0x5ce0 */
    tagGLprimbuf* pCurPrimBuf; /* +0x5ce4 */
    anon_6* pCurParamBegin; /* +0x5ce8 */
    tagGLprimbuf** ppCurPrimBufHead; /* +0x5cec */
    float (*pCurListVData)[4]; /* +0x5cf0 */
    int pCurListVCode; /* +0x5cf4 */
    int pCurListTexUnit; /* +0x5cf8 */
    tagGLlistpool ListPool; /* +0x5cfc */
    unsigned int nClientEnableBits; /* +0x5f08 */
    tagGLArrayInfo VertexArray; /* +0x5f0c */
    tagGLArrayInfo ColorArray[2]; /* +0x5f1c */
    tagGLArrayInfo NormalArray; /* +0x5f3c */
    tagGLArrayInfo TexArray[2]; /* +0x5f4c */
    tagGLArrayInfo IndexArray; /* +0x5f6c */
    tagGLArrayInfo EdgeFlagArray; /* +0x5f7c */
    unsigned int iCurClientTextureSet; /* +0x5f8c */
    unsigned int iFrameCount; /* +0x5f90 */
    unsigned int iDepthBuffer; /* +0x5f94 */
    unsigned int iDepthBufferBitDepth; /* +0x5f98 */
    unsigned int iFrameBufferBitDepth; /* +0x5f9c */
    unsigned int iFrameBuffer0; /* +0x5fa0 */
    unsigned int iFrameBuffer1; /* +0x5fa4 */
    unsigned int iFrameBufferFront; /* +0x5fa8 */
    unsigned int iFrameBufferBack; /* +0x5fac */
    int iPackAlignment; /* +0x5fb0 */
    unsigned char bFrameMode; /* +0x5fb4 */
    int iMipMapCoeff; /* +0x5fb8 */
    int iAlignMask; /* +0x5fbc */
    unsigned char bMapColor; /* +0x5fc0 */
    unsigned char bMapStencil; /* +0x5fc1 */
    int iIndexShift; /* +0x5fc4 */
    int iIndexOffset; /* +0x5fc8 */
    float fRedBias; /* +0x5fcc */
    float fRedScale; /* +0x5fd0 */
    float fGreenBias; /* +0x5fd4 */
    float fGreenScale; /* +0x5fd8 */
    float fBlueBias; /* +0x5fdc */
    float fBlueScale; /* +0x5fe0 */
    float fAlphaBias; /* +0x5fe4 */
    float fAlphaScale; /* +0x5fe8 */
    float fDepthBias; /* +0x5fec */
    float fDepthScale; /* +0x5ff0 */
    float fPixelZoomX; /* +0x5ff4 */
    float fPixelZoomY; /* +0x5ff8 */
    unsigned int nClipBits; /* +0x5ffc */
    int iMaxClipPlanes; /* +0x6000 */
    unsigned char _extractor_padding_02[12]; /* implicitly added by extractor; +0x6004..0x600f */
    float avClipPlane[6][4]; /* +0x6010 */
    unsigned int eMatrixMode; /* +0x6070 */
    float (*pCurMatrix)[4][4]; /* +0x6074 */
    float (*pCurStack)[4][4]; /* +0x6078 */
    int piCurStackDepth; /* +0x607c */
    float ViewOrg[2]; /* +0x6080 */
    unsigned char _extractor_padding_10[8]; /* explicit retail gap; +0x6088..0x608f */
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    unsigned char _extractor_padding_11[8]; /* explicit retail gap; +0x60a8..0x60af */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
    unsigned char _extractor_padding_12[7]; /* explicit retail gap; +0x6119..0x611f */
    float valistColor[2][4]; /* +0x6120 */
    float (*pvlistColor)[4]; /* +0x6140 */
    unsigned char _extractor_padding_04[12]; /* implicitly added by extractor; +0x6144..0x614f */
    float vlistNormal[4]; /* +0x6150 */
    float valistTexCoords[2][4]; /* +0x6160 */
    unsigned int ilistTexSet; /* +0x6180 */
    float (*pvlistTexCoord)[4]; /* +0x6184 */
    unsigned char bRasterPosValid; /* +0x6188 */
    float fRasterPos[4]; /* +0x618c */
    float fRasterDistance; /* +0x619c */
    float fRasterColor[2][4]; /* +0x61a0 */
    float RasterMultiTexCoords[2][4]; /* +0x61c0 */
    float (*pvRasterTexCoord)[4]; /* +0x61e0 */
    unsigned char bEdgeFlag; /* +0x61e4 */
    unsigned char _extractor_padding_13[11]; /* explicit retail gap; +0x61e5..0x61ef */
    float mFrustumNormal[4][4]; /* +0x61f0 */
    float mGuardBandNormal[4][4]; /* +0x6230 */
    float vZNearFar[4]; /* +0x6270 */
    float vObjectBS[4]; /* +0x6280 */
    float (*pfvPackaeBSs)[4]; /* +0x6290 */
    int iPackageBSIndex; /* +0x6294 */
    float faObjectBoundingBox[6]; /* +0x6298 */
    float ModelViewMatrix[4][4]; /* +0x62b0 */
    float NormalMatrix[4][4]; /* +0x62f0 */
    unsigned int nModelViewStackDepth; /* +0x6330 */
    unsigned char _extractor_padding_05[12]; /* implicitly added by extractor; +0x6334..0x633f */
    float ModelViewStack[16][4][4]; /* +0x6340 */
    float ProjectionMatrix[4][4]; /* +0x6740 */
    float GuardBandProjectionMatrix[4][4]; /* +0x6780 */
    unsigned int nProjectionStackDepth; /* +0x67c0 */
    unsigned char _extractor_padding_06[12]; /* implicitly added by extractor; +0x67c4..0x67cf */
    float ProjectionStack[4][4][4]; /* +0x67d0 */
    float NearFarStack[4][2]; /* +0x68d0 */
    float TextureMatrix[2][4][4]; /* +0x68f0 */
    unsigned int nTextureStackDepths[2]; /* +0x6970 */
    unsigned char _extractor_padding_14[8]; /* explicit retail gap; +0x6978..0x697f */
    float TextureStacks[2][4][4][4]; /* +0x6980 */
    float (*pTextureMatrix)[4][4]; /* +0x6b80 */
    int pnTextureStackDepth; /* +0x6b84 */
    float (*pTextureStack)[4][4]; /* +0x6b88 */
    unsigned int eBeginMode; /* +0x6b8c */
    unsigned char bInBeginEndPair; /* +0x6b90 */
    unsigned char bInDisplayListExecution; /* +0x6b91 */
    int iBufLimit; /* +0x6b94 */
    int iBufCount; /* +0x6b98 */
    float (*pVBuf)[4]; /* +0x6b9c */
    float (*pCBuf)[4]; /* +0x6ba0 */
    float (*pNBuf)[4]; /* +0x6ba4 */
    float (*pTBuf)[4]; /* +0x6ba8 */
    float (*pCBuf_b)[4]; /* +0x6bac */
    float (*pTBuf_b)[4]; /* +0x6bb0 */
    float (*pVIFDMABuf)[4]; /* +0x6bb4 */
    float (*pVIFDMABufUnaligned)[4]; /* +0x6bb8 */
    float (*pVIFInBuf)[4]; /* +0x6bbc */
    float (*pVIFOutBuf)[4]; /* +0x6bc0 */
    float (*pVIFIBufTail)[4]; /* +0x6bc4 */
    float (*pVIFOBufTail)[4]; /* +0x6bc8 */
    int iLightModel; /* +0x6bcc */
    _sceDmaTag* pVU1_DMA_parameters; /* +0x6bd0 */
    _sceDmaTag* pVU1_DMA_buf0; /* +0x6bd4 */
    _sceDmaTag* pVU1_DMA_buf1; /* +0x6bd8 */
    float (*pmClipping)[4][4]; /* +0x6bdc */
    float (*pmNormal)[4][4]; /* +0x6be0 */
    float (*pmClippingScreen)[4][4]; /* +0x6be4 */
    float (*pmLocalScreen)[4][4]; /* +0x6be8 */
    float (*pmModelView)[4][4]; /* +0x6bec */
    float (*pvClampLimit)[4]; /* +0x6bf0 */
    int (*pClippingFlags)[4]; /* +0x6bf4 */
    anon_3* pGifTagFan; /* +0x6bf8 */
    float (*pmD)[4][4]; /* +0x6bfc */
    float (*pmVP)[4][4]; /* +0x6c00 */
    float (*pmS)[4][4]; /* +0x6c04 */
    float (*pmh)[4][4]; /* +0x6c08 */
    float (*pvAmbient)[4]; /* +0x6c0c */
    float (*pvEmission)[4]; /* +0x6c10 */
    float (*pvScreenScale)[4]; /* +0x6c14 */
    float (*pvColorRange)[4]; /* +0x6c18 */
    int pfAlpha; /* +0x6c1c */
    int pfShininess; /* +0x6c20 */
    int pnColorMatMasks; /* +0x6c24 */
    int pbFogging; /* +0x6c28 */
    int peFogMode; /* +0x6c2c */
    int pfFogDensity; /* +0x6c30 */
    int pfFogLinearStart; /* +0x6c34 */
    int pfFogLinearEnd; /* +0x6c38 */
    int pbTriangleFan; /* +0x6c3c */
    int pnClipMask; /* +0x6c40 */
    int piClipStep; /* +0x6c44 */
    int pbNormalize; /* +0x6c48 */
    int piReturnAddress; /* +0x6c4c */
    int piEntryAddress; /* +0x6c50 */
    int peClippingMode; /* +0x6c54 */
    int peUseClippingMode; /* +0x6c58 */
    anon_3* pGifTagBuf0; /* +0x6c5c */
    anon_3* pGifTagBuf1; /* +0x6c60 */
    int iCurBuf; /* +0x6c64 */
    float (*pVBuf0)[4]; /* +0x6c68 */
    float (*pNBuf0)[4]; /* +0x6c6c */
    float (*pCBuf0)[4]; /* +0x6c70 */
    float (*pTBuf0)[4]; /* +0x6c74 */
    float (*pCBuf0_b)[4]; /* +0x6c78 */
    float (*pTBuf0_b)[4]; /* +0x6c7c */
    float (*pVBuf1)[4]; /* +0x6c80 */
    float (*pNBuf1)[4]; /* +0x6c84 */
    float (*pCBuf1)[4]; /* +0x6c88 */
    float (*pTBuf1)[4]; /* +0x6c8c */
    float (*pCBuf1_b)[4]; /* +0x6c90 */
    float (*pTBuf1_b)[4]; /* +0x6c94 */
    tagstVIFCode* pMSCAL; /* +0x6c98 */
    unsigned char _extractor_padding_07[4]; /* implicitly added by extractor; +0x6c9c..0x6c9f */
    unsigned char VU1Package[10000]; /* +0x6ca0 */
};

struct GLI_tdstTexture_ {
    int bIsAvailable; /* +0x0 */
    int lTextureQuality; /* +0x4 */
    int p_vBitMap; /* +0x8 */
    int p_vColorTable; /* +0xc */
    int p_stSpecParam; /* +0x10 */
    int lTextureCaps; /* +0x14 */
    unsigned short lHeight; /* +0x18 */
    unsigned short lWidth; /* +0x1a */
    unsigned short lRealHeight; /* +0x1c */
    unsigned short lRealWidth; /* +0x1e */
    float fAddU; /* +0x20 */
    float fAddV; /* +0x24 */
    int lIncrementIsEnable; /* +0x28 */
    unsigned int lChromakeyColorRGBA; /* +0x2c */
    unsigned int ulBlendColorRGBA; /* +0x30 */
    int lNumberOfLod; /* +0x34 */
    unsigned int lCompressionCounter; /* +0x38 */
    unsigned int lTypeOfCompression; /* +0x3c */
    unsigned int lTypeOfMipMapping; /* +0x40 */
    GLI_tdstTexture_* p_TextureOfSubstitution; /* +0x44 */
    unsigned char ucBilinearMode; /* +0x48 */
    unsigned char ucCylingMode; /* +0x49 */
    char a255_cFileName[128]; /* +0x4a */
};

struct tag_GLtexture_image {
    unsigned int target; /* +0x0 */
    int inputComponents; /* +0x4 */
    int width; /* +0x8 */
    int height; /* +0xc */
    unsigned int format; /* +0x10 */
    int pixels; /* +0x14 */
    int pixelsAux; /* +0x18 */
    int cbPixels; /* +0x1c */
    int cbPixelsAux; /* +0x20 */
    unsigned char pixelsChanged; /* +0x24 */
    unsigned char bConverted; /* +0x25 */
    unsigned char bUserMaintain; /* +0x26 */
    unsigned int uiSpan; /* +0x28 */
};

struct GEO_tdstColor_ {
    float xR; /* +0x0 */
    float xG; /* +0x4 */
    float xB; /* +0x8 */
    float xA; /* +0xc */
};

struct anon_37 {
    float stMat[2][2]; /* +0x0 */
    float stTrans[2]; /* +0x10 */
};

struct anon_40 {
    GLI_tdstTexture_* pst_Texture; /* +0x0 */
    char c_Operator; /* +0x4 */
    char c_ColorOperator; /* +0x5 */
    char c_UVSource; /* +0x6 */
    char c_Flags; /* +0x7 */
    unsigned int ulTextureProperties; /* +0x8 */
    anon_37 st_UVStaticPos; /* +0xc */
    anon_37 st_UVDynamicPos; /* +0x24 */
    float fDynamicAngle; /* +0x3c */
    float fStaticAngle; /* +0x40 */
    unsigned int ulSetMaterialFunction; /* +0x44 */
    float fScaleU; /* +0x48 */
    float fScaleV; /* +0x4c */
};

struct GLI_tdstMaterial_ {
    unsigned int xMaterialType; /* +0x0 */
    GEO_tdstColor_ stAmbient; /* +0x4 */
    GEO_tdstColor_ stDiffuse; /* +0x14 */
    GEO_tdstColor_ stSpecular; /* +0x24 */
    GEO_tdstColor_ stColor; /* +0x34 */
    unsigned int lMaterialAdditionnalType; /* +0x44 */
    int lSpecularExponent; /* +0x48 */
    GLI_tdstTexture_* p_stTexture; /* +0x4c */
    float fAddU; /* +0x50 */
    float fAddV; /* +0x54 */
    float fConstantAddU; /* +0x58 */
    float fConstantAddV; /* +0x5c */
    int lIncrementIsEnable; /* +0x60 */
    unsigned int lActualRefreshNumber; /* +0x64 */
    GLI_tdstAnimatedTextureNode_* p_stFistAnimatedTExtureNode; /* +0x68 */
    GLI_tdstAnimatedTextureNode_* p_stActualAnimatedTExtureNode; /* +0x6c */
    int lNumberOfDisplayNode; /* +0x70 */
    float xActualDisplayTimeSinceStartOfLastTexture; /* +0x74 */
    unsigned char xIsLocked; /* +0x78 */
    unsigned int uiFlags; /* +0x7c */
    unsigned int ulMultiTextureType; /* +0x80 */
    unsigned int ulNbTextureStages; /* +0x84 */
    anon_40 a_stMultiMaterial[4]; /* +0x88 */
};

struct anon_6 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct _GL_BUFFERINFO {
    int iFrameBufferDepth; /* +0x0 */
    int iDepthBufferDepth; /* +0x4 */
    int iStencilBufferDepth; /* +0x8 */
    int iAccumBufferDepth; /* +0xc */
    int iAuxBufferBase; /* +0x10 */
    int iAuxBufferSize; /* +0x14 */
    int iAuxBufferPSM; /* +0x18 */
    int iAccumBufferBase; /* +0x1c */
    int iAccumBufferPSM; /* +0x20 */
    unsigned char bDoubleBufferMode; /* +0x24 */
    unsigned char bPlainBufferMode; /* +0x25 */
    int iScreenWidth; /* +0x28 */
    int iScreenHeight; /* +0x2c */
    int iSecondBufferWidth; /* +0x30 */
    int iSecondBufferHeight; /* +0x34 */
    int iSecondBufferWidthPower; /* +0x38 */
    int iSecondBufferHeightPower; /* +0x3c */
    int iSecondBufferBase; /* +0x40 */
    int iSecondBufferZBase; /* +0x44 */
    int iSecondBufferPSM; /* +0x48 */
    int iSecondBufferZPSM; /* +0x4c */
    int iSuperWidth; /* +0x50 */
    int iSuperHeight; /* +0x54 */
};

struct MTH3D_tdstVector_ {
    float xX; /* +0x0 */
    float xY; /* +0x4 */
    float xZ; /* +0x8 */
};

struct GLD_tdstViewportAttributes_ {
    unsigned int dwInitialHeight; /* +0x0 */
    unsigned int dwInitialWidth; /* +0x4 */
    unsigned int dwHeight; /* +0x8 */
    unsigned int dwWidth; /* +0xc */
    unsigned int dwTopInPix; /* +0x10 */
    unsigned int dwBottomInPix; /* +0x14 */
    unsigned int dwLeftInPix; /* +0x18 */
    unsigned int dwRightInPix; /* +0x1c */
    unsigned int dwTopInPixForClip; /* +0x20 */
    unsigned int dwBottomInPixForClip; /* +0x24 */
    unsigned int dwLeftInPixForClip; /* +0x28 */
    unsigned int dwRightInPixForClip; /* +0x2c */
    unsigned int dwWidthInPercent; /* +0x30 */
    unsigned int dwHeightInPercent; /* +0x34 */
    unsigned int dwClipTopInPix; /* +0x38 */
    unsigned int dwClipBottomInPix; /* +0x3c */
    unsigned int dwClipLeftInPix; /* +0x40 */
    unsigned int dwClipRightInPix; /* +0x44 */
    unsigned int dwClipTopInPerMille; /* +0x48 */
    unsigned int dwClipBottomInPerMille; /* +0x4c */
    unsigned int dwClipLeftInPerMille; /* +0x50 */
    unsigned int dwClipRightInPerMille; /* +0x54 */
    int iOffsetPosX; /* +0x58 */
    int iOffsetPosY; /* +0x5c */
    int p_cVirtualScreen; /* +0x60 */
    int lPitch; /* +0x64 */
    int p_vSpecificToXD; /* +0x68 */
    short hDevice; /* +0x6c */
    short hViewport; /* +0x6e */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

union unFunction {
    void (*pfnPlayVoid)(void); /* +0x0 */
    void (*pfnPlayParam)(void*); /* +0x0 */
};

struct tagGLlistnode {
    unFunction pfns; /* +0x0 */
    int cbParamCount; /* +0x4 */
    unsigned char aParams[4]; /* +0x8 */
};

struct tagGLlistcalls {
    tagGLlistcalls* pNext; /* +0x0 */
    unsigned int cbCalls; /* +0x4 */
    tagGLlistnode aNodes[1]; /* +0x8 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tagListData {
    unsigned int eMode; /* +0x0 */
    tagGLlistcalls* pCalls; /* +0x4 */
    tagGLlistdatas* pDatas; /* +0x8 */
    tagGLprimbuf* pPrimBufHead; /* +0xc */
    tagGLprimbuf* pPrimBufTail; /* +0x10 */
    float (*pDmaBuffer)[4]; /* +0x14 */
    unsigned int uiSDLSize; /* +0x18 */
    int pSDLIndices; /* +0x1c */
    unsigned int uiSDLIndicesSize; /* +0x20 */
    unsigned int uiSDLBits; /* +0x24 */
    unsigned long ModFlgs; /* +0x28 */
    float (*pLastExecDmaBuffer)[4]; /* +0x30 */
    signed char ucSDLObjectReserveSize; /* +0x34 */
};

struct GLI_tdstMatrixDeformationEffect_ {
    float Position[4]; /* +0x0 */
    float Pos2D[4]; /* +0x10 */
    float AlphaVal; /* +0x20 */
    float AngleSpeed; /* +0x24 */
    unsigned int Type; /* +0x28 */
    float fSize; /* +0x2c */
};

char GLI_g_NextMapWillHaveACinemaEffect;
char GLI_g_NextMapWillHaveAStereoScopicEffect;
float GLI_g_CartoonBlendVal;
float AE_Bright_Cont[5];
float GLI_g_MotionBlurIntensity;
int GLI_g_MirrorAfterEffect;
unsigned int AE_MirrorFX;
float AE_Glow_M[4];
float AE_Bright_Cont_M[5];
float AE_Blur_M;
char GLI_g_AfterEffect;
char GLI_g_StereoVisionMode;
unsigned int GLI_g_OldMovieEffect;
unsigned int GLI_g_bFullScreenWaterEffect;
unsigned int g_bHasWaterEffect;
float AE_ZoomBlurIntensity;
float AE_Glow[4];
float AE_GlowDirection;
unsigned int GLI_g_ChristianSlaterMode;
float AddValue;
float AE_MirrorWaterFX_Speed;
float AE_MirrorWaterFX_Ampl;
float G_DEPTH_BLUR_DISTNEAR;
float G_DEPTH_BLUR_DISTFAR;
float G_DEPTH_BLUR_MAX_ALPHA;
unsigned int WaterFrame;
unsigned int GLIPS2_g_NbWater2DEffects;
float myColorRange2[4];
int g_BlurPool;
float C1[4];
float C0[4];
float C12[4];
float C02[4];
unsigned int NbWaterFxTri;
float Color1[4];
float Color0[4];
unsigned int WAT_bInit;
unsigned int WAT_CurrentFrame;
unsigned int Floute;
unsigned int AE_StackNext;
float AE_Stack[104];
float WAT_WaterPos[5][4];
unsigned int WAT_CurrentBuffer;
unsigned int WAT_GLTextures[4];
int WAT_PaletteAdd;
int WAT_PaletteSub;
int WAT_TextureBuffers[2];
float WaterFXSecondPassColor[2][72][4];
float WaterFXSecondPassVtx[2][72][4];
float a16_fProjectionMatrix[4][4];
float VY2;
float VY1;
float VX2;
float VX1;
float vMul;
float uMul;
anon_1 qwordcZero;
Water2DEffect_ GLIPS2_g_Water2DEffectsList[500];
Water2DEffect_ GLIPS2_g_Water2DEffects[500];
GLI_tdstMatrixDeformationEffect_ GLI_g_MatrixDeformations[200];
float GLIPS2_WaterMax[4];
float GLIPS2_WaterMin[4];
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
float myColorRange[4];
float g_ffFrameTime;
int AGO_g_WaterLightMaterial;
unsigned int GLI_g_ProjectionMode;
float GLI_g_NegVect[4];
int g_p_stCurrentViewport;
float AGO2_g_pfCosTable[512];
int XRES;
_GL_BUFFERINFO g_stBufferInfo;
unsigned int GLI_g_HadHeatFx;
int AGO_g_OldMovieMaterial;
int GLI_g_OldTV;
float YRESf;
float XRESf;

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 110–122 */
/* addr: 0x002dcfb0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 110
 *   +0x0028 -> line 111
 *   +0x0034 -> line 113
 *   +0x0040 -> line 115
 *   +0x0044 -> line 116
 *   +0x0048 -> line 117
 *   +0x004c -> line 118
 *   +0x0050 -> line 119
 *   +0x0054 -> line 120
 *   +0x0058 -> line 121
 *   +0x0088 -> line 122
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 6135–6263 */
/* addr: 0x002dd050  size: 2420 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6135
 *   +0x0008 -> line 6137
 *   +0x0020 -> line 6139
 *   +0x0030 -> line 6140
 *   +0x0054 -> line 6141
 *   +0x0058 -> line 6140
 *   +0x00c0 -> line 6141
 *   +0x00c8 -> line 6142
 *   +0x00e0 -> line 6143
 *   +0x00e4 -> line 6142
 *   +0x011c -> line 6143
 *   +0x0124 -> line 6144
 *   +0x012c -> line 6146
 *   +0x0134 -> line 6148
 *   +0x013c -> line 6149
 *   +0x0144 -> line 6151
 *   +0x014c -> line 6152
 *   +0x0154 -> line 6153
 *   +0x015c -> line 6154
 *   +0x0174 -> line 6156
 *   +0x01b4 -> line 6158
 *   +0x01bc -> line 6160
 *   +0x01c4 -> line 6162
 *   +0x01cc -> line 6164
 *   +0x01d4 -> line 6165
 *   +0x01dc -> line 6167
 *   +0x01e4 -> line 6168
 *   +0x01ec -> line 6169
 *   +0x0204 -> line 6172
 *   +0x0250 -> line 6175
 *   +0x0258 -> line 6177
 *   +0x026c -> line 6179
 *   +0x0274 -> line 6182
 *   +0x0278 -> line 6183
 *   +0x027c -> line 6182
 *   +0x0288 -> line 6183
 *   +0x028c -> line 6182
 *   +0x0294 -> line 6183
 *   +0x0298 -> line 6182
 *   +0x02a8 -> line 6183
 *   +0x02ac -> line 6185
 *   +0x02b0 -> line 6182
 *   +0x02bc -> line 6185
 *   +0x02c0 -> line 6182
 *   +0x02cc -> line 6184
 *   +0x02d0 -> line 6183
 *   +0x02d8 -> line 6182
 *   +0x02f0 -> line 6183
 *   +0x02f8 -> line 6182
 *   +0x02fc -> line 6183
 *   +0x0300 -> line 6182
 *   +0x030c -> line 6183
 *   +0x0318 -> line 6186
 *   +0x031c -> line 6183
 *   +0x0320 -> line 6186
 *   +0x032c -> line 6182
 *   +0x0338 -> line 6186
 *   +0x033c -> line 6182
 *   +0x0340 -> line 6183
 *   +0x0344 -> line 6182
 *   +0x0348 -> line 6183
 *   +0x0358 -> line 6186
 *   +0x035c -> line 6183
 *   +0x0374 -> line 6184
 *   +0x037c -> line 6185
 *   +0x0380 -> line 6184
 *   +0x0384 -> line 6185
 *   +0x039c -> line 6184
 *   +0x03a0 -> line 6185
 *   +0x03a4 -> line 6184
 *   +0x03a8 -> line 6185
 *   +0x03c8 -> line 6186
 *   +0x03d0 -> line 6187
 *   +0x03e4 -> line 6191
 *   +0x03e8 -> line 6192
 *   +0x03ec -> line 6191
 *   +0x03f0 -> line 6192
 *   +0x03f8 -> line 6191
 *   +0x03fc -> line 6192
 *   +0x0400 -> line 6191
 *   +0x040c -> line 6192
 *   +0x0414 -> line 6191
 *   +0x044c -> line 6192
 *   +0x0454 -> line 6193
 *   +0x045c -> line 6194
 *   +0x0478 -> line 6195
 *   +0x0484 -> line 6196
 *   +0x0498 -> line 6197
 *   +0x04ac -> line 6198
 *   +0x04bc -> line 6199
 *   +0x04c8 -> line 6200
 *   +0x04dc -> line 6201
 *   +0x04f0 -> line 6202
 *   +0x0500 -> line 6203
 *   +0x0508 -> line 6208
 *   +0x051c -> line 6210
 *   +0x0524 -> line 6212
 *   +0x052c -> line 6214
 *   +0x0534 -> line 6218
 *   +0x0548 -> line 6220
 *   +0x0550 -> line 6223
 *   +0x0554 -> line 6224
 *   +0x0558 -> line 6223
 *   +0x0564 -> line 6224
 *   +0x0568 -> line 6223
 *   +0x056c -> line 6224
 *   +0x0570 -> line 6223
 *   +0x0584 -> line 6225
 *   +0x0588 -> line 6223
 *   +0x0594 -> line 6224
 *   +0x0598 -> line 6226
 *   +0x059c -> line 6223
 *   +0x05a8 -> line 6226
 *   +0x05ac -> line 6224
 *   +0x05b0 -> line 6223
 *   +0x05b4 -> line 6224
 *   +0x05b8 -> line 6223
 *   +0x05c4 -> line 6224
 *   +0x05c8 -> line 6223
 *   +0x05e0 -> line 6224
 *   +0x05e4 -> line 6227
 *   +0x05e8 -> line 6224
 *   +0x05ec -> line 6227
 *   +0x05f0 -> line 6224
 *   +0x05f4 -> line 6227
 *   +0x05f8 -> line 6224
 *   +0x05fc -> line 6223
 *   +0x0600 -> line 6227
 *   +0x0608 -> line 6223
 *   +0x0610 -> line 6224
 *   +0x0620 -> line 6223
 *   +0x0628 -> line 6224
 *   +0x0634 -> line 6227
 *   +0x0638 -> line 6224
 *   +0x0650 -> line 6225
 *   +0x0658 -> line 6226
 *   +0x065c -> line 6225
 *   +0x0660 -> line 6226
 *   +0x0680 -> line 6225
 *   +0x0684 -> line 6226
 *   +0x0688 -> line 6225
 *   +0x068c -> line 6226
 *   +0x06a4 -> line 6227
 *   +0x06ac -> line 6228
 *   +0x06c0 -> line 6234
 *   +0x06dc -> line 6235
 *   +0x06e4 -> line 6234
 *   +0x06f0 -> line 6236
 *   +0x06f4 -> line 6234
 *   +0x0700 -> line 6236
 *   +0x0704 -> line 6234
 *   +0x070c -> line 6235
 *   +0x0714 -> line 6234
 *   +0x0728 -> line 6236
 *   +0x072c -> line 6234
 *   +0x0734 -> line 6235
 *   +0x073c -> line 6236
 *   +0x0740 -> line 6235
 *   +0x0744 -> line 6236
 *   +0x0748 -> line 6234
 *   +0x074c -> line 6236
 *   +0x0750 -> line 6234
 *   +0x0754 -> line 6235
 *   +0x0758 -> line 6234
 *   +0x075c -> line 6235
 *   +0x0760 -> line 6234
 *   +0x0768 -> line 6235
 *   +0x0778 -> line 6234
 *   +0x0788 -> line 6235
 *   +0x079c -> line 6236
 *   +0x07a4 -> line 6237
 *   +0x07ac -> line 6238
 *   +0x07dc -> line 6239
 *   +0x07e8 -> line 6240
 *   +0x07f4 -> line 6242
 *   +0x0808 -> line 6243
 *   +0x081c -> line 6244
 *   +0x0830 -> line 6245
 *   +0x0844 -> line 6246
 *   +0x085c -> line 6247
 *   +0x086c -> line 6248
 *   +0x0874 -> line 6251
 *   +0x087c -> line 6253
 *   +0x0884 -> line 6254
 *   +0x088c -> line 6256
 *   +0x0894 -> line 6257
 *   +0x089c -> line 6258
 *   +0x091c -> line 6260
 *   +0x0960 -> line 6262
 *   +0x0968 -> line 6263
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessMedalionAfterEffect(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 6053–6123 */
/* addr: 0x002dd9d0  size: 868 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6053
 *   +0x0008 -> line 6056
 *   +0x0010 -> line 6057
 *   +0x0018 -> line 6059
 *   +0x0028 -> line 6062
 *   +0x002c -> line 6061
 *   +0x0034 -> line 6065
 *   +0x0038 -> line 6061
 *   +0x0040 -> line 6062
 *   +0x0044 -> line 6063
 *   +0x004c -> line 6064
 *   +0x0054 -> line 6065
 *   +0x005c -> line 6066
 *   +0x0068 -> line 6067
 *   +0x0074 -> line 6068
 *   +0x0080 -> line 6069
 *   +0x00b4 -> line 6070
 *   +0x00bc -> line 6071
 *   +0x00d0 -> line 6072
 *   +0x00d8 -> line 6073
 *   +0x010c -> line 6074
 *   +0x0118 -> line 6075
 *   +0x0124 -> line 6076
 *   +0x0130 -> line 6077
 *   +0x013c -> line 6078
 *   +0x0148 -> line 6082
 *   +0x014c -> line 6079
 *   +0x0154 -> line 6080
 *   +0x015c -> line 6081
 *   +0x0164 -> line 6082
 *   +0x016c -> line 6083
 *   +0x0178 -> line 6084
 *   +0x0184 -> line 6085
 *   +0x0190 -> line 6086
 *   +0x0198 -> line 6088
 *   +0x01a0 -> line 6089
 *   +0x01a8 -> line 6092
 *   +0x01b8 -> line 6100
 *   +0x01bc -> line 6093
 *   +0x01c0 -> line 6095
 *   +0x01c4 -> line 6104
 *   +0x01c8 -> line 6095
 *   +0x01cc -> line 6104
 *   +0x01d0 -> line 6095
 *   +0x01dc -> line 6097
 *   +0x01e4 -> line 6098
 *   +0x01ec -> line 6099
 *   +0x01f4 -> line 6100
 *   +0x01fc -> line 6101
 *   +0x0208 -> line 6102
 *   +0x0214 -> line 6103
 *   +0x0220 -> line 6104
 *   +0x0260 -> line 6108
 *   +0x0264 -> line 6105
 *   +0x0268 -> line 6108
 *   +0x0270 -> line 6105
 *   +0x0274 -> line 6106
 *   +0x0288 -> line 6107
 *   +0x0290 -> line 6108
 *   +0x02d0 -> line 6109
 *   +0x02dc -> line 6110
 *   +0x02e8 -> line 6111
 *   +0x02f4 -> line 6112
 *   +0x0300 -> line 6113
 *   +0x030c -> line 6114
 *   +0x0310 -> line 6117
 *   +0x0314 -> line 6114
 *   +0x0318 -> line 6115
 *   +0x0320 -> line 6116
 *   +0x0328 -> line 6117
 *   +0x0330 -> line 6118
 *   +0x033c -> line 6119
 *   +0x0348 -> line 6120
 *   +0x0354 -> line 6121
 *   +0x035c -> line 6123
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vAE_PushPop(unsigned int param)
{
    float* pStack;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5836–6040 */
/* addr: 0x002ddd40  size: 3112 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5836
 *   +0x0004 -> line 5851
 *   +0x0008 -> line 5836
 *   +0x0018 -> line 5848
 *   +0x001c -> line 5836
 *   +0x0030 -> line 5851
 *   +0x003c -> line 5853
 *   +0x0044 -> line 5854
 *   +0x004c -> line 5857
 *   +0x0050 -> line 5863
 *   +0x0054 -> line 5857
 *   +0x0058 -> line 5858
 *   +0x0060 -> line 5859
 *   +0x0068 -> line 5860
 *   +0x0070 -> line 5861
 *   +0x0074 -> line 5863
 *   +0x007c -> line 5875
 *   +0x0080 -> line 5865
 *   +0x0084 -> line 5875
 *   +0x0088 -> line 5865
 *   +0x008c -> line 5875
 *   +0x0098 -> line 5876
 *   +0x00a4 -> line 5878
 *   +0x00f8 -> line 5885
 *   +0x00fc -> line 5878
 *   +0x0100 -> line 5886
 *   +0x0108 -> line 5888
 *   +0x0110 -> line 5889
 *   +0x0118 -> line 5892
 *   +0x01d8 -> line 5893
 *   +0x01e0 -> line 5892
 *   +0x01f4 -> line 5893
 *   +0x01fc -> line 5892
 *   +0x0200 -> line 5893
 *   +0x0204 -> line 5892
 *   +0x0208 -> line 5893
 *   +0x0214 -> line 5894
 *   +0x0218 -> line 5893
 *   +0x0224 -> line 5894
 *   +0x0228 -> line 5892
 *   +0x022c -> line 5893
 *   +0x0230 -> line 5892
 *   +0x0234 -> line 5893
 *   +0x023c -> line 5892
 *   +0x0240 -> line 5893
 *   +0x0244 -> line 5892
 *   +0x0248 -> line 5895
 *   +0x024c -> line 5893
 *   +0x0260 -> line 5894
 *   +0x0264 -> line 5893
 *   +0x0268 -> line 5894
 *   +0x026c -> line 5893
 *   +0x0274 -> line 5895
 *   +0x0278 -> line 5894
 *   +0x027c -> line 5895
 *   +0x0280 -> line 5893
 *   +0x028c -> line 5896
 *   +0x0290 -> line 5894
 *   +0x0294 -> line 5896
 *   +0x0298 -> line 5894
 *   +0x029c -> line 5896
 *   +0x02a0 -> line 5894
 *   +0x02a8 -> line 5893
 *   +0x02b4 -> line 5896
 *   +0x02b8 -> line 5893
 *   +0x02bc -> line 5896
 *   +0x02c0 -> line 5894
 *   +0x02d0 -> line 5896
 *   +0x02d4 -> line 5894
 *   +0x02e8 -> line 5896
 *   +0x02f0 -> line 5897
 *   +0x02f8 -> line 5898
 *   +0x030c -> line 5899
 *   +0x0318 -> line 5902
 *   +0x031c -> line 5901
 *   +0x0338 -> line 5902
 *   +0x033c -> line 5901
 *   +0x0340 -> line 5899
 *   +0x0344 -> line 5901
 *   +0x0348 -> line 5902
 *   +0x0350 -> line 5901
 *   +0x036c -> line 5899
 *   +0x0370 -> line 5901
 *   +0x0374 -> line 5899
 *   +0x0378 -> line 5901
 *   +0x03c0 -> line 5902
 *   +0x03c8 -> line 5903
 *   +0x03d0 -> line 5904
 *   +0x0488 -> line 5905
 *   +0x048c -> line 5904
 *   +0x0494 -> line 5905
 *   +0x0498 -> line 5904
 *   +0x04a8 -> line 5905
 *   +0x04ac -> line 5904
 *   +0x04b0 -> line 5905
 *   +0x04cc -> line 5904
 *   +0x04e4 -> line 5905
 *   +0x0514 -> line 5907
 *   +0x0520 -> line 5905
 *   +0x0528 -> line 5907
 *   +0x0530 -> line 5909
 *   +0x0538 -> line 5911
 *   +0x0550 -> line 5912
 *   +0x0564 -> line 5913
 *   +0x0578 -> line 5914
 *   +0x0590 -> line 5916
 *   +0x05a4 -> line 5917
 *   +0x05b8 -> line 5918
 *   +0x05d0 -> line 5920
 *   +0x05d8 -> line 5922
 *   +0x05ec -> line 5925
 *   +0x0608 -> line 5926
 *   +0x0614 -> line 5925
 *   +0x064c -> line 5926
 *   +0x0654 -> line 5927
 *   +0x065c -> line 5929
 *   +0x0664 -> line 5930
 *   +0x0678 -> line 5931
 *   +0x0680 -> line 5932
 *   +0x0688 -> line 5933
 *   +0x06a0 -> line 5934
 *   +0x06f8 -> line 5935
 *   +0x0750 -> line 5937
 *   +0x0758 -> line 5940
 *   +0x0774 -> line 5942
 *   +0x0778 -> line 5940
 *   +0x07c4 -> line 5942
 *   +0x0870 -> line 5943
 *   +0x0878 -> line 5942
 *   +0x087c -> line 5943
 *   +0x0880 -> line 5942
 *   +0x0890 -> line 5943
 *   +0x0898 -> line 5942
 *   +0x089c -> line 5943
 *   +0x08ac -> line 5942
 *   +0x08b0 -> line 5944
 *   +0x08b4 -> line 5943
 *   +0x08bc -> line 5942
 *   +0x08c0 -> line 5943
 *   +0x08c4 -> line 5942
 *   +0x08c8 -> line 5943
 *   +0x08cc -> line 5942
 *   +0x08d4 -> line 5943
 *   +0x08e0 -> line 5944
 *   +0x08e4 -> line 5943
 *   +0x08ec -> line 5944
 *   +0x08f0 -> line 5943
 *   +0x08f4 -> line 5944
 *   +0x08f8 -> line 5946
 *   +0x08fc -> line 5943
 *   +0x0900 -> line 5946
 *   +0x0904 -> line 5943
 *   +0x0908 -> line 5944
 *   +0x090c -> line 5943
 *   +0x0910 -> line 5944
 *   +0x0914 -> line 5945
 *   +0x0918 -> line 5944
 *   +0x091c -> line 5945
 *   +0x0920 -> line 5944
 *   +0x0924 -> line 5945
 *   +0x0928 -> line 5943
 *   +0x092c -> line 5946
 *   +0x0930 -> line 5943
 *   +0x0934 -> line 5944
 *   +0x093c -> line 5946
 *   +0x0940 -> line 5944
 *   +0x0944 -> line 5946
 *   +0x0948 -> line 5944
 *   +0x0964 -> line 5946
 *   +0x0970 -> line 5947
 *   +0x0978 -> line 5948
 *   +0x097c -> line 5950
 *   +0x0980 -> line 5948
 *   +0x0990 -> line 5950
 *   +0x0998 -> line 5955
 *   +0x09b4 -> line 5957
 *   +0x09bc -> line 5959
 *   +0x09c8 -> line 5965
 *   +0x09cc -> line 5963
 *   +0x09d0 -> line 5965
 *   +0x09d4 -> line 5963
 *   +0x09d8 -> line 5965
 *   +0x09f4 -> line 5973
 *   +0x09f8 -> line 5976
 *   +0x09fc -> line 5974
 *   +0x0a00 -> line 5976
 *   +0x0a10 -> line 5978
 *   +0x0a14 -> line 5979
 *   +0x0a18 -> line 5980
 *   +0x0a1c -> line 5981
 *   +0x0a20 -> line 5982
 *   +0x0a24 -> line 5983
 *   +0x0a28 -> line 5986
 *   +0x0a30 -> line 5997
 *   +0x0a34 -> line 5986
 *   +0x0a38 -> line 5997
 *   +0x0a3c -> line 5994
 *   +0x0a40 -> line 5986
 *   +0x0a64 -> line 5987
 *   +0x0a68 -> line 5986
 *   +0x0a6c -> line 5987
 *   +0x0a70 -> line 5986
 *   +0x0a74 -> line 5987
 *   +0x0a80 -> line 5994
 *   +0x0a84 -> line 5991
 *   +0x0a8c -> line 5995
 *   +0x0a90 -> line 5994
 *   +0x0a94 -> line 5995
 *   +0x0a98 -> line 5989
 *   +0x0aa0 -> line 5990
 *   +0x0aa4 -> line 5993
 *   +0x0aa8 -> line 5990
 *   +0x0aac -> line 5993
 *   +0x0ab0 -> line 5998
 *   +0x0ab4 -> line 5999
 *   +0x0ab8 -> line 6000
 *   +0x0abc -> line 6001
 *   +0x0ac0 -> line 6002
 *   +0x0ac4 -> line 6003
 *   +0x0ac8 -> line 6004
 *   +0x0acc -> line 6005
 *   +0x0ad0 -> line 6006
 *   +0x0ad4 -> line 6007
 *   +0x0ad8 -> line 6008
 *   +0x0adc -> line 6009
 *   +0x0ae0 -> line 6010
 *   +0x0ae4 -> line 6011
 *   +0x0ae8 -> line 6012
 *   +0x0aec -> line 6013
 *   +0x0af0 -> line 6014
 *   +0x0af4 -> line 6015
 *   +0x0af8 -> line 6018
 *   +0x0b18 -> line 6019
 *   +0x0b24 -> line 6020
 *   +0x0b38 -> line 6021
 *   +0x0b4c -> line 6022
 *   +0x0b60 -> line 6023
 *   +0x0b74 -> line 6024
 *   +0x0b8c -> line 6025
 *   +0x0b9c -> line 6026
 *   +0x0bb4 -> line 6027
 *   +0x0bb8 -> line 6026
 *   +0x0bbc -> line 6028
 *   +0x0bd0 -> line 6030
 *   +0x0bd8 -> line 6036
 *   +0x0bec -> line 6037
 *   +0x0bf8 -> line 6039
 *   +0x0bfc -> line 6040
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vProcessWater2DEffect(void)
{
    float sin1;
    float cos1;
    float fSizeY;
    float fSizeX;
    float SY[4];
    float SX[4];
    float Pos4[4];
    float Pos3[4];
    float Pos2[4];
    float Pos1[4];
    float Pos0[4];
    Water2DEffect_* param0;
    unsigned char zTst;
    float* costable;
    float ZZ;
    float Y2;
    float X2;
    float Y1;
    float X1;
    float fADC;
    unsigned int i;
    float a16_fWorldMatrix[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5818–5820 */
/* addr: 0x002de970  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5818
 *   +0x0028 -> line 5820
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetMirrorAE_Blur(unsigned int bOnOff, float fVal)
{
    if (bOnOff)
        AE_MirrorFX |= 1;
    else
        AE_MirrorFX &= ~1;
    AE_Blur_M = fVal;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5808–5811 */
/* addr: 0x002de9a0  size: 52 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5808
 *   +0x0028 -> line 5809
 *   +0x002c -> line 5811
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetMirrorAE_WaterFx(unsigned int bOnOff, float fSpeed, float fAmp)
{
    if (bOnOff)
        AE_MirrorFX |= 8;
    else
        AE_MirrorFX &= ~8;
    AE_MirrorWaterFX_Speed = fSpeed;
    AE_MirrorWaterFX_Ampl = fAmp;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5795–5801 */
/* addr: 0x002de9e0  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5795
 *   +0x0028 -> line 5796
 *   +0x002c -> line 5800
 *   +0x0030 -> line 5796
 *   +0x0034 -> line 5797
 *   +0x003c -> line 5798
 *   +0x0044 -> line 5799
 *   +0x004c -> line 5800
 *   +0x0050 -> line 5801
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetMirrorAE_ColorCorrection(unsigned int bOnOff, float fPreContrast, float fR, float fG, float fB)
{
    if (bOnOff) AE_MirrorFX |= 4; else AE_MirrorFX &= ~4;
    AE_Bright_Cont_M[0] = fR;
    AE_Bright_Cont_M[1] = fG;
    AE_Bright_Cont_M[2] = fB;
    AE_Bright_Cont_M[3] = fPreContrast;
    AE_Bright_Cont_M[4] = 1.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5788–5788 */
/* addr: 0x002dea40  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5788
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetMirrorAE_NoFx(void)
{
    AE_MirrorFX = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5778–5779 */
/* addr: 0x002dea50  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5778
 *   +0x0014 -> line 5779
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_MotionBlur(unsigned int bOnOff, float fIntensity)
{
    if (bOnOff)
        GLI_g_MotionBlurIntensity = fIntensity;
    else
        GLI_g_MotionBlurIntensity = 0.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5769–5770 */
/* addr: 0x002dea70  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5769
 *   +0x0014 -> line 5770
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_WaterFX(unsigned int bOnOff)
{
    if (bOnOff)
        GLI_g_bFullScreenWaterEffect = 1;
    else
        GLI_g_bFullScreenWaterEffect = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5756–5761 */
/* addr: 0x002dea90  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5756
 *   +0x0014 -> line 5757
 *   +0x001c -> line 5758
 *   +0x0024 -> line 5759
 *   +0x002c -> line 5760
 *   +0x0030 -> line 5761
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_ColorCorrection(unsigned int bOnOff, float fPreContrast, float fR, float fG, float fB)
{
    if (bOnOff)
        GLI_g_AfterEffect = 6;
    else
        GLI_g_AfterEffect = 0;
    AE_Bright_Cont[0] = fR;
    AE_Bright_Cont[1] = fG;
    AE_Bright_Cont[2] = fB;
    AE_Bright_Cont[3] = fPreContrast;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5746–5748 */
/* addr: 0x002dead0  size: 28 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5746
 *   +0x0014 -> line 5748
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_ZoomBlur(unsigned int bOnOff, float fIntensity)
{
    if (bOnOff)
        GLI_g_AfterEffect = 2;
    else
        GLI_g_AfterEffect = 0;
    AE_ZoomBlurIntensity = fIntensity;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5733–5739 */
/* addr: 0x002deaf0  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5733
 *   +0x0014 -> line 5734
 *   +0x001c -> line 5735
 *   +0x0024 -> line 5736
 *   +0x002c -> line 5737
 *   +0x0034 -> line 5739
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_AutoGlow(unsigned int bOnOff, float fR, float fG, float fB, float fBrightness, float fDirection)
{
    if (bOnOff)
        GLI_g_AfterEffect = 8;
    else
        GLI_g_AfterEffect = 0;
    AE_Glow[0] = fR;
    AE_Glow[1] = fG;
    AE_Glow[2] = fB;
    AE_Glow[3] = fBrightness;
    AE_GlowDirection = fDirection;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5723–5728 */
/* addr: 0x002deb30  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5723
 *   +0x0014 -> line 5724
 *   +0x001c -> line 5725
 *   +0x0024 -> line 5726
 *   +0x002c -> line 5727
 *   +0x0030 -> line 5728
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_Glow(unsigned int bOnOff, float fR, float fG, float fB, float fBrightness)
{
    if (bOnOff)
        GLI_g_AfterEffect = 3;
    else
        GLI_g_AfterEffect = 0;
    AE_Glow[0] = fR;
    AE_Glow[1] = fG;
    AE_Glow[2] = fB;
    AE_Glow[3] = fBrightness;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5711–5715 */
/* addr: 0x002deb70  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5711
 *   +0x0014 -> line 5712
 *   +0x0030 -> line 5713
 *   +0x004c -> line 5715
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_CartoonEmboss(unsigned int bOnOff, float Blend)
{
    if (bOnOff) GLI_g_AfterEffect = 10; else GLI_g_AfterEffect = 0;
    if (Blend < 0.0f) Blend = 0.0f;
    if (!(Blend <= 1.0f)) Blend = 1.0f;
    GLI_g_CartoonBlendVal = Blend;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5701–5705 */
/* addr: 0x002debd0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5701
 *   +0x0014 -> line 5702
 *   +0x0018 -> line 5703
 *   +0x001c -> line 5705
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetAE_DepthBlur(unsigned int bOnOff, float fNear, float fFar, float fAlpha)
{
    if (bOnOff)
        GLI_g_AfterEffect = 1;
    else
        GLI_g_AfterEffect = 0;
    G_DEPTH_BLUR_DISTNEAR = fNear;
    G_DEPTH_BLUR_DISTFAR = fFar;
    G_DEPTH_BLUR_MAX_ALPHA = fAlpha;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5680–5685 */
/* addr: 0x002dec00  size: 24 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5680
 *   +0x0004 -> line 5681
 *   +0x0008 -> line 5682
 *   +0x000c -> line 5683
 *   +0x0010 -> line 5685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vReinitAfterEffects(void)
{
    GLI_g_AfterEffect = 0;
    AE_MirrorFX = 0;
    GLI_g_bFullScreenWaterEffect = 0;
    GLI_g_MotionBlurIntensity = 0.0f;
    GLI_g_CartoonBlendVal = 0.0f;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5526–5644 */
/* addr: 0x002dec20  size: 1076 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5526
 *   +0x0004 -> line 5529
 *   +0x0008 -> line 5526
 *   +0x000c -> line 5529
 *   +0x0010 -> line 5526
 *   +0x0014 -> line 5529
 *   +0x0018 -> line 5526
 *   +0x001c -> line 5529
 *   +0x0020 -> line 5526
 *   +0x0024 -> line 5529
 *   +0x0028 -> line 5526
 *   +0x002c -> line 5529
 *   +0x0078 -> line 5530
 *   +0x0080 -> line 5532
 *   +0x0094 -> line 5533
 *   +0x009c -> line 5534
 *   +0x00a4 -> line 5535
 *   +0x00ac -> line 5537
 *   +0x00b4 -> line 5538
 *   +0x00bc -> line 5539
 *   +0x00d4 -> line 5541
 *   +0x00f0 -> line 5543
 *   +0x0134 -> line 5544
 *   +0x013c -> line 5547
 *   +0x017c -> line 5550
 *   +0x0188 -> line 5551
 *   +0x0190 -> line 5553
 *   +0x01f8 -> line 5554
 *   +0x0238 -> line 5556
 *   +0x0240 -> line 5557
 *   +0x0248 -> line 5559
 *   +0x0264 -> line 5560
 *   +0x0284 -> line 5562
 *   +0x0298 -> line 5564
 *   +0x02a8 -> line 5566
 *   +0x02c4 -> line 5568
 *   +0x02cc -> line 5569
 *   +0x02d4 -> line 5572
 *   +0x02dc -> line 5574
 *   +0x02e4 -> line 5577
 *   +0x0300 -> line 5579
 *   +0x0308 -> line 5580
 *   +0x0310 -> line 5583
 *   +0x0318 -> line 5587
 *   +0x0324 -> line 5588
 *   +0x032c -> line 5590
 *   +0x0360 -> line 5593
 *   +0x037c -> line 5595
 *   +0x03c4 -> line 5596
 *   +0x03cc -> line 5599
 *   +0x0410 -> line 5602
 *   +0x0418 -> line 5644
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_Filter_AutoGlow(float r, float g, float b, float Brightness)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5483–5483 */
/* addr: 0x002df060  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_Filter_AutoGlowDown(float r, float g, float b, float Brightness)
{
    AE_Filter_AutoGlow(r, g, b, Brightness);
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5414–5476 */
/* addr: 0x002df070  size: 1312 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5414
 *   +0x0008 -> line 5416
 *   +0x000c -> line 5414
 *   +0x0024 -> line 5416
 *   +0x0074 -> line 5418
 *   +0x00c4 -> line 5419
 *   +0x00cc -> line 5421
 *   +0x00e0 -> line 5422
 *   +0x00e8 -> line 5423
 *   +0x00f0 -> line 5425
 *   +0x00f8 -> line 5426
 *   +0x0100 -> line 5427
 *   +0x0118 -> line 5429
 *   +0x015c -> line 5431
 *   +0x0164 -> line 5432
 *   +0x017c -> line 5433
 *   +0x0184 -> line 5435
 *   +0x018c -> line 5437
 *   +0x01a8 -> line 5440
 *   +0x01b0 -> line 5441
 *   +0x01c4 -> line 5442
 *   +0x01cc -> line 5441
 *   +0x01f4 -> line 5444
 *   +0x01f8 -> line 5442
 *   +0x01fc -> line 5441
 *   +0x0200 -> line 5442
 *   +0x0210 -> line 5441
 *   +0x0214 -> line 5445
 *   +0x021c -> line 5441
 *   +0x0220 -> line 5442
 *   +0x0224 -> line 5441
 *   +0x0228 -> line 5443
 *   +0x0230 -> line 5441
 *   +0x023c -> line 5445
 *   +0x0240 -> line 5441
 *   +0x0244 -> line 5442
 *   +0x0248 -> line 5443
 *   +0x024c -> line 5442
 *   +0x0250 -> line 5443
 *   +0x0254 -> line 5445
 *   +0x0258 -> line 5442
 *   +0x0264 -> line 5445
 *   +0x0268 -> line 5443
 *   +0x0278 -> line 5442
 *   +0x027c -> line 5443
 *   +0x0280 -> line 5442
 *   +0x0284 -> line 5446
 *   +0x0288 -> line 5442
 *   +0x029c -> line 5443
 *   +0x02a0 -> line 5442
 *   +0x02a4 -> line 5443
 *   +0x02a8 -> line 5442
 *   +0x02b8 -> line 5443
 *   +0x02bc -> line 5442
 *   +0x02c0 -> line 5443
 *   +0x02c4 -> line 5442
 *   +0x02c8 -> line 5443
 *   +0x02cc -> line 5442
 *   +0x02d0 -> line 5443
 *   +0x02f8 -> line 5444
 *   +0x0300 -> line 5445
 *   +0x0304 -> line 5444
 *   +0x0308 -> line 5445
 *   +0x0328 -> line 5444
 *   +0x032c -> line 5445
 *   +0x0330 -> line 5444
 *   +0x0334 -> line 5445
 *   +0x037c -> line 5446
 *   +0x0384 -> line 5449
 *   +0x03f0 -> line 5452
 *   +0x03f8 -> line 5453
 *   +0x0410 -> line 5454
 *   +0x041c -> line 5455
 *   +0x0430 -> line 5456
 *   +0x0440 -> line 5457
 *   +0x044c -> line 5458
 *   +0x045c -> line 5459
 *   +0x0470 -> line 5460
 *   +0x0478 -> line 5465
 *   +0x0480 -> line 5467
 *   +0x0488 -> line 5468
 *   +0x0490 -> line 5469
 *   +0x04a8 -> line 5473
 *   +0x04f8 -> line 5475
 *   +0x0500 -> line 5476
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_Filter_Glow(float r, float g, float b, float Brightness)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5370–5407 */
/* addr: 0x002df590  size: 656 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5370
 *   +0x0004 -> line 5375
 *   +0x0008 -> line 5370
 *   +0x000c -> line 5376
 *   +0x0010 -> line 5370
 *   +0x0018 -> line 5375
 *   +0x001c -> line 5370
 *   +0x0020 -> line 5376
 *   +0x0024 -> line 5370
 *   +0x0028 -> line 5387
 *   +0x0038 -> line 5376
 *   +0x003c -> line 5387
 *   +0x0064 -> line 5375
 *   +0x0068 -> line 5387
 *   +0x0080 -> line 5390
 *   +0x00e0 -> line 5392
 *   +0x00ec -> line 5395
 *   +0x014c -> line 5398
 *   +0x01ac -> line 5400
 *   +0x01b8 -> line 5403
 *   +0x0218 -> line 5406
 *   +0x0278 -> line 5407
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWINDOWEDNoOptWithDirectionPAL(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5330–5366 */
/* addr: 0x002df820  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5330
 *   +0x0004 -> line 5335
 *   +0x0008 -> line 5330
 *   +0x000c -> line 5336
 *   +0x0010 -> line 5330
 *   +0x0018 -> line 5335
 *   +0x001c -> line 5330
 *   +0x0020 -> line 5336
 *   +0x0024 -> line 5330
 *   +0x0028 -> line 5346
 *   +0x0038 -> line 5336
 *   +0x003c -> line 5346
 *   +0x0064 -> line 5335
 *   +0x0068 -> line 5346
 *   +0x0080 -> line 5349
 *   +0x00dc -> line 5351
 *   +0x00e8 -> line 5354
 *   +0x0148 -> line 5357
 *   +0x01a4 -> line 5359
 *   +0x01b0 -> line 5362
 *   +0x0210 -> line 5365
 *   +0x026c -> line 5366
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWINDOWEDNoOptWithDirection(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5291–5326 */
/* addr: 0x002dfab0  size: 656 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5291
 *   +0x0004 -> line 5296
 *   +0x0008 -> line 5291
 *   +0x000c -> line 5297
 *   +0x0010 -> line 5291
 *   +0x0018 -> line 5296
 *   +0x001c -> line 5291
 *   +0x0020 -> line 5297
 *   +0x0024 -> line 5291
 *   +0x0028 -> line 5305
 *   +0x0038 -> line 5297
 *   +0x003c -> line 5305
 *   +0x0064 -> line 5296
 *   +0x0068 -> line 5305
 *   +0x0080 -> line 5308
 *   +0x00e0 -> line 5310
 *   +0x00ec -> line 5313
 *   +0x014c -> line 5316
 *   +0x01ac -> line 5318
 *   +0x01b8 -> line 5321
 *   +0x0218 -> line 5324
 *   +0x0278 -> line 5326
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWINDOWEDNoOptPAL(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5253–5288 */
/* addr: 0x002dfd40  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5253
 *   +0x0004 -> line 5258
 *   +0x0008 -> line 5253
 *   +0x000c -> line 5259
 *   +0x0010 -> line 5253
 *   +0x0018 -> line 5258
 *   +0x001c -> line 5253
 *   +0x0020 -> line 5259
 *   +0x0024 -> line 5253
 *   +0x0028 -> line 5267
 *   +0x0038 -> line 5259
 *   +0x003c -> line 5267
 *   +0x0064 -> line 5258
 *   +0x0068 -> line 5267
 *   +0x0080 -> line 5270
 *   +0x00dc -> line 5272
 *   +0x00e8 -> line 5275
 *   +0x0148 -> line 5278
 *   +0x01a4 -> line 5280
 *   +0x01b0 -> line 5283
 *   +0x0210 -> line 5286
 *   +0x026c -> line 5288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWINDOWEDNoOpt(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5215–5250 */
/* addr: 0x002dffd0  size: 644 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5215
 *   +0x0004 -> line 5220
 *   +0x0008 -> line 5215
 *   +0x000c -> line 5221
 *   +0x0010 -> line 5215
 *   +0x0018 -> line 5220
 *   +0x001c -> line 5215
 *   +0x0020 -> line 5221
 *   +0x0024 -> line 5215
 *   +0x0028 -> line 5229
 *   +0x0038 -> line 5221
 *   +0x003c -> line 5229
 *   +0x0064 -> line 5220
 *   +0x0068 -> line 5229
 *   +0x0080 -> line 5232
 *   +0x00dc -> line 5234
 *   +0x00e8 -> line 5237
 *   +0x0148 -> line 5240
 *   +0x01a4 -> line 5242
 *   +0x01b0 -> line 5245
 *   +0x0210 -> line 5248
 *   +0x026c -> line 5250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWINDOWED(int Counter)
{
    float v2;
    float u2;
    float v1;
    float u1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5143–5143 */
/* addr: 0x002e0260  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5143
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vProcessRedEnviromentEffect(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 5056–5056 */
/* addr: 0x002e0270  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5056
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void WAT_vTest(float (*pPos)[4])
{
    unsigned char zTst;
    int y2;
    int x2;
    unsigned int* pShiftAnd4;
    unsigned int* pShiftAnd3;
    unsigned int* pShiftAnd2;
    unsigned int* pShiftAnd;
    int y;
    int x;
    char* pCur;
    char* pOld;
    int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3972–4430 */
/* addr: 0x002e0280  size: 5424 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3972
 *   +0x0004 -> line 3991
 *   +0x0008 -> line 3972
 *   +0x001c -> line 3984
 *   +0x0020 -> line 3972
 *   +0x0024 -> line 3987
 *   +0x0028 -> line 3972
 *   +0x004c -> line 3991
 *   +0x0050 -> line 3997
 *   +0x0054 -> line 3992
 *   +0x005c -> line 3993
 *   +0x0064 -> line 3994
 *   +0x006c -> line 3995
 *   +0x0074 -> line 3997
 *   +0x007c -> line 4014
 *   +0x0080 -> line 4001
 *   +0x0084 -> line 4014
 *   +0x0088 -> line 4001
 *   +0x008c -> line 4014
 *   +0x0090 -> line 4005
 *   +0x0094 -> line 4014
 *   +0x0098 -> line 4001
 *   +0x009c -> line 4016
 *   +0x00a0 -> line 4005
 *   +0x00a4 -> line 4016
 *   +0x00a8 -> line 4004
 *   +0x00ac -> line 4001
 *   +0x00b0 -> line 3999
 *   +0x00b4 -> line 4001
 *   +0x00b8 -> line 4007
 *   +0x00bc -> line 4001
 *   +0x00c4 -> line 4005
 *   +0x00cc -> line 4004
 *   +0x00d0 -> line 4016
 *   +0x00d4 -> line 4017
 *   +0x00d8 -> line 4016
 *   +0x00dc -> line 4017
 *   +0x00e0 -> line 4016
 *   +0x00e4 -> line 4017
 *   +0x00ec -> line 4019
 *   +0x0104 -> line 4020
 *   +0x010c -> line 4023
 *   +0x0128 -> line 4030
 *   +0x013c -> line 4031
 *   +0x0148 -> line 4034
 *   +0x015c -> line 4040
 *   +0x0160 -> line 4034
 *   +0x0164 -> line 4035
 *   +0x016c -> line 4040
 *   +0x0170 -> line 4035
 *   +0x0174 -> line 4040
 *   +0x0178 -> line 4035
 *   +0x0180 -> line 4040
 *   +0x0184 -> line 4034
 *   +0x018c -> line 4036
 *   +0x0194 -> line 4035
 *   +0x0198 -> line 4037
 *   +0x01a0 -> line 4036
 *   +0x01a4 -> line 4035
 *   +0x01a8 -> line 4037
 *   +0x01ac -> line 4036
 *   +0x01b0 -> line 4037
 *   +0x01b4 -> line 4034
 *   +0x01b8 -> line 4035
 *   +0x01bc -> line 4036
 *   +0x01c0 -> line 4037
 *   +0x01c4 -> line 4040
 *   +0x0208 -> line 4047
 *   +0x020c -> line 4040
 *   +0x0210 -> line 4048
 *   +0x0218 -> line 4051
 *   +0x0228 -> line 4053
 *   +0x0230 -> line 4054
 *   +0x0238 -> line 4056
 *   +0x02f8 -> line 4057
 *   +0x0300 -> line 4056
 *   +0x0314 -> line 4057
 *   +0x031c -> line 4056
 *   +0x0320 -> line 4057
 *   +0x0324 -> line 4056
 *   +0x0328 -> line 4057
 *   +0x0334 -> line 4058
 *   +0x0338 -> line 4057
 *   +0x0344 -> line 4058
 *   +0x0348 -> line 4056
 *   +0x034c -> line 4057
 *   +0x0350 -> line 4056
 *   +0x0354 -> line 4057
 *   +0x035c -> line 4056
 *   +0x0360 -> line 4057
 *   +0x0364 -> line 4056
 *   +0x0368 -> line 4059
 *   +0x036c -> line 4057
 *   +0x0380 -> line 4058
 *   +0x0384 -> line 4057
 *   +0x0388 -> line 4058
 *   +0x038c -> line 4057
 *   +0x0394 -> line 4059
 *   +0x0398 -> line 4058
 *   +0x039c -> line 4059
 *   +0x03a0 -> line 4057
 *   +0x03ac -> line 4060
 *   +0x03b0 -> line 4058
 *   +0x03b4 -> line 4060
 *   +0x03b8 -> line 4058
 *   +0x03bc -> line 4060
 *   +0x03c0 -> line 4058
 *   +0x03d0 -> line 4057
 *   +0x03dc -> line 4060
 *   +0x03e0 -> line 4057
 *   +0x03e4 -> line 4060
 *   +0x03e8 -> line 4058
 *   +0x03ec -> line 4060
 *   +0x03f0 -> line 4058
 *   +0x0408 -> line 4060
 *   +0x0410 -> line 4061
 *   +0x0418 -> line 4062
 *   +0x042c -> line 4063
 *   +0x0438 -> line 4066
 *   +0x043c -> line 4065
 *   +0x0458 -> line 4066
 *   +0x045c -> line 4065
 *   +0x0460 -> line 4063
 *   +0x0464 -> line 4065
 *   +0x0468 -> line 4066
 *   +0x0470 -> line 4065
 *   +0x048c -> line 4063
 *   +0x0490 -> line 4065
 *   +0x0494 -> line 4063
 *   +0x0498 -> line 4065
 *   +0x04e0 -> line 4066
 *   +0x04e8 -> line 4067
 *   +0x04f0 -> line 4068
 *   +0x05b0 -> line 4071
 *   +0x05b4 -> line 4068
 *   +0x05d8 -> line 4071
 *   +0x05e0 -> line 4073
 *   +0x05f8 -> line 4074
 *   +0x060c -> line 4075
 *   +0x0620 -> line 4076
 *   +0x0638 -> line 4078
 *   +0x064c -> line 4079
 *   +0x0660 -> line 4080
 *   +0x0678 -> line 4082
 *   +0x0680 -> line 4084
 *   +0x069c -> line 4085
 *   +0x06a0 -> line 4084
 *   +0x06b4 -> line 4085
 *   +0x06b8 -> line 4084
 *   +0x06c8 -> line 4085
 *   +0x06cc -> line 4084
 *   +0x06d0 -> line 4085
 *   +0x06d4 -> line 4084
 *   +0x06dc -> line 4085
 *   +0x06e0 -> line 4084
 *   +0x06e4 -> line 4085
 *   +0x06e8 -> line 4084
 *   +0x06fc -> line 4085
 *   +0x0700 -> line 4084
 *   +0x0714 -> line 4085
 *   +0x0718 -> line 4084
 *   +0x071c -> line 4085
 *   +0x0720 -> line 4084
 *   +0x0724 -> line 4085
 *   +0x073c -> line 4084
 *   +0x074c -> line 4085
 *   +0x0760 -> line 4089
 *   +0x0768 -> line 4090
 *   +0x077c -> line 4091
 *   +0x0784 -> line 4092
 *   +0x078c -> line 4093
 *   +0x07a4 -> line 4094
 *   +0x07e4 -> line 4096
 *   +0x07f8 -> line 4097
 *   +0x0800 -> line 4098
 *   +0x0808 -> line 4099
 *   +0x0820 -> line 4101
 *   +0x0828 -> line 4103
 *   +0x0830 -> line 4105
 *   +0x083c -> line 4146
 *   +0x0840 -> line 4117
 *   +0x0844 -> line 4150
 *   +0x0848 -> line 4146
 *   +0x084c -> line 4105
 *   +0x0858 -> line 4117
 *   +0x085c -> line 4110
 *   +0x0860 -> line 4115
 *   +0x0864 -> line 4116
 *   +0x0868 -> line 4105
 *   +0x086c -> line 4126
 *   +0x0870 -> line 4105
 *   +0x0874 -> line 4150
 *   +0x0878 -> line 4105
 *   +0x087c -> line 4150
 *   +0x0880 -> line 4105
 *   +0x0884 -> line 4150
 *   +0x08a4 -> line 4105
 *   +0x08c0 -> line 4117
 *   +0x08c8 -> line 4116
 *   +0x08cc -> line 4140
 *   +0x08d0 -> line 4126
 *   +0x08d4 -> line 4141
 *   +0x08d8 -> line 4110
 *   +0x08dc -> line 4136
 *   +0x08e0 -> line 4111
 *   +0x08e4 -> line 4135
 *   +0x08e8 -> line 4112
 *   +0x08ec -> line 4145
 *   +0x08f0 -> line 4113
 *   +0x08f4 -> line 4117
 *   +0x08f8 -> line 4115
 *   +0x08fc -> line 4117
 *   +0x0900 -> line 4121
 *   +0x0904 -> line 4140
 *   +0x0908 -> line 4118
 *   +0x090c -> line 4146
 *   +0x0910 -> line 4120
 *   +0x0914 -> line 4146
 *   +0x0918 -> line 4123
 *   +0x091c -> line 4125
 *   +0x0920 -> line 4127
 *   +0x0924 -> line 4128
 *   +0x0928 -> line 4130
 *   +0x092c -> line 4117
 *   +0x0930 -> line 4131
 *   +0x0934 -> line 4132
 *   +0x0938 -> line 4133
 *   +0x093c -> line 4137
 *   +0x0940 -> line 4136
 *   +0x0944 -> line 4138
 *   +0x0948 -> line 4146
 *   +0x094c -> line 4142
 *   +0x0950 -> line 4143
 *   +0x0954 -> line 4147
 *   +0x0958 -> line 4148
 *   +0x095c -> line 4117
 *   +0x0960 -> line 4146
 *   +0x0964 -> line 4141
 *   +0x0968 -> line 4122
 *   +0x096c -> line 4135
 *   +0x0970 -> line 4145
 *   +0x0974 -> line 4117
 *   +0x0978 -> line 4141
 *   +0x097c -> line 4151
 *   +0x0980 -> line 4152
 *   +0x0984 -> line 4153
 *   +0x0988 -> line 4154
 *   +0x098c -> line 4155
 *   +0x0990 -> line 4156
 *   +0x0994 -> line 4157
 *   +0x0998 -> line 4158
 *   +0x099c -> line 4159
 *   +0x09a0 -> line 4160
 *   +0x09a4 -> line 4161
 *   +0x09a8 -> line 4162
 *   +0x09ac -> line 4163
 *   +0x09b0 -> line 4164
 *   +0x09b4 -> line 4165
 *   +0x09b8 -> line 4166
 *   +0x09bc -> line 4169
 *   +0x09c0 -> line 4170
 *   +0x09c4 -> line 4169
 *   +0x09c8 -> line 4171
 *   +0x09cc -> line 4173
 *   +0x09d0 -> line 4174
 *   +0x09d4 -> line 4175
 *   +0x09d8 -> line 4181
 *   +0x09e0 -> line 4169
 *   +0x09e8 -> line 4170
 *   +0x09f4 -> line 4171
 *   +0x0a00 -> line 4173
 *   +0x0a08 -> line 4174
 *   +0x0a10 -> line 4175
 *   +0x0a14 -> line 4181
 *   +0x0a1c -> line 4187
 *   +0x0a20 -> line 4185
 *   +0x0a24 -> line 4187
 *   +0x0a28 -> line 4185
 *   +0x0a2c -> line 4187
 *   +0x0a48 -> line 4196
 *   +0x0a4c -> line 4199
 *   +0x0a50 -> line 4197
 *   +0x0a54 -> line 4199
 *   +0x0a78 -> line 4201
 *   +0x0a7c -> line 4202
 *   +0x0a80 -> line 4203
 *   +0x0a84 -> line 4204
 *   +0x0a88 -> line 4205
 *   +0x0a8c -> line 4206
 *   +0x0a90 -> line 4207
 *   +0x0a94 -> line 4208
 *   +0x0a98 -> line 4209
 *   +0x0a9c -> line 4210
 *   +0x0aa0 -> line 4211
 *   +0x0aa4 -> line 4212
 *   +0x0aa8 -> line 4213
 *   +0x0aac -> line 4214
 *   +0x0ab0 -> line 4215
 *   +0x0ab4 -> line 4220
 *   +0x0abc -> line 4224
 *   +0x0ac0 -> line 4220
 *   +0x0ac4 -> line 4225
 *   +0x0ac8 -> line 4228
 *   +0x0ad0 -> line 4220
 *   +0x0ad4 -> line 4225
 *   +0x0ad8 -> line 4220
 *   +0x0adc -> line 4229
 *   +0x0ae4 -> line 4231
 *   +0x0aec -> line 4220
 *   +0x0b08 -> line 4221
 *   +0x0b0c -> line 4220
 *   +0x0b10 -> line 4221
 *   +0x0b14 -> line 4220
 *   +0x0b18 -> line 4221
 *   +0x0b24 -> line 4223
 *   +0x0b2c -> line 4224
 *   +0x0b34 -> line 4225
 *   +0x0b38 -> line 4227
 *   +0x0b3c -> line 4225
 *   +0x0b40 -> line 4228
 *   +0x0b44 -> line 4227
 *   +0x0b48 -> line 4228
 *   +0x0b4c -> line 4229
 *   +0x0b54 -> line 4232
 *   +0x0b58 -> line 4233
 *   +0x0b5c -> line 4234
 *   +0x0b60 -> line 4235
 *   +0x0b64 -> line 4236
 *   +0x0b68 -> line 4237
 *   +0x0b6c -> line 4238
 *   +0x0b70 -> line 4239
 *   +0x0b74 -> line 4240
 *   +0x0b78 -> line 4241
 *   +0x0b7c -> line 4242
 *   +0x0b80 -> line 4243
 *   +0x0b84 -> line 4244
 *   +0x0b88 -> line 4245
 *   +0x0b8c -> line 4246
 *   +0x0b90 -> line 4247
 *   +0x0b94 -> line 4248
 *   +0x0b98 -> line 4249
 *   +0x0b9c -> line 4250
 *   +0x0ba0 -> line 4251
 *   +0x0ba4 -> line 4252
 *   +0x0ba8 -> line 4253
 *   +0x0bac -> line 4254
 *   +0x0bb0 -> line 4255
 *   +0x0bb4 -> line 4256
 *   +0x0bb8 -> line 4257
 *   +0x0bbc -> line 4260
 *   +0x0bcc -> line 4262
 *   +0x0bd8 -> line 4263
 *   +0x0bdc -> line 4264
 *   +0x0be0 -> line 4265
 *   +0x0be4 -> line 4267
 *   +0x0be8 -> line 4268
 *   +0x0bec -> line 4269
 *   +0x0bf0 -> line 4270
 *   +0x0bf4 -> line 4271
 *   +0x0bf8 -> line 4272
 *   +0x0bfc -> line 4273
 *   +0x0c00 -> line 4274
 *   +0x0c04 -> line 4275
 *   +0x0c08 -> line 4276
 *   +0x0c0c -> line 4278
 *   +0x0c10 -> line 4279
 *   +0x0c14 -> line 4280
 *   +0x0c18 -> line 4281
 *   +0x0c1c -> line 4282
 *   +0x0c20 -> line 4283
 *   +0x0c24 -> line 4284
 *   +0x0c28 -> line 4287
 *   +0x0c2c -> line 4288
 *   +0x0c30 -> line 4289
 *   +0x0c34 -> line 4290
 *   +0x0c38 -> line 4293
 *   +0x0c58 -> line 4302
 *   +0x0c64 -> line 4304
 *   +0x0c6c -> line 4302
 *   +0x0c74 -> line 4304
 *   +0x0c90 -> line 4307
 *   +0x0cb0 -> line 4308
 *   +0x0cd0 -> line 4310
 *   +0x0cd8 -> line 4324
 *   +0x0cdc -> line 4310
 *   +0x0ce0 -> line 4324
 *   +0x0ce4 -> line 4310
 *   +0x0ce8 -> line 4324
 *   +0x0cf8 -> line 4310
 *   +0x0d00 -> line 4313
 *   +0x0d08 -> line 4314
 *   +0x0d0c -> line 4316
 *   +0x0d14 -> line 4317
 *   +0x0d1c -> line 4318
 *   +0x0d20 -> line 4320
 *   +0x0d24 -> line 4318
 *   +0x0d28 -> line 4320
 *   +0x0d2c -> line 4321
 *   +0x0d38 -> line 4322
 *   +0x0d40 -> line 4325
 *   +0x0d44 -> line 4326
 *   +0x0d48 -> line 4327
 *   +0x0d4c -> line 4328
 *   +0x0d50 -> line 4329
 *   +0x0d54 -> line 4330
 *   +0x0d58 -> line 4331
 *   +0x0d5c -> line 4332
 *   +0x0d60 -> line 4333
 *   +0x0d64 -> line 4334
 *   +0x0d68 -> line 4335
 *   +0x0d6c -> line 4336
 *   +0x0d70 -> line 4337
 *   +0x0d74 -> line 4338
 *   +0x0d78 -> line 4339
 *   +0x0d7c -> line 4340
 *   +0x0d80 -> line 4341
 *   +0x0d84 -> line 4342
 *   +0x0d88 -> line 4343
 *   +0x0d8c -> line 4344
 *   +0x0d90 -> line 4345
 *   +0x0d94 -> line 4346
 *   +0x0d98 -> line 4347
 *   +0x0d9c -> line 4348
 *   +0x0da0 -> line 4349
 *   +0x0da4 -> line 4350
 *   +0x0da8 -> line 4353
 *   +0x0db8 -> line 4355
 *   +0x0dbc -> line 4357
 *   +0x0dc4 -> line 4355
 *   +0x0dc8 -> line 4357
 *   +0x0de0 -> line 4355
 *   +0x0df4 -> line 4357
 *   +0x0dfc -> line 4358
 *   +0x0e2c -> line 4359
 *   +0x0e5c -> line 4360
 *   +0x0e8c -> line 4361
 *   +0x0e98 -> line 4366
 *   +0x0e9c -> line 4364
 *   +0x0ea0 -> line 4366
 *   +0x0ea4 -> line 4364
 *   +0x0ea8 -> line 4366
 *   +0x0ec0 -> line 4364
 *   +0x0ed4 -> line 4366
 *   +0x0edc -> line 4367
 *   +0x0f0c -> line 4368
 *   +0x0f3c -> line 4369
 *   +0x0f6c -> line 4374
 *   +0x0f70 -> line 4369
 *   +0x0f74 -> line 4375
 *   +0x0f88 -> line 4377
 *   +0x0fc4 -> line 4379
 *   +0x0fcc -> line 4381
 *   +0x0fd8 -> line 4383
 *   +0x0fe0 -> line 4385
 *   +0x0ffc -> line 4386
 *   +0x1008 -> line 4385
 *   +0x1040 -> line 4386
 *   +0x1048 -> line 4387
 *   +0x1050 -> line 4391
 *   +0x1058 -> line 4392
 *   +0x106c -> line 4393
 *   +0x1074 -> line 4394
 *   +0x107c -> line 4395
 *   +0x1094 -> line 4396
 *   +0x10ec -> line 4397
 *   +0x1144 -> line 4400
 *   +0x114c -> line 4402
 *   +0x1160 -> line 4403
 *   +0x116c -> line 4405
 *   +0x1170 -> line 4406
 *   +0x1178 -> line 4408
 *   +0x1190 -> line 4409
 *   +0x1194 -> line 4408
 *   +0x11c0 -> line 4409
 *   +0x11c4 -> line 4408
 *   +0x11c8 -> line 4409
 *   +0x11cc -> line 4408
 *   +0x11d0 -> line 4409
 *   +0x11f4 -> line 4408
 *   +0x11f8 -> line 4409
 *   +0x11fc -> line 4408
 *   +0x1200 -> line 4409
 *   +0x1204 -> line 4408
 *   +0x121c -> line 4409
 *   +0x1220 -> line 4408
 *   +0x1224 -> line 4409
 *   +0x1228 -> line 4408
 *   +0x122c -> line 4409
 *   +0x1230 -> line 4408
 *   +0x1234 -> line 4409
 *   +0x1248 -> line 4408
 *   +0x124c -> line 4409
 *   +0x1250 -> line 4408
 *   +0x1254 -> line 4409
 *   +0x12b4 -> line 4410
 *   +0x12b8 -> line 4409
 *   +0x12dc -> line 4410
 *   +0x12e4 -> line 4411
 *   +0x12ec -> line 4412
 *   +0x12f4 -> line 4414
 *   +0x1308 -> line 4416
 *   +0x1334 -> line 4417
 *   +0x1360 -> line 4418
 *   +0x138c -> line 4420
 *   +0x1398 -> line 4421
 *   +0x13a8 -> line 4422
 *   +0x13b0 -> line 4421
 *   +0x13b4 -> line 4420
 *   +0x13b8 -> line 4421
 *   +0x13d8 -> line 4422
 *   +0x13dc -> line 4421
 *   +0x13e0 -> line 4422
 *   +0x13e4 -> line 4421
 *   +0x13e8 -> line 4422
 *   +0x13fc -> line 4423
 *   +0x1400 -> line 4420
 *   +0x1408 -> line 4421
 *   +0x1420 -> line 4422
 *   +0x143c -> line 4423
 *   +0x1440 -> line 4422
 *   +0x144c -> line 4423
 *   +0x1450 -> line 4422
 *   +0x1454 -> line 4423
 *   +0x1458 -> line 4422
 *   +0x145c -> line 4423
 *   +0x1468 -> line 4424
 *   +0x1488 -> line 4425
 *   +0x148c -> line 4424
 *   +0x14d0 -> line 4425
 *   +0x14d8 -> line 4427
 *   +0x14e8 -> line 4429
 *   +0x14ec -> line 4430
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vProcessWater2DEffectOLD(void)
{
    unsigned char zTst;
    float fZVal;
    float ratio;
    float sin1;
    float cos1;
    float fSizeY;
    float fSizeX;
    float SY[4];
    float SX[4];
    float Pos4u[4];
    float Pos3u[4];
    float Pos2u[4];
    float Pos1u[4];
    float Pos0u[4];
    float Pos4[4];
    float Pos3[4];
    float Pos2[4];
    float Pos1[4];
    float Pos0[4];
    Water2DEffect_* p;
    float v2DAdd[4];
    float v2DMul[4];
    float UvMul[4];
    float Mulu1[4];
    float Addu1[4];
    float Add2[4];
    float Mul1[4];
    float Add1[4];
    float* costable;
    float ZZ;
    float Y2;
    float X2;
    float Y1;
    float X1;
    float fADC;
    unsigned int ADC;
    unsigned int i;
    unsigned int NbTri;
    float (*pC)[4];
    float (*pV)[4];
    float a16_fWorldMatrix[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3807–3901 */
/* addr: 0x002e17b0  size: 2072 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3807
 *   +0x004c -> line 3824
 *   +0x0050 -> line 3825
 *   +0x0054 -> line 3826
 *   +0x0058 -> line 3827
 *   +0x005c -> line 3828
 *   +0x0060 -> line 3829
 *   +0x0064 -> line 3830
 *   +0x0068 -> line 3831
 *   +0x006c -> line 3832
 *   +0x0070 -> line 3837
 *   +0x0078 -> line 3839
 *   +0x0090 -> line 3840
 *   +0x0098 -> line 3841
 *   +0x00a4 -> line 3845
 *   +0x00ac -> line 3848
 *   +0x00b4 -> line 3850
 *   +0x00c4 -> line 3851
 *   +0x00cc -> line 3852
 *   +0x00d4 -> line 3853
 *   +0x00d8 -> line 3855
 *   +0x00e0 -> line 3858
 *   +0x0160 -> line 3859
 *   +0x01d4 -> line 3860
 *   +0x01ec -> line 3861
 *   +0x01f4 -> line 3862
 *   +0x01fc -> line 3865
 *   +0x027c -> line 3866
 *   +0x02f0 -> line 3867
 *   +0x0308 -> line 3868
 *   +0x0310 -> line 3872
 *   +0x0390 -> line 3873
 *   +0x0404 -> line 3874
 *   +0x041c -> line 3876
 *   +0x0424 -> line 3877
 *   +0x0430 -> line 3879
 *   +0x0438 -> line 3881
 *   +0x04b4 -> line 3882
 *   +0x0528 -> line 3883
 *   +0x053c -> line 3884
 *   +0x0568 -> line 3885
 *   +0x0570 -> line 3886
 *   +0x0578 -> line 3888
 *   +0x05f8 -> line 3889
 *   +0x066c -> line 3890
 *   +0x0684 -> line 3891
 *   +0x06b0 -> line 3892
 *   +0x06b8 -> line 3895
 *   +0x0734 -> line 3896
 *   +0x07a8 -> line 3897
 *   +0x07c4 -> line 3898
 *   +0x07f0 -> line 3901
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_Water2D_DisplayTriangle(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3612–3744 */
/* addr: 0x002e1fd0  size: 364 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3612
 *   +0x0008 -> line 3615
 *   +0x0014 -> line 3616
 *   +0x0018 -> line 3617
 *   +0x001c -> line 3618
 *   +0x0020 -> line 3619
 *   +0x0024 -> line 3620
 *   +0x0028 -> line 3621
 *   +0x002c -> line 3622
 *   +0x0030 -> line 3623
 *   +0x0034 -> line 3625
 *   +0x0038 -> line 3626
 *   +0x003c -> line 3627
 *   +0x0040 -> line 3628
 *   +0x0044 -> line 3630
 *   +0x0048 -> line 3631
 *   +0x004c -> line 3633
 *   +0x0050 -> line 3634
 *   +0x0054 -> line 3635
 *   +0x0058 -> line 3636
 *   +0x005c -> line 3638
 *   +0x0060 -> line 3640
 *   +0x0064 -> line 3641
 *   +0x0068 -> line 3642
 *   +0x006c -> line 3643
 *   +0x0070 -> line 3645
 *   +0x0074 -> line 3646
 *   +0x0078 -> line 3647
 *   +0x007c -> line 3648
 *   +0x0080 -> line 3649
 *   +0x0084 -> line 3650
 *   +0x0088 -> line 3652
 *   +0x008c -> line 3653
 *   +0x0090 -> line 3654
 *   +0x0094 -> line 3655
 *   +0x0098 -> line 3656
 *   +0x009c -> line 3657
 *   +0x00a0 -> line 3658
 *   +0x00a4 -> line 3659
 *   +0x00a8 -> line 3663
 *   +0x00b4 -> line 3664
 *   +0x00b8 -> line 3665
 *   +0x00bc -> line 3666
 *   +0x00c0 -> line 3667
 *   +0x00c4 -> line 3668
 *   +0x00c8 -> line 3669
 *   +0x00cc -> line 3670
 *   +0x00d0 -> line 3671
 *   +0x00d4 -> line 3673
 *   +0x00d8 -> line 3674
 *   +0x00dc -> line 3675
 *   +0x00e0 -> line 3676
 *   +0x00e4 -> line 3678
 *   +0x00e8 -> line 3679
 *   +0x00ec -> line 3681
 *   +0x00f0 -> line 3682
 *   +0x00f4 -> line 3683
 *   +0x00f8 -> line 3685
 *   +0x00fc -> line 3687
 *   +0x0100 -> line 3688
 *   +0x0104 -> line 3689
 *   +0x0108 -> line 3690
 *   +0x010c -> line 3692
 *   +0x0110 -> line 3693
 *   +0x0114 -> line 3694
 *   +0x0118 -> line 3695
 *   +0x011c -> line 3696
 *   +0x0120 -> line 3698
 *   +0x0124 -> line 3699
 *   +0x0128 -> line 3700
 *   +0x012c -> line 3701
 *   +0x0130 -> line 3702
 *   +0x0134 -> line 3703
 *   +0x0138 -> line 3704
 *   +0x013c -> line 3743
 *   +0x0160 -> line 3744
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_Water2D_DisplayNearClippedTriangle(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float Pos2D2u[4];
    float Pos2D1u[4];
    float Pos2D0u[4];
    float Pos2D2[4];
    float Pos2D1[4];
    float Pos2D0[4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3475–3606 */
/* addr: 0x002e2140  size: 2104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3475
 *   +0x0040 -> line 3485
 *   +0x0044 -> line 3475
 *   +0x0048 -> line 3485
 *   +0x005c -> line 3486
 *   +0x006c -> line 3487
 *   +0x007c -> line 3489
 *   +0x0080 -> line 3491
 *   +0x0084 -> line 3489
 *   +0x0088 -> line 3491
 *   +0x0090 -> line 3545
 *   +0x0098 -> line 3547
 *   +0x00c0 -> line 3548
 *   +0x00c8 -> line 3549
 *   +0x00d0 -> line 3552
 *   +0x00d8 -> line 3554
 *   +0x00e8 -> line 3555
 *   +0x00f0 -> line 3556
 *   +0x00f8 -> line 3557
 *   +0x00fc -> line 3559
 *   +0x0104 -> line 3562
 *   +0x0180 -> line 3563
 *   +0x01f4 -> line 3564
 *   +0x020c -> line 3565
 *   +0x0214 -> line 3566
 *   +0x021c -> line 3569
 *   +0x0298 -> line 3570
 *   +0x030c -> line 3571
 *   +0x0324 -> line 3572
 *   +0x032c -> line 3576
 *   +0x03a8 -> line 3577
 *   +0x041c -> line 3578
 *   +0x0434 -> line 3580
 *   +0x043c -> line 3581
 *   +0x0448 -> line 3583
 *   +0x0450 -> line 3585
 *   +0x04cc -> line 3586
 *   +0x0540 -> line 3587
 *   +0x055c -> line 3588
 *   +0x0588 -> line 3589
 *   +0x0590 -> line 3590
 *   +0x0598 -> line 3592
 *   +0x0614 -> line 3593
 *   +0x0688 -> line 3594
 *   +0x06a4 -> line 3595
 *   +0x06d0 -> line 3596
 *   +0x06d8 -> line 3599
 *   +0x0754 -> line 3600
 *   +0x07c8 -> line 3601
 *   +0x07e4 -> line 3602
 *   +0x0810 -> line 3606
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClipTriangleOverXLow(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3340–3472 */
/* addr: 0x002e2980  size: 2156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3340
 *   +0x0004 -> line 3350
 *   +0x0008 -> line 3340
 *   +0x0014 -> line 3350
 *   +0x0018 -> line 3340
 *   +0x0048 -> line 3350
 *   +0x004c -> line 3340
 *   +0x0050 -> line 3350
 *   +0x0068 -> line 3351
 *   +0x0084 -> line 3352
 *   +0x00a0 -> line 3354
 *   +0x00a4 -> line 3356
 *   +0x00a8 -> line 3354
 *   +0x00ac -> line 3356
 *   +0x00b4 -> line 3411
 *   +0x00bc -> line 3413
 *   +0x00e4 -> line 3414
 *   +0x00ec -> line 3415
 *   +0x00f4 -> line 3418
 *   +0x00fc -> line 3420
 *   +0x010c -> line 3421
 *   +0x0114 -> line 3422
 *   +0x011c -> line 3423
 *   +0x0120 -> line 3425
 *   +0x0128 -> line 3428
 *   +0x01a8 -> line 3429
 *   +0x021c -> line 3430
 *   +0x0234 -> line 3431
 *   +0x023c -> line 3432
 *   +0x0244 -> line 3435
 *   +0x02c4 -> line 3436
 *   +0x0338 -> line 3437
 *   +0x0350 -> line 3438
 *   +0x0358 -> line 3442
 *   +0x03d8 -> line 3443
 *   +0x044c -> line 3444
 *   +0x0464 -> line 3446
 *   +0x046c -> line 3447
 *   +0x0478 -> line 3449
 *   +0x0480 -> line 3451
 *   +0x04fc -> line 3452
 *   +0x0570 -> line 3453
 *   +0x058c -> line 3454
 *   +0x05b8 -> line 3455
 *   +0x05c0 -> line 3456
 *   +0x05c8 -> line 3458
 *   +0x0648 -> line 3459
 *   +0x06bc -> line 3460
 *   +0x06d8 -> line 3461
 *   +0x0704 -> line 3462
 *   +0x070c -> line 3465
 *   +0x0788 -> line 3466
 *   +0x07fc -> line 3467
 *   +0x0818 -> line 3468
 *   +0x0844 -> line 3472
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClipTriangleOverXHigh(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3203–3336 */
/* addr: 0x002e31f0  size: 2104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3203
 *   +0x0040 -> line 3213
 *   +0x0044 -> line 3203
 *   +0x0048 -> line 3213
 *   +0x005c -> line 3214
 *   +0x006c -> line 3215
 *   +0x007c -> line 3217
 *   +0x0080 -> line 3219
 *   +0x0084 -> line 3217
 *   +0x0088 -> line 3219
 *   +0x0090 -> line 3274
 *   +0x0098 -> line 3276
 *   +0x00c0 -> line 3277
 *   +0x00c8 -> line 3278
 *   +0x00d0 -> line 3281
 *   +0x00d8 -> line 3283
 *   +0x00e8 -> line 3284
 *   +0x00f0 -> line 3285
 *   +0x00f8 -> line 3286
 *   +0x00fc -> line 3288
 *   +0x0104 -> line 3291
 *   +0x0180 -> line 3292
 *   +0x01f4 -> line 3293
 *   +0x020c -> line 3294
 *   +0x0214 -> line 3295
 *   +0x021c -> line 3298
 *   +0x0298 -> line 3299
 *   +0x030c -> line 3300
 *   +0x0324 -> line 3301
 *   +0x032c -> line 3305
 *   +0x03a8 -> line 3306
 *   +0x041c -> line 3307
 *   +0x0434 -> line 3309
 *   +0x043c -> line 3310
 *   +0x0448 -> line 3312
 *   +0x0450 -> line 3314
 *   +0x04cc -> line 3315
 *   +0x0540 -> line 3316
 *   +0x055c -> line 3317
 *   +0x0588 -> line 3318
 *   +0x0590 -> line 3319
 *   +0x0598 -> line 3321
 *   +0x0614 -> line 3322
 *   +0x0688 -> line 3323
 *   +0x06a4 -> line 3324
 *   +0x06d0 -> line 3325
 *   +0x06d8 -> line 3328
 *   +0x0754 -> line 3329
 *   +0x07c8 -> line 3330
 *   +0x07e4 -> line 3331
 *   +0x0810 -> line 3336
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClipTriangleOverYLow(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 3067–3199 */
/* addr: 0x002e3a30  size: 2156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3067
 *   +0x0004 -> line 3078
 *   +0x0008 -> line 3067
 *   +0x0014 -> line 3078
 *   +0x0018 -> line 3067
 *   +0x0048 -> line 3078
 *   +0x004c -> line 3067
 *   +0x0050 -> line 3078
 *   +0x0068 -> line 3079
 *   +0x0084 -> line 3080
 *   +0x00a0 -> line 3082
 *   +0x00a4 -> line 3084
 *   +0x00a8 -> line 3082
 *   +0x00ac -> line 3084
 *   +0x00b4 -> line 3138
 *   +0x00bc -> line 3140
 *   +0x00e4 -> line 3141
 *   +0x00ec -> line 3142
 *   +0x00f4 -> line 3145
 *   +0x00fc -> line 3147
 *   +0x010c -> line 3148
 *   +0x0114 -> line 3149
 *   +0x011c -> line 3150
 *   +0x0120 -> line 3152
 *   +0x0128 -> line 3155
 *   +0x01a8 -> line 3156
 *   +0x021c -> line 3157
 *   +0x0234 -> line 3158
 *   +0x023c -> line 3159
 *   +0x0244 -> line 3162
 *   +0x02c4 -> line 3163
 *   +0x0338 -> line 3164
 *   +0x0350 -> line 3165
 *   +0x0358 -> line 3169
 *   +0x03d8 -> line 3170
 *   +0x044c -> line 3171
 *   +0x0464 -> line 3173
 *   +0x046c -> line 3174
 *   +0x0478 -> line 3176
 *   +0x0480 -> line 3178
 *   +0x04fc -> line 3179
 *   +0x0570 -> line 3180
 *   +0x058c -> line 3181
 *   +0x05b8 -> line 3182
 *   +0x05c0 -> line 3183
 *   +0x05c8 -> line 3185
 *   +0x0648 -> line 3186
 *   +0x06bc -> line 3187
 *   +0x06d8 -> line 3188
 *   +0x0704 -> line 3189
 *   +0x070c -> line 3192
 *   +0x0788 -> line 3193
 *   +0x07fc -> line 3194
 *   +0x0818 -> line 3195
 *   +0x0844 -> line 3199
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ClipTriangleOverYHigh(float* Pos0, float* Pos1, float* Pos2, float* U0, float* U1, float* U2, float* C0, float* C1, float* C2)
{
    float fValue;
    float DirU[4];
    float Pos2x[4];
    float Pos1x[4];
    float Pos0x[4];
    float U2x[4];
    float U1x[4];
    float U0x[4];
    float C2x[4];
    float C1x[4];
    float C0x[4];
    unsigned int Edge;
    unsigned int Total;
    unsigned int p2;
    unsigned int p1;
    unsigned int p0;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2935–3062 */
/* addr: 0x002e42a0  size: 1704 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2935
 *   +0x0004 -> line 2960
 *   +0x0008 -> line 2935
 *   +0x004c -> line 2960
 *   +0x0050 -> line 2935
 *   +0x0054 -> line 2960
 *   +0x0060 -> line 2961
 *   +0x0128 -> line 2964
 *   +0x0140 -> line 2966
 *   +0x0144 -> line 2967
 *   +0x0148 -> line 2966
 *   +0x014c -> line 2967
 *   +0x0150 -> line 2968
 *   +0x0154 -> line 2969
 *   +0x0158 -> line 2968
 *   +0x015c -> line 2970
 *   +0x0160 -> line 2968
 *   +0x016c -> line 2966
 *   +0x0178 -> line 2968
 *   +0x017c -> line 2966
 *   +0x0180 -> line 2971
 *   +0x0184 -> line 2966
 *   +0x0188 -> line 2967
 *   +0x018c -> line 2971
 *   +0x0190 -> line 2967
 *   +0x0198 -> line 2968
 *   +0x01a4 -> line 2969
 *   +0x01a8 -> line 2970
 *   +0x01ac -> line 2971
 *   +0x01b0 -> line 2972
 *   +0x01c0 -> line 2973
 *   +0x01c8 -> line 2977
 *   +0x01cc -> line 2976
 *   +0x01d8 -> line 2977
 *   +0x01e8 -> line 2978
 *   +0x01ec -> line 2977
 *   +0x01f0 -> line 2979
 *   +0x01f4 -> line 2977
 *   +0x01f8 -> line 2979
 *   +0x01fc -> line 2976
 *   +0x0200 -> line 2980
 *   +0x0208 -> line 2976
 *   +0x0210 -> line 2977
 *   +0x0218 -> line 2978
 *   +0x021c -> line 2977
 *   +0x0224 -> line 2978
 *   +0x0228 -> line 2979
 *   +0x0234 -> line 2980
 *   +0x0238 -> line 2979
 *   +0x0244 -> line 2980
 *   +0x024c -> line 2981
 *   +0x0250 -> line 2980
 *   +0x025c -> line 2981
 *   +0x026c -> line 3010
 *   +0x0274 -> line 3012
 *   +0x0278 -> line 3013
 *   +0x027c -> line 3014
 *   +0x0280 -> line 3015
 *   +0x0284 -> line 3016
 *   +0x0288 -> line 3017
 *   +0x028c -> line 3019
 *   +0x0290 -> line 3020
 *   +0x0294 -> line 3021
 *   +0x0298 -> line 3022
 *   +0x029c -> line 3023
 *   +0x02a0 -> line 3024
 *   +0x02a4 -> line 3026
 *   +0x02a8 -> line 3027
 *   +0x02ac -> line 3028
 *   +0x02b0 -> line 3030
 *   +0x02b4 -> line 3031
 *   +0x02b8 -> line 3032
 *   +0x02bc -> line 3033
 *   +0x02c0 -> line 3034
 *   +0x02c4 -> line 3035
 *   +0x02c8 -> line 3039
 *   +0x02d0 -> line 3041
 *   +0x02d4 -> line 3043
 *   +0x02d8 -> line 3039
 *   +0x02dc -> line 3040
 *   +0x02e0 -> line 3044
 *   +0x02e4 -> line 3039
 *   +0x02f0 -> line 3042
 *   +0x02f4 -> line 3039
 *   +0x030c -> line 3040
 *   +0x035c -> line 3041
 *   +0x0378 -> line 3042
 *   +0x038c -> line 3043
 *   +0x0390 -> line 3042
 *   +0x039c -> line 3043
 *   +0x03ac -> line 3044
 *   +0x03b0 -> line 3043
 *   +0x03c8 -> line 3044
 *   +0x03d0 -> line 3045
 *   +0x03d4 -> line 3044
 *   +0x03e0 -> line 3045
 *   +0x03f4 -> line 3047
 *   +0x03f8 -> line 3045
 *   +0x0404 -> line 3047
 *   +0x0430 -> line 3048
 *   +0x0484 -> line 3049
 *   +0x049c -> line 3050
 *   +0x04a0 -> line 3049
 *   +0x04ac -> line 3050
 *   +0x04c0 -> line 3051
 *   +0x04c4 -> line 3050
 *   +0x04d0 -> line 3051
 *   +0x04fc -> line 3052
 *   +0x0518 -> line 3053
 *   +0x0530 -> line 3055
 *   +0x0534 -> line 3053
 *   +0x0540 -> line 3055
 *   +0x056c -> line 3056
 *   +0x05c0 -> line 3057
 *   +0x05d8 -> line 3058
 *   +0x05dc -> line 3057
 *   +0x05e8 -> line 3058
 *   +0x05fc -> line 3059
 *   +0x0600 -> line 3058
 *   +0x060c -> line 3059
 *   +0x0638 -> line 3060
 *   +0x0654 -> line 3061
 *   +0x0678 -> line 3062
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_Water2D_DisplayClippedTriangle(float* Pos2D0, float* Pos2D1, float* Pos2D2, float* Pos2D0u, float* Pos2D1u, float* Pos2D2u, float* C0, float* C1, float* C2)
{
    unsigned long* curtag;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2609–2685 */
/* addr: 0x002e4950  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2615
 *   +0x0004 -> line 2610
 *   +0x0008 -> line 2615
 *   +0x000c -> line 2621
 *   +0x0010 -> line 2609
 *   +0x0014 -> line 2621
 *   +0x0018 -> line 2616
 *   +0x0020 -> line 2617
 *   +0x0028 -> line 2618
 *   +0x0030 -> line 2619
 *   +0x0038 -> line 2621
 *   +0x0040 -> line 2624
 *   +0x0044 -> line 2625
 *   +0x0048 -> line 2624
 *   +0x004c -> line 2625
 *   +0x0050 -> line 2624
 *   +0x0054 -> line 2625
 *   +0x0058 -> line 2626
 *   +0x0060 -> line 2627
 *   +0x0068 -> line 2629
 *   +0x0070 -> line 2630
 *   +0x0078 -> line 2631
 *   +0x0080 -> line 2634
 *   +0x0084 -> line 2635
 *   +0x0088 -> line 2634
 *   +0x008c -> line 2635
 *   +0x0090 -> line 2637
 *   +0x0098 -> line 2635
 *   +0x009c -> line 2639
 *   +0x00a0 -> line 2638
 *   +0x00a4 -> line 2639
 *   +0x00a8 -> line 2634
 *   +0x00ac -> line 2638
 *   +0x00b0 -> line 2639
 *   +0x00b4 -> line 2643
 *   +0x00c8 -> line 2645
 *   +0x00d8 -> line 2652
 *   +0x00dc -> line 2655
 *   +0x00e0 -> line 2652
 *   +0x00e4 -> line 2655
 *   +0x00e8 -> line 2652
 *   +0x00ec -> line 2655
 *   +0x00f0 -> line 2652
 *   +0x00f4 -> line 2655
 *   +0x00f8 -> line 2652
 *   +0x0108 -> line 2655
 *   +0x0110 -> line 2652
 *   +0x0114 -> line 2655
 *   +0x0118 -> line 2648
 *   +0x0128 -> line 2652
 *   +0x0130 -> line 2655
 *   +0x0134 -> line 2652
 *   +0x013c -> line 2655
 *   +0x0140 -> line 2652
 *   +0x0150 -> line 2655
 *   +0x0154 -> line 2652
 *   +0x0158 -> line 2653
 *   +0x015c -> line 2652
 *   +0x0160 -> line 2653
 *   +0x0164 -> line 2652
 *   +0x0168 -> line 2653
 *   +0x0170 -> line 2655
 *   +0x017c -> line 2653
 *   +0x0180 -> line 2655
 *   +0x0184 -> line 2652
 *   +0x0188 -> line 2655
 *   +0x018c -> line 2653
 *   +0x0190 -> line 2655
 *   +0x019c -> line 2652
 *   +0x01a0 -> line 2655
 *   +0x01a4 -> line 2652
 *   +0x01a8 -> line 2655
 *   +0x01f0 -> line 2656
 *   +0x0208 -> line 2657
 *   +0x0220 -> line 2685
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vMakeWaterEffect(void)
{
    float Variation;
    float* costable;
    float Time;
    float ySize;
    float xSize;
    float yStep;
    float xStep;
    float y;
    float x;
    float Z;
    float Y2;
    float X2;
    float Y1;
    float X1;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2554–2571 */
/* addr: 0x002e4b80  size: 324 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2554
 *   +0x0004 -> line 2556
 *   +0x0008 -> line 2554
 *   +0x000c -> line 2556
 *   +0x0014 -> line 2554
 *   +0x0018 -> line 2556
 *   +0x0030 -> line 2564
 *   +0x0034 -> line 2561
 *   +0x0038 -> line 2564
 *   +0x003c -> line 2561
 *   +0x0040 -> line 2563
 *   +0x0044 -> line 2560
 *   +0x0048 -> line 2565
 *   +0x004c -> line 2563
 *   +0x0050 -> line 2565
 *   +0x0054 -> line 2563
 *   +0x0058 -> line 2564
 *   +0x005c -> line 2563
 *   +0x0060 -> line 2567
 *   +0x0064 -> line 2560
 *   +0x0068 -> line 2565
 *   +0x006c -> line 2567
 *   +0x0070 -> line 2561
 *   +0x0074 -> line 2567
 *   +0x0078 -> line 2560
 *   +0x007c -> line 2561
 *   +0x0090 -> line 2563
 *   +0x00f8 -> line 2564
 *   +0x0104 -> line 2565
 *   +0x0110 -> line 2566
 *   +0x011c -> line 2567
 *   +0x0128 -> line 2569
 *   +0x0138 -> line 2570
 *   +0x013c -> line 2571
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vWaterFXProcess(void)
{
    float TimeDiff;
    unsigned int i;
    Water2DEffect_* p;
    float OldFrameTime;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2344–2496 */
/* addr: 0x002e4cd0  size: 1236 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2344
 *   +0x0014 -> line 2360
 *   +0x0018 -> line 2362
 *   +0x001c -> line 2364
 *   +0x0070 -> line 2371
 *   +0x0074 -> line 2364
 *   +0x0078 -> line 2372
 *   +0x0080 -> line 2375
 *   +0x008c -> line 2378
 *   +0x0094 -> line 2380
 *   +0x00cc -> line 2385
 *   +0x00d0 -> line 2383
 *   +0x00d4 -> line 2385
 *   +0x00e0 -> line 2389
 *   +0x00ec -> line 2393
 *   +0x00fc -> line 2397
 *   +0x0118 -> line 2400
 *   +0x011c -> line 2401
 *   +0x0120 -> line 2400
 *   +0x0124 -> line 2401
 *   +0x012c -> line 2402
 *   +0x0138 -> line 2403
 *   +0x0144 -> line 2404
 *   +0x0148 -> line 2406
 *   +0x0150 -> line 2408
 *   +0x0154 -> line 2406
 *   +0x0158 -> line 2408
 *   +0x0160 -> line 2407
 *   +0x0168 -> line 2406
 *   +0x016c -> line 2408
 *   +0x0170 -> line 2406
 *   +0x0178 -> line 2407
 *   +0x017c -> line 2408
 *   +0x0184 -> line 2407
 *   +0x0190 -> line 2408
 *   +0x01b8 -> line 2411
 *   +0x01cc -> line 2413
 *   +0x01dc -> line 2417
 *   +0x01e4 -> line 2419
 *   +0x01e8 -> line 2447
 *   +0x02ac -> line 2449
 *   +0x02b8 -> line 2447
 *   +0x02dc -> line 2449
 *   +0x02e4 -> line 2450
 *   +0x02ec -> line 2451
 *   +0x02f4 -> line 2453
 *   +0x02fc -> line 2454
 *   +0x0304 -> line 2455
 *   +0x030c -> line 2456
 *   +0x0324 -> line 2458
 *   +0x032c -> line 2460
 *   +0x0334 -> line 2463
 *   +0x036c -> line 2465
 *   +0x0380 -> line 2466
 *   +0x0384 -> line 2465
 *   +0x0388 -> line 2466
 *   +0x0390 -> line 2468
 *   +0x0394 -> line 2469
 *   +0x0398 -> line 2468
 *   +0x039c -> line 2469
 *   +0x03a0 -> line 2468
 *   +0x03a4 -> line 2465
 *   +0x03a8 -> line 2471
 *   +0x03b0 -> line 2474
 *   +0x03b8 -> line 2465
 *   +0x03bc -> line 2466
 *   +0x03c0 -> line 2469
 *   +0x03c4 -> line 2471
 *   +0x03c8 -> line 2474
 *   +0x03d4 -> line 2466
 *   +0x03d8 -> line 2474
 *   +0x03dc -> line 2466
 *   +0x03e0 -> line 2468
 *   +0x03e4 -> line 2469
 *   +0x03e8 -> line 2471
 *   +0x03f0 -> line 2472
 *   +0x03f8 -> line 2474
 *   +0x042c -> line 2476
 *   +0x0450 -> line 2478
 *   +0x0454 -> line 2476
 *   +0x0458 -> line 2478
 *   +0x0464 -> line 2476
 *   +0x046c -> line 2478
 *   +0x0478 -> line 2482
 *   +0x0480 -> line 2485
 *   +0x0484 -> line 2486
 *   +0x0488 -> line 2487
 *   +0x049c -> line 2489
 *   +0x04a4 -> line 2491
 *   +0x04ac -> line 2493
 *   +0x04b4 -> line 2495
 *   +0x04bc -> line 2496
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vProcessMatrixDeformations(void)
{
    unsigned char zTst;
    float fInv;
    float (*pPos2D)[4];
    unsigned int Found;
    float fUvSizey;
    float fUvSizex;
    float UVs[4];
    float fSizey;
    float fSizex;
    unsigned int i;
    float a16_fProjectionMatrix[4][4];
    float a16_fWorldMatrix[4][4];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2338–2339 */
/* addr: 0x002e51b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2338
 *   +0x0008 -> line 2339
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vReinitMatrixDeformations(void)
{
    WaterFrame ^= 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2309–2332 */
/* addr: 0x002e51c0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2309
 *   +0x0004 -> line 2311
 *   +0x0008 -> line 2309
 *   +0x000c -> line 2311
 *   +0x0010 -> line 2309
 *   +0x0014 -> line 2312
 *   +0x0018 -> line 2309
 *   +0x0024 -> line 2314
 *   +0x0030 -> line 2316
 *   +0x0050 -> line 2318
 *   +0x0054 -> line 2319
 *   +0x0058 -> line 2321
 *   +0x0068 -> line 2323
 *   +0x0080 -> line 2324
 *   +0x0084 -> line 2323
 *   +0x0088 -> line 2324
 *   +0x008c -> line 2326
 *   +0x0090 -> line 2324
 *   +0x0094 -> line 2323
 *   +0x0098 -> line 2325
 *   +0x009c -> line 2324
 *   +0x00a0 -> line 2325
 *   +0x00a8 -> line 2326
 *   +0x00b4 -> line 2327
 *   +0x00b8 -> line 2324
 *   +0x00bc -> line 2327
 *   +0x00c0 -> line 2325
 *   +0x00c4 -> line 2327
 *   +0x00c8 -> line 2328
 *   +0x00d8 -> line 2325
 *   +0x00dc -> line 2326
 *   +0x00e0 -> line 2328
 *   +0x00ec -> line 2329
 *   +0x00f0 -> line 2328
 *   +0x00f4 -> line 2329
 *   +0x00f8 -> line 2328
 *   +0x00fc -> line 2329
 *   +0x0100 -> line 2328
 *   +0x0104 -> line 2330
 *   +0x010c -> line 2329
 *   +0x0110 -> line 2330
 *   +0x0124 -> line 2332
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vAddMatrixDeformationEffect(MTH3D_tdstVector_* pPosition, float fSize, unsigned int TYPE)
{
    unsigned int MinIndex;
    float MinVal;
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2301–2306 */
/* addr: 0x002e5300  size: 208 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2301
 *   +0x0008 -> line 2303
 *   +0x0044 -> line 2305
 *   +0x00c8 -> line 2306
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vInitMatrixDeformation(void)
{
    unsigned int i;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2256–2271 */
/* addr: 0x002e53d0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2256
 *   +0x0004 -> line 2259
 *   +0x0008 -> line 2256
 *   +0x000c -> line 2259
 *   +0x0010 -> line 2256
 *   +0x0014 -> line 2259
 *   +0x001c -> line 2260
 *   +0x0020 -> line 2259
 *   +0x0024 -> line 2260
 *   +0x0028 -> line 2259
 *   +0x002c -> line 2260
 *   +0x0030 -> line 2259
 *   +0x0034 -> line 2260
 *   +0x003c -> line 2261
 *   +0x0048 -> line 2262
 *   +0x004c -> line 2261
 *   +0x005c -> line 2262
 *   +0x0064 -> line 2263
 *   +0x0070 -> line 2264
 *   +0x0074 -> line 2263
 *   +0x0078 -> line 2264
 *   +0x007c -> line 2263
 *   +0x0088 -> line 2264
 *   +0x0090 -> line 2266
 *   +0x00a4 -> line 2268
 *   +0x00b0 -> line 2269
 *   +0x00b4 -> line 2268
 *   +0x00b8 -> line 2269
 *   +0x00bc -> line 2268
 *   +0x00c8 -> line 2269
 *   +0x00d0 -> line 2270
 *   +0x00d8 -> line 2271
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_EndMatrixEffect(void)
{
    anon_1 qword;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2028–2249 */
/* addr: 0x002e54c0  size: 3664 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2028
 *   +0x0054 -> line 2036
 *   +0x0078 -> line 2037
 *   +0x0084 -> line 2054
 *   +0x0088 -> line 2045
 *   +0x008c -> line 2054
 *   +0x0090 -> line 2045
 *   +0x0098 -> line 2051
 *   +0x009c -> line 2046
 *   +0x00a0 -> line 2056
 *   +0x00a4 -> line 2046
 *   +0x00a8 -> line 2064
 *   +0x00ac -> line 2054
 *   +0x00b0 -> line 2046
 *   +0x00b4 -> line 2069
 *   +0x00b8 -> line 2051
 *   +0x00bc -> line 2069
 *   +0x00c0 -> line 2052
 *   +0x00c4 -> line 2053
 *   +0x00c8 -> line 2066
 *   +0x00cc -> line 2056
 *   +0x00d0 -> line 2069
 *   +0x00d4 -> line 2057
 *   +0x00d8 -> line 2054
 *   +0x00dc -> line 2058
 *   +0x00e0 -> line 2059
 *   +0x00e4 -> line 2054
 *   +0x00f4 -> line 2064
 *   +0x00fc -> line 2065
 *   +0x0104 -> line 2066
 *   +0x0108 -> line 2069
 *   +0x013c -> line 2081
 *   +0x0144 -> line 2069
 *   +0x0154 -> line 2070
 *   +0x0158 -> line 2069
 *   +0x0164 -> line 2081
 *   +0x0168 -> line 2069
 *   +0x016c -> line 2088
 *   +0x0170 -> line 2069
 *   +0x0174 -> line 2081
 *   +0x0178 -> line 2088
 *   +0x017c -> line 2069
 *   +0x0180 -> line 2081
 *   +0x0184 -> line 2069
 *   +0x0188 -> line 2070
 *   +0x018c -> line 2069
 *   +0x0190 -> line 2070
 *   +0x0194 -> line 2069
 *   +0x0198 -> line 2088
 *   +0x01d0 -> line 2096
 *   +0x01d4 -> line 2093
 *   +0x01d8 -> line 2096
 *   +0x01e0 -> line 2093
 *   +0x01e4 -> line 2096
 *   +0x01e8 -> line 2093
 *   +0x01ec -> line 2096
 *   +0x01f4 -> line 2100
 *   +0x01f8 -> line 2128
 *   +0x01fc -> line 2098
 *   +0x0204 -> line 2096
 *   +0x0208 -> line 2100
 *   +0x020c -> line 2096
 *   +0x0210 -> line 2100
 *   +0x0218 -> line 2098
 *   +0x021c -> line 2101
 *   +0x0224 -> line 2096
 *   +0x0228 -> line 2101
 *   +0x022c -> line 2100
 *   +0x0230 -> line 2101
 *   +0x0234 -> line 2100
 *   +0x0238 -> line 2098
 *   +0x023c -> line 2100
 *   +0x0240 -> line 2128
 *   +0x0244 -> line 2100
 *   +0x0248 -> line 2128
 *   +0x02a0 -> line 2129
 *   +0x02a8 -> line 2128
 *   +0x02ac -> line 2129
 *   +0x0304 -> line 2130
 *   +0x0308 -> line 2129
 *   +0x030c -> line 2130
 *   +0x036c -> line 2131
 *   +0x0370 -> line 2130
 *   +0x0380 -> line 2131
 *   +0x03d4 -> line 2134
 *   +0x03d8 -> line 2131
 *   +0x03e8 -> line 2134
 *   +0x0438 -> line 2135
 *   +0x043c -> line 2134
 *   +0x0440 -> line 2135
 *   +0x0494 -> line 2136
 *   +0x049c -> line 2135
 *   +0x04a0 -> line 2136
 *   +0x04ec -> line 2137
 *   +0x04f0 -> line 2136
 *   +0x0500 -> line 2137
 *   +0x0550 -> line 2140
 *   +0x0554 -> line 2137
 *   +0x0564 -> line 2140
 *   +0x05b4 -> line 2141
 *   +0x05b8 -> line 2140
 *   +0x05c0 -> line 2141
 *   +0x0618 -> line 2142
 *   +0x061c -> line 2141
 *   +0x0620 -> line 2142
 *   +0x0680 -> line 2143
 *   +0x06d4 -> line 2146
 *   +0x06d8 -> line 2143
 *   +0x06dc -> line 2146
 *   +0x06e0 -> line 2143
 *   +0x06e8 -> line 2146
 *   +0x0730 -> line 2147
 *   +0x0734 -> line 2146
 *   +0x073c -> line 2147
 *   +0x078c -> line 2148
 *   +0x0790 -> line 2147
 *   +0x0798 -> line 2148
 *   +0x07e4 -> line 2149
 *   +0x07e8 -> line 2148
 *   +0x07ec -> line 2149
 *   +0x07f0 -> line 2148
 *   +0x07f8 -> line 2149
 *   +0x0850 -> line 2152
 *   +0x0894 -> line 2153
 *   +0x0898 -> line 2152
 *   +0x089c -> line 2153
 *   +0x08e4 -> line 2154
 *   +0x092c -> line 2155
 *   +0x0930 -> line 2154
 *   +0x0934 -> line 2155
 *   +0x0938 -> line 2154
 *   +0x0940 -> line 2155
 *   +0x098c -> line 2159
 *   +0x0990 -> line 2155
 *   +0x0994 -> line 2158
 *   +0x0998 -> line 2159
 *   +0x099c -> line 2158
 *   +0x09a0 -> line 2159
 *   +0x09a4 -> line 2158
 *   +0x09b4 -> line 2159
 *   +0x09bc -> line 2160
 *   +0x09d0 -> line 2161
 *   +0x09d4 -> line 2163
 *   +0x09e0 -> line 2161
 *   +0x09e4 -> line 2162
 *   +0x09e8 -> line 2161
 *   +0x09f0 -> line 2162
 *   +0x0a00 -> line 2163
 *   +0x0a08 -> line 2165
 *   +0x0a0c -> line 2166
 *   +0x0a10 -> line 2165
 *   +0x0a14 -> line 2166
 *   +0x0a1c -> line 2165
 *   +0x0a2c -> line 2166
 *   +0x0a34 -> line 2167
 *   +0x0a48 -> line 2168
 *   +0x0a4c -> line 2169
 *   +0x0a50 -> line 2170
 *   +0x0a5c -> line 2168
 *   +0x0a60 -> line 2169
 *   +0x0a68 -> line 2170
 *   +0x0a70 -> line 2172
 *   +0x0a74 -> line 2173
 *   +0x0a78 -> line 2172
 *   +0x0a7c -> line 2173
 *   +0x0a84 -> line 2172
 *   +0x0a98 -> line 2173
 *   +0x0aa4 -> line 2174
 *   +0x0ab8 -> line 2175
 *   +0x0abc -> line 2177
 *   +0x0ac0 -> line 2175
 *   +0x0ac4 -> line 2177
 *   +0x0acc -> line 2175
 *   +0x0ad0 -> line 2176
 *   +0x0adc -> line 2177
 *   +0x0ae4 -> line 2180
 *   +0x0ae8 -> line 2181
 *   +0x0af0 -> line 2180
 *   +0x0af4 -> line 2181
 *   +0x0b00 -> line 2182
 *   +0x0b14 -> line 2183
 *   +0x0b18 -> line 2185
 *   +0x0b1c -> line 2184
 *   +0x0b20 -> line 2185
 *   +0x0b30 -> line 2187
 *   +0x0b34 -> line 2188
 *   +0x0b38 -> line 2187
 *   +0x0b3c -> line 2188
 *   +0x0b44 -> line 2187
 *   +0x0b5c -> line 2188
 *   +0x0b64 -> line 2189
 *   +0x0b78 -> line 2190
 *   +0x0b7c -> line 2192
 *   +0x0b80 -> line 2190
 *   +0x0b84 -> line 2192
 *   +0x0b8c -> line 2190
 *   +0x0b90 -> line 2191
 *   +0x0b9c -> line 2192
 *   +0x0ba4 -> line 2194
 *   +0x0ba8 -> line 2195
 *   +0x0bc0 -> line 2196
 *   +0x0bd4 -> line 2197
 *   +0x0bd8 -> line 2199
 *   +0x0bdc -> line 2198
 *   +0x0be0 -> line 2199
 *   +0x0bf0 -> line 2202
 *   +0x0bf4 -> line 2203
 *   +0x0bfc -> line 2202
 *   +0x0c00 -> line 2203
 *   +0x0c0c -> line 2204
 *   +0x0c20 -> line 2205
 *   +0x0c24 -> line 2207
 *   +0x0c28 -> line 2206
 *   +0x0c2c -> line 2207
 *   +0x0c3c -> line 2209
 *   +0x0c40 -> line 2210
 *   +0x0c44 -> line 2209
 *   +0x0c48 -> line 2210
 *   +0x0c50 -> line 2209
 *   +0x0c68 -> line 2210
 *   +0x0c70 -> line 2211
 *   +0x0c84 -> line 2212
 *   +0x0c88 -> line 2214
 *   +0x0c8c -> line 2212
 *   +0x0c90 -> line 2214
 *   +0x0c98 -> line 2212
 *   +0x0c9c -> line 2213
 *   +0x0ca8 -> line 2214
 *   +0x0cb0 -> line 2216
 *   +0x0cb4 -> line 2217
 *   +0x0ccc -> line 2218
 *   +0x0ce0 -> line 2219
 *   +0x0ce4 -> line 2221
 *   +0x0ce8 -> line 2220
 *   +0x0cec -> line 2221
 *   +0x0cfc -> line 2224
 *   +0x0d00 -> line 2225
 *   +0x0d08 -> line 2224
 *   +0x0d0c -> line 2225
 *   +0x0d18 -> line 2226
 *   +0x0d2c -> line 2227
 *   +0x0d30 -> line 2229
 *   +0x0d34 -> line 2228
 *   +0x0d38 -> line 2229
 *   +0x0d48 -> line 2231
 *   +0x0d4c -> line 2232
 *   +0x0d54 -> line 2231
 *   +0x0d58 -> line 2232
 *   +0x0d64 -> line 2233
 *   +0x0d78 -> line 2234
 *   +0x0d7c -> line 2236
 *   +0x0d88 -> line 2234
 *   +0x0d8c -> line 2235
 *   +0x0d94 -> line 2236
 *   +0x0d9c -> line 2238
 *   +0x0da0 -> line 2239
 *   +0x0db8 -> line 2240
 *   +0x0dcc -> line 2241
 *   +0x0dd0 -> line 2243
 *   +0x0dd4 -> line 2242
 *   +0x0dd8 -> line 2243
 *   +0x0de8 -> line 2244
 *   +0x0dfc -> line 2249
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_DrawMatrixDeformation(float Z, float x1, float y1f, float sx, float sy, float u1, float v1, float su, float sv, float AlphaCenter, float Angle)
{
    float VY2;
    float VX2;
    float vMul;
    float uMul;
    unsigned long V[5];
    unsigned long U[5];
    unsigned int Y[5];
    unsigned int X[5];
    anon_1 qworduv;
    anon_1 qword2;
    anon_1 qword1;
    float sin1;
    float cos1;
    anon_1 qwordcZero;
    anon_1 qwordcOne;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 2002–2025 */
/* addr: 0x002e6310  size: 272 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2002
 *   +0x0004 -> line 2006
 *   +0x0008 -> line 2002
 *   +0x0010 -> line 2006
 *   +0x0024 -> line 2007
 *   +0x0028 -> line 2013
 *   +0x002c -> line 2007
 *   +0x0030 -> line 2013
 *   +0x0034 -> line 2010
 *   +0x0038 -> line 2007
 *   +0x003c -> line 2010
 *   +0x0048 -> line 2011
 *   +0x0050 -> line 2014
 *   +0x0058 -> line 2013
 *   +0x005c -> line 2015
 *   +0x0068 -> line 2010
 *   +0x0074 -> line 2011
 *   +0x0084 -> line 2012
 *   +0x0088 -> line 2014
 *   +0x008c -> line 2012
 *   +0x0090 -> line 2014
 *   +0x0094 -> line 2012
 *   +0x0098 -> line 2014
 *   +0x009c -> line 2012
 *   +0x00a0 -> line 2014
 *   +0x00a4 -> line 2013
 *   +0x00b4 -> line 2015
 *   +0x00bc -> line 2019
 *   +0x00c0 -> line 2020
 *   +0x00c4 -> line 2019
 *   +0x00c8 -> line 2020
 *   +0x00d8 -> line 2023
 *   +0x00e4 -> line 2024
 *   +0x00ec -> line 2023
 *   +0x00f8 -> line 2024
 *   +0x0100 -> line 2025
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_PrepareMatrixEffect(void)
{
    anon_1 qword;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1879–1884 */
/* addr: 0x002e6420  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1879
 *   +0x0024 -> line 1880
 *   +0x0044 -> line 1883
 *   +0x0048 -> line 1881
 *   +0x004c -> line 1883
 *   +0x0050 -> line 1882
 *   +0x0054 -> line 1884
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetDepthBlurMode(float Near, float Far, float Intensity)
{
    if (Intensity <= 0.0f) GLI_g_AfterEffect = 0; else GLI_g_AfterEffect = 1;
    if (!(Intensity <= 1.0f)) Intensity = 1.0f;
    G_DEPTH_BLUR_DISTNEAR = Near;
    G_DEPTH_BLUR_DISTFAR = Far;
    G_DEPTH_BLUR_MAX_ALPHA = 0.5f * Intensity;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1818–1865 */
/* addr: 0x002e6480  size: 540 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1818
 *   +0x0020 -> line 1824
 *   +0x0024 -> line 1818
 *   +0x0028 -> line 1826
 *   +0x0030 -> line 1829
 *   +0x0038 -> line 1830
 *   +0x0040 -> line 1829
 *   +0x0048 -> line 1830
 *   +0x004c -> line 1829
 *   +0x0070 -> line 1831
 *   +0x0078 -> line 1830
 *   +0x007c -> line 1829
 *   +0x0080 -> line 1830
 *   +0x0090 -> line 1831
 *   +0x0098 -> line 1832
 *   +0x00a4 -> line 1834
 *   +0x00c4 -> line 1836
 *   +0x00e8 -> line 1838
 *   +0x0108 -> line 1839
 *   +0x0130 -> line 1841
 *   +0x0140 -> line 1842
 *   +0x0150 -> line 1844
 *   +0x0158 -> line 1845
 *   +0x016c -> line 1846
 *   +0x0174 -> line 1847
 *   +0x017c -> line 1850
 *   +0x0184 -> line 1851
 *   +0x018c -> line 1852
 *   +0x0194 -> line 1853
 *   +0x01ac -> line 1854
 *   +0x01b4 -> line 1855
 *   +0x01bc -> line 1857
 *   +0x01c4 -> line 1858
 *   +0x01cc -> line 1860
 *   +0x01e4 -> line 1862
 *   +0x01f0 -> line 1864
 *   +0x01f8 -> line 1865
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DoFullScreenWaterEffect(void)
{
    float Angle;
    int y;
    int x;
    float UVs[25][2];
    float Points[25][2];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1763–1814 */
/* addr: 0x002e66a0  size: 608 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1763
 *   +0x0020 -> line 1770
 *   +0x0024 -> line 1763
 *   +0x002c -> line 1768
 *   +0x0038 -> line 1772
 *   +0x0040 -> line 1775
 *   +0x0048 -> line 1776
 *   +0x0050 -> line 1775
 *   +0x0058 -> line 1776
 *   +0x005c -> line 1775
 *   +0x007c -> line 1777
 *   +0x0084 -> line 1776
 *   +0x0088 -> line 1775
 *   +0x008c -> line 1776
 *   +0x009c -> line 1777
 *   +0x00a4 -> line 1778
 *   +0x00b0 -> line 1780
 *   +0x00d0 -> line 1782
 *   +0x00f8 -> line 1784
 *   +0x0114 -> line 1785
 *   +0x0118 -> line 1784
 *   +0x0124 -> line 1785
 *   +0x0150 -> line 1787
 *   +0x0160 -> line 1788
 *   +0x0170 -> line 1790
 *   +0x0178 -> line 1791
 *   +0x018c -> line 1792
 *   +0x0194 -> line 1793
 *   +0x019c -> line 1796
 *   +0x01a4 -> line 1797
 *   +0x01ac -> line 1798
 *   +0x01b4 -> line 1799
 *   +0x01cc -> line 1800
 *   +0x01d4 -> line 1801
 *   +0x01dc -> line 1803
 *   +0x01e4 -> line 1804
 *   +0x01ec -> line 1806
 *   +0x0204 -> line 1808
 *   +0x0210 -> line 1810
 *   +0x0228 -> line 1811
 *   +0x0230 -> line 1813
 *   +0x0238 -> line 1814
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void DoFullScreenWaterEffectForMirror(void)
{
    float Angle;
    float Time;
    int y;
    int x;
    float UVs[25][2];
    float Points[25][2];
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1577–1757 */
/* addr: 0x002e6900  size: 3524 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1577
 *   +0x0004 -> line 1582
 *   +0x0008 -> line 1577
 *   +0x003c -> line 1582
 *   +0x0048 -> line 1583
 *   +0x0050 -> line 1585
 *   +0x0054 -> line 1590
 *   +0x0058 -> line 1585
 *   +0x005c -> line 1590
 *   +0x0060 -> line 1585
 *   +0x0064 -> line 1595
 *   +0x0068 -> line 1590
 *   +0x006c -> line 1595
 *   +0x0070 -> line 1590
 *   +0x0074 -> line 1591
 *   +0x007c -> line 1595
 *   +0x0080 -> line 1602
 *   +0x008c -> line 1609
 *   +0x0098 -> line 1590
 *   +0x00a4 -> line 1591
 *   +0x00b4 -> line 1594
 *   +0x00c4 -> line 1595
 *   +0x00d4 -> line 1602
 *   +0x00e4 -> line 1609
 *   +0x00f0 -> line 1613
 *   +0x00f4 -> line 1614
 *   +0x00f8 -> line 1613
 *   +0x00fc -> line 1614
 *   +0x0110 -> line 1617
 *   +0x011c -> line 1618
 *   +0x0124 -> line 1617
 *   +0x0130 -> line 1618
 *   +0x013c -> line 1623
 *   +0x0140 -> line 1628
 *   +0x0144 -> line 1623
 *   +0x0148 -> line 1628
 *   +0x014c -> line 1624
 *   +0x0150 -> line 1628
 *   +0x0154 -> line 1625
 *   +0x0158 -> line 1626
 *   +0x015c -> line 1628
 *   +0x0168 -> line 1634
 *   +0x016c -> line 1643
 *   +0x0170 -> line 1634
 *   +0x0174 -> line 1643
 *   +0x0178 -> line 1636
 *   +0x017c -> line 1634
 *   +0x0180 -> line 1635
 *   +0x0184 -> line 1643
 *   +0x0188 -> line 1635
 *   +0x018c -> line 1643
 *   +0x0190 -> line 1636
 *   +0x0194 -> line 1643
 *   +0x01f0 -> line 1644
 *   +0x01f4 -> line 1643
 *   +0x01f8 -> line 1644
 *   +0x01fc -> line 1643
 *   +0x0204 -> line 1644
 *   +0x0208 -> line 1643
 *   +0x0210 -> line 1644
 *   +0x0214 -> line 1643
 *   +0x0220 -> line 1644
 *   +0x0224 -> line 1643
 *   +0x0228 -> line 1644
 *   +0x022c -> line 1643
 *   +0x0238 -> line 1644
 *   +0x023c -> line 1643
 *   +0x0240 -> line 1644
 *   +0x0298 -> line 1655
 *   +0x02a0 -> line 1644
 *   +0x02bc -> line 1655
 *   +0x02c0 -> line 1644
 *   +0x02c4 -> line 1662
 *   +0x02c8 -> line 1644
 *   +0x02cc -> line 1655
 *   +0x02d0 -> line 1662
 *   +0x02d4 -> line 1644
 *   +0x02d8 -> line 1655
 *   +0x02dc -> line 1644
 *   +0x02e4 -> line 1662
 *   +0x031c -> line 1665
 *   +0x0324 -> line 1667
 *   +0x0328 -> line 1671
 *   +0x032c -> line 1672
 *   +0x033c -> line 1671
 *   +0x0340 -> line 1672
 *   +0x03c4 -> line 1673
 *   +0x03c8 -> line 1672
 *   +0x03cc -> line 1673
 *   +0x0454 -> line 1674
 *   +0x045c -> line 1673
 *   +0x0460 -> line 1674
 *   +0x04b8 -> line 1675
 *   +0x0510 -> line 1678
 *   +0x0514 -> line 1675
 *   +0x0518 -> line 1678
 *   +0x0520 -> line 1679
 *   +0x05a4 -> line 1680
 *   +0x05a8 -> line 1679
 *   +0x05ac -> line 1680
 *   +0x0620 -> line 1681
 *   +0x0624 -> line 1680
 *   +0x062c -> line 1681
 *   +0x0688 -> line 1682
 *   +0x06e0 -> line 1685
 *   +0x06e4 -> line 1682
 *   +0x06e8 -> line 1685
 *   +0x06f8 -> line 1686
 *   +0x06fc -> line 1685
 *   +0x0700 -> line 1686
 *   +0x0780 -> line 1687
 *   +0x0784 -> line 1686
 *   +0x0788 -> line 1687
 *   +0x07fc -> line 1688
 *   +0x0800 -> line 1687
 *   +0x0808 -> line 1688
 *   +0x0864 -> line 1689
 *   +0x08b0 -> line 1693
 *   +0x08b4 -> line 1689
 *   +0x08b8 -> line 1693
 *   +0x08bc -> line 1689
 *   +0x08c4 -> line 1693
 *   +0x08c8 -> line 1689
 *   +0x08cc -> line 1693
 *   +0x0948 -> line 1694
 *   +0x094c -> line 1693
 *   +0x0950 -> line 1694
 *   +0x09c4 -> line 1695
 *   +0x09c8 -> line 1694
 *   +0x09d0 -> line 1695
 *   +0x0a2c -> line 1696
 *   +0x0a88 -> line 1699
 *   +0x0a8c -> line 1700
 *   +0x0a90 -> line 1699
 *   +0x0a98 -> line 1700
 *   +0x0a9c -> line 1699
 *   +0x0aa0 -> line 1700
 *   +0x0aa4 -> line 1699
 *   +0x0aac -> line 1700
 *   +0x0ab4 -> line 1701
 *   +0x0ab8 -> line 1703
 *   +0x0ac4 -> line 1701
 *   +0x0ad0 -> line 1702
 *   +0x0adc -> line 1703
 *   +0x0ae4 -> line 1705
 *   +0x0ae8 -> line 1706
 *   +0x0aec -> line 1705
 *   +0x0af0 -> line 1706
 *   +0x0af8 -> line 1705
 *   +0x0b0c -> line 1706
 *   +0x0b14 -> line 1707
 *   +0x0b18 -> line 1709
 *   +0x0b1c -> line 1707
 *   +0x0b20 -> line 1709
 *   +0x0b28 -> line 1707
 *   +0x0b2c -> line 1708
 *   +0x0b3c -> line 1709
 *   +0x0b44 -> line 1711
 *   +0x0b50 -> line 1712
 *   +0x0b5c -> line 1711
 *   +0x0b68 -> line 1712
 *   +0x0b70 -> line 1713
 *   +0x0b74 -> line 1715
 *   +0x0b78 -> line 1713
 *   +0x0b7c -> line 1715
 *   +0x0b84 -> line 1713
 *   +0x0b88 -> line 1714
 *   +0x0b98 -> line 1715
 *   +0x0ba0 -> line 1718
 *   +0x0ba4 -> line 1719
 *   +0x0bac -> line 1718
 *   +0x0bb0 -> line 1719
 *   +0x0bbc -> line 1720
 *   +0x0bc0 -> line 1722
 *   +0x0bcc -> line 1720
 *   +0x0bd0 -> line 1721
 *   +0x0bd8 -> line 1722
 *   +0x0be0 -> line 1724
 *   +0x0be4 -> line 1725
 *   +0x0bf8 -> line 1726
 *   +0x0bfc -> line 1727
 *   +0x0c00 -> line 1728
 *   +0x0c04 -> line 1727
 *   +0x0c08 -> line 1728
 *   +0x0c18 -> line 1730
 *   +0x0c1c -> line 1731
 *   +0x0c20 -> line 1730
 *   +0x0c24 -> line 1731
 *   +0x0c2c -> line 1730
 *   +0x0c40 -> line 1731
 *   +0x0c48 -> line 1732
 *   +0x0c4c -> line 1734
 *   +0x0c50 -> line 1732
 *   +0x0c54 -> line 1734
 *   +0x0c5c -> line 1732
 *   +0x0c60 -> line 1733
 *   +0x0c70 -> line 1734
 *   +0x0c78 -> line 1736
 *   +0x0c94 -> line 1737
 *   +0x0cb0 -> line 1743
 *   +0x0cbc -> line 1744
 *   +0x0cc0 -> line 1743
 *   +0x0cc4 -> line 1744
 *   +0x0cc8 -> line 1743
 *   +0x0cd4 -> line 1744
 *   +0x0ce0 -> line 1745
 *   +0x0cec -> line 1746
 *   +0x0cf0 -> line 1745
 *   +0x0d00 -> line 1746
 *   +0x0d0c -> line 1747
 *   +0x0d18 -> line 1748
 *   +0x0d1c -> line 1747
 *   +0x0d20 -> line 1748
 *   +0x0d24 -> line 1747
 *   +0x0d30 -> line 1748
 *   +0x0d3c -> line 1750
 *   +0x0d54 -> line 1752
 *   +0x0d60 -> line 1753
 *   +0x0d64 -> line 1752
 *   +0x0d68 -> line 1753
 *   +0x0d6c -> line 1752
 *   +0x0d78 -> line 1753
 *   +0x0d84 -> line 1755
 *   +0x0d8c -> line 1757
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_DrawDeformedScreen(float (*Points)[2], float (*UVs)[2])
{
    float vMul;
    float uMul;
    unsigned long V[4];
    unsigned long U[4];
    unsigned int Y[4];
    unsigned int X[4];
    unsigned int Indice;
    int y;
    int x;
    anon_1 qworduv;
    anon_1 qword2;
    anon_1 qword1;
    anon_1 qword;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1550–1568 */
/* addr: 0x002e76d0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1550
 *   +0x0008 -> line 1551
 *   +0x0010 -> line 1553
 *   +0x0018 -> line 1555
 *   +0x002c -> line 1556
 *   +0x0034 -> line 1557
 *   +0x003c -> line 1558
 *   +0x0044 -> line 1560
 *   +0x004c -> line 1561
 *   +0x0054 -> line 1562
 *   +0x006c -> line 1563
 *   +0x0074 -> line 1565
 *   +0x007c -> line 1567
 *   +0x0084 -> line 1568
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSaveCurrentBackBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1501–1544 */
/* addr: 0x002e7760  size: 976 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1501
 *   +0x0004 -> line 1502
 *   +0x0008 -> line 1501
 *   +0x000c -> line 1502
 *   +0x0028 -> line 1503
 *   +0x0034 -> line 1502
 *   +0x0040 -> line 1504
 *   +0x0044 -> line 1502
 *   +0x0054 -> line 1503
 *   +0x0058 -> line 1502
 *   +0x005c -> line 1503
 *   +0x0060 -> line 1502
 *   +0x0068 -> line 1503
 *   +0x006c -> line 1502
 *   +0x0070 -> line 1503
 *   +0x0074 -> line 1502
 *   +0x0084 -> line 1503
 *   +0x00e4 -> line 1504
 *   +0x00ec -> line 1505
 *   +0x010c -> line 1506
 *   +0x0110 -> line 1505
 *   +0x0120 -> line 1507
 *   +0x0124 -> line 1505
 *   +0x0134 -> line 1507
 *   +0x0138 -> line 1505
 *   +0x0160 -> line 1508
 *   +0x0164 -> line 1505
 *   +0x0168 -> line 1506
 *   +0x0170 -> line 1508
 *   +0x0174 -> line 1507
 *   +0x0178 -> line 1506
 *   +0x017c -> line 1507
 *   +0x019c -> line 1506
 *   +0x01a0 -> line 1507
 *   +0x01a4 -> line 1506
 *   +0x01a8 -> line 1507
 *   +0x01c0 -> line 1508
 *   +0x01c8 -> line 1510
 *   +0x01d0 -> line 1511
 *   +0x01d8 -> line 1514
 *   +0x01e0 -> line 1517
 *   +0x01e8 -> line 1519
 *   +0x01f0 -> line 1520
 *   +0x01f8 -> line 1521
 *   +0x0210 -> line 1522
 *   +0x0218 -> line 1525
 *   +0x0220 -> line 1526
 *   +0x0228 -> line 1531
 *   +0x0240 -> line 1532
 *   +0x0248 -> line 1536
 *   +0x0250 -> line 1539
 *   +0x0254 -> line 1540
 *   +0x025c -> line 1541
 *   +0x03bc -> line 1542
 *   +0x03c4 -> line 1544
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_PostProcessShadow(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1237–1250 */
/* addr: 0x002e7b30  size: 120 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1237
 *   +0x0008 -> line 1238
 *   +0x0010 -> line 1240
 *   +0x0024 -> line 1241
 *   +0x002c -> line 1242
 *   +0x0034 -> line 1244
 *   +0x003c -> line 1245
 *   +0x0044 -> line 1246
 *   +0x005c -> line 1247
 *   +0x0064 -> line 1249
 *   +0x006c -> line 1250
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vRestoreSavedFrameBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1216–1234 */
/* addr: 0x002e7bb0  size: 144 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1216
 *   +0x0008 -> line 1217
 *   +0x0010 -> line 1219
 *   +0x0018 -> line 1221
 *   +0x002c -> line 1222
 *   +0x0034 -> line 1223
 *   +0x003c -> line 1224
 *   +0x0044 -> line 1226
 *   +0x004c -> line 1227
 *   +0x0054 -> line 1228
 *   +0x006c -> line 1229
 *   +0x0074 -> line 1231
 *   +0x007c -> line 1233
 *   +0x0084 -> line 1234
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vSaveCurrentFrameBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1100–1209 */
/* addr: 0x002e7c40  size: 1552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1100
 *   +0x0014 -> line 1109
 *   +0x0020 -> line 1110
 *   +0x0028 -> line 1112
 *   +0x0030 -> line 1114
 *   +0x003c -> line 1116
 *   +0x0044 -> line 1119
 *   +0x004c -> line 1123
 *   +0x0058 -> line 1127
 *   +0x0070 -> line 1128
 *   +0x008c -> line 1129
 *   +0x0090 -> line 1128
 *   +0x00a4 -> line 1130
 *   +0x00a8 -> line 1128
 *   +0x00b8 -> line 1129
 *   +0x00bc -> line 1128
 *   +0x00c0 -> line 1129
 *   +0x00c4 -> line 1128
 *   +0x00cc -> line 1129
 *   +0x00d0 -> line 1128
 *   +0x00d4 -> line 1130
 *   +0x00d8 -> line 1128
 *   +0x00e8 -> line 1129
 *   +0x00ec -> line 1130
 *   +0x00f0 -> line 1129
 *   +0x00f4 -> line 1130
 *   +0x00f8 -> line 1128
 *   +0x00fc -> line 1130
 *   +0x0100 -> line 1128
 *   +0x0114 -> line 1130
 *   +0x0118 -> line 1128
 *   +0x011c -> line 1130
 *   +0x0120 -> line 1128
 *   +0x0124 -> line 1130
 *   +0x0150 -> line 1128
 *   +0x0160 -> line 1130
 *   +0x0178 -> line 1131
 *   +0x0180 -> line 1135
 *   +0x018c -> line 1136
 *   +0x0194 -> line 1149
 *   +0x01ac -> line 1154
 *   +0x01b4 -> line 1156
 *   +0x02a8 -> line 1168
 *   +0x0304 -> line 1172
 *   +0x040c -> line 1175
 *   +0x0438 -> line 1176
 *   +0x044c -> line 1177
 *   +0x0478 -> line 1178
 *   +0x0480 -> line 1181
 *   +0x0490 -> line 1183
 *   +0x04a0 -> line 1185
 *   +0x04b8 -> line 1187
 *   +0x04c0 -> line 1188
 *   +0x04c8 -> line 1189
 *   +0x04d0 -> line 1190
 *   +0x04d8 -> line 1191
 *   +0x04e4 -> line 1193
 *   +0x05bc -> line 1194
 *   +0x05d0 -> line 1196
 *   +0x05d8 -> line 1199
 *   +0x05e8 -> line 1201
 *   +0x05f0 -> line 1202
 *   +0x05f8 -> line 1209
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessFilters(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1063–1095 */
/* addr: 0x002e8250  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1063
 *   +0x0008 -> line 1064
 *   +0x0010 -> line 1066
 *   +0x0018 -> line 1068
 *   +0x002c -> line 1069
 *   +0x0034 -> line 1070
 *   +0x003c -> line 1071
 *   +0x0044 -> line 1073
 *   +0x004c -> line 1074
 *   +0x0054 -> line 1075
 *   +0x006c -> line 1076
 *   +0x00ac -> line 1080
 *   +0x00b4 -> line 1082
 *   +0x00bc -> line 1083
 *   +0x00c4 -> line 1084
 *   +0x00dc -> line 1085
 *   +0x0118 -> line 1089
 *   +0x0120 -> line 1091
 *   +0x0128 -> line 1093
 *   +0x0130 -> line 1095
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessPSX_FX(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 1047–1056 */
/* addr: 0x002e8390  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1048
 *   +0x0004 -> line 1051
 *   +0x0008 -> line 1048
 *   +0x000c -> line 1047
 *   +0x0010 -> line 1049
 *   +0x0018 -> line 1052
 *   +0x0020 -> line 1053
 *   +0x0028 -> line 1050
 *   +0x0030 -> line 1054
 *   +0x0038 -> line 1051
 *   +0x0040 -> line 1055
 *   +0x0044 -> line 1056
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vCreateWaterEffect(unsigned int Type, float X1, float Y1, float X2, float Y2, float Z)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 982–982 */
/* addr: 0x002e83e0  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 982
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetWaterDeformation(int Val)
{
    GLI_g_bFullScreenWaterEffect = (unsigned int)Val;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 976–977 */
/* addr: 0x002e83f0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 976
 *   +0x0004 -> line 977
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ActivateOldMovieEffect(void)
{
    GLI_g_OldMovieEffect = 1;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 965–972 */
/* addr: 0x002e8400  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 965
 *   +0x0004 -> line 966
 *   +0x0008 -> line 967
 *   +0x000c -> line 968
 *   +0x0010 -> line 969
 *   +0x0014 -> line 970
 *   +0x0018 -> line 972
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ReinitOldMovieEffect(void)
{
    AGO_g_OldMovieMaterial = 0;
    GLI_g_OldMovieEffect = 0;
    GLI_g_MirrorAfterEffect = 0;
    GLI_g_bFullScreenWaterEffect = 0;
    GLI_g_AfterEffect = 0;
    GLI_g_MotionBlurIntensity = 0;
    g_bHasWaterEffect = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 941–955 */
/* addr: 0x002e8420  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 941
 *   +0x0004 -> line 942
 *   +0x0008 -> line 941
 *   +0x000c -> line 942
 *   +0x0018 -> line 946
 *   +0x0020 -> line 955
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_BlackAndWhite(void);

void ProcessOldMovieEffect(void)
{
    if (GLI_g_OldMovieEffect == 1)
        AE_BlackAndWhite();
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 760–925 */
/* addr: 0x002e8450  size: 2612 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 761
 *   +0x0004 -> line 760
 *   +0x0008 -> line 761
 *   +0x000c -> line 760
 *   +0x0014 -> line 761
 *   +0x001c -> line 760
 *   +0x0024 -> line 761
 *   +0x0030 -> line 763
 *   +0x0034 -> line 761
 *   +0x0038 -> line 763
 *   +0x0048 -> line 764
 *   +0x006c -> line 765
 *   +0x0070 -> line 764
 *   +0x00d8 -> line 765
 *   +0x00e0 -> line 766
 *   +0x00f8 -> line 767
 *   +0x00fc -> line 766
 *   +0x0134 -> line 767
 *   +0x013c -> line 768
 *   +0x0144 -> line 770
 *   +0x014c -> line 772
 *   +0x0154 -> line 774
 *   +0x015c -> line 778
 *   +0x0170 -> line 782
 *   +0x0178 -> line 785
 *   +0x017c -> line 786
 *   +0x0180 -> line 785
 *   +0x018c -> line 786
 *   +0x0190 -> line 785
 *   +0x0194 -> line 786
 *   +0x0198 -> line 785
 *   +0x01ac -> line 787
 *   +0x01b0 -> line 785
 *   +0x01bc -> line 786
 *   +0x01c0 -> line 788
 *   +0x01c4 -> line 785
 *   +0x01d0 -> line 788
 *   +0x01d4 -> line 786
 *   +0x01d8 -> line 785
 *   +0x01dc -> line 786
 *   +0x01e0 -> line 785
 *   +0x01ec -> line 786
 *   +0x01f0 -> line 785
 *   +0x0208 -> line 786
 *   +0x020c -> line 789
 *   +0x0210 -> line 786
 *   +0x0214 -> line 789
 *   +0x0218 -> line 786
 *   +0x021c -> line 789
 *   +0x0220 -> line 786
 *   +0x0224 -> line 785
 *   +0x0228 -> line 789
 *   +0x0230 -> line 785
 *   +0x0238 -> line 786
 *   +0x0248 -> line 785
 *   +0x0250 -> line 786
 *   +0x025c -> line 789
 *   +0x0260 -> line 786
 *   +0x0278 -> line 787
 *   +0x0280 -> line 788
 *   +0x0284 -> line 787
 *   +0x0288 -> line 788
 *   +0x02a8 -> line 787
 *   +0x02ac -> line 788
 *   +0x02b0 -> line 787
 *   +0x02b4 -> line 788
 *   +0x02cc -> line 789
 *   +0x02d4 -> line 791
 *   +0x02e8 -> line 792
 *   +0x02f0 -> line 793
 *   +0x0330 -> line 795
 *   +0x033c -> line 796
 *   +0x0350 -> line 797
 *   +0x0360 -> line 799
 *   +0x036c -> line 800
 *   +0x037c -> line 801
 *   +0x0390 -> line 803
 *   +0x0398 -> line 808
 *   +0x039c -> line 809
 *   +0x03a0 -> line 808
 *   +0x03a4 -> line 809
 *   +0x03ac -> line 808
 *   +0x03b0 -> line 809
 *   +0x03b4 -> line 808
 *   +0x03c0 -> line 809
 *   +0x03c4 -> line 808
 *   +0x03d0 -> line 809
 *   +0x03d4 -> line 808
 *   +0x0400 -> line 809
 *   +0x0408 -> line 812
 *   +0x0438 -> line 814
 *   +0x044c -> line 815
 *   +0x046c -> line 817
 *   +0x0474 -> line 818
 *   +0x0488 -> line 819
 *   +0x0494 -> line 820
 *   +0x04b0 -> line 821
 *   +0x04c0 -> line 822
 *   +0x04cc -> line 823
 *   +0x04dc -> line 824
 *   +0x04ec -> line 825
 *   +0x04f4 -> line 828
 *   +0x04f8 -> line 829
 *   +0x04fc -> line 828
 *   +0x0500 -> line 829
 *   +0x0508 -> line 828
 *   +0x050c -> line 829
 *   +0x0510 -> line 828
 *   +0x051c -> line 829
 *   +0x0524 -> line 828
 *   +0x055c -> line 829
 *   +0x0564 -> line 831
 *   +0x0598 -> line 841
 *   +0x059c -> line 836
 *   +0x05a0 -> line 841
 *   +0x05b4 -> line 836
 *   +0x05bc -> line 841
 *   +0x05c4 -> line 843
 *   +0x05d8 -> line 844
 *   +0x05ec -> line 848
 *   +0x05f8 -> line 850
 *   +0x061c -> line 851
 *   +0x0620 -> line 850
 *   +0x0688 -> line 851
 *   +0x0690 -> line 852
 *   +0x0694 -> line 854
 *   +0x0698 -> line 852
 *   +0x069c -> line 854
 *   +0x06a4 -> line 852
 *   +0x06a8 -> line 854
 *   +0x06ac -> line 852
 *   +0x06b8 -> line 854
 *   +0x06c0 -> line 852
 *   +0x06f8 -> line 854
 *   +0x0700 -> line 856
 *   +0x0708 -> line 857
 *   +0x0728 -> line 859
 *   +0x0734 -> line 860
 *   +0x0740 -> line 861
 *   +0x0754 -> line 862
 *   +0x0768 -> line 863
 *   +0x0788 -> line 864
 *   +0x0798 -> line 866
 *   +0x07a4 -> line 867
 *   +0x07b0 -> line 868
 *   +0x07d0 -> line 869
 *   +0x07e0 -> line 870
 *   +0x07f4 -> line 871
 *   +0x0808 -> line 873
 *   +0x0810 -> line 876
 *   +0x0824 -> line 877
 *   +0x0838 -> line 879
 *   +0x083c -> line 880
 *   +0x0840 -> line 879
 *   +0x0844 -> line 880
 *   +0x084c -> line 879
 *   +0x0850 -> line 880
 *   +0x0854 -> line 879
 *   +0x0860 -> line 877
 *   +0x0864 -> line 880
 *   +0x0868 -> line 879
 *   +0x08a4 -> line 880
 *   +0x08ac -> line 882
 *   +0x08b4 -> line 883
 *   +0x08d4 -> line 885
 *   +0x08e0 -> line 886
 *   +0x08ec -> line 887
 *   +0x0900 -> line 888
 *   +0x0914 -> line 889
 *   +0x0934 -> line 890
 *   +0x0944 -> line 892
 *   +0x0950 -> line 893
 *   +0x095c -> line 894
 *   +0x097c -> line 895
 *   +0x098c -> line 896
 *   +0x09a0 -> line 897
 *   +0x09b4 -> line 899
 *   +0x09bc -> line 901
 *   +0x0a18 -> line 925
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_BlackAndWhite(void)
{
    float startV;
    float startU;
    float xx2;
    float x;
    float xx;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 608–671 */
/* addr: 0x002e8e90  size: 708 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 608
 *   +0x0008 -> line 609
 *   +0x0014 -> line 611
 *   +0x0020 -> line 613
 *   +0x0028 -> line 615
 *   +0x0038 -> line 617
 *   +0x0040 -> line 618
 *   +0x0048 -> line 619
 *   +0x0050 -> line 620
 *   +0x0058 -> line 622
 *   +0x0078 -> line 624
 *   +0x0090 -> line 625
 *   +0x0098 -> line 626
 *   +0x00b0 -> line 627
 *   +0x00b8 -> line 628
 *   +0x00c0 -> line 629
 *   +0x00c8 -> line 630
 *   +0x00e0 -> line 632
 *   +0x00f4 -> line 633
 *   +0x00fc -> line 634
 *   +0x0114 -> line 635
 *   +0x011c -> line 636
 *   +0x0124 -> line 637
 *   +0x0140 -> line 639
 *   +0x0158 -> line 640
 *   +0x0160 -> line 641
 *   +0x0178 -> line 642
 *   +0x0180 -> line 643
 *   +0x0188 -> line 644
 *   +0x01a0 -> line 646
 *   +0x01a8 -> line 647
 *   +0x01b0 -> line 648
 *   +0x01c8 -> line 649
 *   +0x01d0 -> line 650
 *   +0x01d8 -> line 651
 *   +0x01e0 -> line 654
 *   +0x01e8 -> line 655
 *   +0x01f0 -> line 656
 *   +0x0208 -> line 657
 *   +0x0260 -> line 658
 *   +0x0268 -> line 661
 *   +0x0278 -> line 663
 *   +0x0298 -> line 664
 *   +0x02a0 -> line 667
 *   +0x02b0 -> line 669
 *   +0x02b8 -> line 671
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vProcessMirrorAfterEffect(void)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 585–585 */
/* addr: 0x002e9160  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLIPS2_vSetMirrorBlur(void)
{
    GLI_g_MirrorAfterEffect = 0;
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 401–483 */
/* addr: 0x002e9170  size: 980 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 401
 *   +0x001c -> line 402
 *   +0x0028 -> line 405
 *   +0x0044 -> line 407
 *   +0x0058 -> line 408
 *   +0x006c -> line 414
 *   +0x0074 -> line 416
 *   +0x0090 -> line 418
 *   +0x00c0 -> line 420
 *   +0x00d8 -> line 423
 *   +0x00e0 -> line 424
 *   +0x00f8 -> line 425
 *   +0x0104 -> line 426
 *   +0x0120 -> line 427
 *   +0x0130 -> line 428
 *   +0x013c -> line 429
 *   +0x014c -> line 430
 *   +0x015c -> line 431
 *   +0x0164 -> line 434
 *   +0x0178 -> line 436
 *   +0x0180 -> line 438
 *   +0x0188 -> line 442
 *   +0x01a4 -> line 444
 *   +0x01ac -> line 445
 *   +0x01d0 -> line 447
 *   +0x01dc -> line 448
 *   +0x01e8 -> line 449
 *   +0x01fc -> line 450
 *   +0x0210 -> line 451
 *   +0x0230 -> line 452
 *   +0x0240 -> line 454
 *   +0x024c -> line 455
 *   +0x0258 -> line 456
 *   +0x0278 -> line 457
 *   +0x0288 -> line 458
 *   +0x029c -> line 459
 *   +0x02b0 -> line 461
 *   +0x02c8 -> line 463
 *   +0x02d4 -> line 464
 *   +0x02e8 -> line 465
 *   +0x0300 -> line 466
 *   +0x030c -> line 467
 *   +0x0324 -> line 468
 *   +0x0338 -> line 470
 *   +0x034c -> line 471
 *   +0x0364 -> line 472
 *   +0x0374 -> line 473
 *   +0x0388 -> line 474
 *   +0x0398 -> line 475
 *   +0x03ac -> line 477
 *   +0x03b4 -> line 483
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void ProcessOldTV(void)
{
    float x;
    float Lum;
    float startV;
    float startU;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 375–395 */
/* addr: 0x002e9550  size: 268 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 375
 *   +0x0008 -> line 378
 *   +0x0010 -> line 380
 *   +0x0018 -> line 381
 *   +0x0020 -> line 382
 *   +0x0038 -> line 385
 *   +0x0068 -> line 386
 *   +0x0070 -> line 385
 *   +0x0074 -> line 386
 *   +0x0090 -> line 391
 *   +0x0098 -> line 386
 *   +0x009c -> line 391
 *   +0x00a0 -> line 386
 *   +0x00a4 -> line 391
 *   +0x00a8 -> line 386
 *   +0x00ac -> line 391
 *   +0x00bc -> line 386
 *   +0x00c0 -> line 391
 *   +0x00f8 -> line 394
 *   +0x0100 -> line 395
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_Filter_BlurUsingDestAlpha2(void)
{
    float dx;
    float dy;
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\TEMPGRP\GliGlou\Drivers\PS2GL\Src\SFX\u_effects.c lines 213–228 */
/* addr: 0x002e9660  size: 288 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 213
 *   +0x0004 -> line 214
 *   +0x0008 -> line 213
 *   +0x000c -> line 214
 *   +0x0058 -> line 215
 *   +0x0060 -> line 217
 *   +0x0074 -> line 218
 *   +0x007c -> line 219
 *   +0x0084 -> line 221
 *   +0x008c -> line 222
 *   +0x0094 -> line 223
 *   +0x00ac -> line 225
 *   +0x010c -> line 227
 *   +0x0114 -> line 228
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void GLI_vReduceBackBufferTo256x256(void)
{
    /* TODO: decompile from asm/... */
}
