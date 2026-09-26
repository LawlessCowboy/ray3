/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_0 anon_0;
typedef struct tag_stVU1MatriceL tag_stVU1MatriceL;
typedef struct tagListData tagListData;
typedef struct _sceDmaTag _sceDmaTag;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_40 anon_40;
typedef struct anon_5 anon_5;
typedef struct anon_20 anon_20;
typedef struct anon_24 anon_24;
typedef struct anon_36 anon_36;
typedef struct anon_35 anon_35;
typedef struct anon_32 anon_32;
typedef struct anon_19 anon_19;
typedef struct anon_11 anon_11;
typedef struct anon_39 anon_39;
typedef struct anon_41 anon_41;
typedef struct anon_28 anon_28;
typedef struct anon_2 anon_2;
typedef struct anon_42 anon_42;
typedef struct anon_7 anon_7;
typedef struct anon_9 anon_9;
typedef struct anon_25 anon_25;
typedef struct anon_34 anon_34;
typedef struct anon_1 anon_1;
typedef struct anon_14 anon_14;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_13 anon_13;
typedef struct anon_3 anon_3;
typedef struct anon_30 anon_30;
typedef struct anon_4 anon_4;
typedef struct anon_27 anon_27;
typedef struct anon_22 anon_22;
typedef struct anon_38 anon_38;
typedef struct anon_6 anon_6;
typedef struct anon_17 anon_17;
typedef struct anon_37 anon_37;
typedef struct anon_10 anon_10;
typedef struct anon_16 anon_16;
typedef struct anon_21 anon_21;
typedef struct anon_15 anon_15;
typedef struct anon_18 anon_18;
typedef struct anon_23 anon_23;
typedef struct anon_33 anon_33;
typedef union anon_31 anon_31;
typedef struct tagGScontext tagGScontext;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagListNode tagListNode;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct anon_12 anon_12;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tag_stVU1Parameters tag_stVU1Parameters;
typedef struct anon_8 anon_8;
typedef struct tagGLtexname tagGLtexname;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tagListVertexBuffer tagListVertexBuffer;
typedef struct tagPS2glApiTable tagPS2glApiTable;
typedef struct tag_stMultiTextureParameters tag_stMultiTextureParameters;
typedef struct anon_26 anon_26;
typedef struct anon_29 anon_29;
typedef struct tag_stVU1MatriceTinSDL tag_stVU1MatriceTinSDL;
typedef struct tag_stVU1MatriceT tag_stVU1MatriceT;
typedef struct tagstVIFCode tagstVIFCode;

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

struct anon_0 {
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

struct tag_stVU1MatriceL {
    int ivUnpackCode[4]; /* +0x0 */
    float mDiffuseLightColor[4][4]; /* +0x10 */
    float mDiffuseLightPosition[4][4]; /* +0x50 */
    float mSpecularLightColor[4][4]; /* +0x90 */
    float mSpecularLightReflection[4][4]; /* +0xd0 */
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct anon_40 {
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

struct anon_5 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_20 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_24 {
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

struct anon_32 {
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

struct anon_19 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_11 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_39 {
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

struct anon_41 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_28 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_2 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_42 {
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

struct anon_7 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_9 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_25 {
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

struct anon_1 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_14 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_13 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_3 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_30 {
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

struct anon_4 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_27 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_22 {
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

struct anon_38 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_6 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_17 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_37 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_10 {
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

struct anon_16 {
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

struct anon_21 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_15 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_18 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_23 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_33 {
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

union anon_31 {
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

struct tagGScontext {
    anon_40 PRIM; /* +0x0 */
    anon_5 RGBAQ; /* +0x8 */
    anon_20 ST; /* +0x10 */
    anon_24 UV; /* +0x18 */
    anon_36 XYZF2; /* +0x20 */
    anon_35 XYZ2; /* +0x28 */
    anon_32 TEX0_1; /* +0x30 */
    anon_32 TEX0_2; /* +0x38 */
    anon_19 CLAMP_1; /* +0x40 */
    anon_19 CLAMP_2; /* +0x48 */
    anon_11 FOG; /* +0x50 */
    anon_36 XYZF3; /* +0x58 */
    anon_35 XYZ3; /* +0x60 */
    anon_39 TEX1_1; /* +0x68 */
    anon_39 TEX1_2; /* +0x70 */
    anon_41 TEX2_1; /* +0x78 */
    anon_41 TEX2_2; /* +0x80 */
    anon_28 XYOFFSET_1; /* +0x88 */
    anon_28 XYOFFSET_2; /* +0x90 */
    anon_2 PRMODECONT; /* +0x98 */
    anon_42 PRMODE; /* +0xa0 */
    anon_7 TEXCLUT; /* +0xa8 */
    anon_9 SCANMSK; /* +0xb0 */
    anon_25 MIPTBP1_1; /* +0xb8 */
    anon_25 MIPTBP1_2; /* +0xc0 */
    anon_34 MIPTBP2_1; /* +0xc8 */
    anon_34 MIPTBP2_2; /* +0xd0 */
    anon_1 TEXA; /* +0xd8 */
    anon_14 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_13 SCISSOR_1; /* +0xf0 */
    anon_13 SCISSOR_2; /* +0xf8 */
    anon_3 ALPHA_1; /* +0x100 */
    anon_3 ALPHA_2; /* +0x108 */
    anon_30 DIMX; /* +0x110 */
    anon_4 DTHE; /* +0x118 */
    anon_27 COLCLAMP; /* +0x120 */
    anon_22 TEST_1; /* +0x128 */
    anon_22 TEST_2; /* +0x130 */
    anon_38 PABE; /* +0x138 */
    anon_6 FBA_1; /* +0x140 */
    anon_6 FBA_2; /* +0x148 */
    anon_17 FRAME_1; /* +0x150 */
    anon_17 FRAME_2; /* +0x158 */
    anon_37 ZBUF_1; /* +0x160 */
    anon_37 ZBUF_2; /* +0x168 */
    anon_10 BITBLTBUF; /* +0x170 */
    anon_16 TRXPOS; /* +0x178 */
    anon_21 TRXREG; /* +0x180 */
    anon_15 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_18 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_23 LABEL; /* +0x1a8 */
    anon_33 ModFlgs; /* +0x1b0 */
    anon_33 GlobalModFlgs; /* +0x1b8 */
    anon_31 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_31* pqCurrent; /* +0x2224 */
    anon_0* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
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
    anon_0 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
};

struct tagGsLoadImage {
    anon_0 gifTag; /* +0x0 */
    anon_10 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_16 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_21 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_15 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
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

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
};

struct anon_12 {
    unsigned long pad00; /* +0x0 */
};

struct tagGsSetTex {
    anon_0 gifTag; /* +0x0 */
    anon_12 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_32 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_39 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_25 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_34 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_19 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct tag_stVU1Parameters {
    int tagDMA[4]; /* +0x0 */
    int ivUnpackCode[4]; /* +0x10 */
    float vAmbient[4]; /* +0x20 */
    float vScreenScale[4]; /* +0x30 */
    float vScreenOrg[4]; /* +0x40 */
    float vColorRange[4]; /* +0x50 */
    float fAlpha; /* +0x60 */
    float fShininess; /* +0x64 */
    unsigned int nColorMatMasks; /* +0x68 */
    unsigned int bFogging; /* +0x6c */
    unsigned int eFogMode; /* +0x70 */
    float fFogDensity; /* +0x74 */
    float fFogLinearStart; /* +0x78 */
    float fFogLinearEnd; /* +0x7c */
    unsigned int bTriangleFan; /* +0x80 */
    unsigned int uiClippingMask; /* +0x84 */
    unsigned int uiClippingStep; /* +0x88 */
    unsigned int bAutoNormalize; /* +0x8c */
    unsigned int uiNurbsReturnAddr; /* +0x90 */
    unsigned int ui_TandL_Entrance; /* +0x94 */
    unsigned int uiNurbsRowCount; /* +0x98 */
    unsigned int eClippingMode; /* +0x9c */
};

struct anon_8 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
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
    anon_8* pCurParamBegin; /* +0x5ce8 */
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
    float ViewPort[4]; /* +0x6090 */
    float DepthRange[2]; /* +0x60a0 */
    float vacurColor[2][4]; /* +0x60b0 */
    float (*pvcurColor)[4]; /* +0x60d0 */
    unsigned char _extractor_padding_03[12]; /* implicitly added by extractor; +0x60d4..0x60df */
    float vcurNormal[4]; /* +0x60e0 */
    float vacurTexCoords[2][4]; /* +0x60f0 */
    unsigned int iCurTextureSet; /* +0x6110 */
    float (*pvcurTextCoord)[4]; /* +0x6114 */
    unsigned char bFinalCompile; /* +0x6118 */
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
    anon_0* pGifTagFan; /* +0x6bf8 */
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
    anon_0* pGifTagBuf0; /* +0x6c5c */
    anon_0* pGifTagBuf1; /* +0x6c60 */
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

struct tagListVertexBuffer {
    float avData[256][4]; /* +0x0 */
    unsigned char abCode[256]; /* +0x1000 */
    unsigned int aeTexUnit[256]; /* +0x1100 */
    unsigned int nCount; /* +0x1500 */
};

struct tagPS2glApiTable {
    void (*pfn_PS2glAccum)(unsigned int, float); /* +0x0 */
    void (*pfn_PS2glAlphaFunc)(unsigned int, float); /* +0x4 */
    unsigned char (*pfn_PS2glAreTexturesResident)(int, unsigned int*, unsigned char*); /* +0x8 */
    void (*pfn_PS2glArrayElement)(int); /* +0xc */
    void (*pfn_PS2glBegin)(unsigned int); /* +0x10 */
    void (*pfn_PS2glBindTexture)(unsigned int, unsigned int); /* +0x14 */
    void (*pfn_PS2glBitmap)(int, int, float, float, float, float, unsigned char*); /* +0x18 */
    void (*pfn_PS2glBlendFunc)(unsigned int, unsigned int); /* +0x1c */
    void (*pfn_PS2glCallList)(unsigned int); /* +0x20 */
    void (*pfn_PS2glCallLists)(int, unsigned int, void*); /* +0x24 */
    void (*pfn_PS2glClear)(unsigned int); /* +0x28 */
    void (*pfn_PS2glClearAccum)(float, float, float, float); /* +0x2c */
    void (*pfn_PS2glClearColor)(float, float, float, float); /* +0x30 */
    void (*pfn_PS2glClearDepth)(double); /* +0x34 */
    void (*pfn_PS2glClearIndex)(float); /* +0x38 */
    void (*pfn_PS2glClearStencil)(int); /* +0x3c */
    void (*pfn_PS2glClipPlane)(unsigned int, double*); /* +0x40 */
    void (*pfn_PS2glColor3b)(signed char, signed char, signed char); /* +0x44 */
    void (*pfn_PS2glColor3bv)(signed char*); /* +0x48 */
    void (*pfn_PS2glColor3d)(double, double, double); /* +0x4c */
    void (*pfn_PS2glColor3dv)(double*); /* +0x50 */
    void (*pfn_PS2glColor3f)(float, float, float); /* +0x54 */
    void (*pfn_PS2glColor3fv)(float*); /* +0x58 */
    void (*pfn_PS2glColor3i)(int, int, int); /* +0x5c */
    void (*pfn_PS2glColor3iv)(int*); /* +0x60 */
    void (*pfn_PS2glColor3s)(short, short, short); /* +0x64 */
    void (*pfn_PS2glColor3sv)(short*); /* +0x68 */
    void (*pfn_PS2glColor3ub)(unsigned char, unsigned char, unsigned char); /* +0x6c */
    void (*pfn_PS2glColor3ubv)(unsigned char*); /* +0x70 */
    void (*pfn_PS2glColor3ui)(unsigned int, unsigned int, unsigned int); /* +0x74 */
    void (*pfn_PS2glColor3uiv)(unsigned int*); /* +0x78 */
    void (*pfn_PS2glColor3us)(unsigned short, unsigned short, unsigned short); /* +0x7c */
    void (*pfn_PS2glColor3usv)(unsigned short*); /* +0x80 */
    void (*pfn_PS2glColor4b)(signed char, signed char, signed char, signed char); /* +0x84 */
    void (*pfn_PS2glColor4bv)(signed char*); /* +0x88 */
    void (*pfn_PS2glColor4d)(double, double, double, double); /* +0x8c */
    void (*pfn_PS2glColor4dv)(double*); /* +0x90 */
    void (*pfn_PS2glColor4f)(float, float, float, float); /* +0x94 */
    void (*pfn_PS2glColor4fv)(float*); /* +0x98 */
    void (*pfn_PS2glColor4i)(int, int, int, int); /* +0x9c */
    void (*pfn_PS2glColor4iv)(int*); /* +0xa0 */
    void (*pfn_PS2glColor4s)(short, short, short, short); /* +0xa4 */
    void (*pfn_PS2glColor4sv)(short*); /* +0xa8 */
    void (*pfn_PS2glColor4ub)(unsigned char, unsigned char, unsigned char, unsigned char); /* +0xac */
    void (*pfn_PS2glColor4ubv)(unsigned char*); /* +0xb0 */
    void (*pfn_PS2glColor4ui)(unsigned int, unsigned int, unsigned int, unsigned int); /* +0xb4 */
    void (*pfn_PS2glColor4uiv)(unsigned int*); /* +0xb8 */
    void (*pfn_PS2glColor4us)(unsigned short, unsigned short, unsigned short, unsigned short); /* +0xbc */
    void (*pfn_PS2glColor4usv)(unsigned short*); /* +0xc0 */
    void (*pfn_PS2glColorMask)(unsigned char, unsigned char, unsigned char, unsigned char); /* +0xc4 */
    void (*pfn_PS2glColorMaterial)(unsigned int, unsigned int); /* +0xc8 */
    void (*pfn_PS2glColorPointer)(int, unsigned int, int, void*); /* +0xcc */
    void (*pfn_PS2glCopyPixels)(int, int, int, int, unsigned int); /* +0xd0 */
    void (*pfn_PS2glCopyTexImage1D)(unsigned int, int, unsigned int, int, int, int, int); /* +0xd4 */
    void (*pfn_PS2glCopyTexImage2D)(unsigned int, int, unsigned int, int, int, int, int, int); /* +0xd8 */
    void (*pfn_PS2glCopyTexSubImage1D)(unsigned int, int, int, int, int, int); /* +0xdc */
    void (*pfn_PS2glCopyTexSubImage2D)(unsigned int, int, int, int, int, int, int, int); /* +0xe0 */
    void (*pfn_PS2glCullFace)(unsigned int); /* +0xe4 */
    void (*pfn_PS2glDeleteLists)(unsigned int, int); /* +0xe8 */
    void (*pfn_PS2glDeleteTextures)(int, unsigned int*); /* +0xec */
    void (*pfn_PS2glDepthFunc)(unsigned int); /* +0xf0 */
    void (*pfn_PS2glDepthMask)(unsigned char); /* +0xf4 */
    void (*pfn_PS2glDepthRange)(double, double); /* +0xf8 */
    void (*pfn_PS2glDisable)(unsigned int); /* +0xfc */
    void (*pfn_PS2glDisableClientState)(unsigned int); /* +0x100 */
    void (*pfn_PS2glDrawArrays)(unsigned int, int, int); /* +0x104 */
    void (*pfn_PS2glDrawBuffer)(unsigned int); /* +0x108 */
    void (*pfn_PS2glDrawElements)(unsigned int, int, unsigned int, void*); /* +0x10c */
    void (*pfn_PS2glDrawPixels)(int, int, unsigned int, unsigned int, void*); /* +0x110 */
    void (*pfn_PS2glEdgeFlag)(unsigned char); /* +0x114 */
    void (*pfn_PS2glEdgeFlagPointer)(int, void*); /* +0x118 */
    void (*pfn_PS2glEdgeFlagv)(unsigned char*); /* +0x11c */
    void (*pfn_PS2glEnable)(unsigned int); /* +0x120 */
    void (*pfn_PS2glEnableClientState)(unsigned int); /* +0x124 */
    void (*pfn_PS2glEnd)(void); /* +0x128 */
    void (*pfn_PS2glEndList)(void); /* +0x12c */
    void (*pfn_PS2glEvalCoord1d)(double); /* +0x130 */
    void (*pfn_PS2glEvalCoord1dv)(double*); /* +0x134 */
    void (*pfn_PS2glEvalCoord1f)(float); /* +0x138 */
    void (*pfn_PS2glEvalCoord1fv)(float*); /* +0x13c */
    void (*pfn_PS2glEvalCoord2d)(double, double); /* +0x140 */
    void (*pfn_PS2glEvalCoord2dv)(double*); /* +0x144 */
    void (*pfn_PS2glEvalCoord2f)(float, float); /* +0x148 */
    void (*pfn_PS2glEvalCoord2fv)(float*); /* +0x14c */
    void (*pfn_PS2glEvalMesh1)(unsigned int, int, int); /* +0x150 */
    void (*pfn_PS2glEvalMesh2)(unsigned int, int, int, int, int); /* +0x154 */
    void (*pfn_PS2glEvalPoint1)(int); /* +0x158 */
    void (*pfn_PS2glEvalPoint2)(int, int); /* +0x15c */
    void (*pfn_PS2glFeedbackBuffer)(int, unsigned int, float*); /* +0x160 */
    void (*pfn_PS2glFinish)(void); /* +0x164 */
    void (*pfn_PS2glFlush)(void); /* +0x168 */
    void (*pfn_PS2glFogf)(unsigned int, float); /* +0x16c */
    void (*pfn_PS2glFogfv)(unsigned int, float*); /* +0x170 */
    void (*pfn_PS2glFogi)(unsigned int, int); /* +0x174 */
    void (*pfn_PS2glFogiv)(unsigned int, int*); /* +0x178 */
    void (*pfn_PS2glFrontFace)(unsigned int); /* +0x17c */
    void (*pfn_PS2glFrustum)(double, double, double, double, double, double); /* +0x180 */
    unsigned int (*pfn_PS2glGenLists)(int); /* +0x184 */
    void (*pfn_PS2glGenTextures)(int, unsigned int*); /* +0x188 */
    void (*pfn_PS2glGetBooleanv)(unsigned int, unsigned char*); /* +0x18c */
    void (*pfn_PS2glGetClipPlane)(unsigned int, double*); /* +0x190 */
    void (*pfn_PS2glGetDoublev)(unsigned int, double*); /* +0x194 */
    unsigned int (*pfn_PS2glGetError)(void); /* +0x198 */
    void (*pfn_PS2glGetFloatv)(unsigned int, float*); /* +0x19c */
    void (*pfn_PS2glGetIntegerv)(unsigned int, int*); /* +0x1a0 */
    void (*pfn_PS2glGetLightfv)(unsigned int, unsigned int, float*); /* +0x1a4 */
    void (*pfn_PS2glGetLightiv)(unsigned int, unsigned int, int*); /* +0x1a8 */
    void (*pfn_PS2glGetMapdv)(unsigned int, unsigned int, double*); /* +0x1ac */
    void (*pfn_PS2glGetMapfv)(unsigned int, unsigned int, float*); /* +0x1b0 */
    void (*pfn_PS2glGetMapiv)(unsigned int, unsigned int, int*); /* +0x1b4 */
    void (*pfn_PS2glGetMaterialfv)(unsigned int, unsigned int, float*); /* +0x1b8 */
    void (*pfn_PS2glGetMaterialiv)(unsigned int, unsigned int, int*); /* +0x1bc */
    void (*pfn_PS2glGetPixelMapfv)(unsigned int, float*); /* +0x1c0 */
    void (*pfn_PS2glGetPixelMapuiv)(unsigned int, unsigned int*); /* +0x1c4 */
    void (*pfn_PS2glGetPixelMapusv)(unsigned int, unsigned short*); /* +0x1c8 */
    void (*pfn_PS2glGetPointerv)(unsigned int, char**); /* +0x1cc */
    void (*pfn_PS2glGetPolygonStipple)(unsigned char*); /* +0x1d0 */
    unsigned char* (*pfn_PS2glGetString)(unsigned int); /* +0x1d4 */
    void (*pfn_PS2glGetTexEnvfv)(unsigned int, unsigned int, float*); /* +0x1d8 */
    void (*pfn_PS2glGetTexEnviv)(unsigned int, unsigned int, int*); /* +0x1dc */
    void (*pfn_PS2glGetTexGendv)(unsigned int, unsigned int, double*); /* +0x1e0 */
    void (*pfn_PS2glGetTexGenfv)(unsigned int, unsigned int, float*); /* +0x1e4 */
    void (*pfn_PS2glGetTexGeniv)(unsigned int, unsigned int, int*); /* +0x1e8 */
    void (*pfn_PS2glGetTexImage)(unsigned int, int, unsigned int, unsigned int, void*); /* +0x1ec */
    void (*pfn_PS2glGetTexLevelParameterfv)(unsigned int, int, unsigned int, float*); /* +0x1f0 */
    void (*pfn_PS2glGetTexLevelParameteriv)(unsigned int, int, unsigned int, int*); /* +0x1f4 */
    void (*pfn_PS2glGetTexParameterfv)(unsigned int, unsigned int, float*); /* +0x1f8 */
    void (*pfn_PS2glGetTexParameteriv)(unsigned int, unsigned int, int*); /* +0x1fc */
    void (*pfn_PS2glHint)(unsigned int, unsigned int); /* +0x200 */
    void (*pfn_PS2glIndexMask)(unsigned int); /* +0x204 */
    void (*pfn_PS2glIndexPointer)(unsigned int, int, void*); /* +0x208 */
    void (*pfn_PS2glIndexd)(double); /* +0x20c */
    void (*pfn_PS2glIndexdv)(double*); /* +0x210 */
    void (*pfn_PS2glIndexf)(float); /* +0x214 */
    void (*pfn_PS2glIndexfv)(float*); /* +0x218 */
    void (*pfn_PS2glIndexi)(int); /* +0x21c */
    void (*pfn_PS2glIndexiv)(int*); /* +0x220 */
    void (*pfn_PS2glIndexs)(short); /* +0x224 */
    void (*pfn_PS2glIndexsv)(short*); /* +0x228 */
    void (*pfn_PS2glIndexub)(unsigned char); /* +0x22c */
    void (*pfn_PS2glIndexubv)(unsigned char*); /* +0x230 */
    void (*pfn_PS2glInitNames)(void); /* +0x234 */
    void (*pfn_PS2glInterleavedArrays)(unsigned int, int, void*); /* +0x238 */
    unsigned char (*pfn_PS2glIsEnabled)(unsigned int); /* +0x23c */
    unsigned char (*pfn_PS2glIsList)(unsigned int); /* +0x240 */
    unsigned char (*pfn_PS2glIsTexture)(unsigned int); /* +0x244 */
    void (*pfn_PS2glLightModelf)(unsigned int, float); /* +0x248 */
    void (*pfn_PS2glLightModelfv)(unsigned int, float*); /* +0x24c */
    void (*pfn_PS2glLightModeli)(unsigned int, int); /* +0x250 */
    void (*pfn_PS2glLightModeliv)(unsigned int, int*); /* +0x254 */
    void (*pfn_PS2glLightf)(unsigned int, unsigned int, float); /* +0x258 */
    void (*pfn_PS2glLightfv)(unsigned int, unsigned int, float*); /* +0x25c */
    void (*pfn_PS2glLighti)(unsigned int, unsigned int, int); /* +0x260 */
    void (*pfn_PS2glLightiv)(unsigned int, unsigned int, int*); /* +0x264 */
    void (*pfn_PS2glLineStipple)(int, unsigned short); /* +0x268 */
    void (*pfn_PS2glLineWidth)(float); /* +0x26c */
    void (*pfn_PS2glListBase)(unsigned int); /* +0x270 */
    void (*pfn_PS2glLoadIdentity)(void); /* +0x274 */
    void (*pfn_PS2glLoadMatrixd)(double*); /* +0x278 */
    void (*pfn_PS2glLoadMatrixf)(float*); /* +0x27c */
    void (*pfn_PS2glLoadName)(unsigned int); /* +0x280 */
    void (*pfn_PS2glLogicOp)(unsigned int); /* +0x284 */
    void (*pfn_PS2glMap1d)(unsigned int, double, double, int, int, double*); /* +0x288 */
    void (*pfn_PS2glMap1f)(unsigned int, float, float, int, int, float*); /* +0x28c */
    void (*pfn_PS2glMap2d)(unsigned int, double, double, int, int, double, double, int, int, double*); /* +0x290 */
    void (*pfn_PS2glMap2f)(unsigned int, float, float, int, int, float, float, int, int, float*); /* +0x294 */
    void (*pfn_PS2glMapGrid1d)(int, double, double); /* +0x298 */
    void (*pfn_PS2glMapGrid1f)(int, float, float); /* +0x29c */
    void (*pfn_PS2glMapGrid2d)(int, double, double, int, double, double); /* +0x2a0 */
    void (*pfn_PS2glMapGrid2f)(int, float, float, int, float, float); /* +0x2a4 */
    void (*pfn_PS2glMaterialf)(unsigned int, unsigned int, float); /* +0x2a8 */
    void (*pfn_PS2glMaterialfv)(unsigned int, unsigned int, float*); /* +0x2ac */
    void (*pfn_PS2glMateriali)(unsigned int, unsigned int, int); /* +0x2b0 */
    void (*pfn_PS2glMaterialiv)(unsigned int, unsigned int, int*); /* +0x2b4 */
    void (*pfn_PS2glMatrixMode)(unsigned int); /* +0x2b8 */
    void (*pfn_PS2glMultMatrixd)(double*); /* +0x2bc */
    void (*pfn_PS2glMultMatrixf)(float*); /* +0x2c0 */
    void (*pfn_PS2glNewList)(unsigned int, unsigned int); /* +0x2c4 */
    void (*pfn_PS2glNormal3b)(signed char, signed char, signed char); /* +0x2c8 */
    void (*pfn_PS2glNormal3bv)(signed char*); /* +0x2cc */
    void (*pfn_PS2glNormal3d)(double, double, double); /* +0x2d0 */
    void (*pfn_PS2glNormal3dv)(double*); /* +0x2d4 */
    void (*pfn_PS2glNormal3f)(float, float, float); /* +0x2d8 */
    void (*pfn_PS2glNormal3fv)(float*); /* +0x2dc */
    void (*pfn_PS2glNormal3i)(int, int, int); /* +0x2e0 */
    void (*pfn_PS2glNormal3iv)(int*); /* +0x2e4 */
    void (*pfn_PS2glNormal3s)(short, short, short); /* +0x2e8 */
    void (*pfn_PS2glNormal3sv)(short*); /* +0x2ec */
    void (*pfn_PS2glNormalPointer)(unsigned int, int, void*); /* +0x2f0 */
    void (*pfn_PS2glOrtho)(float, float, float, float, float, float); /* +0x2f4 */
    void (*pfn_PS2glPassThrough)(float); /* +0x2f8 */
    void (*pfn_PS2glPixelMapfv)(unsigned int, int, float*); /* +0x2fc */
    void (*pfn_PS2glPixelMapuiv)(unsigned int, int, unsigned int*); /* +0x300 */
    void (*pfn_PS2glPixelMapusv)(unsigned int, int, unsigned short*); /* +0x304 */
    void (*pfn_PS2glPixelStoref)(unsigned int, float); /* +0x308 */
    void (*pfn_PS2glPixelStorei)(unsigned int, int); /* +0x30c */
    void (*pfn_PS2glPixelTransferf)(unsigned int, float); /* +0x310 */
    void (*pfn_PS2glPixelTransferi)(unsigned int, int); /* +0x314 */
    void (*pfn_PS2glPixelZoom)(float, float); /* +0x318 */
    void (*pfn_PS2glPointSize)(float); /* +0x31c */
    void (*pfn_PS2glPolygonMode)(unsigned int, unsigned int); /* +0x320 */
    void (*pfn_PS2glPolygonOffset)(float, float); /* +0x324 */
    void (*pfn_PS2glPolygonStipple)(unsigned char*); /* +0x328 */
    void (*pfn_PS2glPopAttrib)(void); /* +0x32c */
    void (*pfn_PS2glPopClientAttrib)(void); /* +0x330 */
    void (*pfn_PS2glPopMatrix)(void); /* +0x334 */
    void (*pfn_PS2glPopName)(void); /* +0x338 */
    void (*pfn_PS2glPrioritizeTextures)(int, unsigned int*, float*); /* +0x33c */
    void (*pfn_PS2glPushAttrib)(unsigned int); /* +0x340 */
    void (*pfn_PS2glPushClientAttrib)(unsigned int); /* +0x344 */
    void (*pfn_PS2glPushMatrix)(void); /* +0x348 */
    void (*pfn_PS2glPushName)(unsigned int); /* +0x34c */
    void (*pfn_PS2glRasterPos2d)(double, double); /* +0x350 */
    void (*pfn_PS2glRasterPos2dv)(double*); /* +0x354 */
    void (*pfn_PS2glRasterPos2f)(float, float); /* +0x358 */
    void (*pfn_PS2glRasterPos2fv)(float*); /* +0x35c */
    void (*pfn_PS2glRasterPos2i)(int, int); /* +0x360 */
    void (*pfn_PS2glRasterPos2iv)(int*); /* +0x364 */
    void (*pfn_PS2glRasterPos2s)(short, short); /* +0x368 */
    void (*pfn_PS2glRasterPos2sv)(short*); /* +0x36c */
    void (*pfn_PS2glRasterPos3d)(double, double, double); /* +0x370 */
    void (*pfn_PS2glRasterPos3dv)(double*); /* +0x374 */
    void (*pfn_PS2glRasterPos3f)(float, float, float); /* +0x378 */
    void (*pfn_PS2glRasterPos3fv)(float*); /* +0x37c */
    void (*pfn_PS2glRasterPos3i)(int, int, int); /* +0x380 */
    void (*pfn_PS2glRasterPos3iv)(int*); /* +0x384 */
    void (*pfn_PS2glRasterPos3s)(short, short, short); /* +0x388 */
    void (*pfn_PS2glRasterPos3sv)(short*); /* +0x38c */
    void (*pfn_PS2glRasterPos4d)(double, double, double, double); /* +0x390 */
    void (*pfn_PS2glRasterPos4dv)(double*); /* +0x394 */
    void (*pfn_PS2glRasterPos4f)(float, float, float, float); /* +0x398 */
    void (*pfn_PS2glRasterPos4fv)(float*); /* +0x39c */
    void (*pfn_PS2glRasterPos4i)(int, int, int, int); /* +0x3a0 */
    void (*pfn_PS2glRasterPos4iv)(int*); /* +0x3a4 */
    void (*pfn_PS2glRasterPos4s)(short, short, short, short); /* +0x3a8 */
    void (*pfn_PS2glRasterPos4sv)(short*); /* +0x3ac */
    void (*pfn_PS2glReadBuffer)(unsigned int); /* +0x3b0 */
    void (*pfn_PS2glReadPixels)(int, int, int, int, unsigned int, unsigned int, void*); /* +0x3b4 */
    void (*pfn_PS2glRectd)(double, double, double, double); /* +0x3b8 */
    void (*pfn_PS2glRectdv)(double*, double*); /* +0x3bc */
    void (*pfn_PS2glRectf)(float, float, float, float); /* +0x3c0 */
    void (*pfn_PS2glRectfv)(float*, float*); /* +0x3c4 */
    void (*pfn_PS2glRecti)(int, int, int, int); /* +0x3c8 */
    void (*pfn_PS2glRectiv)(int*, int*); /* +0x3cc */
    void (*pfn_PS2glRects)(short, short, short, short); /* +0x3d0 */
    void (*pfn_PS2glRectsv)(short*, short*); /* +0x3d4 */
    int (*pfn_PS2glRenderMode)(unsigned int); /* +0x3d8 */
    void (*pfn_PS2glRotated)(double, double, double, double); /* +0x3dc */
    void (*pfn_PS2glRotatef)(float, float, float, float); /* +0x3e0 */
    void (*pfn_PS2glScaled)(double, double, double); /* +0x3e4 */
    void (*pfn_PS2glScalef)(float, float, float); /* +0x3e8 */
    void (*pfn_PS2glScissor)(int, int, int, int); /* +0x3ec */
    void (*pfn_PS2glSelectBuffer)(int, unsigned int*); /* +0x3f0 */
    void (*pfn_PS2glShadeModel)(unsigned int); /* +0x3f4 */
    void (*pfn_PS2glStencilFunc)(unsigned int, int, unsigned int); /* +0x3f8 */
    void (*pfn_PS2glStencilMask)(unsigned int); /* +0x3fc */
    void (*pfn_PS2glStencilOp)(unsigned int, unsigned int, unsigned int); /* +0x400 */
    void (*pfn_PS2glTexCoord1d)(double); /* +0x404 */
    void (*pfn_PS2glTexCoord1dv)(double*); /* +0x408 */
    void (*pfn_PS2glTexCoord1f)(float); /* +0x40c */
    void (*pfn_PS2glTexCoord1fv)(float*); /* +0x410 */
    void (*pfn_PS2glTexCoord1i)(int); /* +0x414 */
    void (*pfn_PS2glTexCoord1iv)(int*); /* +0x418 */
    void (*pfn_PS2glTexCoord1s)(short); /* +0x41c */
    void (*pfn_PS2glTexCoord1sv)(short*); /* +0x420 */
    void (*pfn_PS2glTexCoord2d)(double, double); /* +0x424 */
    void (*pfn_PS2glTexCoord2dv)(double*); /* +0x428 */
    void (*pfn_PS2glTexCoord2f)(float, float); /* +0x42c */
    void (*pfn_PS2glTexCoord2fv)(float*); /* +0x430 */
    void (*pfn_PS2glTexCoord2i)(int, int); /* +0x434 */
    void (*pfn_PS2glTexCoord2iv)(int*); /* +0x438 */
    void (*pfn_PS2glTexCoord2s)(short, short); /* +0x43c */
    void (*pfn_PS2glTexCoord2sv)(short*); /* +0x440 */
    void (*pfn_PS2glTexCoord3d)(double, double, double); /* +0x444 */
    void (*pfn_PS2glTexCoord3dv)(double*); /* +0x448 */
    void (*pfn_PS2glTexCoord3f)(float, float, float); /* +0x44c */
    void (*pfn_PS2glTexCoord3fv)(float*); /* +0x450 */
    void (*pfn_PS2glTexCoord3i)(int, int, int); /* +0x454 */
    void (*pfn_PS2glTexCoord3iv)(int*); /* +0x458 */
    void (*pfn_PS2glTexCoord3s)(short, short, short); /* +0x45c */
    void (*pfn_PS2glTexCoord3sv)(short*); /* +0x460 */
    void (*pfn_PS2glTexCoord4d)(double, double, double, double); /* +0x464 */
    void (*pfn_PS2glTexCoord4dv)(double*); /* +0x468 */
    void (*pfn_PS2glTexCoord4f)(float, float, float, float); /* +0x46c */
    void (*pfn_PS2glTexCoord4fv)(float*); /* +0x470 */
    void (*pfn_PS2glTexCoord4i)(int, int, int, int); /* +0x474 */
    void (*pfn_PS2glTexCoord4iv)(int*); /* +0x478 */
    void (*pfn_PS2glTexCoord4s)(short, short, short, short); /* +0x47c */
    void (*pfn_PS2glTexCoord4sv)(short*); /* +0x480 */
    void (*pfn_PS2glTexCoordPointer)(int, unsigned int, int, void*); /* +0x484 */
    void (*pfn_PS2glTexEnvf)(unsigned int, unsigned int, float); /* +0x488 */
    void (*pfn_PS2glTexEnvfv)(unsigned int, unsigned int, float*); /* +0x48c */
    void (*pfn_PS2glTexEnvi)(unsigned int, unsigned int, int); /* +0x490 */
    void (*pfn_PS2glTexEnviv)(unsigned int, unsigned int, int*); /* +0x494 */
    void (*pfn_PS2glTexGend)(unsigned int, unsigned int, double); /* +0x498 */
    void (*pfn_PS2glTexGendv)(unsigned int, unsigned int, double*); /* +0x49c */
    void (*pfn_PS2glTexGenf)(unsigned int, unsigned int, float); /* +0x4a0 */
    void (*pfn_PS2glTexGenfv)(unsigned int, unsigned int, float*); /* +0x4a4 */
    void (*pfn_PS2glTexGeni)(unsigned int, unsigned int, int); /* +0x4a8 */
    void (*pfn_PS2glTexGeniv)(unsigned int, unsigned int, int*); /* +0x4ac */
    void (*pfn_PS2glTexImage1D)(unsigned int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4b0 */
    void (*pfn_PS2glTexImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4b4 */
    void (*pfn_PS2glTexParameterf)(unsigned int, unsigned int, float); /* +0x4b8 */
    void (*pfn_PS2glTexParameterfv)(unsigned int, unsigned int, float*); /* +0x4bc */
    void (*pfn_PS2glTexParameteri)(unsigned int, unsigned int, int); /* +0x4c0 */
    void (*pfn_PS2glTexParameteriv)(unsigned int, unsigned int, int*); /* +0x4c4 */
    void (*pfn_PS2glTexSubImage1D)(unsigned int, int, int, int, unsigned int, unsigned int, void*); /* +0x4c8 */
    void (*pfn_PS2glTexSubImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void*); /* +0x4cc */
    void (*pfn_PS2glTranslated)(double, double, double); /* +0x4d0 */
    void (*pfn_PS2glTranslatef)(float, float, float); /* +0x4d4 */
    void (*pfn_PS2glVertex2d)(double, double); /* +0x4d8 */
    void (*pfn_PS2glVertex2dv)(double*); /* +0x4dc */
    void (*pfn_PS2glVertex2f)(float, float); /* +0x4e0 */
    void (*pfn_PS2glVertex2fv)(float*); /* +0x4e4 */
    void (*pfn_PS2glVertex2i)(int, int); /* +0x4e8 */
    void (*pfn_PS2glVertex2iv)(int*); /* +0x4ec */
    void (*pfn_PS2glVertex2s)(short, short); /* +0x4f0 */
    void (*pfn_PS2glVertex2sv)(short*); /* +0x4f4 */
    void (*pfn_PS2glVertex3d)(double, double, double); /* +0x4f8 */
    void (*pfn_PS2glVertex3dv)(double*); /* +0x4fc */
    void (*pfn_PS2glVertex3f)(float, float, float); /* +0x500 */
    void (*pfn_PS2glVertex3fv)(float*); /* +0x504 */
    void (*pfn_PS2glVertex3i)(int, int, int); /* +0x508 */
    void (*pfn_PS2glVertex3iv)(int*); /* +0x50c */
    void (*pfn_PS2glVertex3s)(short, short, short); /* +0x510 */
    void (*pfn_PS2glVertex3sv)(short*); /* +0x514 */
    void (*pfn_PS2glVertex4d)(double, double, double, double); /* +0x518 */
    void (*pfn_PS2glVertex4dv)(double*); /* +0x51c */
    void (*pfn_PS2glVertex4f)(float, float, float, float); /* +0x520 */
    void (*pfn_PS2glVertex4fv)(float*); /* +0x524 */
    void (*pfn_PS2glVertex4i)(int, int, int, int); /* +0x528 */
    void (*pfn_PS2glVertex4iv)(int*); /* +0x52c */
    void (*pfn_PS2glVertex4s)(short, short, short, short); /* +0x530 */
    void (*pfn_PS2glVertex4sv)(short*); /* +0x534 */
    void (*pfn_PS2glVertexPointer)(int, unsigned int, int, void*); /* +0x538 */
    void (*pfn_PS2glViewport)(int, int, int, int); /* +0x53c */
    void (*pfn_PS2glColorTableEXT)(unsigned int, unsigned int, int, unsigned int, unsigned int, void*); /* +0x540 */
    void (*pfn_PS2glColorSubTableEXT)(unsigned int, int, int, unsigned int, unsigned int, void*); /* +0x544 */
    void (*pfn_PS2glGetColorTableEXT)(unsigned int, unsigned int, unsigned int, void*); /* +0x548 */
    void (*pfn_PS2glGetColorTableParameterivEXT)(unsigned int, unsigned int, int*); /* +0x54c */
    void (*pfn_PS2glGetColorTableParameterfvEXT)(unsigned int, unsigned int, float*); /* +0x550 */
    void (*pfn_PS2glSetGsRegister)(int, unsigned long, unsigned long); /* +0x554 */
    void (*pfn_PS2glGetGsRegister)(int, unsigned long*); /* +0x558 */
    void (*pfn_PS2glActiveTextureARB)(unsigned int); /* +0x55c */
    void (*pfn_PS2glClientActiveTextureARB)(unsigned int); /* +0x560 */
    void (*pfn_PS2glMultiTexCoord1dARB)(unsigned int, double); /* +0x564 */
    void (*pfn_PS2glMultiTexCoord1dvARB)(unsigned int, double*); /* +0x568 */
    void (*pfn_PS2glMultiTexCoord1fARB)(unsigned int, float); /* +0x56c */
    void (*pfn_PS2glMultiTexCoord1fvARB)(unsigned int, float*); /* +0x570 */
    void (*pfn_PS2glMultiTexCoord1iARB)(unsigned int, int); /* +0x574 */
    void (*pfn_PS2glMultiTexCoord1ivARB)(unsigned int, int*); /* +0x578 */
    void (*pfn_PS2glMultiTexCoord1sARB)(unsigned int, short); /* +0x57c */
    void (*pfn_PS2glMultiTexCoord1svARB)(unsigned int, short*); /* +0x580 */
    void (*pfn_PS2glMultiTexCoord2dARB)(unsigned int, double, double); /* +0x584 */
    void (*pfn_PS2glMultiTexCoord2dvARB)(unsigned int, double*); /* +0x588 */
    void (*pfn_PS2glMultiTexCoord2fARB)(unsigned int, float, float); /* +0x58c */
    void (*pfn_PS2glMultiTexCoord2fvARB)(unsigned int, float*); /* +0x590 */
    void (*pfn_PS2glMultiTexCoord2iARB)(unsigned int, int, int); /* +0x594 */
    void (*pfn_PS2glMultiTexCoord2ivARB)(unsigned int, int*); /* +0x598 */
    void (*pfn_PS2glMultiTexCoord2sARB)(unsigned int, short, short); /* +0x59c */
    void (*pfn_PS2glMultiTexCoord2svARB)(unsigned int, short*); /* +0x5a0 */
    void (*pfn_PS2glMultiTexCoord3dARB)(unsigned int, double, double, double); /* +0x5a4 */
    void (*pfn_PS2glMultiTexCoord3dvARB)(unsigned int, double*); /* +0x5a8 */
    void (*pfn_PS2glMultiTexCoord3fARB)(unsigned int, float, float, float); /* +0x5ac */
    void (*pfn_PS2glMultiTexCoord3fvARB)(unsigned int, float*); /* +0x5b0 */
    void (*pfn_PS2glMultiTexCoord3iARB)(unsigned int, int, int, int); /* +0x5b4 */
    void (*pfn_PS2glMultiTexCoord3ivARB)(unsigned int, int*); /* +0x5b8 */
    void (*pfn_PS2glMultiTexCoord3sARB)(unsigned int, short, short, short); /* +0x5bc */
    void (*pfn_PS2glMultiTexCoord3svARB)(unsigned int, short*); /* +0x5c0 */
    void (*pfn_PS2glMultiTexCoord4dARB)(unsigned int, double, double, double, double); /* +0x5c4 */
    void (*pfn_PS2glMultiTexCoord4dvARB)(unsigned int, double*); /* +0x5c8 */
    void (*pfn_PS2glMultiTexCoord4fARB)(unsigned int, float, float, float, float); /* +0x5cc */
    void (*pfn_PS2glMultiTexCoord4fvARB)(unsigned int, float*); /* +0x5d0 */
    void (*pfn_PS2glMultiTexCoord4iARB)(unsigned int, int, int, int, int); /* +0x5d4 */
    void (*pfn_PS2glMultiTexCoord4ivARB)(unsigned int, int*); /* +0x5d8 */
    void (*pfn_PS2glMultiTexCoord4sARB)(unsigned int, short, short, short, short); /* +0x5dc */
    void (*pfn_PS2glMultiTexCoord4svARB)(unsigned int, short*); /* +0x5e0 */
    void (*pfn_PS2glMultiColor3bARB)(unsigned int, signed char, signed char, signed char); /* +0x5e4 */
    void (*pfn_PS2glMultiColor3bvARB)(unsigned int, signed char*); /* +0x5e8 */
    void (*pfn_PS2glMultiColor3dARB)(unsigned int, double, double, double); /* +0x5ec */
    void (*pfn_PS2glMultiColor3dvARB)(unsigned int, double*); /* +0x5f0 */
    void (*pfn_PS2glMultiColor3fARB)(unsigned int, float, float, float); /* +0x5f4 */
    void (*pfn_PS2glMultiColor3fvARB)(unsigned int, float*); /* +0x5f8 */
    void (*pfn_PS2glMultiColor3iARB)(unsigned int, int, int, int); /* +0x5fc */
    void (*pfn_PS2glMultiColor3ivARB)(unsigned int, int*); /* +0x600 */
    void (*pfn_PS2glMultiColor3sARB)(unsigned int, short, short, short); /* +0x604 */
    void (*pfn_PS2glMultiColor3svARB)(unsigned int, short*); /* +0x608 */
    void (*pfn_PS2glMultiColor3ubARB)(unsigned int, unsigned char, unsigned char, unsigned char); /* +0x60c */
    void (*pfn_PS2glMultiColor3ubvARB)(unsigned int, unsigned char*); /* +0x610 */
    void (*pfn_PS2glMultiColor3uiARB)(unsigned int, unsigned int, unsigned int, unsigned int); /* +0x614 */
    void (*pfn_PS2glMultiColor3uivARB)(unsigned int, unsigned int*); /* +0x618 */
    void (*pfn_PS2glMultiColor3usARB)(unsigned int, unsigned short, unsigned short, unsigned short); /* +0x61c */
    void (*pfn_PS2glMultiColor3usvARB)(unsigned int, unsigned short*); /* +0x620 */
    void (*pfn_PS2glMultiColor4bARB)(unsigned int, signed char, signed char, signed char, signed char); /* +0x624 */
    void (*pfn_PS2glMultiColor4bvARB)(unsigned int, signed char*); /* +0x628 */
    void (*pfn_PS2glMultiColor4dARB)(unsigned int, double, double, double, double); /* +0x62c */
    void (*pfn_PS2glMultiColor4dvARB)(unsigned int, double*); /* +0x630 */
    void (*pfn_PS2glMultiColor4fARB)(unsigned int, float, float, float, float); /* +0x634 */
    void (*pfn_PS2glMultiColor4fvARB)(unsigned int, float*); /* +0x638 */
    void (*pfn_PS2glMultiColor4iARB)(unsigned int, int, int, int, int); /* +0x63c */
    void (*pfn_PS2glMultiColor4ivARB)(unsigned int, int*); /* +0x640 */
    void (*pfn_PS2glMultiColor4sARB)(unsigned int, short, short, short, short); /* +0x644 */
    void (*pfn_PS2glMultiColor4svARB)(unsigned int, short*); /* +0x648 */
    void (*pfn_PS2glMultiColor4ubARB)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char); /* +0x64c */
    void (*pfn_PS2glMultiColor4ubvARB)(unsigned int, unsigned char*); /* +0x650 */
    void (*pfn_PS2glMultiColor4uiARB)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); /* +0x654 */
    void (*pfn_PS2glMultiColor4uivARB)(unsigned int, unsigned int*); /* +0x658 */
    void (*pfn_PS2glMultiColor4usARB)(unsigned int, unsigned short, unsigned short, unsigned short, unsigned short); /* +0x65c */
    void (*pfn_PS2glMultiColor4usvARB)(unsigned int, unsigned short*); /* +0x660 */
    void (*pfn_PS2glMultiColorMaskARB)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char); /* +0x664 */
    void (*pfn_PS2glMultiColorMaterialARB)(unsigned int, unsigned int, unsigned int); /* +0x668 */
    void (*pfn_PS2glMultiColorPointerARB)(unsigned int, int, unsigned int, int, void*); /* +0x66c */
};

struct tag_stMultiTextureParameters {
    int ivUnpackCode[4]; /* +0x0 */
    float fTexture1UOffset; /* +0x10 */
    float fTexture1VOffset; /* +0x14 */
    unsigned int bTexture1Enable; /* +0x18 */
    unsigned int bReserve; /* +0x1c */
    float fTexture0UOffset; /* +0x20 */
    float fTexture0VOffset; /* +0x24 */
    unsigned int uiPRMODE1; /* +0x28 */
    unsigned int uiReserve1; /* +0x2c */
    int ivReserve1[4]; /* +0x30 */
    int ivReserve2[4]; /* +0x40 */
    int ivReserve3[4]; /* +0x50 */
    int ivReserve4[4]; /* +0x60 */
};

struct anon_26 {
    float vObjectBS[4]; /* +0x0 */
    unsigned int mode; /* +0x10 */
    int first; /* +0x14 */
    int count; /* +0x18 */
    float (*pBuf)[4]; /* +0x1c */
    int packageCount; /* +0x20 */
};

struct anon_29 {
    unsigned int mode; /* +0x0 */
    int count; /* +0x4 */
    unsigned int type; /* +0x8 */
    int indices; /* +0xc */
};

struct tag_stVU1MatriceTinSDL {
    int ivUnpackCode[4]; /* +0x0 */
    float mLocalWorld[4][4]; /* +0x10 */
    float mNormal[4][4]; /* +0x50 */
};

struct tag_stVU1MatriceT {
    int ivUnpackCode[4]; /* +0x0 */
    float mClipping[4][4]; /* +0x10 */
    float mNormal[4][4]; /* +0x50 */
    float mClippingScreen[4][4]; /* +0x90 */
    int ivUnpackCode2[4]; /* +0xd0 */
    float mLocalScreen[4][4]; /* +0xe0 */
    float mModelView[4][4]; /* +0x120 */
    int ivUnpackCode3[4]; /* +0x160 */
    float mGuardBandClipping[4][4]; /* +0x170 */
    float mGuardBandClippingScreen[4][4]; /* +0x1b0 */
};

struct tagstVIFCode {
    unsigned short IMMEDIATE; /* +0x0 */
    unsigned char NUM; /* +0x2 */
    unsigned char CMD; /* +0x3 */
};

float g_fBSMultiplicator;
int MY_UNPACKR[4];
int MY_MSCNT[4];
unsigned int PS2GL_g_DontReallocSDLs;
int PS2GL_SDL_DataBufferToUse;
tagGLcontext g_PS2glContext;
tagGScontext g_gsContext;
int PS2glAllocator;
int g_pPS2glApiTable;
tagPS2glApiTable g_PS2glApiTableImp;
tagListVertexBuffer g_PS2glListVBuf;
int PS2glReallocator;
unsigned int uiMaxVifDmaBufLength;
int PS2glLiberator;
tagPS2glApiTable g_PS2glApiTableList;
void plyPS2glDrawElements(anon_29*);
void plyPS2glDrawArrays(anon_26*);
void plyPS2glBegin(anon_8*);
float vColorLimit128[4];

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2390–2412 */
/* addr: 0x00150f60  size: 384 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2390
 *   +0x0018 -> line 2395
 *   +0x001c -> line 2390
 *   +0x002c -> line 2392
 *   +0x0030 -> line 2395
 *   +0x0038 -> line 2397
 *   +0x0060 -> line 2400
 *   +0x006c -> line 2402
 *   +0x007c -> line 2403
 *   +0x00d4 -> line 2404
 *   +0x00e8 -> line 2405
 *   +0x00f8 -> line 2406
 *   +0x0108 -> line 2408
 *   +0x0118 -> line 2410
 *   +0x0150 -> line 2411
 *   +0x0160 -> line 2412
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCallLists(int n, unsigned int type, void* lists)
{
    unsigned int list;
    int I;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2363–2387 */
/* addr: 0x001510e0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2363
 *   +0x0008 -> line 2364
 *   +0x0010 -> line 2381
 *   +0x0014 -> line 2383
 *   +0x0020 -> line 2384
 *   +0x0030 -> line 2386
 *   +0x0038 -> line 2387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glCallList(unsigned int list)
{
    tagListData** ppListData;
    tagListData* pListData;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2251–2358 */
/* addr: 0x00151130  size: 512 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2251
 *   +0x001c -> line 2254
 *   +0x0028 -> line 2256
 *   +0x0030 -> line 2258
 *   +0x0034 -> line 2259
 *   +0x0040 -> line 2260
 *   +0x0048 -> line 2263
 *   +0x0050 -> line 2265
 *   +0x0054 -> line 2267
 *   +0x005c -> line 2272
 *   +0x0060 -> line 2274
 *   +0x0064 -> line 2272
 *   +0x0068 -> line 2276
 *   +0x006c -> line 2273
 *   +0x0070 -> line 2279
 *   +0x0074 -> line 2270
 *   +0x0078 -> line 2280
 *   +0x007c -> line 2277
 *   +0x0080 -> line 2280
 *   +0x008c -> line 2282
 *   +0x0090 -> line 2283
 *   +0x009c -> line 2285
 *   +0x00a4 -> line 2287
 *   +0x00a8 -> line 2289
 *   +0x00ac -> line 2290
 *   +0x00c0 -> line 2292
 *   +0x00c8 -> line 2303
 *   +0x00d0 -> line 2304
 *   +0x00d4 -> line 2306
 *   +0x00d8 -> line 2307
 *   +0x00e4 -> line 2308
 *   +0x00ec -> line 2311
 *   +0x00fc -> line 2314
 *   +0x0108 -> line 2315
 *   +0x0110 -> line 2316
 *   +0x011c -> line 2317
 *   +0x0124 -> line 2320
 *   +0x012c -> line 2321
 *   +0x013c -> line 2324
 *   +0x0144 -> line 2325
 *   +0x014c -> line 2326
 *   +0x0158 -> line 2327
 *   +0x0160 -> line 2331
 *   +0x0170 -> line 2334
 *   +0x0174 -> line 2336
 *   +0x017c -> line 2337
 *   +0x0188 -> line 2340
 *   +0x018c -> line 2341
 *   +0x0190 -> line 2343
 *   +0x01a0 -> line 2346
 *   +0x01ac -> line 2347
 *   +0x01b4 -> line 2348
 *   +0x01c0 -> line 2349
 *   +0x01c8 -> line 2350
 *   +0x01d0 -> line 2351
 *   +0x01d8 -> line 2352
 *   +0x01e4 -> line 2353
 *   +0x01e8 -> line 2358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2glSDLModificationHelper(unsigned int pname, unsigned int* params)
{
    unsigned int uiLastStructureSize;
    tag_stVU1MatriceL* param0;
    tag_stVU1MatriceT* pMT;
    tag_stVU1MatriceTinSDL* pMTinSDL;
    tag_stMultiTextureParameters* pMTP;
    unsigned int* pCurrent;
    int iCount;
    int i;
    unsigned int uiMask;
    unsigned int uiTargetObject;
    int iDmaBufferOffset;
    unsigned int uiSDLIndicesSize;
    tagListData** ppListData;
    tagListData* pListData;
    unsigned int uiReturn;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2140–2248 */
/* addr: 0x00151330  size: 992 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2140
 *   +0x0018 -> line 2144
 *   +0x001c -> line 2142
 *   +0x0020 -> line 2144
 *   +0x002c -> line 2147
 *   +0x003c -> line 2149
 *   +0x004c -> line 2151
 *   +0x0050 -> line 2152
 *   +0x0058 -> line 2153
 *   +0x0060 -> line 2154
 *   +0x0068 -> line 2157
 *   +0x0080 -> line 2159
 *   +0x009c -> line 2160
 *   +0x00ac -> line 2162
 *   +0x00c4 -> line 2163
 *   +0x00d4 -> line 2164
 *   +0x00ec -> line 2165
 *   +0x00f8 -> line 2167
 *   +0x0104 -> line 2168
 *   +0x0120 -> line 2169
 *   +0x0130 -> line 2170
 *   +0x0148 -> line 2171
 *   +0x0154 -> line 2172
 *   +0x0160 -> line 2181
 *   +0x0170 -> line 2183
 *   +0x0180 -> line 2184
 *   +0x0188 -> line 2185
 *   +0x0190 -> line 2188
 *   +0x019c -> line 2189
 *   +0x01a4 -> line 2191
 *   +0x01b0 -> line 2195
 *   +0x01c4 -> line 2197
 *   +0x01d4 -> line 2198
 *   +0x01dc -> line 2199
 *   +0x01e0 -> line 2201
 *   +0x01e4 -> line 2199
 *   +0x01ec -> line 2200
 *   +0x01f0 -> line 2201
 *   +0x01f4 -> line 2202
 *   +0x01fc -> line 2203
 *   +0x0204 -> line 2205
 *   +0x0208 -> line 2206
 *   +0x0210 -> line 2209
 *   +0x021c -> line 2211
 *   +0x0220 -> line 2213
 *   +0x0234 -> line 2214
 *   +0x023c -> line 2215
 *   +0x024c -> line 2216
 *   +0x0250 -> line 2217
 *   +0x0254 -> line 2216
 *   +0x0258 -> line 2217
 *   +0x0264 -> line 2221
 *   +0x0274 -> line 2222
 *   +0x0288 -> line 2224
 *   +0x0298 -> line 2227
 *   +0x02b4 -> line 2229
 *   +0x02bc -> line 2227
 *   +0x02dc -> line 2230
 *   +0x02ec -> line 2231
 *   +0x0300 -> line 2233
 *   +0x0310 -> line 2234
 *   +0x0338 -> line 2236
 *   +0x0340 -> line 2237
 *   +0x03a0 -> line 2240
 *   +0x03ac -> line 2241
 *   +0x03b0 -> line 2240
 *   +0x03b8 -> line 2241
 *   +0x03c4 -> line 2246
 *   +0x03c8 -> line 2248
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glCallSDL(tagListData* pListData)
{
    tagGLtexblock theDefaultTexBlock;
    int i;
    unsigned int uiSize;
    tagGLcontext* pctx;
    _sceDmaTag* pDmaTag;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2106–2137 */
/* addr: 0x00151710  size: 360 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2106
 *   +0x0004 -> line 2111
 *   +0x0008 -> line 2106
 *   +0x0010 -> line 2111
 *   +0x0014 -> line 2108
 *   +0x0018 -> line 2111
 *   +0x0020 -> line 2112
 *   +0x0028 -> line 2116
 *   +0x0044 -> line 2118
 *   +0x004c -> line 2116
 *   +0x006c -> line 2119
 *   +0x007c -> line 2120
 *   +0x0090 -> line 2122
 *   +0x00a0 -> line 2123
 *   +0x00c8 -> line 2125
 *   +0x00d0 -> line 2126
 *   +0x0130 -> line 2129
 *   +0x013c -> line 2130
 *   +0x0140 -> line 2129
 *   +0x0148 -> line 2130
 *   +0x0154 -> line 2135
 *   +0x0158 -> line 2137
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glReinitAfterSDLs(void)
{
    tagGLtexblock theDefaultTexBlock;
    int i;
    tagGLcontext* pctx;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 2026–2102 */
/* addr: 0x00151880  size: 348 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2026
 *   +0x001c -> line 2030
 *   +0x0024 -> line 2062
 *   +0x0034 -> line 2064
 *   +0x003c -> line 2067
 *   +0x0050 -> line 2069
 *   +0x005c -> line 2071
 *   +0x0064 -> line 2074
 *   +0x0068 -> line 2075
 *   +0x0070 -> line 2076
 *   +0x0078 -> line 2078
 *   +0x008c -> line 2079
 *   +0x009c -> line 2080
 *   +0x00a0 -> line 2081
 *   +0x00a4 -> line 2082
 *   +0x00ac -> line 2085
 *   +0x00b0 -> line 2088
 *   +0x00b4 -> line 2085
 *   +0x00b8 -> line 2088
 *   +0x00c8 -> line 2089
 *   +0x00d8 -> line 2092
 *   +0x00dc -> line 2090
 *   +0x00e4 -> line 2093
 *   +0x00e8 -> line 2092
 *   +0x00ec -> line 2090
 *   +0x00f0 -> line 2093
 *   +0x00fc -> line 2094
 *   +0x010c -> line 2095
 *   +0x0110 -> line 2096
 *   +0x0118 -> line 2098
 *   +0x011c -> line 2100
 *   +0x0120 -> line 2098
 *   +0x0128 -> line 2099
 *   +0x012c -> line 2100
 *   +0x0140 -> line 2102
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSDLInstancing(unsigned int* pIDs)
{
    int i;
    int iOffset;
    int* param0;
    unsigned int uiRealSize;
    tagListData** ppListData;
    tagListData* pDstListData;
    tagListData* pSrcListData;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1971–2023 */
/* addr: 0x001519e0  size: 316 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1971
 *   +0x0004 -> line 1973
 *   +0x0008 -> line 1971
 *   +0x000c -> line 1973
 *   +0x0018 -> line 1975
 *   +0x0024 -> line 1976
 *   +0x002c -> line 1979
 *   +0x0030 -> line 1980
 *   +0x0048 -> line 1983
 *   +0x0054 -> line 1989
 *   +0x005c -> line 1990
 *   +0x006c -> line 1992
 *   +0x0078 -> line 1995
 *   +0x007c -> line 1998
 *   +0x009c -> line 2002
 *   +0x00a4 -> line 2003
 *   +0x00ac -> line 2009
 *   +0x00b0 -> line 2006
 *   +0x00b4 -> line 2009
 *   +0x00b8 -> line 2006
 *   +0x00bc -> line 2011
 *   +0x00c0 -> line 2006
 *   +0x00c4 -> line 2011
 *   +0x00e0 -> line 2014
 *   +0x00ec -> line 2015
 *   +0x00fc -> line 2017
 *   +0x0104 -> line 2018
 *   +0x010c -> line 2019
 *   +0x0120 -> line 2020
 *   +0x0128 -> line 2022
 *   +0x0130 -> line 2023
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glEndList(void)
{
    tagGLlistcalls* pCalls;
    tagGLlistcalls* pCurCalls;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1789–1966 */
/* addr: 0x00151b20  size: 1168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1789
 *   +0x0004 -> line 1791
 *   +0x0008 -> line 1789
 *   +0x0020 -> line 1791
 *   +0x0024 -> line 1799
 *   +0x0028 -> line 1792
 *   +0x002c -> line 1791
 *   +0x0034 -> line 1799
 *   +0x003c -> line 1802
 *   +0x0044 -> line 1805
 *   +0x0058 -> line 1806
 *   +0x0060 -> line 1808
 *   +0x0068 -> line 1812
 *   +0x0074 -> line 1813
 *   +0x007c -> line 1814
 *   +0x008c -> line 1815
 *   +0x0094 -> line 1817
 *   +0x00a4 -> line 1820
 *   +0x00b0 -> line 1821
 *   +0x00b4 -> line 1820
 *   +0x00b8 -> line 1821
 *   +0x00bc -> line 1820
 *   +0x00c0 -> line 1821
 *   +0x00c4 -> line 1820
 *   +0x00c8 -> line 1821
 *   +0x00d0 -> line 1826
 *   +0x00d4 -> line 1821
 *   +0x00d8 -> line 1826
 *   +0x00dc -> line 1829
 *   +0x00e0 -> line 1830
 *   +0x00e4 -> line 1835
 *   +0x00e8 -> line 1830
 *   +0x00f0 -> line 1829
 *   +0x00f4 -> line 1830
 *   +0x00f8 -> line 1835
 *   +0x0100 -> line 1836
 *   +0x0108 -> line 1838
 *   +0x0130 -> line 1849
 *   +0x0140 -> line 1851
 *   +0x0160 -> line 1853
 *   +0x0168 -> line 1851
 *   +0x0188 -> line 1854
 *   +0x01a0 -> line 1855
 *   +0x01b8 -> line 1857
 *   +0x01d0 -> line 1858
 *   +0x01fc -> line 1860
 *   +0x0204 -> line 1861
 *   +0x0274 -> line 1883
 *   +0x0278 -> line 1886
 *   +0x0280 -> line 1893
 *   +0x0284 -> line 1887
 *   +0x0288 -> line 1894
 *   +0x028c -> line 1887
 *   +0x0294 -> line 1889
 *   +0x029c -> line 1890
 *   +0x02a4 -> line 1893
 *   +0x02b4 -> line 1894
 *   +0x02bc -> line 1895
 *   +0x02c0 -> line 1907
 *   +0x02c4 -> line 1895
 *   +0x02c8 -> line 1907
 *   +0x02cc -> line 1904
 *   +0x02d0 -> line 1907
 *   +0x02d8 -> line 1906
 *   +0x02dc -> line 1907
 *   +0x02e0 -> line 1904
 *   +0x02e8 -> line 1906
 *   +0x02ec -> line 1907
 *   +0x02fc -> line 1908
 *   +0x030c -> line 1909
 *   +0x031c -> line 1914
 *   +0x0320 -> line 1911
 *   +0x0324 -> line 1912
 *   +0x0328 -> line 1913
 *   +0x032c -> line 1914
 *   +0x0330 -> line 1915
 *   +0x0338 -> line 1916
 *   +0x0340 -> line 1924
 *   +0x0358 -> line 1926
 *   +0x0378 -> line 1928
 *   +0x039c -> line 1934
 *   +0x03a0 -> line 1932
 *   +0x03a4 -> line 1934
 *   +0x03b0 -> line 1936
 *   +0x03b8 -> line 1938
 *   +0x03bc -> line 1939
 *   +0x03d0 -> line 1940
 *   +0x03dc -> line 1942
 *   +0x03e0 -> line 1941
 *   +0x03e4 -> line 1942
 *   +0x03ec -> line 1944
 *   +0x03f0 -> line 1946
 *   +0x03f4 -> line 1944
 *   +0x03fc -> line 1945
 *   +0x0400 -> line 1946
 *   +0x0410 -> line 1947
 *   +0x041c -> line 1948
 *   +0x0428 -> line 1949
 *   +0x0430 -> line 1952
 *   +0x0438 -> line 1956
 *   +0x0440 -> line 1958
 *   +0x0450 -> line 1959
 *   +0x0458 -> line 1962
 *   +0x045c -> line 1961
 *   +0x0460 -> line 1962
 *   +0x0464 -> line 1965
 *   +0x0468 -> line 1963
 *   +0x0470 -> line 1966
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glComposeStaticDisplayList(tagListData* pListData)
{
    int iOffset;
    int* param0;
    void* pData2;
    unsigned int uiRealSize;
    tagGLtexblock theDefaultTexBlock;
    int count;
    void* pData;
    _sceDmaTag* pDmaTag;
    unsigned int uiOldSDLBits;
    unsigned int uiOldMaxVifDmaBufLength;
    float (*pOldVIFInBuf)[4];
    float (*pOldVIFTail)[4];
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1722–1783 */
/* addr: 0x00151fb0  size: 464 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1722
 *   +0x0018 -> line 1723
 *   +0x0020 -> line 1727
 *   +0x0024 -> line 1723
 *   +0x0028 -> line 1727
 *   +0x0038 -> line 1728
 *   +0x0040 -> line 1730
 *   +0x0048 -> line 1732
 *   +0x0058 -> line 1735
 *   +0x0064 -> line 1736
 *   +0x006c -> line 1738
 *   +0x007c -> line 1739
 *   +0x0080 -> line 1738
 *   +0x0084 -> line 1739
 *   +0x0090 -> line 1743
 *   +0x0094 -> line 1751
 *   +0x0098 -> line 1743
 *   +0x009c -> line 1751
 *   +0x00a0 -> line 1744
 *   +0x00a4 -> line 1751
 *   +0x00a8 -> line 1744
 *   +0x00ac -> line 1751
 *   +0x00b0 -> line 1745
 *   +0x00b4 -> line 1755
 *   +0x00b8 -> line 1745
 *   +0x00bc -> line 1751
 *   +0x00c8 -> line 1755
 *   +0x00cc -> line 1757
 *   +0x00d8 -> line 1751
 *   +0x00e0 -> line 1755
 *   +0x00e8 -> line 1757
 *   +0x00f0 -> line 1751
 *   +0x00f4 -> line 1757
 *   +0x00f8 -> line 1751
 *   +0x00fc -> line 1757
 *   +0x0104 -> line 1763
 *   +0x0108 -> line 1751
 *   +0x010c -> line 1755
 *   +0x0114 -> line 1757
 *   +0x0124 -> line 1759
 *   +0x0128 -> line 1763
 *   +0x0138 -> line 1764
 *   +0x0140 -> line 1771
 *   +0x0144 -> line 1765
 *   +0x0148 -> line 1772
 *   +0x014c -> line 1774
 *   +0x0150 -> line 1771
 *   +0x0154 -> line 1772
 *   +0x0158 -> line 1774
 *   +0x015c -> line 1777
 *   +0x0160 -> line 1765
 *   +0x0164 -> line 1766
 *   +0x0170 -> line 1767
 *   +0x017c -> line 1771
 *   +0x0184 -> line 1772
 *   +0x018c -> line 1774
 *   +0x0194 -> line 1770
 *   +0x019c -> line 1777
 *   +0x01a0 -> line 1779
 *   +0x01a4 -> line 1782
 *   +0x01a8 -> line 1779
 *   +0x01ac -> line 1782
 *   +0x01b0 -> line 1779
 *   +0x01b4 -> line 1782
 *   +0x01b8 -> line 1783
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glNewList(unsigned int list, unsigned int mode)
{
    tagListData* pData;
    tagListData** ppData;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1702–1718 */
/* addr: 0x00152180  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1702
 *   +0x0004 -> line 1708
 *   +0x0008 -> line 1702
 *   +0x0010 -> line 1703
 *   +0x0018 -> line 1710
 *   +0x0024 -> line 1712
 *   +0x002c -> line 1715
 *   +0x0034 -> line 1717
 *   +0x0044 -> line 1718
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPartialDeleteLists(unsigned int list)
{
    int I;
    tagListNodeSingle* pSingleIndex;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1604–1695 */
/* addr: 0x001521e0  size: 600 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1604
 *   +0x0004 -> line 1606
 *   +0x0008 -> line 1604
 *   +0x0024 -> line 1605
 *   +0x0028 -> line 1604
 *   +0x002c -> line 1605
 *   +0x0030 -> line 1604
 *   +0x0034 -> line 1607
 *   +0x0038 -> line 1606
 *   +0x003c -> line 1610
 *   +0x0044 -> line 1612
 *   +0x0050 -> line 1614
 *   +0x0054 -> line 1616
 *   +0x0060 -> line 1618
 *   +0x0068 -> line 1619
 *   +0x006c -> line 1621
 *   +0x0074 -> line 1623
 *   +0x0084 -> line 1624
 *   +0x0088 -> line 1626
 *   +0x0090 -> line 1628
 *   +0x00b4 -> line 1633
 *   +0x00b8 -> line 1631
 *   +0x00bc -> line 1632
 *   +0x00c8 -> line 1633
 *   +0x00d4 -> line 1634
 *   +0x00e4 -> line 1635
 *   +0x00e8 -> line 1637
 *   +0x00f0 -> line 1639
 *   +0x0100 -> line 1642
 *   +0x0108 -> line 1644
 *   +0x010c -> line 1645
 *   +0x0110 -> line 1646
 *   +0x0118 -> line 1645
 *   +0x0120 -> line 1646
 *   +0x012c -> line 1647
 *   +0x0130 -> line 1649
 *   +0x013c -> line 1652
 *   +0x0140 -> line 1653
 *   +0x0158 -> line 1656
 *   +0x0160 -> line 1657
 *   +0x0180 -> line 1659
 *   +0x018c -> line 1663
 *   +0x0190 -> line 1664
 *   +0x0198 -> line 1665
 *   +0x01b8 -> line 1666
 *   +0x01c0 -> line 1669
 *   +0x01cc -> line 1672
 *   +0x01d4 -> line 1675
 *   +0x01dc -> line 1677
 *   +0x01ec -> line 1680
 *   +0x01f4 -> line 1683
 *   +0x0200 -> line 1685
 *   +0x020c -> line 1688
 *   +0x0218 -> line 1690
 *   +0x0220 -> line 1692
 *   +0x0224 -> line 1693
 *   +0x0228 -> line 1694
 *   +0x0230 -> line 1695
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDeleteLists(unsigned int list, int range)
{
    int iMove;
    tagListData** param0;
    tagListData** ppData;
    int iDel;
    int iNodeSize;
    tagListNode* pNode1;
    int iNewNodeSize;
    int iNewSize;
    int I;
    tagListNode* pNodePre;
    tagListNode* pNode;
    tagListNodeSingle* pSingleIndex;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1596–1601 */
/* addr: 0x00152440  size: 96 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1596
 *   +0x0004 -> line 1597
 *   +0x0008 -> line 1596
 *   +0x0018 -> line 1597
 *   +0x001c -> line 1598
 *   +0x0038 -> line 1600
 *   +0x003c -> line 1599
 *   +0x004c -> line 1601
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int impPS2glGenLists(int range)
{
    unsigned int nIndex;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1582–1584 */
/* addr: 0x001524a0  size: 32 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1582
 *   +0x0008 -> line 1583
 *   +0x0010 -> line 1584
 *   +0x0014 -> line 1583
 *   +0x0018 -> line 1584
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char impPS2glIsList(unsigned int list)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1578–1579 */
/* addr: 0x001524c0  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1578
 *   +0x0004 -> line 1579
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glListBase(unsigned int base)
{
    g_PS2glContext.uiListBase = base;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1531–1570 */
/* addr: 0x001524d0  size: 192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1531
 *   +0x0004 -> line 1547
 *   +0x0008 -> line 1531
 *   +0x000c -> line 1547
 *   +0x0010 -> line 1531
 *   +0x001c -> line 1540
 *   +0x0020 -> line 1549
 *   +0x0028 -> line 1551
 *   +0x002c -> line 1555
 *   +0x0038 -> line 1557
 *   +0x0068 -> line 1561
 *   +0x0070 -> line 1562
 *   +0x0074 -> line 1563
 *   +0x0078 -> line 1564
 *   +0x0090 -> line 1566
 *   +0x0094 -> line 1567
 *   +0x00a0 -> line 1569
 *   +0x00a8 -> line 1570
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glExecuteListData(tagListData* pData)
{
    unsigned int cbNode;
    unsigned int cbCalls;
    tagGLlistnode* pNode;
    tagGLlistcalls* pCalls;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1498–1528 */
/* addr: 0x00152590  size: 160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1498
 *   +0x0004 -> line 1505
 *   +0x000c -> line 1511
 *   +0x0024 -> line 1507
 *   +0x0028 -> line 1511
 *   +0x0030 -> line 1513
 *   +0x003c -> line 1515
 *   +0x0058 -> line 1518
 *   +0x005c -> line 1519
 *   +0x0060 -> line 1520
 *   +0x0064 -> line 1521
 *   +0x0068 -> line 1522
 *   +0x006c -> line 1523
 *   +0x0088 -> line 1524
 *   +0x008c -> line 1525
 *   +0x0098 -> line 1528
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int PS2glCountListObject(tagListData* pData)
{
    unsigned int cbNode;
    unsigned int cbCalls;
    tagGLlistnode* pNode;
    tagGLlistcalls* pCalls;
    int iCount;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 1446–1480 */
/* addr: 0x00152630  size: 136 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1446
 *   +0x0004 -> line 1447
 *   +0x0014 -> line 1450
 *   +0x001c -> line 1453
 *   +0x0030 -> line 1454
 *   +0x0038 -> line 1456
 *   +0x0044 -> line 1457
 *   +0x004c -> line 1460
 *   +0x0050 -> line 1462
 *   +0x0060 -> line 1466
 *   +0x0068 -> line 1469
 *   +0x006c -> line 1475
 *   +0x0074 -> line 1478
 *   +0x0080 -> line 1480
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glAddPrimBuffer(tagGLprimbuf* pBuf, unsigned char EOP)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 686–1339 */
/* addr: 0x001526c0  size: 5776 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 686
 *   +0x0004 -> line 695
 *   +0x0008 -> line 686
 *   +0x0030 -> line 695
 *   +0x0040 -> line 698
 *   +0x006c -> line 701
 *   +0x00e4 -> line 702
 *   +0x00ec -> line 704
 *   +0x0168 -> line 709
 *   +0x0184 -> line 710
 *   +0x0190 -> line 711
 *   +0x01ac -> line 712
 *   +0x01b4 -> line 713
 *   +0x01c4 -> line 714
 *   +0x01d8 -> line 715
 *   +0x01e0 -> line 717
 *   +0x01ec -> line 718
 *   +0x0208 -> line 720
 *   +0x0218 -> line 721
 *   +0x0220 -> line 722
 *   +0x022c -> line 723
 *   +0x0244 -> line 724
 *   +0x0250 -> line 725
 *   +0x0268 -> line 726
 *   +0x0278 -> line 728
 *   +0x027c -> line 729
 *   +0x0280 -> line 728
 *   +0x0284 -> line 735
 *   +0x0288 -> line 729
 *   +0x028c -> line 735
 *   +0x0290 -> line 729
 *   +0x0294 -> line 728
 *   +0x0298 -> line 729
 *   +0x029c -> line 735
 *   +0x02a8 -> line 737
 *   +0x02b4 -> line 739
 *   +0x02b8 -> line 740
 *   +0x02bc -> line 744
 *   +0x02c8 -> line 746
 *   +0x02d4 -> line 750
 *   +0x02ec -> line 751
 *   +0x02fc -> line 752
 *   +0x0304 -> line 754
 *   +0x0318 -> line 756
 *   +0x032c -> line 758
 *   +0x0344 -> line 759
 *   +0x0348 -> line 758
 *   +0x0350 -> line 759
 *   +0x035c -> line 761
 *   +0x0364 -> line 763
 *   +0x0368 -> line 766
 *   +0x037c -> line 768
 *   +0x038c -> line 770
 *   +0x0390 -> line 774
 *   +0x0394 -> line 770
 *   +0x0398 -> line 781
 *   +0x039c -> line 779
 *   +0x03a0 -> line 772
 *   +0x03a4 -> line 779
 *   +0x03a8 -> line 774
 *   +0x03ac -> line 780
 *   +0x03b0 -> line 779
 *   +0x03b4 -> line 780
 *   +0x03b8 -> line 793
 *   +0x03bc -> line 780
 *   +0x03c0 -> line 785
 *   +0x03c4 -> line 781
 *   +0x03c8 -> line 786
 *   +0x03d4 -> line 794
 *   +0x03d8 -> line 781
 *   +0x03dc -> line 784
 *   +0x03e0 -> line 781
 *   +0x03e4 -> line 784
 *   +0x03ec -> line 785
 *   +0x03f0 -> line 784
 *   +0x03f4 -> line 785
 *   +0x0400 -> line 789
 *   +0x0404 -> line 785
 *   +0x0410 -> line 786
 *   +0x0420 -> line 789
 *   +0x0428 -> line 794
 *   +0x042c -> line 789
 *   +0x0438 -> line 794
 *   +0x0444 -> line 795
 *   +0x044c -> line 797
 *   +0x0450 -> line 795
 *   +0x0454 -> line 797
 *   +0x0458 -> line 795
 *   +0x045c -> line 797
 *   +0x0468 -> line 799
 *   +0x0474 -> line 802
 *   +0x0478 -> line 804
 *   +0x047c -> line 802
 *   +0x0480 -> line 805
 *   +0x0484 -> line 802
 *   +0x0488 -> line 815
 *   +0x0490 -> line 802
 *   +0x0494 -> line 815
 *   +0x0498 -> line 803
 *   +0x04a4 -> line 804
 *   +0x04ac -> line 814
 *   +0x04b0 -> line 805
 *   +0x04b4 -> line 814
 *   +0x04b8 -> line 806
 *   +0x04bc -> line 815
 *   +0x04c4 -> line 817
 *   +0x04c8 -> line 818
 *   +0x04cc -> line 819
 *   +0x04d0 -> line 820
 *   +0x04d4 -> line 817
 *   +0x04d8 -> line 818
 *   +0x04dc -> line 819
 *   +0x04e0 -> line 820
 *   +0x04e4 -> line 817
 *   +0x04e8 -> line 818
 *   +0x04ec -> line 819
 *   +0x04f0 -> line 820
 *   +0x04f4 -> line 817
 *   +0x04f8 -> line 818
 *   +0x04fc -> line 819
 *   +0x0500 -> line 821
 *   +0x0504 -> line 820
 *   +0x0508 -> line 821
 *   +0x0510 -> line 822
 *   +0x0518 -> line 823
 *   +0x0524 -> line 824
 *   +0x0528 -> line 825
 *   +0x0534 -> line 826
 *   +0x0540 -> line 827
 *   +0x054c -> line 828
 *   +0x0550 -> line 829
 *   +0x055c -> line 830
 *   +0x0568 -> line 831
 *   +0x0574 -> line 832
 *   +0x0578 -> line 833
 *   +0x0584 -> line 834
 *   +0x0590 -> line 835
 *   +0x059c -> line 836
 *   +0x05a0 -> line 838
 *   +0x05a8 -> line 839
 *   +0x05ac -> line 838
 *   +0x05c4 -> line 839
 *   +0x05dc -> line 841
 *   +0x05e0 -> line 840
 *   +0x05e4 -> line 841
 *   +0x0600 -> line 843
 *   +0x0604 -> line 844
 *   +0x0610 -> line 847
 *   +0x0618 -> line 848
 *   +0x0620 -> line 851
 *   +0x0624 -> line 853
 *   +0x0628 -> line 851
 *   +0x062c -> line 854
 *   +0x0630 -> line 851
 *   +0x0634 -> line 862
 *   +0x0638 -> line 851
 *   +0x063c -> line 852
 *   +0x0648 -> line 853
 *   +0x0650 -> line 858
 *   +0x0654 -> line 854
 *   +0x0658 -> line 858
 *   +0x065c -> line 855
 *   +0x0660 -> line 862
 *   +0x0668 -> line 864
 *   +0x0678 -> line 865
 *   +0x067c -> line 866
 *   +0x0694 -> line 867
 *   +0x0698 -> line 868
 *   +0x069c -> line 867
 *   +0x06a8 -> line 868
 *   +0x06c4 -> line 870
 *   +0x06c8 -> line 871
 *   +0x06d8 -> line 874
 *   +0x06e0 -> line 879
 *   +0x06e4 -> line 878
 *   +0x06e8 -> line 880
 *   +0x06ec -> line 878
 *   +0x06f0 -> line 884
 *   +0x06f4 -> line 878
 *   +0x06f8 -> line 879
 *   +0x0700 -> line 884
 *   +0x0704 -> line 880
 *   +0x0708 -> line 884
 *   +0x070c -> line 881
 *   +0x0710 -> line 884
 *   +0x0718 -> line 885
 *   +0x0728 -> line 889
 *   +0x073c -> line 891
 *   +0x0748 -> line 893
 *   +0x0754 -> line 896
 *   +0x0758 -> line 898
 *   +0x075c -> line 896
 *   +0x0760 -> line 899
 *   +0x0764 -> line 896
 *   +0x0768 -> line 909
 *   +0x0770 -> line 896
 *   +0x0774 -> line 909
 *   +0x0778 -> line 897
 *   +0x0784 -> line 898
 *   +0x078c -> line 908
 *   +0x0790 -> line 899
 *   +0x0794 -> line 908
 *   +0x0798 -> line 900
 *   +0x079c -> line 909
 *   +0x07a4 -> line 911
 *   +0x07a8 -> line 915
 *   +0x07ac -> line 912
 *   +0x07b0 -> line 911
 *   +0x07b4 -> line 912
 *   +0x07bc -> line 911
 *   +0x07c4 -> line 912
 *   +0x07c8 -> line 914
 *   +0x07cc -> line 912
 *   +0x07d4 -> line 914
 *   +0x07e8 -> line 915
 *   +0x07fc -> line 917
 *   +0x0800 -> line 916
 *   +0x0804 -> line 917
 *   +0x0820 -> line 919
 *   +0x0824 -> line 920
 *   +0x0830 -> line 923
 *   +0x0838 -> line 940
 *   +0x083c -> line 927
 *   +0x0840 -> line 929
 *   +0x0844 -> line 927
 *   +0x0848 -> line 940
 *   +0x084c -> line 930
 *   +0x0850 -> line 927
 *   +0x0854 -> line 940
 *   +0x0858 -> line 928
 *   +0x0864 -> line 929
 *   +0x086c -> line 939
 *   +0x0870 -> line 930
 *   +0x0874 -> line 939
 *   +0x0878 -> line 931
 *   +0x087c -> line 940
 *   +0x0884 -> line 942
 *   +0x0888 -> line 950
 *   +0x088c -> line 943
 *   +0x0890 -> line 944
 *   +0x0894 -> line 945
 *   +0x0898 -> line 942
 *   +0x089c -> line 945
 *   +0x08a0 -> line 943
 *   +0x08a4 -> line 942
 *   +0x08a8 -> line 944
 *   +0x08ac -> line 942
 *   +0x08b0 -> line 945
 *   +0x08b4 -> line 948
 *   +0x08b8 -> line 943
 *   +0x08c0 -> line 944
 *   +0x08c4 -> line 948
 *   +0x08d4 -> line 944
 *   +0x08d8 -> line 945
 *   +0x08dc -> line 949
 *   +0x08e0 -> line 945
 *   +0x08e8 -> line 949
 *   +0x08fc -> line 950
 *   +0x0914 -> line 952
 *   +0x0918 -> line 951
 *   +0x091c -> line 952
 *   +0x0938 -> line 954
 *   +0x093c -> line 955
 *   +0x0948 -> line 959
 *   +0x0950 -> line 960
 *   +0x0958 -> line 963
 *   +0x095c -> line 965
 *   +0x0960 -> line 963
 *   +0x0964 -> line 966
 *   +0x0968 -> line 963
 *   +0x096c -> line 971
 *   +0x0970 -> line 963
 *   +0x0974 -> line 964
 *   +0x0980 -> line 965
 *   +0x0988 -> line 970
 *   +0x098c -> line 966
 *   +0x0990 -> line 970
 *   +0x0994 -> line 971
 *   +0x099c -> line 973
 *   +0x09ac -> line 974
 *   +0x09c0 -> line 975
 *   +0x09c4 -> line 976
 *   +0x09e0 -> line 977
 *   +0x09fc -> line 979
 *   +0x0a0c -> line 980
 *   +0x0a1c -> line 983
 *   +0x0a24 -> line 988
 *   +0x0a28 -> line 987
 *   +0x0a2c -> line 989
 *   +0x0a30 -> line 987
 *   +0x0a34 -> line 993
 *   +0x0a38 -> line 987
 *   +0x0a3c -> line 988
 *   +0x0a44 -> line 993
 *   +0x0a48 -> line 989
 *   +0x0a4c -> line 993
 *   +0x0a50 -> line 990
 *   +0x0a54 -> line 993
 *   +0x0a5c -> line 994
 *   +0x0a6c -> line 998
 *   +0x0a80 -> line 1001
 *   +0x0a84 -> line 1011
 *   +0x0a88 -> line 1001
 *   +0x0a8c -> line 1003
 *   +0x0a90 -> line 1001
 *   +0x0a94 -> line 1011
 *   +0x0a98 -> line 1004
 *   +0x0a9c -> line 1011
 *   +0x0aa0 -> line 1001
 *   +0x0aa4 -> line 1011
 *   +0x0aa8 -> line 1002
 *   +0x0ab4 -> line 1003
 *   +0x0abc -> line 1010
 *   +0x0ac0 -> line 1004
 *   +0x0ac4 -> line 1010
 *   +0x0ac8 -> line 1005
 *   +0x0acc -> line 1011
 *   +0x0ad4 -> line 1014
 *   +0x0b14 -> line 1015
 *   +0x0b58 -> line 1016
 *   +0x0b9c -> line 1017
 *   +0x0be0 -> line 1018
 *   +0x0bec -> line 1019
 *   +0x0bf0 -> line 1022
 *   +0x0bfc -> line 1023
 *   +0x0c00 -> line 1026
 *   +0x0c0c -> line 1027
 *   +0x0c10 -> line 1030
 *   +0x0c1c -> line 1031
 *   +0x0c20 -> line 1035
 *   +0x0c28 -> line 1036
 *   +0x0c2c -> line 1035
 *   +0x0c44 -> line 1036
 *   +0x0c5c -> line 1037
 *   +0x0c60 -> line 1038
 *   +0x0c64 -> line 1037
 *   +0x0c68 -> line 1038
 *   +0x0c84 -> line 1040
 *   +0x0c88 -> line 1041
 *   +0x0c94 -> line 1044
 *   +0x0c9c -> line 1047
 *   +0x0ca4 -> line 1050
 *   +0x0ca8 -> line 1051
 *   +0x0cac -> line 1050
 *   +0x0cb0 -> line 1056
 *   +0x0cb4 -> line 1050
 *   +0x0cbc -> line 1052
 *   +0x0cc0 -> line 1051
 *   +0x0cc8 -> line 1056
 *   +0x0ccc -> line 1052
 *   +0x0cd0 -> line 1056
 *   +0x0cd4 -> line 1053
 *   +0x0cd8 -> line 1056
 *   +0x0ce0 -> line 1057
 *   +0x0cf0 -> line 1061
 *   +0x0cf8 -> line 1064
 *   +0x0cfc -> line 1065
 *   +0x0d00 -> line 1064
 *   +0x0d04 -> line 1066
 *   +0x0d08 -> line 1064
 *   +0x0d10 -> line 1069
 *   +0x0d14 -> line 1065
 *   +0x0d18 -> line 1066
 *   +0x0d1c -> line 1069
 *   +0x0d24 -> line 1070
 *   +0x0d28 -> line 1074
 *   +0x0d2c -> line 1077
 *   +0x0d30 -> line 1074
 *   +0x0d34 -> line 1077
 *   +0x0d38 -> line 1074
 *   +0x0d3c -> line 1077
 *   +0x0d44 -> line 1085
 *   +0x0d58 -> line 1102
 *   +0x0d5c -> line 1104
 *   +0x0d74 -> line 1105
 *   +0x0d80 -> line 1106
 *   +0x0d98 -> line 1109
 *   +0x0da8 -> line 1114
 *   +0x0dac -> line 1111
 *   +0x0db4 -> line 1112
 *   +0x0dc4 -> line 1114
 *   +0x0dd4 -> line 1116
 *   +0x0de4 -> line 1119
 *   +0x0de8 -> line 1122
 *   +0x0dec -> line 1119
 *   +0x0df0 -> line 1121
 *   +0x0df4 -> line 1119
 *   +0x0df8 -> line 1123
 *   +0x0dfc -> line 1119
 *   +0x0e00 -> line 1123
 *   +0x0e04 -> line 1119
 *   +0x0e14 -> line 1122
 *   +0x0e18 -> line 1123
 *   +0x0e24 -> line 1124
 *   +0x0e2c -> line 1126
 *   +0x0e30 -> line 1124
 *   +0x0e34 -> line 1126
 *   +0x0e38 -> line 1124
 *   +0x0e3c -> line 1126
 *   +0x0e48 -> line 1128
 *   +0x0e54 -> line 1131
 *   +0x0e58 -> line 1133
 *   +0x0e5c -> line 1131
 *   +0x0e60 -> line 1134
 *   +0x0e64 -> line 1131
 *   +0x0e68 -> line 1139
 *   +0x0e6c -> line 1131
 *   +0x0e70 -> line 1132
 *   +0x0e7c -> line 1133
 *   +0x0e84 -> line 1138
 *   +0x0e88 -> line 1134
 *   +0x0e8c -> line 1138
 *   +0x0e90 -> line 1139
 *   +0x0e98 -> line 1141
 *   +0x0ea8 -> line 1142
 *   +0x0ebc -> line 1143
 *   +0x0ec0 -> line 1144
 *   +0x0ee0 -> line 1145
 *   +0x0efc -> line 1147
 *   +0x0f0c -> line 1148
 *   +0x0f1c -> line 1151
 *   +0x0f24 -> line 1155
 *   +0x0f28 -> line 1156
 *   +0x0f2c -> line 1155
 *   +0x0f30 -> line 1157
 *   +0x0f34 -> line 1155
 *   +0x0f38 -> line 1161
 *   +0x0f3c -> line 1155
 *   +0x0f40 -> line 1156
 *   +0x0f48 -> line 1161
 *   +0x0f4c -> line 1157
 *   +0x0f50 -> line 1161
 *   +0x0f54 -> line 1158
 *   +0x0f58 -> line 1161
 *   +0x0f60 -> line 1162
 *   +0x0f70 -> line 1215
 *   +0x0f84 -> line 1218
 *   +0x0f88 -> line 1219
 *   +0x0f8c -> line 1218
 *   +0x0f90 -> line 1224
 *   +0x0f94 -> line 1218
 *   +0x0f9c -> line 1220
 *   +0x0fa0 -> line 1219
 *   +0x0fa8 -> line 1224
 *   +0x0fac -> line 1220
 *   +0x0fb0 -> line 1224
 *   +0x0fb4 -> line 1221
 *   +0x0fb8 -> line 1224
 *   +0x0fc0 -> line 1225
 *   +0x0fd0 -> line 1229
 *   +0x0fd4 -> line 1231
 *   +0x0fd8 -> line 1229
 *   +0x0fdc -> line 1231
 *   +0x0fe0 -> line 1229
 *   +0x0fe4 -> line 1231
 *   +0x0fec -> line 1239
 *   +0x0ff4 -> line 1242
 *   +0x1004 -> line 1244
 *   +0x1014 -> line 1245
 *   +0x1018 -> line 1247
 *   +0x101c -> line 1245
 *   +0x1020 -> line 1249
 *   +0x1024 -> line 1246
 *   +0x1028 -> line 1249
 *   +0x102c -> line 1247
 *   +0x1030 -> line 1249
 *   +0x1038 -> line 1250
 *   +0x1048 -> line 1252
 *   +0x1054 -> line 1257
 *   +0x105c -> line 1259
 *   +0x1088 -> line 1263
 *   +0x1098 -> line 1265
 *   +0x10ac -> line 1266
 *   +0x10b0 -> line 1265
 *   +0x10c0 -> line 1266
 *   +0x10d0 -> line 1267
 *   +0x10d4 -> line 1266
 *   +0x10e4 -> line 1267
 *   +0x10f4 -> line 1268
 *   +0x10f8 -> line 1267
 *   +0x1108 -> line 1268
 *   +0x1118 -> line 1270
 *   +0x111c -> line 1268
 *   +0x112c -> line 1270
 *   +0x113c -> line 1271
 *   +0x1140 -> line 1270
 *   +0x1150 -> line 1271
 *   +0x1160 -> line 1272
 *   +0x1164 -> line 1271
 *   +0x1174 -> line 1272
 *   +0x1184 -> line 1273
 *   +0x1188 -> line 1272
 *   +0x1198 -> line 1273
 *   +0x11a8 -> line 1275
 *   +0x11ac -> line 1273
 *   +0x11bc -> line 1275
 *   +0x11cc -> line 1276
 *   +0x11d0 -> line 1275
 *   +0x11e0 -> line 1276
 *   +0x11f0 -> line 1277
 *   +0x11f4 -> line 1276
 *   +0x1204 -> line 1277
 *   +0x1214 -> line 1278
 *   +0x1218 -> line 1277
 *   +0x1228 -> line 1278
 *   +0x1244 -> line 1280
 *   +0x124c -> line 1283
 *   +0x1260 -> line 1284
 *   +0x1264 -> line 1283
 *   +0x1274 -> line 1284
 *   +0x1284 -> line 1285
 *   +0x1288 -> line 1284
 *   +0x1298 -> line 1285
 *   +0x12a8 -> line 1286
 *   +0x12ac -> line 1285
 *   +0x12bc -> line 1286
 *   +0x12cc -> line 1288
 *   +0x12d0 -> line 1286
 *   +0x12e0 -> line 1288
 *   +0x12f0 -> line 1289
 *   +0x12f4 -> line 1288
 *   +0x1304 -> line 1289
 *   +0x1314 -> line 1290
 *   +0x1318 -> line 1289
 *   +0x1328 -> line 1290
 *   +0x1338 -> line 1291
 *   +0x133c -> line 1290
 *   +0x134c -> line 1291
 *   +0x135c -> line 1293
 *   +0x1360 -> line 1291
 *   +0x1370 -> line 1293
 *   +0x1380 -> line 1294
 *   +0x1384 -> line 1293
 *   +0x1394 -> line 1294
 *   +0x13a4 -> line 1295
 *   +0x13a8 -> line 1294
 *   +0x13b8 -> line 1295
 *   +0x13c8 -> line 1296
 *   +0x13cc -> line 1295
 *   +0x13dc -> line 1296
 *   +0x13fc -> line 1300
 *   +0x1400 -> line 1309
 *   +0x1404 -> line 1300
 *   +0x1408 -> line 1309
 *   +0x140c -> line 1300
 *   +0x1410 -> line 1309
 *   +0x1414 -> line 1301
 *   +0x141c -> line 1302
 *   +0x1420 -> line 1301
 *   +0x1424 -> line 1302
 *   +0x1428 -> line 1303
 *   +0x142c -> line 1302
 *   +0x1430 -> line 1303
 *   +0x1434 -> line 1305
 *   +0x1438 -> line 1303
 *   +0x143c -> line 1305
 *   +0x1440 -> line 1306
 *   +0x1444 -> line 1305
 *   +0x1448 -> line 1306
 *   +0x144c -> line 1300
 *   +0x1450 -> line 1306
 *   +0x1454 -> line 1300
 *   +0x1458 -> line 1301
 *   +0x1460 -> line 1302
 *   +0x1468 -> line 1303
 *   +0x1470 -> line 1305
 *   +0x1478 -> line 1306
 *   +0x147c -> line 1311
 *   +0x1484 -> line 1328
 *   +0x1488 -> line 1314
 *   +0x1498 -> line 1315
 *   +0x149c -> line 1314
 *   +0x14ac -> line 1315
 *   +0x14bc -> line 1316
 *   +0x14c0 -> line 1315
 *   +0x14d0 -> line 1316
 *   +0x14e0 -> line 1317
 *   +0x14e4 -> line 1316
 *   +0x14f4 -> line 1317
 *   +0x1504 -> line 1328
 *   +0x1508 -> line 1317
 *   +0x1518 -> line 1328
 *   +0x151c -> line 1319
 *   +0x1524 -> line 1320
 *   +0x1528 -> line 1319
 *   +0x152c -> line 1320
 *   +0x1530 -> line 1321
 *   +0x1534 -> line 1320
 *   +0x1538 -> line 1321
 *   +0x153c -> line 1322
 *   +0x1540 -> line 1321
 *   +0x1544 -> line 1322
 *   +0x1548 -> line 1324
 *   +0x154c -> line 1322
 *   +0x1550 -> line 1324
 *   +0x1554 -> line 1325
 *   +0x1558 -> line 1324
 *   +0x155c -> line 1325
 *   +0x1560 -> line 1319
 *   +0x1564 -> line 1325
 *   +0x1568 -> line 1319
 *   +0x156c -> line 1320
 *   +0x1574 -> line 1321
 *   +0x157c -> line 1322
 *   +0x1584 -> line 1324
 *   +0x158c -> line 1325
 *   +0x1590 -> line 1329
 *   +0x1598 -> line 1331
 *   +0x15f8 -> line 1334
 *   +0x1600 -> line 1337
 *   +0x1664 -> line 1339
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glListSaveBuffer(unsigned char EOP)
{
    tagGLprimbuf* pBuf_c;
    tagGLprimbuf* pBufA;
    unsigned int A;
    unsigned int B;
    unsigned int G;
    unsigned int R;
    unsigned int* puiDst;
    int Q;
    int V;
    int U;
    float* pfDst;
    int W;
    int Z;
    int Y;
    int X;
    float vBB[6];
    float fvPackageBS[4];
    int i;
    unsigned char bPackageBoundingSphere;
    float (*pSrc)[4];
    float (*pDst)[4];
    tagGLprimbuf* pBuf;
    unsigned int iBufSizeReduction;
    unsigned int iBufSize;
    unsigned int uiBufNumber;
    unsigned int cbPartSize;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 671–678 */
/* addr: 0x00153d50  size: 124 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 671
 *   +0x000c -> line 673
 *   +0x0014 -> line 671
 *   +0x0018 -> line 672
 *   +0x0020 -> line 671
 *   +0x0024 -> line 673
 *   +0x0028 -> line 671
 *   +0x002c -> line 673
 *   +0x0030 -> line 674
 *   +0x0034 -> line 672
 *   +0x003c -> line 674
 *   +0x0040 -> line 677
 *   +0x004c -> line 675
 *   +0x0050 -> line 677
 *   +0x0054 -> line 675
 *   +0x005c -> line 676
 *   +0x0068 -> line 677
 *   +0x0074 -> line 678
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glComputeBSfromBB(float* pfvBS, float* pBB)
{
    float fDepth;
    float fHeight;
    float fWidth;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 641–665 */
/* addr: 0x00153dd0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 641
 *   +0x0008 -> line 645
 *   +0x0020 -> line 646
 *   +0x0028 -> line 649
 *   +0x0040 -> line 650
 *   +0x0048 -> line 653
 *   +0x0050 -> line 651
 *   +0x0054 -> line 653
 *   +0x005c -> line 654
 *   +0x0064 -> line 659
 *   +0x0068 -> line 661
 *   +0x006c -> line 659
 *   +0x0070 -> line 661
 *   +0x0074 -> line 659
 *   +0x0078 -> line 661
 *   +0x008c -> line 665
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMergeBB(float* pDstBB, float* pSrcBB)
{
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 563–635 */
/* addr: 0x00153e70  size: 628 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 563
 *   +0x0008 -> line 565
 *   +0x000c -> line 570
 *   +0x0010 -> line 566
 *   +0x0014 -> line 570
 *   +0x0018 -> line 567
 *   +0x001c -> line 565
 *   +0x0020 -> line 566
 *   +0x0024 -> line 567
 *   +0x0028 -> line 570
 *   +0x0030 -> line 572
 *   +0x0034 -> line 573
 *   +0x0044 -> line 574
 *   +0x0050 -> line 575
 *   +0x0060 -> line 576
 *   +0x0068 -> line 577
 *   +0x006c -> line 578
 *   +0x007c -> line 579
 *   +0x0088 -> line 580
 *   +0x0098 -> line 581
 *   +0x00a0 -> line 582
 *   +0x00a4 -> line 583
 *   +0x00b4 -> line 584
 *   +0x00c0 -> line 585
 *   +0x00d0 -> line 586
 *   +0x00d8 -> line 588
 *   +0x00e8 -> line 589
 *   +0x00f0 -> line 592
 *   +0x00fc -> line 598
 *   +0x0100 -> line 593
 *   +0x0104 -> line 598
 *   +0x0108 -> line 594
 *   +0x010c -> line 595
 *   +0x0110 -> line 592
 *   +0x0114 -> line 596
 *   +0x0118 -> line 593
 *   +0x011c -> line 595
 *   +0x0120 -> line 594
 *   +0x0124 -> line 593
 *   +0x0128 -> line 594
 *   +0x012c -> line 598
 *   +0x0134 -> line 600
 *   +0x0138 -> line 601
 *   +0x013c -> line 600
 *   +0x0140 -> line 601
 *   +0x0144 -> line 602
 *   +0x0154 -> line 603
 *   +0x0160 -> line 604
 *   +0x0170 -> line 605
 *   +0x0178 -> line 606
 *   +0x0180 -> line 607
 *   +0x0190 -> line 608
 *   +0x0198 -> line 609
 *   +0x01a8 -> line 610
 *   +0x01b0 -> line 611
 *   +0x01b8 -> line 612
 *   +0x01c8 -> line 613
 *   +0x01d0 -> line 614
 *   +0x01e0 -> line 615
 *   +0x01e8 -> line 617
 *   +0x01f8 -> line 619
 *   +0x020c -> line 620
 *   +0x0214 -> line 621
 *   +0x0218 -> line 622
 *   +0x0220 -> line 624
 *   +0x0224 -> line 625
 *   +0x0228 -> line 626
 *   +0x022c -> line 627
 *   +0x0230 -> line 628
 *   +0x0234 -> line 629
 *   +0x0238 -> line 631
 *   +0x0240 -> line 634
 *   +0x024c -> line 632
 *   +0x0250 -> line 633
 *   +0x0254 -> line 632
 *   +0x0258 -> line 633
 *   +0x025c -> line 634
 *   +0x026c -> line 635
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glComputeBS(float* pfvBS, float (*pV)[4], int iCount, float* pBB, unsigned char bDivQ)
{
    float fDepth;
    float fHeight;
    float fWidth;
    float fQ;
    float fTemp;
    float fPZ;
    float fNZ;
    float fPY;
    float fNY;
    float fPX;
    float fNX;
    int i;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 453–552 */
/* addr: 0x001540f0  size: 552 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 453
 *   +0x0004 -> line 462
 *   +0x0008 -> line 453
 *   +0x000c -> line 492
 *   +0x0010 -> line 462
 *   +0x0014 -> line 465
 *   +0x0018 -> line 462
 *   +0x001c -> line 465
 *   +0x0020 -> line 483
 *   +0x0024 -> line 474
 *   +0x0030 -> line 466
 *   +0x0034 -> line 474
 *   +0x0038 -> line 466
 *   +0x003c -> line 483
 *   +0x0040 -> line 467
 *   +0x0044 -> line 475
 *   +0x0048 -> line 467
 *   +0x004c -> line 484
 *   +0x0050 -> line 468
 *   +0x0054 -> line 476
 *   +0x0058 -> line 468
 *   +0x005c -> line 485
 *   +0x0060 -> line 470
 *   +0x0064 -> line 477
 *   +0x0068 -> line 470
 *   +0x006c -> line 486
 *   +0x0070 -> line 471
 *   +0x0074 -> line 479
 *   +0x0078 -> line 471
 *   +0x007c -> line 488
 *   +0x0080 -> line 480
 *   +0x0084 -> line 492
 *   +0x0090 -> line 494
 *   +0x0094 -> line 501
 *   +0x0098 -> line 494
 *   +0x009c -> line 495
 *   +0x00a4 -> line 496
 *   +0x00ac -> line 497
 *   +0x00b4 -> line 498
 *   +0x00bc -> line 499
 *   +0x00c4 -> line 501
 *   +0x00d4 -> line 503
 *   +0x00dc -> line 504
 *   +0x00e4 -> line 505
 *   +0x00ec -> line 506
 *   +0x00f4 -> line 507
 *   +0x00fc -> line 508
 *   +0x0100 -> line 509
 *   +0x0108 -> line 512
 *   +0x0110 -> line 513
 *   +0x0118 -> line 514
 *   +0x0120 -> line 515
 *   +0x0128 -> line 516
 *   +0x0130 -> line 517
 *   +0x0138 -> line 519
 *   +0x0140 -> line 520
 *   +0x0148 -> line 521
 *   +0x0150 -> line 522
 *   +0x0158 -> line 523
 *   +0x0160 -> line 524
 *   +0x0168 -> line 528
 *   +0x016c -> line 550
 *   +0x0170 -> line 544
 *   +0x0174 -> line 550
 *   +0x0178 -> line 544
 *   +0x0184 -> line 545
 *   +0x0194 -> line 528
 *   +0x0198 -> line 529
 *   +0x01a0 -> line 530
 *   +0x01a8 -> line 531
 *   +0x01b0 -> line 532
 *   +0x01b8 -> line 533
 *   +0x01c0 -> line 545
 *   +0x01c4 -> line 535
 *   +0x01c8 -> line 544
 *   +0x01cc -> line 535
 *   +0x01d0 -> line 536
 *   +0x01d8 -> line 537
 *   +0x01e0 -> line 538
 *   +0x01e8 -> line 539
 *   +0x01f0 -> line 540
 *   +0x01f8 -> line 545
 *   +0x01fc -> line 550
 *   +0x0208 -> line 551
 *   +0x021c -> line 552
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glListAssembleQuads(void)
{
    int I;
    int iQuadCount;
    float (*pT1_b)[4];
    float (*pT_b)[4];
    float (*pC1_b)[4];
    float (*pC_b)[4];
    float (*pT1)[4];
    float (*pT)[4];
    float (*pC1)[4];
    float (*pC)[4];
    float (*param0)[4];
    float (*pN)[4];
    float (*pV1)[4];
    float (*pV)[4];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 412–422 */
/* addr: 0x00154320  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 421
 *   +0x0008 -> line 412
 *   +0x0010 -> line 413
 *   +0x0018 -> line 414
 *   +0x0020 -> line 415
 *   +0x0028 -> line 417
 *   +0x0030 -> line 418
 *   +0x0038 -> line 412
 *   +0x0040 -> line 413
 *   +0x0048 -> line 414
 *   +0x0050 -> line 415
 *   +0x0058 -> line 417
 *   +0x0060 -> line 418
 *   +0x0064 -> line 422
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glResetPrimBuffer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 361–387 */
/* addr: 0x00154390  size: 328 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0004 -> line 362
 *   +0x0008 -> line 361
 *   +0x0014 -> line 362
 *   +0x0030 -> line 364
 *   +0x0040 -> line 365
 *   +0x0050 -> line 367
 *   +0x005c -> line 369
 *   +0x0070 -> line 370
 *   +0x0088 -> line 371
 *   +0x00a0 -> line 372
 *   +0x00bc -> line 374
 *   +0x00d4 -> line 375
 *   +0x00f0 -> line 378
 *   +0x00fc -> line 381
 *   +0x0100 -> line 382
 *   +0x0104 -> line 381
 *   +0x0108 -> line 382
 *   +0x0114 -> line 383
 *   +0x0124 -> line 385
 *   +0x0134 -> line 387
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glListSaveVBuf(unsigned char EOP)
{
    tagGLprimbuf* pBuf;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 346–358 */
/* addr: 0x001544e0  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 346
 *   +0x0004 -> line 347
 *   +0x0008 -> line 346
 *   +0x0018 -> line 347
 *   +0x0028 -> line 349
 *   +0x0030 -> line 352
 *   +0x0048 -> line 354
 *   +0x0060 -> line 356
 *   +0x0078 -> line 357
 *   +0x007c -> line 356
 *   +0x0080 -> line 357
 *   +0x0090 -> line 358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSaveListCall(unsigned int eCode, float (*pData)[4])
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 332–342 */
/* addr: 0x00154590  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 332
 *   +0x0004 -> line 333
 *   +0x0008 -> line 332
 *   +0x0020 -> line 333
 *   +0x0030 -> line 335
 *   +0x0038 -> line 338
 *   +0x0050 -> line 339
 *   +0x0068 -> line 340
 *   +0x0080 -> line 341
 *   +0x0084 -> line 340
 *   +0x0088 -> line 341
 *   +0x0098 -> line 342
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSaveListCallMultiTex(unsigned int eCode, unsigned int texture, float (*pData)[4])
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 294–328 */
/* addr: 0x00154640  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 294
 *   +0x0004 -> line 295
 *   +0x0008 -> line 294
 *   +0x0018 -> line 295
 *   +0x001c -> line 300
 *   +0x0020 -> line 301
 *   +0x0024 -> line 302
 *   +0x0030 -> line 305
 *   +0x004c -> line 308
 *   +0x0058 -> line 309
 *   +0x0068 -> line 311
 *   +0x006c -> line 312
 *   +0x0074 -> line 315
 *   +0x0078 -> line 316
 *   +0x0088 -> line 318
 *   +0x0090 -> line 319
 *   +0x0094 -> line 320
 *   +0x0098 -> line 322
 *   +0x00a4 -> line 323
 *   +0x00a8 -> line 325
 *   +0x00b4 -> line 328
 *   +0x00b8 -> line 327
 *   +0x00bc -> line 328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tagGLlistnode* PS2glListAllocNode(int cbParams)
{
    tagGLlistnode* param0;
    int cbNode;
    tagGLlistcalls* pCurCalls;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 272–291 */
/* addr: 0x00154710  size: 188 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 272
 *   +0x001c -> line 273
 *   +0x002c -> line 274
 *   +0x0034 -> line 275
 *   +0x003c -> line 274
 *   +0x0040 -> line 275
 *   +0x0048 -> line 276
 *   +0x005c -> line 279
 *   +0x0068 -> line 280
 *   +0x006c -> line 283
 *   +0x0070 -> line 280
 *   +0x0074 -> line 281
 *   +0x0078 -> line 282
 *   +0x007c -> line 283
 *   +0x0080 -> line 284
 *   +0x0088 -> line 285
 *   +0x0094 -> line 286
 *   +0x009c -> line 288
 *   +0x00a0 -> line 290
 *   +0x00a4 -> line 291
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glListSaveParam(void* pParam, int cbParam)
{
    tagGLlistdatas* pDatas;
    tagGLlistdatas* pCurDatas;
    void* pBuf;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 251–269 */
/* addr: 0x001547d0  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 251
 *   +0x0010 -> line 252
 *   +0x0020 -> line 253
 *   +0x002c -> line 254
 *   +0x0040 -> line 257
 *   +0x004c -> line 258
 *   +0x0050 -> line 261
 *   +0x0054 -> line 258
 *   +0x0058 -> line 259
 *   +0x005c -> line 260
 *   +0x0060 -> line 261
 *   +0x0064 -> line 262
 *   +0x006c -> line 263
 *   +0x0078 -> line 264
 *   +0x0080 -> line 266
 *   +0x0084 -> line 268
 *   +0x0088 -> line 269
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glListSaveParamSpace(int cbParam)
{
    tagGLlistdatas* pDatas;
    tagGLlistdatas* pCurDatas;
    void* pBuf;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 178–248 */
/* addr: 0x00154870  size: 372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 178
 *   +0x001c -> line 183
 *   +0x0024 -> line 188
 *   +0x0028 -> line 186
 *   +0x002c -> line 187
 *   +0x0030 -> line 188
 *   +0x003c -> line 190
 *   +0x0048 -> line 191
 *   +0x004c -> line 192
 *   +0x0058 -> line 194
 *   +0x0064 -> line 195
 *   +0x0068 -> line 209
 *   +0x0070 -> line 212
 *   +0x0074 -> line 211
 *   +0x0078 -> line 212
 *   +0x0080 -> line 213
 *   +0x0084 -> line 214
 *   +0x0090 -> line 217
 *   +0x0098 -> line 220
 *   +0x00b0 -> line 221
 *   +0x00c8 -> line 222
 *   +0x00e0 -> line 223
 *   +0x00ec -> line 225
 *   +0x00f8 -> line 228
 *   +0x0100 -> line 242
 *   +0x0118 -> line 243
 *   +0x0130 -> line 244
 *   +0x013c -> line 246
 *   +0x0148 -> line 247
 *   +0x0154 -> line 248
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFreeListData(tagListData* pDataOfList)
{
    tagGLprimbuf* pNext;
    tagGLprimbuf* pPrimBuf;
    tagGLlistdatas* pDatas;
    tagGLlistcalls* pCalls;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 101–175 */
/* addr: 0x001549f0  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 101
 *   +0x0014 -> line 106
 *   +0x001c -> line 123
 *   +0x0020 -> line 128
 *   +0x0028 -> line 135
 *   +0x0034 -> line 136
 *   +0x0038 -> line 137
 *   +0x0048 -> line 153
 *   +0x0050 -> line 157
 *   +0x005c -> line 162
 *   +0x0068 -> line 163
 *   +0x006c -> line 164
 *   +0x0070 -> line 165
 *   +0x007c -> line 170
 *   +0x0088 -> line 171
 *   +0x008c -> line 172
 *   +0x0090 -> line 174
 *   +0x0098 -> line 175
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFreeListDataPartially(tagListData* pDataOfList)
{
    tagGLprimbuf* pNext;
    tagGLprimbuf* pPrimBuf;
    tagGLlistcalls* pCalls;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 56–98 */
/* addr: 0x00154aa0  size: 232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 56
 *   +0x0014 -> line 61
 *   +0x0024 -> line 62
 *   +0x0034 -> line 64
 *   +0x003c -> line 70
 *   +0x0040 -> line 68
 *   +0x0044 -> line 72
 *   +0x0050 -> line 76
 *   +0x0054 -> line 77
 *   +0x005c -> line 79
 *   +0x006c -> line 80
 *   +0x0070 -> line 83
 *   +0x0084 -> line 84
 *   +0x0088 -> line 87
 *   +0x008c -> line 85
 *   +0x0090 -> line 83
 *   +0x0094 -> line 86
 *   +0x0098 -> line 87
 *   +0x00a4 -> line 89
 *   +0x00b4 -> line 90
 *   +0x00b8 -> line 91
 *   +0x00bc -> line 93
 *   +0x00cc -> line 95
 *   +0x00d4 -> line 98
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tagListData** PS2glAddLists(unsigned int list, int range)
{
    int I;
    tagListNode* pNode;
    tagListNodeSingle* pSingleIndex;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Lists.c lines 30–53 */
/* addr: 0x00154b90  size: 132 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 31
 *   +0x0004 -> line 30
 *   +0x0008 -> line 31
 *   +0x000c -> line 30
 *   +0x0010 -> line 38
 *   +0x0014 -> line 40
 *   +0x0020 -> line 41
 *   +0x0028 -> line 42
 *   +0x0038 -> line 44
 *   +0x0040 -> line 46
 *   +0x0048 -> line 47
 *   +0x0060 -> line 48
 *   +0x006c -> line 49
 *   +0x0070 -> line 50
 *   +0x0078 -> line 52
 *   +0x007c -> line 53
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
tagListData** PS2glSearchList(unsigned int list)
{
    int iOffset;
    int I;
    tagListNode* pNode;
    tagListNodeSingle* pSingleIndex;
    /* TODO: decompile from asm/... */
}
