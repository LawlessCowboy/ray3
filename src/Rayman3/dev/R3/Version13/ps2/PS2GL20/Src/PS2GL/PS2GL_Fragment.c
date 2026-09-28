/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct tagstVIFCode tagstVIFCode;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct anon_3 anon_3;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct anon_4 anon_4;
typedef struct tagGLtexname tagGLtexname;
typedef struct anon_5 anon_5;
typedef struct anon_6 anon_6;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_40 anon_40;
typedef struct anon_7 anon_7;
typedef struct anon_22 anon_22;
typedef struct anon_27 anon_27;
typedef struct anon_34 anon_34;
typedef struct anon_33 anon_33;
typedef struct anon_31 anon_31;
typedef struct anon_21 anon_21;
typedef struct anon_12 anon_12;
typedef struct anon_39 anon_39;
typedef struct anon_29 anon_29;
typedef struct anon_9 anon_9;
typedef struct anon_10 anon_10;
typedef struct anon_26 anon_26;
typedef struct anon_32 anon_32;
typedef struct anon_16 anon_16;
typedef struct anon_14 anon_14;
typedef struct anon_30 anon_30;
typedef struct anon_28 anon_28;
typedef struct anon_24 anon_24;
typedef struct anon_38 anon_38;
typedef struct anon_8 anon_8;
typedef struct anon_18 anon_18;
typedef struct anon_37 anon_37;
typedef struct anon_11 anon_11;
typedef struct anon_17 anon_17;
typedef struct anon_23 anon_23;
typedef struct anon_15 anon_15;
typedef struct anon_19 anon_19;
typedef struct anon_25 anon_25;
typedef struct anon_36 anon_36;
typedef union anon_35 anon_35;
typedef struct tagGScontext tagGScontext;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct tagListData tagListData;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct anon_13 anon_13;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct anon_20 anon_20;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagListNode tagListNode;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct tag_GLlight tag_GLlight;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;

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

struct anon_1 {
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

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
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

struct anon_3 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct anon_4 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct anon_5 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_6 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
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

struct anon_7 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_22 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_27 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_34 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_33 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
};

struct anon_31 {
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

struct anon_21 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_12 {
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

struct anon_29 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct anon_9 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_10 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_26 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_32 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_16 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_14 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
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

struct anon_28 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_24 {
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

struct anon_8 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_18 {
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

struct anon_11 {
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

struct anon_17 {
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

struct anon_23 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_15 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_19 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_25 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_36 {
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

union anon_35 {
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
    anon_7 RGBAQ; /* +0x8 */
    anon_22 ST; /* +0x10 */
    anon_27 UV; /* +0x18 */
    anon_34 XYZF2; /* +0x20 */
    anon_33 XYZ2; /* +0x28 */
    anon_31 TEX0_1; /* +0x30 */
    anon_31 TEX0_2; /* +0x38 */
    anon_21 CLAMP_1; /* +0x40 */
    anon_21 CLAMP_2; /* +0x48 */
    anon_12 FOG; /* +0x50 */
    anon_34 XYZF3; /* +0x58 */
    anon_33 XYZ3; /* +0x60 */
    anon_39 TEX1_1; /* +0x68 */
    anon_39 TEX1_2; /* +0x70 */
    anon_0 TEX2_1; /* +0x78 */
    anon_0 TEX2_2; /* +0x80 */
    anon_29 XYOFFSET_1; /* +0x88 */
    anon_29 XYOFFSET_2; /* +0x90 */
    anon_4 PRMODECONT; /* +0x98 */
    anon_2 PRMODE; /* +0xa0 */
    anon_9 TEXCLUT; /* +0xa8 */
    anon_10 SCANMSK; /* +0xb0 */
    anon_26 MIPTBP1_1; /* +0xb8 */
    anon_26 MIPTBP1_2; /* +0xc0 */
    anon_32 MIPTBP2_1; /* +0xc8 */
    anon_32 MIPTBP2_2; /* +0xd0 */
    anon_3 TEXA; /* +0xd8 */
    anon_16 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_14 SCISSOR_1; /* +0xf0 */
    anon_14 SCISSOR_2; /* +0xf8 */
    anon_5 ALPHA_1; /* +0x100 */
    anon_5 ALPHA_2; /* +0x108 */
    anon_30 DIMX; /* +0x110 */
    anon_6 DTHE; /* +0x118 */
    anon_28 COLCLAMP; /* +0x120 */
    anon_24 TEST_1; /* +0x128 */
    anon_24 TEST_2; /* +0x130 */
    anon_38 PABE; /* +0x138 */
    anon_8 FBA_1; /* +0x140 */
    anon_8 FBA_2; /* +0x148 */
    anon_18 FRAME_1; /* +0x150 */
    anon_18 FRAME_2; /* +0x158 */
    anon_37 ZBUF_1; /* +0x160 */
    anon_37 ZBUF_2; /* +0x168 */
    anon_11 BITBLTBUF; /* +0x170 */
    anon_17 TRXPOS; /* +0x178 */
    anon_23 TRXREG; /* +0x180 */
    anon_15 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_19 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_25 LABEL; /* +0x1a8 */
    anon_36 ModFlgs; /* +0x1b0 */
    anon_36 GlobalModFlgs; /* +0x1b8 */
    anon_35 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_35* pqCurrent; /* +0x2224 */
    anon_1* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct tagGLtexblock {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
    int nLength : 11; /* bit 21, byte +0x0 */
};

struct anon_13 {
    unsigned long pad00; /* +0x0 */
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
    anon_1 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct tagGsLoadImage {
    anon_1 gifTag; /* +0x0 */
    anon_11 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_17 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_23 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_15 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct tagGLtexindex {
    unsigned int nTexID : 10; /* bit 0, byte +0x0 */
    int nStart : 11; /* bit 10, byte +0x0 */
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

struct tagGsSetTex {
    anon_1 gifTag; /* +0x0 */
    anon_13 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_31 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_39 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_26 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_32 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_21 clamp; /* +0x60 */
    long clampaddr; /* +0x68 */
};

struct anon_20 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct tagListNodeSingle {
    unsigned int nIndex; /* +0x0 */
    tagListData* pData; /* +0x4 */
};

struct tagListNode {
    tagListNode* pNext; /* +0x0 */
    unsigned int nIndex; /* +0x4 */
    int iSize; /* +0x8 */
    int apData[1]; /* +0xc */
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

struct tagGLlistpool {
    unsigned int nFreeIndex; /* +0x0 */
    tagListNodeSingle aSingleIndex[64]; /* +0x4 */
    tagListNode* pFirstNode; /* +0x204 */
    tagListNode* pLastNode; /* +0x208 */
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
    anon_20* pCurParamBegin; /* +0x5ce8 */
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
    anon_1* pGifTagFan; /* +0x6bf8 */
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
    anon_1* pGifTagBuf0; /* +0x6c5c */
    anon_1* pGifTagBuf1; /* +0x6c60 */
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

tagGScontext g_gsContext;
_GL_BUFFERINFO g_stBufferInfo;
tagGLcontext g_PS2glContext;
unsigned long AE_g_DATM;
unsigned long AE_g_DATE;
unsigned long AE_g_AFAIL;
unsigned long AE_g_AREF;
unsigned long AE_g_ATST;
unsigned long AE_g_ATE;
int AE_g_UseAlphaTestValues;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 18–29 */
/* addr: 0x0017a380  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 18
 *   +0x0044 -> line 20
 *   +0x0090 -> line 21
 *   +0x0098 -> line 22
 *   +0x00a0 -> line 23
 *   +0x00a8 -> line 24
 *   +0x00b0 -> line 25
 *   +0x00b8 -> line 28
 *   +0x00c4 -> line 29
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glFogf(unsigned int pname, float param)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 1190–1266 */
/* addr: 0x0017a450  size: 764 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1190
 *   +0x0004 -> line 1194
 *   +0x0008 -> line 1190
 *   +0x0018 -> line 1194
 *   +0x0024 -> line 1195
 *   +0x002c -> line 1197
 *   +0x0030 -> line 1202
 *   +0x0034 -> line 1197
 *   +0x0038 -> line 1202
 *   +0x003c -> line 1197
 *   +0x0040 -> line 1202
 *   +0x0048 -> line 1203
 *   +0x0050 -> line 1205
 *   +0x0054 -> line 1206
 *   +0x0060 -> line 1207
 *   +0x006c -> line 1202
 *   +0x0078 -> line 1203
 *   +0x0088 -> line 1204
 *   +0x0098 -> line 1205
 *   +0x00a8 -> line 1206
 *   +0x00b8 -> line 1207
 *   +0x00c0 -> line 1211
 *   +0x00c4 -> line 1212
 *   +0x00c8 -> line 1211
 *   +0x00cc -> line 1212
 *   +0x00dc -> line 1215
 *   +0x00e8 -> line 1216
 *   +0x00f0 -> line 1215
 *   +0x00fc -> line 1216
 *   +0x0104 -> line 1221
 *   +0x0108 -> line 1226
 *   +0x010c -> line 1221
 *   +0x0110 -> line 1226
 *   +0x0114 -> line 1222
 *   +0x0118 -> line 1226
 *   +0x011c -> line 1223
 *   +0x0120 -> line 1224
 *   +0x0124 -> line 1226
 *   +0x012c -> line 1229
 *   +0x0130 -> line 1230
 *   +0x0134 -> line 1229
 *   +0x0138 -> line 1230
 *   +0x013c -> line 1229
 *   +0x0140 -> line 1230
 *   +0x014c -> line 1233
 *   +0x0150 -> line 1234
 *   +0x0154 -> line 1233
 *   +0x0158 -> line 1238
 *   +0x015c -> line 1235
 *   +0x0160 -> line 1234
 *   +0x0164 -> line 1235
 *   +0x0180 -> line 1238
 *   +0x0184 -> line 1235
 *   +0x0190 -> line 1238
 *   +0x0194 -> line 1235
 *   +0x019c -> line 1238
 *   +0x01a4 -> line 1241
 *   +0x01a8 -> line 1242
 *   +0x01ac -> line 1241
 *   +0x01b0 -> line 1242
 *   +0x01b4 -> line 1241
 *   +0x01b8 -> line 1242
 *   +0x01c4 -> line 1245
 *   +0x01c8 -> line 1246
 *   +0x01cc -> line 1245
 *   +0x01d0 -> line 1249
 *   +0x01d4 -> line 1247
 *   +0x01d8 -> line 1246
 *   +0x01dc -> line 1247
 *   +0x01f8 -> line 1249
 *   +0x01fc -> line 1247
 *   +0x0208 -> line 1249
 *   +0x020c -> line 1247
 *   +0x0214 -> line 1249
 *   +0x021c -> line 1252
 *   +0x0228 -> line 1253
 *   +0x022c -> line 1252
 *   +0x0230 -> line 1253
 *   +0x0234 -> line 1252
 *   +0x0240 -> line 1253
 *   +0x0248 -> line 1254
 *   +0x0254 -> line 1255
 *   +0x0258 -> line 1254
 *   +0x0268 -> line 1255
 *   +0x0270 -> line 1256
 *   +0x027c -> line 1257
 *   +0x0280 -> line 1256
 *   +0x0284 -> line 1257
 *   +0x0288 -> line 1256
 *   +0x0294 -> line 1257
 *   +0x029c -> line 1259
 *   +0x02b0 -> line 1261
 *   +0x02bc -> line 1262
 *   +0x02c0 -> line 1261
 *   +0x02c4 -> line 1262
 *   +0x02c8 -> line 1261
 *   +0x02d4 -> line 1262
 *   +0x02dc -> line 1264
 *   +0x02e4 -> line 1266
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalFullScreenQuadJeffSpecialPAL_512_512(void)
{
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 1072–1186 */
/* addr: 0x0017a750  size: 940 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1072
 *   +0x0004 -> line 1076
 *   +0x0008 -> line 1072
 *   +0x002c -> line 1076
 *   +0x0038 -> line 1077
 *   +0x0040 -> line 1079
 *   +0x0044 -> line 1084
 *   +0x0048 -> line 1079
 *   +0x004c -> line 1084
 *   +0x0050 -> line 1079
 *   +0x0054 -> line 1084
 *   +0x005c -> line 1085
 *   +0x0064 -> line 1087
 *   +0x0068 -> line 1088
 *   +0x0074 -> line 1089
 *   +0x0080 -> line 1084
 *   +0x008c -> line 1085
 *   +0x009c -> line 1086
 *   +0x00ac -> line 1087
 *   +0x00bc -> line 1088
 *   +0x00cc -> line 1089
 *   +0x00d4 -> line 1093
 *   +0x00d8 -> line 1094
 *   +0x00dc -> line 1093
 *   +0x00e0 -> line 1094
 *   +0x00f0 -> line 1097
 *   +0x00fc -> line 1098
 *   +0x0104 -> line 1097
 *   +0x0110 -> line 1098
 *   +0x0118 -> line 1103
 *   +0x011c -> line 1108
 *   +0x0120 -> line 1103
 *   +0x0124 -> line 1108
 *   +0x0128 -> line 1104
 *   +0x012c -> line 1108
 *   +0x0130 -> line 1105
 *   +0x0134 -> line 1106
 *   +0x0138 -> line 1108
 *   +0x0140 -> line 1137
 *   +0x0144 -> line 1145
 *   +0x0148 -> line 1137
 *   +0x014c -> line 1145
 *   +0x0158 -> line 1137
 *   +0x015c -> line 1145
 *   +0x0160 -> line 1140
 *   +0x0164 -> line 1141
 *   +0x0168 -> line 1144
 *   +0x016c -> line 1145
 *   +0x0170 -> line 1153
 *   +0x0174 -> line 1138
 *   +0x0178 -> line 1137
 *   +0x017c -> line 1138
 *   +0x0180 -> line 1137
 *   +0x0184 -> line 1145
 *   +0x0190 -> line 1140
 *   +0x0194 -> line 1138
 *   +0x0198 -> line 1140
 *   +0x019c -> line 1138
 *   +0x01a0 -> line 1141
 *   +0x01a4 -> line 1144
 *   +0x01a8 -> line 1141
 *   +0x01ac -> line 1138
 *   +0x01b0 -> line 1144
 *   +0x01b4 -> line 1142
 *   +0x01b8 -> line 1144
 *   +0x01bc -> line 1147
 *   +0x01c4 -> line 1138
 *   +0x01c8 -> line 1145
 *   +0x01cc -> line 1150
 *   +0x01d4 -> line 1145
 *   +0x01dc -> line 1147
 *   +0x01e0 -> line 1145
 *   +0x01e4 -> line 1147
 *   +0x01f0 -> line 1150
 *   +0x01f8 -> line 1147
 *   +0x01fc -> line 1153
 *   +0x0200 -> line 1147
 *   +0x0204 -> line 1148
 *   +0x0210 -> line 1153
 *   +0x0218 -> line 1156
 *   +0x0224 -> line 1157
 *   +0x0228 -> line 1156
 *   +0x022c -> line 1157
 *   +0x0230 -> line 1156
 *   +0x0238 -> line 1157
 *   +0x0244 -> line 1159
 *   +0x0248 -> line 1160
 *   +0x024c -> line 1159
 *   +0x0250 -> line 1160
 *   +0x0260 -> line 1162
 *   +0x026c -> line 1163
 *   +0x0270 -> line 1162
 *   +0x0274 -> line 1163
 *   +0x0278 -> line 1162
 *   +0x0280 -> line 1163
 *   +0x028c -> line 1165
 *   +0x0290 -> line 1166
 *   +0x0294 -> line 1165
 *   +0x0298 -> line 1166
 *   +0x02a8 -> line 1167
 *   +0x02b8 -> line 1172
 *   +0x02c8 -> line 1173
 *   +0x02cc -> line 1172
 *   +0x02d4 -> line 1173
 *   +0x02d8 -> line 1172
 *   +0x02dc -> line 1173
 *   +0x02e4 -> line 1174
 *   +0x02f0 -> line 1175
 *   +0x02f4 -> line 1174
 *   +0x0304 -> line 1175
 *   +0x030c -> line 1176
 *   +0x0318 -> line 1177
 *   +0x031c -> line 1176
 *   +0x0320 -> line 1177
 *   +0x0324 -> line 1176
 *   +0x0330 -> line 1177
 *   +0x0338 -> line 1179
 *   +0x034c -> line 1181
 *   +0x0358 -> line 1182
 *   +0x035c -> line 1181
 *   +0x0360 -> line 1182
 *   +0x0364 -> line 1181
 *   +0x0370 -> line 1182
 *   +0x0378 -> line 1184
 *   +0x0380 -> line 1186
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalFullScreenQuadJeffSpecialNTSC_640_448(void)
{
    int Limit;
    int iVertStrip;
    unsigned long V2;
    unsigned int X1;
    anon_35 qworduv;
    anon_35 qword2;
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 963–1068 */
/* addr: 0x0017ab00  size: 2156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 963
 *   +0x0004 -> line 967
 *   +0x0008 -> line 963
 *   +0x0038 -> line 967
 *   +0x0060 -> line 968
 *   +0x0068 -> line 970
 *   +0x006c -> line 977
 *   +0x0070 -> line 970
 *   +0x0074 -> line 975
 *   +0x0078 -> line 970
 *   +0x007c -> line 975
 *   +0x0088 -> line 976
 *   +0x0090 -> line 977
 *   +0x0094 -> line 975
 *   +0x00a0 -> line 976
 *   +0x00ac -> line 977
 *   +0x00b4 -> line 979
 *   +0x00b8 -> line 980
 *   +0x00c4 -> line 981
 *   +0x00c8 -> line 979
 *   +0x00d4 -> line 980
 *   +0x00e0 -> line 981
 *   +0x0104 -> line 984
 *   +0x011c -> line 985
 *   +0x0124 -> line 987
 *   +0x0138 -> line 988
 *   +0x0140 -> line 990
 *   +0x0158 -> line 995
 *   +0x0164 -> line 997
 *   +0x0170 -> line 998
 *   +0x0178 -> line 999
 *   +0x0180 -> line 1000
 *   +0x018c -> line 1001
 *   +0x0190 -> line 1002
 *   +0x0194 -> line 997
 *   +0x01a0 -> line 998
 *   +0x01a4 -> line 997
 *   +0x01a8 -> line 998
 *   +0x01b0 -> line 1000
 *   +0x01b4 -> line 999
 *   +0x01b8 -> line 1000
 *   +0x01bc -> line 998
 *   +0x01c8 -> line 999
 *   +0x01d8 -> line 1000
 *   +0x01e8 -> line 1001
 *   +0x0204 -> line 1002
 *   +0x0220 -> line 1005
 *   +0x0234 -> line 1011
 *   +0x0238 -> line 1012
 *   +0x023c -> line 1011
 *   +0x0240 -> line 1012
 *   +0x0250 -> line 1016
 *   +0x025c -> line 1017
 *   +0x0264 -> line 1016
 *   +0x0270 -> line 1017
 *   +0x0278 -> line 1022
 *   +0x02c0 -> line 1023
 *   +0x02c8 -> line 1022
 *   +0x02d4 -> line 1023
 *   +0x0318 -> line 1024
 *   +0x0320 -> line 1023
 *   +0x032c -> line 1024
 *   +0x0370 -> line 1025
 *   +0x0378 -> line 1024
 *   +0x0384 -> line 1025
 *   +0x03c4 -> line 1027
 *   +0x03c8 -> line 1025
 *   +0x03cc -> line 1027
 *   +0x03d4 -> line 1025
 *   +0x03e8 -> line 1027
 *   +0x03f0 -> line 1029
 *   +0x03f4 -> line 1030
 *   +0x03f8 -> line 1029
 *   +0x03fc -> line 1030
 *   +0x0404 -> line 1029
 *   +0x0434 -> line 1030
 *   +0x043c -> line 1036
 *   +0x04a8 -> line 1040
 *   +0x04ac -> line 1036
 *   +0x04b0 -> line 1040
 *   +0x04b4 -> line 1036
 *   +0x04d0 -> line 1040
 *   +0x04e0 -> line 1036
 *   +0x04ec -> line 1040
 *   +0x04f0 -> line 1036
 *   +0x04f4 -> line 1040
 *   +0x04f8 -> line 1036
 *   +0x04fc -> line 1040
 *   +0x0560 -> line 1041
 *   +0x0574 -> line 1040
 *   +0x0578 -> line 1041
 *   +0x05ec -> line 1043
 *   +0x0600 -> line 1045
 *   +0x0604 -> line 1046
 *   +0x0608 -> line 1045
 *   +0x060c -> line 1046
 *   +0x0614 -> line 1045
 *   +0x0644 -> line 1046
 *   +0x064c -> line 1048
 *   +0x06d0 -> line 1049
 *   +0x06e4 -> line 1048
 *   +0x06e8 -> line 1049
 *   +0x075c -> line 1051
 *   +0x0770 -> line 1054
 *   +0x077c -> line 1055
 *   +0x0780 -> line 1054
 *   +0x0784 -> line 1055
 *   +0x0788 -> line 1054
 *   +0x0794 -> line 1055
 *   +0x079c -> line 1056
 *   +0x07a8 -> line 1057
 *   +0x07ac -> line 1056
 *   +0x07bc -> line 1057
 *   +0x07c4 -> line 1058
 *   +0x07d0 -> line 1059
 *   +0x07d4 -> line 1058
 *   +0x07d8 -> line 1059
 *   +0x07dc -> line 1058
 *   +0x07e8 -> line 1059
 *   +0x07f0 -> line 1061
 *   +0x0804 -> line 1063
 *   +0x0810 -> line 1064
 *   +0x0814 -> line 1063
 *   +0x0818 -> line 1064
 *   +0x081c -> line 1063
 *   +0x0828 -> line 1064
 *   +0x0830 -> line 1066
 *   +0x0838 -> line 1068
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalFullScreenQuadJeffWithoutOptimization(unsigned int mask, float x1, float y1, float x2, float y2, float R, float G, float B, float A, float u1, float v1, float u2, float v2)
{
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 699–960 */
/* addr: 0x0017b370  size: 3192 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 699
 *   +0x0004 -> line 703
 *   +0x0008 -> line 699
 *   +0x0054 -> line 703
 *   +0x007c -> line 704
 *   +0x0084 -> line 706
 *   +0x0088 -> line 713
 *   +0x008c -> line 706
 *   +0x0090 -> line 711
 *   +0x0094 -> line 706
 *   +0x0098 -> line 711
 *   +0x00a4 -> line 712
 *   +0x00ac -> line 713
 *   +0x00b0 -> line 711
 *   +0x00bc -> line 712
 *   +0x00c8 -> line 713
 *   +0x00d0 -> line 715
 *   +0x00d4 -> line 716
 *   +0x00e0 -> line 717
 *   +0x00e4 -> line 715
 *   +0x00f0 -> line 716
 *   +0x00fc -> line 717
 *   +0x0120 -> line 720
 *   +0x0138 -> line 721
 *   +0x0140 -> line 723
 *   +0x0154 -> line 724
 *   +0x015c -> line 726
 *   +0x0174 -> line 731
 *   +0x0180 -> line 733
 *   +0x018c -> line 734
 *   +0x0194 -> line 735
 *   +0x019c -> line 736
 *   +0x01a8 -> line 737
 *   +0x01ac -> line 738
 *   +0x01b0 -> line 733
 *   +0x01bc -> line 734
 *   +0x01c0 -> line 733
 *   +0x01c4 -> line 734
 *   +0x01cc -> line 736
 *   +0x01d0 -> line 735
 *   +0x01d4 -> line 736
 *   +0x01d8 -> line 734
 *   +0x01e4 -> line 735
 *   +0x01f4 -> line 736
 *   +0x0204 -> line 737
 *   +0x0220 -> line 738
 *   +0x023c -> line 741
 *   +0x0254 -> line 747
 *   +0x0258 -> line 748
 *   +0x025c -> line 747
 *   +0x0260 -> line 748
 *   +0x0274 -> line 751
 *   +0x0280 -> line 752
 *   +0x0288 -> line 751
 *   +0x0294 -> line 752
 *   +0x02a0 -> line 757
 *   +0x02e8 -> line 758
 *   +0x02f0 -> line 757
 *   +0x02fc -> line 758
 *   +0x0340 -> line 759
 *   +0x0348 -> line 758
 *   +0x0354 -> line 759
 *   +0x0398 -> line 760
 *   +0x03a0 -> line 759
 *   +0x03ac -> line 760
 *   +0x03ec -> line 762
 *   +0x03f0 -> line 760
 *   +0x03f4 -> line 762
 *   +0x03fc -> line 760
 *   +0x0410 -> line 762
 *   +0x041c -> line 771
 *   +0x0420 -> line 773
 *   +0x0424 -> line 771
 *   +0x0428 -> line 780
 *   +0x0430 -> line 771
 *   +0x0434 -> line 780
 *   +0x0438 -> line 772
 *   +0x0444 -> line 780
 *   +0x0448 -> line 773
 *   +0x044c -> line 780
 *   +0x04a8 -> line 781
 *   +0x04ac -> line 780
 *   +0x04b0 -> line 781
 *   +0x04b4 -> line 780
 *   +0x04bc -> line 781
 *   +0x04c0 -> line 780
 *   +0x04c8 -> line 781
 *   +0x04cc -> line 780
 *   +0x04d8 -> line 781
 *   +0x04dc -> line 780
 *   +0x04e0 -> line 781
 *   +0x04e4 -> line 780
 *   +0x04f0 -> line 781
 *   +0x04f4 -> line 780
 *   +0x04f8 -> line 781
 *   +0x054c -> line 787
 *   +0x0550 -> line 781
 *   +0x0554 -> line 787
 *   +0x0558 -> line 781
 *   +0x0574 -> line 787
 *   +0x0584 -> line 781
 *   +0x0590 -> line 787
 *   +0x0594 -> line 781
 *   +0x0598 -> line 787
 *   +0x059c -> line 781
 *   +0x05a0 -> line 787
 *   +0x0604 -> line 788
 *   +0x0618 -> line 787
 *   +0x061c -> line 788
 *   +0x068c -> line 790
 *   +0x06a0 -> line 788
 *   +0x06a4 -> line 790
 *   +0x0714 -> line 791
 *   +0x078c -> line 796
 *   +0x0790 -> line 802
 *   +0x0794 -> line 795
 *   +0x0798 -> line 802
 *   +0x079c -> line 798
 *   +0x07a0 -> line 802
 *   +0x07a4 -> line 799
 *   +0x07a8 -> line 796
 *   +0x07ac -> line 795
 *   +0x07b0 -> line 798
 *   +0x07b4 -> line 799
 *   +0x07b8 -> line 796
 *   +0x07bc -> line 795
 *   +0x07c0 -> line 798
 *   +0x07c4 -> line 799
 *   +0x07c8 -> line 802
 *   +0x07d0 -> line 804
 *   +0x07dc -> line 807
 *   +0x07e4 -> line 808
 *   +0x07f0 -> line 809
 *   +0x07f4 -> line 812
 *   +0x0804 -> line 813
 *   +0x0808 -> line 812
 *   +0x080c -> line 813
 *   +0x0810 -> line 812
 *   +0x0814 -> line 813
 *   +0x0820 -> line 814
 *   +0x0824 -> line 815
 *   +0x083c -> line 817
 *   +0x0844 -> line 819
 *   +0x084c -> line 817
 *   +0x085c -> line 818
 *   +0x0864 -> line 819
 *   +0x0868 -> line 818
 *   +0x086c -> line 817
 *   +0x0874 -> line 818
 *   +0x0884 -> line 819
 *   +0x088c -> line 820
 *   +0x0890 -> line 821
 *   +0x08a8 -> line 822
 *   +0x08ac -> line 827
 *   +0x08b0 -> line 825
 *   +0x08b4 -> line 826
 *   +0x08b8 -> line 825
 *   +0x08bc -> line 827
 *   +0x08d4 -> line 828
 *   +0x08dc -> line 831
 *   +0x08e8 -> line 834
 *   +0x08f0 -> line 835
 *   +0x08fc -> line 836
 *   +0x0900 -> line 839
 *   +0x0910 -> line 840
 *   +0x0914 -> line 839
 *   +0x0918 -> line 840
 *   +0x091c -> line 839
 *   +0x0920 -> line 840
 *   +0x092c -> line 841
 *   +0x0930 -> line 842
 *   +0x0948 -> line 844
 *   +0x0950 -> line 846
 *   +0x0958 -> line 844
 *   +0x0968 -> line 845
 *   +0x0970 -> line 846
 *   +0x0974 -> line 845
 *   +0x0978 -> line 844
 *   +0x0980 -> line 845
 *   +0x0990 -> line 846
 *   +0x0998 -> line 847
 *   +0x099c -> line 848
 *   +0x09b4 -> line 849
 *   +0x09b8 -> line 853
 *   +0x09bc -> line 851
 *   +0x09c0 -> line 852
 *   +0x09c4 -> line 851
 *   +0x09c8 -> line 853
 *   +0x09e4 -> line 855
 *   +0x09f0 -> line 858
 *   +0x0a04 -> line 859
 *   +0x0a08 -> line 858
 *   +0x0a0c -> line 859
 *   +0x0a10 -> line 858
 *   +0x0a14 -> line 859
 *   +0x0a20 -> line 860
 *   +0x0a24 -> line 861
 *   +0x0a3c -> line 863
 *   +0x0a40 -> line 866
 *   +0x0a44 -> line 864
 *   +0x0a48 -> line 863
 *   +0x0a4c -> line 865
 *   +0x0a64 -> line 866
 *   +0x0a68 -> line 865
 *   +0x0a6c -> line 866
 *   +0x0a78 -> line 867
 *   +0x0a7c -> line 868
 *   +0x0a94 -> line 869
 *   +0x0aa8 -> line 870
 *   +0x0ab4 -> line 874
 *   +0x0ac8 -> line 875
 *   +0x0acc -> line 874
 *   +0x0ad0 -> line 875
 *   +0x0ad4 -> line 874
 *   +0x0ad8 -> line 875
 *   +0x0ae4 -> line 876
 *   +0x0ae8 -> line 877
 *   +0x0b00 -> line 879
 *   +0x0b04 -> line 880
 *   +0x0b08 -> line 879
 *   +0x0b1c -> line 880
 *   +0x0b20 -> line 879
 *   +0x0b24 -> line 880
 *   +0x0b30 -> line 881
 *   +0x0b34 -> line 882
 *   +0x0b4c -> line 946
 *   +0x0b58 -> line 947
 *   +0x0b5c -> line 946
 *   +0x0b60 -> line 947
 *   +0x0b64 -> line 946
 *   +0x0b70 -> line 947
 *   +0x0b7c -> line 948
 *   +0x0b88 -> line 949
 *   +0x0b8c -> line 948
 *   +0x0b9c -> line 949
 *   +0x0ba8 -> line 950
 *   +0x0bb4 -> line 951
 *   +0x0bb8 -> line 950
 *   +0x0bbc -> line 951
 *   +0x0bc0 -> line 950
 *   +0x0bcc -> line 951
 *   +0x0bd8 -> line 953
 *   +0x0bf0 -> line 955
 *   +0x0bfc -> line 956
 *   +0x0c00 -> line 955
 *   +0x0c04 -> line 956
 *   +0x0c08 -> line 955
 *   +0x0c14 -> line 956
 *   +0x0c20 -> line 958
 *   +0x0c28 -> line 960
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalFullScreenQuadJeff(unsigned int mask, float x1, float y1, float x2, float y2, float R, float G, float B, float A, float u1, float v1, float u2, float v2)
{
    int j;
    int i;
    int V2;
    int V1;
    int ULAST;
    int U2;
    int U1;
    unsigned int XLAST;
    unsigned int X2;
    unsigned int X1;
    anon_35 qworduv;
    anon_35 qword2;
    anon_35 qword1;
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 588–692 */
/* addr: 0x0017bff0  size: 1880 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 588
 *   +0x0004 -> line 592
 *   +0x0008 -> line 588
 *   +0x0040 -> line 592
 *   +0x0068 -> line 593
 *   +0x0070 -> line 595
 *   +0x0074 -> line 602
 *   +0x0078 -> line 595
 *   +0x007c -> line 600
 *   +0x0080 -> line 595
 *   +0x0084 -> line 600
 *   +0x0090 -> line 601
 *   +0x0098 -> line 602
 *   +0x009c -> line 600
 *   +0x00a8 -> line 601
 *   +0x00b4 -> line 602
 *   +0x00bc -> line 604
 *   +0x00c0 -> line 605
 *   +0x00cc -> line 606
 *   +0x00d0 -> line 604
 *   +0x00dc -> line 605
 *   +0x00e8 -> line 606
 *   +0x010c -> line 609
 *   +0x0124 -> line 610
 *   +0x012c -> line 612
 *   +0x0140 -> line 613
 *   +0x0148 -> line 615
 *   +0x0160 -> line 619
 *   +0x0174 -> line 626
 *   +0x0178 -> line 625
 *   +0x017c -> line 626
 *   +0x0188 -> line 627
 *   +0x0190 -> line 628
 *   +0x019c -> line 629
 *   +0x01a8 -> line 630
 *   +0x01bc -> line 633
 *   +0x01c8 -> line 634
 *   +0x01d0 -> line 633
 *   +0x01dc -> line 634
 *   +0x01e4 -> line 639
 *   +0x022c -> line 640
 *   +0x0234 -> line 639
 *   +0x0240 -> line 640
 *   +0x0284 -> line 641
 *   +0x028c -> line 640
 *   +0x0298 -> line 641
 *   +0x02dc -> line 642
 *   +0x02e4 -> line 641
 *   +0x02f0 -> line 642
 *   +0x0330 -> line 644
 *   +0x0334 -> line 642
 *   +0x0338 -> line 644
 *   +0x0340 -> line 642
 *   +0x0354 -> line 644
 *   +0x035c -> line 649
 *   +0x0360 -> line 650
 *   +0x036c -> line 649
 *   +0x0398 -> line 650
 *   +0x03a0 -> line 656
 *   +0x040c -> line 659
 *   +0x0410 -> line 656
 *   +0x0414 -> line 659
 *   +0x0418 -> line 656
 *   +0x0420 -> line 659
 *   +0x0424 -> line 656
 *   +0x0428 -> line 659
 *   +0x0430 -> line 656
 *   +0x0440 -> line 659
 *   +0x0444 -> line 656
 *   +0x0450 -> line 659
 *   +0x0454 -> line 656
 *   +0x0458 -> line 659
 *   +0x045c -> line 656
 *   +0x0460 -> line 659
 *   +0x04a4 -> line 660
 *   +0x04a8 -> line 659
 *   +0x04ac -> line 660
 *   +0x0510 -> line 664
 *   +0x0524 -> line 666
 *   +0x0528 -> line 667
 *   +0x0534 -> line 666
 *   +0x0560 -> line 667
 *   +0x0568 -> line 670
 *   +0x05d4 -> line 671
 *   +0x0644 -> line 675
 *   +0x0658 -> line 678
 *   +0x0664 -> line 679
 *   +0x0668 -> line 678
 *   +0x066c -> line 679
 *   +0x0670 -> line 678
 *   +0x067c -> line 679
 *   +0x0684 -> line 680
 *   +0x0690 -> line 681
 *   +0x0694 -> line 680
 *   +0x06a4 -> line 681
 *   +0x06ac -> line 682
 *   +0x06b8 -> line 683
 *   +0x06bc -> line 682
 *   +0x06c0 -> line 683
 *   +0x06c4 -> line 682
 *   +0x06d0 -> line 683
 *   +0x06d8 -> line 685
 *   +0x06ec -> line 687
 *   +0x06f8 -> line 688
 *   +0x06fc -> line 687
 *   +0x0700 -> line 688
 *   +0x0704 -> line 687
 *   +0x0710 -> line 688
 *   +0x0718 -> line 690
 *   +0x0720 -> line 692
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalFullScreenQuad(unsigned int mask, float R, float G, float B, float A, float u1, float v1, float u2, float v2, unsigned char bBlend)
{
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 400–585 */
/* addr: 0x0017c750  size: 2264 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 400
 *   +0x0024 -> line 408
 *   +0x002c -> line 410
 *   +0x0030 -> line 411
 *   +0x0034 -> line 410
 *   +0x0038 -> line 416
 *   +0x003c -> line 410
 *   +0x0040 -> line 416
 *   +0x0044 -> line 411
 *   +0x0048 -> line 416
 *   +0x004c -> line 411
 *   +0x0050 -> line 417
 *   +0x0054 -> line 416
 *   +0x0058 -> line 417
 *   +0x005c -> line 418
 *   +0x0064 -> line 416
 *   +0x0070 -> line 417
 *   +0x007c -> line 418
 *   +0x0084 -> line 420
 *   +0x0088 -> line 421
 *   +0x0094 -> line 422
 *   +0x0098 -> line 420
 *   +0x00a4 -> line 421
 *   +0x00b0 -> line 422
 *   +0x00d4 -> line 425
 *   +0x00ec -> line 426
 *   +0x00f4 -> line 428
 *   +0x0108 -> line 429
 *   +0x0110 -> line 431
 *   +0x0128 -> line 435
 *   +0x013c -> line 441
 *   +0x0140 -> line 442
 *   +0x0154 -> line 445
 *   +0x0160 -> line 446
 *   +0x0168 -> line 445
 *   +0x0174 -> line 446
 *   +0x017c -> line 450
 *   +0x01a0 -> line 452
 *   +0x01a8 -> line 453
 *   +0x01ac -> line 454
 *   +0x01b0 -> line 456
 *   +0x01b8 -> line 459
 *   +0x0204 -> line 460
 *   +0x0208 -> line 459
 *   +0x020c -> line 460
 *   +0x0210 -> line 459
 *   +0x0218 -> line 460
 *   +0x0220 -> line 459
 *   +0x0224 -> line 460
 *   +0x0264 -> line 461
 *   +0x0268 -> line 460
 *   +0x026c -> line 461
 *   +0x0270 -> line 460
 *   +0x0278 -> line 461
 *   +0x0280 -> line 460
 *   +0x0284 -> line 461
 *   +0x02c4 -> line 462
 *   +0x02c8 -> line 461
 *   +0x02cc -> line 462
 *   +0x02d4 -> line 461
 *   +0x02e8 -> line 462
 *   +0x0344 -> line 465
 *   +0x0358 -> line 479
 *   +0x03c4 -> line 485
 *   +0x03c8 -> line 479
 *   +0x03cc -> line 485
 *   +0x03d0 -> line 479
 *   +0x03d8 -> line 485
 *   +0x03dc -> line 479
 *   +0x03e4 -> line 485
 *   +0x03e8 -> line 479
 *   +0x03f4 -> line 485
 *   +0x03f8 -> line 479
 *   +0x03fc -> line 485
 *   +0x0400 -> line 479
 *   +0x040c -> line 485
 *   +0x0410 -> line 479
 *   +0x0414 -> line 485
 *   +0x0468 -> line 488
 *   +0x046c -> line 485
 *   +0x0470 -> line 488
 *   +0x0474 -> line 485
 *   +0x047c -> line 488
 *   +0x0480 -> line 485
 *   +0x048c -> line 488
 *   +0x0490 -> line 485
 *   +0x0498 -> line 488
 *   +0x049c -> line 485
 *   +0x04a0 -> line 488
 *   +0x04a4 -> line 485
 *   +0x04b4 -> line 488
 *   +0x04f4 -> line 489
 *   +0x054c -> line 490
 *   +0x05a8 -> line 491
 *   +0x060c -> line 492
 *   +0x0620 -> line 494
 *   +0x062c -> line 497
 *   +0x0638 -> line 498
 *   +0x0644 -> line 499
 *   +0x0648 -> line 501
 *   +0x064c -> line 502
 *   +0x0660 -> line 504
 *   +0x0664 -> line 505
 *   +0x0678 -> line 506
 *   +0x067c -> line 508
 *   +0x0684 -> line 509
 *   +0x0690 -> line 512
 *   +0x0694 -> line 513
 *   +0x06a8 -> line 516
 *   +0x06ac -> line 518
 *   +0x06b0 -> line 517
 *   +0x06b4 -> line 518
 *   +0x06c4 -> line 519
 *   +0x06d4 -> line 520
 *   +0x06dc -> line 523
 *   +0x06e4 -> line 526
 *   +0x06ec -> line 527
 *   +0x06f8 -> line 528
 *   +0x06fc -> line 530
 *   +0x0700 -> line 531
 *   +0x0714 -> line 533
 *   +0x0718 -> line 534
 *   +0x072c -> line 535
 *   +0x0730 -> line 537
 *   +0x0738 -> line 538
 *   +0x0744 -> line 541
 *   +0x0748 -> line 542
 *   +0x075c -> line 545
 *   +0x0760 -> line 547
 *   +0x0764 -> line 546
 *   +0x0768 -> line 547
 *   +0x0778 -> line 548
 *   +0x0788 -> line 550
 *   +0x0794 -> line 554
 *   +0x0798 -> line 555
 *   +0x07ac -> line 557
 *   +0x07b0 -> line 558
 *   +0x07c4 -> line 566
 *   +0x07d0 -> line 567
 *   +0x07d4 -> line 566
 *   +0x07d8 -> line 567
 *   +0x07dc -> line 566
 *   +0x07e8 -> line 567
 *   +0x07f0 -> line 568
 *   +0x07fc -> line 569
 *   +0x0800 -> line 568
 *   +0x0810 -> line 569
 *   +0x0818 -> line 570
 *   +0x0824 -> line 571
 *   +0x0828 -> line 570
 *   +0x082c -> line 571
 *   +0x0830 -> line 570
 *   +0x083c -> line 571
 *   +0x0844 -> line 573
 *   +0x0858 -> line 575
 *   +0x0864 -> line 576
 *   +0x0868 -> line 575
 *   +0x086c -> line 576
 *   +0x0870 -> line 575
 *   +0x087c -> line 576
 *   +0x0884 -> line 578
 *   +0x088c -> line 580
 *   +0x08a4 -> line 581
 *   +0x08b0 -> line 585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClear(unsigned int mask)
{
    unsigned int i;
    unsigned int X2;
    unsigned int XLAST;
    unsigned int X1;
    anon_35 qword2;
    anon_35 qword;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 393–397 */
/* addr: 0x0017d030  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 393
 *   +0x0004 -> line 397
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClearStencil(int s)
{
    g_PS2glContext.iStencilClearValue = s;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 384–388 */
/* addr: 0x0017d040  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 384
 *   +0x0004 -> line 388
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClearIndex(float c)
{
    g_PS2glContext.fIndexClearValue = c;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 373–379 */
/* addr: 0x0017d050  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 373
 *   +0x0008 -> line 375
 *   +0x0018 -> line 379
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClearDepth(double depth)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 361–370 */
/* addr: 0x0017d080  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 361
 *   +0x0008 -> line 362
 *   +0x0010 -> line 363
 *   +0x0018 -> line 364
 *   +0x001c -> line 370
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClearColor(float red, float green, float blue, float alpha)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 348–356 */
/* addr: 0x0017d0b0  size: 36 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 348
 *   +0x0008 -> line 349
 *   +0x0010 -> line 350
 *   +0x0018 -> line 351
 *   +0x001c -> line 356
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glClearAccum(float red, float green, float blue, float alpha)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 339–341 */
/* addr: 0x0017d0e0  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 339
 *   +0x0004 -> line 340
 *   +0x0008 -> line 339
 *   +0x000c -> line 340
 *   +0x004c -> line 341
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glShadeModel(unsigned int mode)
{
    g_PS2glContext.eShadeModel = mode;
    g_gsContext.PRMODE.IIP = (mode == 0x1d01);
    g_gsContext.ModFlgs.PRMODE_Modified = 1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 334–334 */
/* addr: 0x0017d140  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 334
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glStencilOp(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 328–328 */
/* addr: 0x0017d150  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 328
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glStencilMask(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 322–322 */
/* addr: 0x0017d160  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 322
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glStencilFunc(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 294–316 */
/* addr: 0x0017d170  size: 392 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 299
 *   +0x0008 -> line 294
 *   +0x000c -> line 295
 *   +0x0014 -> line 294
 *   +0x001c -> line 299
 *   +0x0020 -> line 294
 *   +0x0024 -> line 296
 *   +0x0028 -> line 295
 *   +0x0034 -> line 297
 *   +0x0038 -> line 296
 *   +0x0044 -> line 297
 *   +0x004c -> line 299
 *   +0x0054 -> line 301
 *   +0x0068 -> line 305
 *   +0x0074 -> line 304
 *   +0x0078 -> line 305
 *   +0x0080 -> line 306
 *   +0x0088 -> line 308
 *   +0x0094 -> line 311
 *   +0x0098 -> line 312
 *   +0x009c -> line 311
 *   +0x00a4 -> line 312
 *   +0x00a8 -> line 311
 *   +0x00ac -> line 313
 *   +0x00b0 -> line 312
 *   +0x00b4 -> line 313
 *   +0x00b8 -> line 311
 *   +0x00bc -> line 313
 *   +0x00c0 -> line 314
 *   +0x00c4 -> line 311
 *   +0x00d8 -> line 312
 *   +0x00dc -> line 311
 *   +0x00e0 -> line 312
 *   +0x00e4 -> line 311
 *   +0x00e8 -> line 313
 *   +0x00ec -> line 312
 *   +0x00f0 -> line 313
 *   +0x00f4 -> line 312
 *   +0x00f8 -> line 314
 *   +0x00fc -> line 313
 *   +0x0100 -> line 314
 *   +0x0104 -> line 313
 *   +0x0108 -> line 311
 *   +0x010c -> line 314
 *   +0x0110 -> line 311
 *   +0x0114 -> line 314
 *   +0x0118 -> line 311
 *   +0x0120 -> line 312
 *   +0x0128 -> line 313
 *   +0x0130 -> line 314
 *   +0x0138 -> line 312
 *   +0x0150 -> line 313
 *   +0x0168 -> line 314
 *   +0x0180 -> line 316
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glScissor(int x, int y, int width, int height)
{
    int down;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 286–288 */
/* addr: 0x0017d300  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 286
 *   +0x0004 -> line 288
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPointSize(float size)
{
    g_PS2glContext.fPointSize = size;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 279–281 */
/* addr: 0x0017d310  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 279
 *   +0x0004 -> line 281
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glLogicOp(unsigned int opcode)
{
    g_PS2glContext.eLogicOpCode = opcode;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 269–274 */
/* addr: 0x0017d320  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 269
 *   +0x0004 -> line 273
 *   +0x0008 -> line 269
 *   +0x000c -> line 273
 *   +0x004c -> line 274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDepthMask(unsigned char flag)
{
    g_PS2glContext.eDepthWriteMask = flag;
    g_gsContext.ZBUF_1.ZMSK = !flag;
    g_gsContext.ModFlgs.ZBUF_1_Modified = 1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 246–264 */
/* addr: 0x0017d380  size: 176 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 246
 *   +0x0008 -> line 248
 *   +0x001c -> line 250
 *   +0x0048 -> line 252
 *   +0x0050 -> line 253
 *   +0x0058 -> line 254
 *   +0x0060 -> line 255
 *   +0x0064 -> line 262
 *   +0x00a8 -> line 264
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDepthFunc(unsigned int func)
{
    unsigned char zTst;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 219–239 */
/* addr: 0x0017d430  size: 184 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 222
 *   +0x0004 -> line 219
 *   +0x0008 -> line 222
 *   +0x000c -> line 223
 *   +0x0014 -> line 224
 *   +0x001c -> line 225
 *   +0x0020 -> line 227
 *   +0x002c -> line 228
 *   +0x0038 -> line 229
 *   +0x0044 -> line 230
 *   +0x0054 -> line 238
 *   +0x00b0 -> line 239
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glColorMask(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    unsigned int mask;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_Fragment.c lines 48–215 */
/* addr: 0x0017d4f0  size: 1372 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 55
 *   +0x0004 -> line 48
 *   +0x0008 -> line 55
 *   +0x000c -> line 58
 *   +0x0010 -> line 56
 *   +0x0014 -> line 49
 *   +0x0018 -> line 56
 *   +0x001c -> line 50
 *   +0x0020 -> line 51
 *   +0x0024 -> line 58
 *   +0x0060 -> line 61
 *   +0x0098 -> line 64
 *   +0x00a4 -> line 65
 *   +0x00ac -> line 68
 *   +0x00b4 -> line 69
 *   +0x00bc -> line 72
 *   +0x00c8 -> line 73
 *   +0x00d0 -> line 76
 *   +0x00d8 -> line 77
 *   +0x00e0 -> line 80
 *   +0x00ec -> line 81
 *   +0x00f4 -> line 84
 *   +0x00fc -> line 87
 *   +0x0104 -> line 90
 *   +0x013c -> line 93
 *   +0x0140 -> line 94
 *   +0x0148 -> line 98
 *   +0x014c -> line 97
 *   +0x0150 -> line 99
 *   +0x0158 -> line 102
 *   +0x015c -> line 103
 *   +0x0164 -> line 106
 *   +0x0170 -> line 107
 *   +0x0178 -> line 110
 *   +0x017c -> line 111
 *   +0x0184 -> line 114
 *   +0x0190 -> line 117
 *   +0x0198 -> line 120
 *   +0x01d0 -> line 123
 *   +0x01dc -> line 124
 *   +0x01e4 -> line 128
 *   +0x01e8 -> line 127
 *   +0x01ec -> line 129
 *   +0x01f4 -> line 135
 *   +0x0200 -> line 138
 *   +0x0208 -> line 141
 *   +0x0244 -> line 149
 *   +0x0250 -> line 152
 *   +0x0258 -> line 155
 *   +0x0294 -> line 158
 *   +0x02a0 -> line 159
 *   +0x02a8 -> line 163
 *   +0x02ac -> line 162
 *   +0x02b0 -> line 164
 *   +0x02b8 -> line 170
 *   +0x02c4 -> line 173
 *   +0x02cc -> line 176
 *   +0x030c -> line 184
 *   +0x031c -> line 192
 *   +0x032c -> line 198
 *   +0x0330 -> line 195
 *   +0x0334 -> line 198
 *   +0x0338 -> line 196
 *   +0x033c -> line 194
 *   +0x0340 -> line 196
 *   +0x0344 -> line 194
 *   +0x034c -> line 197
 *   +0x0350 -> line 195
 *   +0x0354 -> line 197
 *   +0x0358 -> line 194
 *   +0x0364 -> line 195
 *   +0x0368 -> line 196
 *   +0x036c -> line 197
 *   +0x0370 -> line 194
 *   +0x0390 -> line 195
 *   +0x0398 -> line 194
 *   +0x039c -> line 195
 *   +0x03a0 -> line 194
 *   +0x03a4 -> line 195
 *   +0x03c0 -> line 196
 *   +0x03c8 -> line 195
 *   +0x03cc -> line 196
 *   +0x03d0 -> line 195
 *   +0x03d4 -> line 196
 *   +0x03f0 -> line 197
 *   +0x03f8 -> line 196
 *   +0x03fc -> line 197
 *   +0x0400 -> line 196
 *   +0x0404 -> line 197
 *   +0x0428 -> line 198
 *   +0x043c -> line 199
 *   +0x0444 -> line 202
 *   +0x0448 -> line 205
 *   +0x044c -> line 203
 *   +0x0450 -> line 201
 *   +0x0454 -> line 203
 *   +0x0458 -> line 201
 *   +0x0460 -> line 204
 *   +0x0464 -> line 202
 *   +0x0468 -> line 204
 *   +0x046c -> line 201
 *   +0x0478 -> line 202
 *   +0x047c -> line 203
 *   +0x0480 -> line 204
 *   +0x0484 -> line 201
 *   +0x04a4 -> line 202
 *   +0x04ac -> line 201
 *   +0x04b0 -> line 202
 *   +0x04b4 -> line 201
 *   +0x04b8 -> line 202
 *   +0x04d4 -> line 203
 *   +0x04dc -> line 202
 *   +0x04e0 -> line 203
 *   +0x04e4 -> line 202
 *   +0x04e8 -> line 203
 *   +0x0504 -> line 204
 *   +0x050c -> line 203
 *   +0x0510 -> line 204
 *   +0x0514 -> line 203
 *   +0x0518 -> line 204
 *   +0x053c -> line 205
 *   +0x0554 -> line 215
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glBlendFunc(unsigned int sfactor, unsigned int dfactor)
{
    unsigned char FIX;
    unsigned char D;
    unsigned char C;
    unsigned char B;
    unsigned char A;
    /* TODO: decompile from asm/... */
}
