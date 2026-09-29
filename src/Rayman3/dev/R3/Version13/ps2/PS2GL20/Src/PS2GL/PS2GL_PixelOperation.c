/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct anon_0 anon_0;
typedef struct _sceDmaTag _sceDmaTag;
typedef struct anon_5 anon_5;
typedef struct tagGLprimbuf tagGLprimbuf;
typedef struct anon_1 anon_1;
typedef struct anon_2 anon_2;
typedef union anon_3 anon_3;
typedef struct tag_GLtexture tag_GLtexture;
typedef struct anon_4 anon_4;
typedef struct tagListNodeSingle tagListNodeSingle;
typedef struct tagGLlistpool tagGLlistpool;
typedef struct anon_6 anon_6;
typedef struct anon_7 anon_7;
typedef struct tagListNode tagListNode;
typedef struct tag_GLtexture_set tag_GLtexture_set;
typedef struct anon_32 anon_32;
typedef struct anon_40 anon_40;
typedef struct anon_49 anon_49;
typedef struct anon_36 anon_36;
typedef struct tagGsLoadImage tagGsLoadImage;
typedef struct anon_34 anon_34;
typedef struct anon_14 anon_14;
typedef struct anon_53 anon_53;
typedef struct anon_47 anon_47;
typedef struct tagGsSetTex tagGsSetTex;
typedef struct tagGLtexname tagGLtexname;
typedef struct tagGLtexblock tagGLtexblock;
typedef struct tagGLtexindex tagGLtexindex;
typedef struct tag_GLlight tag_GLlight;
typedef struct tag_GLmaterial tag_GLmaterial;
typedef struct tagGLArrayInfo tagGLArrayInfo;
typedef struct tagGLcontext tagGLcontext;
typedef struct _GL_BUFFERINFO _GL_BUFFERINFO;
typedef struct anon_8 anon_8;
typedef struct anon_9 anon_9;
typedef struct tag_GLtexture_image tag_GLtexture_image;
typedef struct anon_10 anon_10;
typedef struct anon_16 anon_16;
typedef struct anon_27 anon_27;
typedef struct anon_19 anon_19;
typedef struct anon_39 anon_39;
typedef struct anon_43 anon_43;
typedef struct anon_20 anon_20;
typedef struct anon_42 anon_42;
typedef struct anon_12 anon_12;
typedef struct anon_35 anon_35;
typedef struct anon_22 anon_22;
typedef struct anon_55 anon_55;
typedef struct anon_25 anon_25;
typedef struct anon_50 anon_50;
typedef struct anon_23 anon_23;
typedef struct anon_41 anon_41;
typedef struct anon_15 anon_15;
typedef struct anon_26 anon_26;
typedef struct anon_52 anon_52;
typedef struct anon_11 anon_11;
typedef struct anon_13 anon_13;
typedef struct tagstVIFCode tagstVIFCode;
typedef union unFunction unFunction;
typedef struct tagGLlistnode tagGLlistnode;
typedef struct tagGLlistcalls tagGLlistcalls;
typedef struct anon_17 anon_17;
typedef struct anon_18 anon_18;
typedef struct tagsceGsReg tagsceGsReg;
typedef struct tagGLlistdatas tagGLlistdatas;
typedef struct anon_48 anon_48;
typedef struct anon_54 anon_54;
typedef struct anon_33 anon_33;
typedef struct anon_29 anon_29;
typedef struct anon_31 anon_31;
typedef struct anon_21 anon_21;
typedef struct anon_37 anon_37;
typedef struct anon_24 anon_24;
typedef struct anon_28 anon_28;
typedef struct anon_45 anon_45;
typedef struct anon_51 anon_51;
typedef struct tagGScontext tagGScontext;
typedef struct tagListData tagListData;
typedef struct anon_44 anon_44;
typedef struct tag_stDoubleBufAdd tag_stDoubleBufAdd;
typedef struct anon_30 anon_30;
typedef struct anon_38 anon_38;
typedef struct anon_46 anon_46;

struct anon_0 {
    unsigned long OFX : 16; /* bit 0, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long OFY : 16; /* bit 32, byte +0x0 */
    unsigned long pad48 : 16; /* bit 48, byte +0x0 */
};

struct _sceDmaTag {
    unsigned short qwc; /* +0x0 */
    unsigned char mark; /* +0x2 */
    unsigned char id; /* +0x3 */
    _sceDmaTag* next; /* +0x4 */
    unsigned int p[2]; /* +0x8 */
};

struct anon_5 {
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
    anon_5 tagGif; /* +0x30 */
    int vData[4]; /* +0x40 */
};

struct anon_1 {
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

struct anon_2 {
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

union anon_3 {
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

struct anon_4 {
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

struct anon_6 {
    unsigned long TBP4 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW4 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP5 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW5 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP6 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW6 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_7 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 32; /* bit 32, byte +0x0 */
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

struct anon_32 {
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

struct anon_40 {
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

struct anon_49 {
    unsigned long RRW : 12; /* bit 0, byte +0x0 */
    unsigned long pad12 : 20; /* bit 12, byte +0x0 */
    unsigned long RRH : 12; /* bit 32, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct anon_36 {
    unsigned long XDR : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct tagGsLoadImage {
    anon_5 gifTag; /* +0x0 */
    anon_32 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_40 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_49 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_36 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
};

struct anon_34 {
    unsigned long pad00; /* +0x0 */
};

struct anon_14 {
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

struct anon_53 {
    unsigned long TBP1 : 14; /* bit 0, byte +0x0 */
    unsigned long TBW1 : 6; /* bit 14, byte +0x0 */
    unsigned long TBP2 : 14; /* bit 20, byte +0x0 */
    unsigned long TBW2 : 6; /* bit 34, byte +0x0 */
    unsigned long TBP3 : 14; /* bit 40, byte +0x0 */
    unsigned long TBW3 : 6; /* bit 54, byte +0x0 */
    unsigned long pad60 : 4; /* bit 60, byte +0x0 */
};

struct anon_47 {
    unsigned long WMS : 2; /* bit 0, byte +0x0 */
    unsigned long WMT : 2; /* bit 2, byte +0x0 */
    unsigned long MINU : 10; /* bit 4, byte +0x0 */
    unsigned long MAXU : 10; /* bit 14, byte +0x0 */
    unsigned long MINV : 10; /* bit 24, byte +0x0 */
    unsigned long MAXV : 10; /* bit 34, byte +0x0 */
    unsigned long pad44 : 20; /* bit 44, byte +0x0 */
};

struct tagGsSetTex {
    anon_5 gifTag; /* +0x0 */
    anon_34 texflush; /* +0x10 */
    long texflushaddr; /* +0x18 */
    anon_2 tex0; /* +0x20 */
    long tex0addr; /* +0x28 */
    anon_14 tex1; /* +0x30 */
    long tex1addr; /* +0x38 */
    anon_53 miptbp1; /* +0x40 */
    long miptbp1addr; /* +0x48 */
    anon_6 miptbp2; /* +0x50 */
    long miptbp2addr; /* +0x58 */
    anon_47 clamp; /* +0x60 */
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
} __attribute__((aligned(16)));

struct tag_GLmaterial {
    float vAmbient[4]; /* +0x0 */
    float vDiffuse[4]; /* +0x10 */
    float vSpecular[4]; /* +0x20 */
    float vEmission[4]; /* +0x30 */
    float fShininess; /* +0x40 */
    float fAmbientIndex; /* +0x44 */
    float fDiffuseIndex; /* +0x48 */
    float fSpecularIndex; /* +0x4c */
} __attribute__((aligned(16)));

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
    anon_10* pCurParamBegin; /* +0x5ce8 */
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
    anon_5* pGifTagFan; /* +0x6bf8 */
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
    anon_5* pGifTagBuf0; /* +0x6c5c */
    anon_5* pGifTagBuf1; /* +0x6c60 */
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

struct anon_8 {
    unsigned long X : 16; /* bit 0, byte +0x0 */
    unsigned long Y : 16; /* bit 16, byte +0x0 */
    unsigned long Z : 24; /* bit 32, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_9 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
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

struct anon_10 {
    float vObjectBS[4]; /* +0x0 */
    unsigned char bFinalCompile; /* +0x10 */
    unsigned int mode; /* +0x14 */
    tagGLprimbuf* pPrimBuf; /* +0x18 */
};

struct anon_16 {
    unsigned int EN1 : 1; /* bit 0, byte +0x0 */
    unsigned int EN2 : 1; /* bit 1, byte +0x0 */
    unsigned int CRTMD : 3; /* bit 2, byte +0x0 */
    unsigned int MMOD : 1; /* bit 5, byte +0x0 */
    unsigned int AMOD : 1; /* bit 6, byte +0x0 */
    unsigned int SLBG : 1; /* bit 7, byte +0x0 */
    unsigned int ALP : 8; /* bit 8, byte +0x0 */
    unsigned int p0 : 16; /* bit 16, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_27 {
    unsigned int INT : 1; /* bit 0, byte +0x0 */
    unsigned int FFMD : 1; /* bit 1, byte +0x0 */
    unsigned int DPMS : 2; /* bit 2, byte +0x0 */
    unsigned int p0 : 28; /* bit 4, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_19 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct anon_39 {
    unsigned int DX : 12; /* bit 0, byte +0x0 */
    unsigned int DY : 11; /* bit 12, byte +0x0 */
    unsigned int MAGH : 4; /* bit 23, byte +0x0 */
    unsigned int MAGV : 2; /* bit 27, byte +0x0 */
    unsigned int p0 : 3; /* bit 29, byte +0x0 */
    unsigned int DW : 12; /* bit 0, byte +0x4 */
    unsigned int DH : 11; /* bit 12, byte +0x4 */
    unsigned int p1 : 9; /* bit 23, byte +0x4 */
};

struct anon_43 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int p0 : 8; /* bit 24, byte +0x0 */
    unsigned int p1; /* +0x4 */
};

struct anon_20 {
    anon_16 pmode; /* +0x0 */
    anon_27 smode2; /* +0x8 */
    anon_19 dispfb; /* +0x10 */
    anon_39 display; /* +0x18 */
    anon_43 bgcolor; /* +0x20 */
};

struct anon_42 {
    unsigned long FBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 7; /* bit 9, byte +0x0 */
    unsigned long FBW : 6; /* bit 16, byte +0x0 */
    unsigned long pad22 : 2; /* bit 22, byte +0x0 */
    unsigned long PSM : 6; /* bit 24, byte +0x0 */
    unsigned long pad30 : 2; /* bit 30, byte +0x0 */
    unsigned long FBMSK : 32; /* bit 32, byte +0x0 */
};

struct anon_12 {
    unsigned long ZBP : 9; /* bit 0, byte +0x0 */
    unsigned long pad09 : 15; /* bit 9, byte +0x0 */
    unsigned long PSM : 4; /* bit 24, byte +0x0 */
    unsigned long pad28 : 4; /* bit 28, byte +0x0 */
    unsigned long ZMSK : 1; /* bit 32, byte +0x0 */
    unsigned long pad33 : 31; /* bit 33, byte +0x0 */
};

struct anon_35 {
    unsigned long SCAX0 : 11; /* bit 0, byte +0x0 */
    unsigned long pad11 : 5; /* bit 11, byte +0x0 */
    unsigned long SCAX1 : 11; /* bit 16, byte +0x0 */
    unsigned long pad27 : 5; /* bit 27, byte +0x0 */
    unsigned long SCAY0 : 11; /* bit 32, byte +0x0 */
    unsigned long pad43 : 5; /* bit 43, byte +0x0 */
    unsigned long SCAY1 : 11; /* bit 48, byte +0x0 */
    unsigned long pad59 : 5; /* bit 59, byte +0x0 */
};

struct anon_22 {
    unsigned long AC : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_55 {
    unsigned long CLAMP : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_25 {
    unsigned long DTHE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_50 {
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

struct anon_23 {
    anon_42 frame1; /* +0x0 */
    unsigned long frame1addr; /* +0x8 */
    anon_12 zbuf1; /* +0x10 */
    long zbuf1addr; /* +0x18 */
    anon_0 xyoffset1; /* +0x20 */
    long xyoffset1addr; /* +0x28 */
    anon_35 scissor1; /* +0x30 */
    long scissor1addr; /* +0x38 */
    anon_22 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_55 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_25 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_50 test1; /* +0x70 */
    long test1addr; /* +0x78 */
};

struct anon_41 {
    anon_42 frame2; /* +0x0 */
    unsigned long frame2addr; /* +0x8 */
    anon_12 zbuf2; /* +0x10 */
    long zbuf2addr; /* +0x18 */
    anon_0 xyoffset2; /* +0x20 */
    long xyoffset2addr; /* +0x28 */
    anon_35 scissor2; /* +0x30 */
    long scissor2addr; /* +0x38 */
    anon_22 prmodecont; /* +0x40 */
    long prmodecontaddr; /* +0x48 */
    anon_55 colclamp; /* +0x50 */
    long colclampaddr; /* +0x58 */
    anon_25 dthe; /* +0x60 */
    long dtheaddr; /* +0x68 */
    anon_50 test2; /* +0x70 */
    long test2addr; /* +0x78 */
};

struct anon_15 {
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

struct anon_26 {
    unsigned int R : 8; /* bit 0, byte +0x0 */
    unsigned int G : 8; /* bit 8, byte +0x0 */
    unsigned int B : 8; /* bit 16, byte +0x0 */
    unsigned int A : 8; /* bit 24, byte +0x0 */
    float Q; /* +0x4 */
};

struct anon_52 {
    anon_50 testa; /* +0x0 */
    long testaaddr; /* +0x8 */
    anon_15 prim; /* +0x10 */
    long primaddr; /* +0x18 */
    anon_26 rgbaq; /* +0x20 */
    long rgbaqaddr; /* +0x28 */
    anon_7 xyz2a; /* +0x30 */
    long xyz2aaddr; /* +0x38 */
    anon_7 xyz2b; /* +0x40 */
    long xyz2baddr; /* +0x48 */
    anon_50 testb; /* +0x50 */
    long testbaddr; /* +0x58 */
};

struct anon_11 {
    anon_20 disp[2]; /* +0x0 */
    anon_5 giftag0; /* +0x50 */
    anon_23 draw01; /* +0x60 */
    anon_41 draw02; /* +0xe0 */
    anon_52 clear0; /* +0x160 */
    anon_5 giftag1; /* +0x1c0 */
    anon_23 draw11; /* +0x1d0 */
    anon_41 draw12; /* +0x250 */
    anon_52 clear1; /* +0x2d0 */
};

struct anon_13 {
    unsigned long PABE : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
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

struct anon_17 {
    unsigned long pad00 : 20; /* bit 0, byte +0x0 */
    unsigned long PSM : 6; /* bit 20, byte +0x0 */
    unsigned long pad26 : 11; /* bit 26, byte +0x0 */
    unsigned long CBP : 14; /* bit 37, byte +0x0 */
    unsigned long CPSM : 4; /* bit 51, byte +0x0 */
    unsigned long CSM : 1; /* bit 55, byte +0x0 */
    unsigned long CSA : 5; /* bit 56, byte +0x0 */
    unsigned long CLD : 3; /* bit 61, byte +0x0 */
};

struct anon_18 {
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

struct tagsceGsReg {
    unsigned long DATA; /* +0x0 */
};

struct tagGLlistdatas {
    tagGLlistdatas* pNext; /* +0x0 */
    int apData[3]; /* +0x4 */
};

struct anon_48 {
    float S; /* +0x0 */
    float T; /* +0x4 */
};

struct anon_54 {
    unsigned long U : 14; /* bit 0, byte +0x0 */
    unsigned long pad14 : 2; /* bit 14, byte +0x0 */
    unsigned long V : 14; /* bit 16, byte +0x0 */
    unsigned long pad30 : 34; /* bit 30, byte +0x0 */
};

struct anon_33 {
    unsigned long pad00 : 56; /* bit 0, byte +0x0 */
    unsigned long F : 8; /* bit 56, byte +0x0 */
};

struct anon_29 {
    unsigned long CBW : 6; /* bit 0, byte +0x0 */
    unsigned long COU : 6; /* bit 6, byte +0x0 */
    unsigned long COV : 10; /* bit 12, byte +0x0 */
    unsigned long pad22 : 42; /* bit 22, byte +0x0 */
};

struct anon_31 {
    unsigned long MSK : 2; /* bit 0, byte +0x0 */
    unsigned long pad02 : 62; /* bit 2, byte +0x0 */
};

struct anon_21 {
    unsigned long TA0 : 8; /* bit 0, byte +0x0 */
    unsigned long pad08 : 7; /* bit 8, byte +0x0 */
    unsigned long AEM : 1; /* bit 15, byte +0x0 */
    unsigned long pad16 : 16; /* bit 16, byte +0x0 */
    unsigned long TA1 : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_37 {
    unsigned long FCR : 8; /* bit 0, byte +0x0 */
    unsigned long FCG : 8; /* bit 8, byte +0x0 */
    unsigned long FCB : 8; /* bit 16, byte +0x0 */
    unsigned long pad24 : 40; /* bit 24, byte +0x0 */
};

struct anon_24 {
    unsigned long A : 2; /* bit 0, byte +0x0 */
    unsigned long B : 2; /* bit 2, byte +0x0 */
    unsigned long C : 2; /* bit 4, byte +0x0 */
    unsigned long D : 2; /* bit 6, byte +0x0 */
    unsigned long pad8 : 24; /* bit 8, byte +0x0 */
    unsigned long FIX : 8; /* bit 32, byte +0x0 */
    unsigned long pad40 : 24; /* bit 40, byte +0x0 */
};

struct anon_28 {
    unsigned long FBA : 1; /* bit 0, byte +0x0 */
    unsigned long pad01 : 63; /* bit 1, byte +0x0 */
};

struct anon_45 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct anon_51 {
    unsigned int ID; /* +0x0 */
    unsigned int IDMSK; /* +0x4 */
};

struct tagGScontext {
    anon_15 PRIM; /* +0x0 */
    anon_26 RGBAQ; /* +0x8 */
    anon_48 ST; /* +0x10 */
    anon_54 UV; /* +0x18 */
    anon_8 XYZF2; /* +0x20 */
    anon_7 XYZ2; /* +0x28 */
    anon_2 TEX0_1; /* +0x30 */
    anon_2 TEX0_2; /* +0x38 */
    anon_47 CLAMP_1; /* +0x40 */
    anon_47 CLAMP_2; /* +0x48 */
    anon_33 FOG; /* +0x50 */
    anon_8 XYZF3; /* +0x58 */
    anon_7 XYZ3; /* +0x60 */
    anon_14 TEX1_1; /* +0x68 */
    anon_14 TEX1_2; /* +0x70 */
    anon_17 TEX2_1; /* +0x78 */
    anon_17 TEX2_2; /* +0x80 */
    anon_0 XYOFFSET_1; /* +0x88 */
    anon_0 XYOFFSET_2; /* +0x90 */
    anon_22 PRMODECONT; /* +0x98 */
    anon_18 PRMODE; /* +0xa0 */
    anon_29 TEXCLUT; /* +0xa8 */
    anon_31 SCANMSK; /* +0xb0 */
    anon_53 MIPTBP1_1; /* +0xb8 */
    anon_53 MIPTBP1_2; /* +0xc0 */
    anon_6 MIPTBP2_1; /* +0xc8 */
    anon_6 MIPTBP2_2; /* +0xd0 */
    anon_21 TEXA; /* +0xd8 */
    anon_37 FOGCOL; /* +0xe0 */
    tagsceGsReg TEXFLUSH; /* +0xe8 */
    anon_35 SCISSOR_1; /* +0xf0 */
    anon_35 SCISSOR_2; /* +0xf8 */
    anon_24 ALPHA_1; /* +0x100 */
    anon_24 ALPHA_2; /* +0x108 */
    anon_1 DIMX; /* +0x110 */
    anon_25 DTHE; /* +0x118 */
    anon_55 COLCLAMP; /* +0x120 */
    anon_50 TEST_1; /* +0x128 */
    anon_50 TEST_2; /* +0x130 */
    anon_13 PABE; /* +0x138 */
    anon_28 FBA_1; /* +0x140 */
    anon_28 FBA_2; /* +0x148 */
    anon_42 FRAME_1; /* +0x150 */
    anon_42 FRAME_2; /* +0x158 */
    anon_12 ZBUF_1; /* +0x160 */
    anon_12 ZBUF_2; /* +0x168 */
    anon_32 BITBLTBUF; /* +0x170 */
    anon_40 TRXPOS; /* +0x178 */
    anon_49 TRXREG; /* +0x180 */
    anon_36 TRXDIR; /* +0x188 */
    tagsceGsReg HWREG; /* +0x190 */
    anon_45 SIGNAL; /* +0x198 */
    tagsceGsReg FINISH; /* +0x1a0 */
    anon_51 LABEL; /* +0x1a8 */
    anon_4 ModFlgs; /* +0x1b0 */
    anon_4 GlobalModFlgs; /* +0x1b8 */
    anon_3 PackageBuffer[518]; /* +0x1c0 */
    int iBufCount; /* +0x2220 */
    anon_3* pqCurrent; /* +0x2224 */
    anon_5* pCurTag; /* +0x2228 */
    signed char iRegs; /* +0x222c */
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

struct anon_44 {
    unsigned int FBP : 9; /* bit 0, byte +0x0 */
    unsigned int FBW : 6; /* bit 9, byte +0x0 */
    unsigned int PSM : 5; /* bit 15, byte +0x0 */
    unsigned int p0 : 12; /* bit 20, byte +0x0 */
    unsigned int DBX : 11; /* bit 0, byte +0x4 */
    unsigned int DBY : 11; /* bit 11, byte +0x4 */
    unsigned int p1 : 10; /* bit 22, byte +0x4 */
};

struct tag_stDoubleBufAdd {
    anon_44 dispfb1[2]; /* +0x0 */
    anon_9 display1[2]; /* +0x10 */
};

struct anon_30 {
    unsigned long pad00; /* +0x0 */
};

struct anon_38 {
    anon_5 giftag0; /* +0x0 */
    anon_32 bitbltbuf; /* +0x10 */
    long bitbltbufaddr; /* +0x18 */
    anon_40 trxpos; /* +0x20 */
    long trxposaddr; /* +0x28 */
    anon_49 trxreg; /* +0x30 */
    long trxregaddr; /* +0x38 */
    anon_36 trxdir; /* +0x40 */
    long trxdiraddr; /* +0x48 */
    anon_5 giftag1; /* +0x50 */
};

struct anon_46 {
    unsigned int vifcode[4]; /* +0x0 */
    anon_5 giftag; /* +0x10 */
    anon_32 bitbltbuf; /* +0x20 */
    long bitbltbufaddr; /* +0x28 */
    anon_40 trxpos; /* +0x30 */
    long trxposaddr; /* +0x38 */
    anon_49 trxreg; /* +0x40 */
    long trxregaddr; /* +0x48 */
    anon_30 finish; /* +0x50 */
    long finishaddr; /* +0x58 */
    anon_36 trxdir; /* +0x60 */
    long trxdiraddr; /* +0x68 */
};

int AE_g_UseAlphaTestValues;
unsigned long AE_g_DATM;
unsigned long AE_g_DATE;
unsigned long AE_g_AFAIL;
unsigned long AE_g_AREF;
unsigned long AE_g_ATST;
unsigned long AE_g_ATE;
static anon_3 AE_g_qOldAlpha;
static unsigned char AE_g_bOldDepthTest;
static int AE_g_iOldMSK;
static long AE_g_iOldBP;
static int AE_g_iOldPSM;
tagGScontext g_gsContext;
tagGLcontext g_PS2glContext;
_GL_BUFFERINFO g_stBufferInfo;
anon_11 g_stDoubleBuf;
tag_stDoubleBufAdd g_stDoubleBufAdd;
int PS2glLiberator;
int PS2glAllocator;

void impPS2glAccum(unsigned int op, float value);
void impPS2glRasterPos4fv(float* v1);
void PS2glFreeTexBlockSafe(int iBlock, int iSize);
unsigned char PS2glIsEnabled(unsigned int cap);
void PS2glDisable(unsigned int cap);
void PS2glEnable(unsigned int cap);
void GsSendData(unsigned int reg, anon_3* data);
void GsUpdate(void);
void AE_InternalGetBPandPSMFromID(int BufferID, unsigned long* pDestBP, unsigned long* pDestPSM);

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 507–507 */
/* addr: 0x00161b20  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 507
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void plyPS2glAccum(anon_29* param0)
{
    impPS2glAccum(*(unsigned int*)param0, ((float*)param0)[1]);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1897–1904 */
/* addr: 0x00161b30  size: 1280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1897
 *   +0x0004 -> line 1898
 *   +0x0008 -> line 1897
 *   +0x0010 -> line 1898
 *   +0x0080 -> line 1899
 *   +0x0090 -> line 1898
 *   +0x009c -> line 1899
 *   +0x013c -> line 1900
 *   +0x0144 -> line 1899
 *   +0x0158 -> line 1900
 *   +0x01e4 -> line 1901
 *   +0x0214 -> line 1902
 *   +0x0218 -> line 1901
 *   +0x0260 -> line 1902
 *   +0x0264 -> line 1901
 *   +0x0268 -> line 1902
 *   +0x0270 -> line 1901
 *   +0x0274 -> line 1902
 *   +0x0278 -> line 1901
 *   +0x027c -> line 1902
 *   +0x0294 -> line 1901
 *   +0x02a4 -> line 1902
 *   +0x02a8 -> line 1901
 *   +0x02b0 -> line 1902
 *   +0x02b4 -> line 1901
 *   +0x0320 -> line 1902
 *   +0x03ac -> line 1903
 *   +0x04f0 -> line 1904
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_CopyBackBufferOnScreen(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1833–1892 */
/* addr: 0x00162030  size: 1232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1833
 *   +0x0004 -> line 1844
 *   +0x0008 -> line 1833
 *   +0x0014 -> line 1844
 *   +0x001c -> line 1846
 *   +0x002c -> line 1849
 *   +0x0038 -> line 1850
 *   +0x0044 -> line 1849
 *   +0x0048 -> line 1850
 *   +0x0058 -> line 1849
 *   +0x0060 -> line 1850
 *   +0x0064 -> line 1849
 *   +0x007c -> line 1851
 *   +0x0080 -> line 1854
 *   +0x0088 -> line 1856
 *   +0x008c -> line 1849
 *   +0x00a0 -> line 1854
 *   +0x00a4 -> line 1849
 *   +0x00a8 -> line 1854
 *   +0x00ac -> line 1850
 *   +0x00bc -> line 1854
 *   +0x00c0 -> line 1851
 *   +0x00c4 -> line 1850
 *   +0x00d4 -> line 1854
 *   +0x00d8 -> line 1852
 *   +0x00dc -> line 1850
 *   +0x00e0 -> line 1852
 *   +0x00e4 -> line 1850
 *   +0x00e8 -> line 1854
 *   +0x00fc -> line 1852
 *   +0x0104 -> line 1854
 *   +0x0110 -> line 1850
 *   +0x0120 -> line 1854
 *   +0x0128 -> line 1851
 *   +0x012c -> line 1854
 *   +0x0130 -> line 1851
 *   +0x0134 -> line 1854
 *   +0x013c -> line 1851
 *   +0x0144 -> line 1854
 *   +0x014c -> line 1852
 *   +0x0150 -> line 1854
 *   +0x0154 -> line 1852
 *   +0x0158 -> line 1854
 *   +0x0170 -> line 1851
 *   +0x017c -> line 1852
 *   +0x0180 -> line 1851
 *   +0x0194 -> line 1859
 *   +0x0198 -> line 1852
 *   +0x01a0 -> line 1854
 *   +0x01a4 -> line 1852
 *   +0x01a8 -> line 1854
 *   +0x01b4 -> line 1857
 *   +0x01b8 -> line 1852
 *   +0x01bc -> line 1854
 *   +0x01c0 -> line 1852
 *   +0x01c4 -> line 1854
 *   +0x01c8 -> line 1859
 *   +0x01cc -> line 1854
 *   +0x01d0 -> line 1852
 *   +0x01d4 -> line 1854
 *   +0x01d8 -> line 1852
 *   +0x01dc -> line 1854
 *   +0x01e0 -> line 1859
 *   +0x01e4 -> line 1854
 *   +0x01f4 -> line 1852
 *   +0x01fc -> line 1854
 *   +0x0260 -> line 1857
 *   +0x0264 -> line 1859
 *   +0x026c -> line 1860
 *   +0x02c8 -> line 1861
 *   +0x02cc -> line 1860
 *   +0x02d0 -> line 1861
 *   +0x02d4 -> line 1860
 *   +0x02dc -> line 1861
 *   +0x02e4 -> line 1862
 *   +0x02e8 -> line 1864
 *   +0x02ec -> line 1863
 *   +0x02f0 -> line 1864
 *   +0x0300 -> line 1869
 *   +0x032c -> line 1870
 *   +0x0330 -> line 1869
 *   +0x0334 -> line 1870
 *   +0x0338 -> line 1869
 *   +0x033c -> line 1870
 *   +0x034c -> line 1871
 *   +0x0350 -> line 1870
 *   +0x0354 -> line 1871
 *   +0x0358 -> line 1870
 *   +0x035c -> line 1872
 *   +0x0360 -> line 1871
 *   +0x0364 -> line 1872
 *   +0x0368 -> line 1871
 *   +0x036c -> line 1869
 *   +0x037c -> line 1870
 *   +0x0384 -> line 1871
 *   +0x038c -> line 1870
 *   +0x03a4 -> line 1871
 *   +0x03b8 -> line 1872
 *   +0x03c0 -> line 1873
 *   +0x0408 -> line 1875
 *   +0x044c -> line 1877
 *   +0x0454 -> line 1878
 *   +0x047c -> line 1879
 *   +0x0484 -> line 1881
 *   +0x0498 -> line 1883
 *   +0x04a0 -> line 1884
 *   +0x04a8 -> line 1887
 *   +0x04b0 -> line 1890
 *   +0x04b8 -> line 1892
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_MoveGreenToAlpha(void)
{
    anon_3 qword;
    unsigned long DestPSM;
    unsigned long DestBP;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1813–1825 */
/* addr: 0x00162500  size: 164 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1813
 *   +0x0008 -> line 1819
 *   +0x0014 -> line 1822
 *   +0x0024 -> line 1823
 *   +0x0028 -> line 1822
 *   +0x0030 -> line 1823
 *   +0x0034 -> line 1822
 *   +0x0048 -> line 1823
 *   +0x0050 -> line 1822
 *   +0x0054 -> line 1823
 *   +0x0058 -> line 1822
 *   +0x0060 -> line 1823
 *   +0x0064 -> line 1822
 *   +0x0068 -> line 1823
 *   +0x006c -> line 1822
 *   +0x0074 -> line 1823
 *   +0x0090 -> line 1824
 *   +0x0098 -> line 1825
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SetDrawTarget(int BufferID)
{
    unsigned long DestBP;
    unsigned long DestPSM;
    AE_InternalGetBPandPSMFromID(BufferID, &DestBP, &DestPSM);
    g_gsContext.FRAME_1.FBP = DestBP; g_gsContext.ModFlgs.FRAME_1_Modified = 1;
    g_gsContext.FRAME_1.PSM = DestPSM; g_gsContext.ModFlgs.FRAME_1_Modified = 1;
    GsUpdate();
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1793–1810 */
/* addr: 0x001625b0  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1793
 *   +0x0008 -> line 1802
 *   +0x000c -> line 1793
 *   +0x0010 -> line 1802
 *   +0x0014 -> line 1799
 *   +0x0018 -> line 1800
 *   +0x001c -> line 1802
 *   +0x0024 -> line 1803
 *   +0x0040 -> line 1805
 *   +0x0044 -> line 1803
 *   +0x0048 -> line 1805
 *   +0x0050 -> line 1803
 *   +0x0078 -> line 1805
 *   +0x0080 -> line 1806
 *   +0x0084 -> line 1807
 *   +0x0098 -> line 1808
 *   +0x00a0 -> line 1809
 *   +0x00cc -> line 1810
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SetTextureNoBilinear(int BufferID)
{
    anon_3 qword;
    unsigned long DestPSM;
    unsigned long DestBP;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1772–1789 */
/* addr: 0x00162690  size: 224 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1772
 *   +0x0008 -> line 1781
 *   +0x000c -> line 1772
 *   +0x0010 -> line 1781
 *   +0x0014 -> line 1778
 *   +0x0018 -> line 1779
 *   +0x001c -> line 1781
 *   +0x0024 -> line 1782
 *   +0x0040 -> line 1784
 *   +0x0044 -> line 1782
 *   +0x0048 -> line 1784
 *   +0x0050 -> line 1782
 *   +0x0078 -> line 1784
 *   +0x0080 -> line 1785
 *   +0x0084 -> line 1786
 *   +0x0088 -> line 1785
 *   +0x008c -> line 1786
 *   +0x009c -> line 1787
 *   +0x00a4 -> line 1788
 *   +0x00d0 -> line 1789
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SetTextureNoAlpha(int BufferID)
{
    anon_3 qword;
    unsigned long DestPSM;
    unsigned long DestBP;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1752–1769 */
/* addr: 0x00162770  size: 220 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1752
 *   +0x0008 -> line 1761
 *   +0x000c -> line 1752
 *   +0x0010 -> line 1761
 *   +0x0014 -> line 1758
 *   +0x0018 -> line 1759
 *   +0x001c -> line 1761
 *   +0x0024 -> line 1762
 *   +0x0040 -> line 1764
 *   +0x0044 -> line 1762
 *   +0x0048 -> line 1764
 *   +0x004c -> line 1762
 *   +0x0074 -> line 1764
 *   +0x007c -> line 1765
 *   +0x0080 -> line 1766
 *   +0x0084 -> line 1765
 *   +0x0088 -> line 1766
 *   +0x0098 -> line 1767
 *   +0x00a0 -> line 1768
 *   +0x00cc -> line 1769
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SetTexture(int BufferID)
{
    anon_3 qword;
    unsigned long DestPSM;
    unsigned long DestBP;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1748–1749 */
/* addr: 0x00162850  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1748
 *   +0x0008 -> line 1749
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
int AE_GetZBufferBase(void)
{
    return g_stDoubleBuf.draw01.zbuf1.ZBP;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1689–1744 */
/* addr: 0x00162860  size: 296 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1689
 *   +0x0040 -> line 1693
 *   +0x0044 -> line 1694
 *   +0x0048 -> line 1693
 *   +0x004c -> line 1694
 *   +0x0054 -> line 1695
 *   +0x0058 -> line 1694
 *   +0x0060 -> line 1695
 *   +0x0064 -> line 1697
 *   +0x006c -> line 1700
 *   +0x0070 -> line 1701
 *   +0x0074 -> line 1700
 *   +0x0078 -> line 1701
 *   +0x0080 -> line 1702
 *   +0x0084 -> line 1701
 *   +0x008c -> line 1702
 *   +0x0090 -> line 1704
 *   +0x0098 -> line 1708
 *   +0x009c -> line 1709
 *   +0x00a0 -> line 1711
 *   +0x00a8 -> line 1716
 *   +0x00ac -> line 1715
 *   +0x00b0 -> line 1716
 *   +0x00c0 -> line 1717
 *   +0x00cc -> line 1720
 *   +0x00d8 -> line 1721
 *   +0x00e0 -> line 1724
 *   +0x00e8 -> line 1728
 *   +0x00f0 -> line 1729
 *   +0x00f4 -> line 1728
 *   +0x00f8 -> line 1729
 *   +0x0100 -> line 1730
 *   +0x0108 -> line 1732
 *   +0x0110 -> line 1737
 *   +0x0118 -> line 1742
 *   +0x011c -> line 1743
 *   +0x0120 -> line 1744
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_InternalGetBPandPSMFromID(int BufferID, unsigned long* pDestBP, unsigned long* pDestPSM)
{
    unsigned long DestPSM;
    unsigned long DestBP;
    anon_44 dispfb;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1660–1681 */
/* addr: 0x00162990  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1660
 *   +0x0004 -> line 1661
 *   +0x0008 -> line 1660
 *   +0x000c -> line 1661
 *   +0x0038 -> line 1662
 *   +0x003c -> line 1665
 *   +0x0040 -> line 1661
 *   +0x0044 -> line 1665
 *   +0x0048 -> line 1662
 *   +0x004c -> line 1667
 *   +0x0050 -> line 1663
 *   +0x0054 -> line 1667
 *   +0x0058 -> line 1661
 *   +0x005c -> line 1668
 *   +0x0064 -> line 1662
 *   +0x0070 -> line 1663
 *   +0x0074 -> line 1661
 *   +0x0078 -> line 1662
 *   +0x007c -> line 1661
 *   +0x0080 -> line 1662
 *   +0x0084 -> line 1661
 *   +0x008c -> line 1662
 *   +0x0090 -> line 1663
 *   +0x0094 -> line 1662
 *   +0x0098 -> line 1663
 *   +0x00a4 -> line 1662
 *   +0x00ac -> line 1663
 *   +0x00c0 -> line 1662
 *   +0x00c4 -> line 1673
 *   +0x00c8 -> line 1662
 *   +0x00d0 -> line 1663
 *   +0x00d4 -> line 1662
 *   +0x00d8 -> line 1663
 *   +0x00f8 -> line 1673
 *   +0x0100 -> line 1674
 *   +0x0108 -> line 1675
 *   +0x0124 -> line 1676
 *   +0x0140 -> line 1677
 *   +0x0148 -> line 1680
 *   +0x014c -> line 1681
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_End(void)
{
    g_gsContext.FRAME_1.FBP = AE_g_iOldBP; g_gsContext.ModFlgs.FRAME_1_Modified = 1;
    g_gsContext.FRAME_1.PSM = AE_g_iOldPSM; g_gsContext.ModFlgs.FRAME_1_Modified = 1;
    g_gsContext.FRAME_1.FBMSK = AE_g_iOldMSK; g_gsContext.ModFlgs.FRAME_1_Modified = 1;
    g_PS2glContext.bTexCubeChanged = 1;
    g_PS2glContext.abTex2DChanged[0] = 1;
    g_PS2glContext.abTex1DChanged[0] = 1;
    if (AE_g_bOldDepthTest)
        PS2glEnable(0xB71);
    AE_g_qOldAlpha.ubData[8] = 0x42; GsSendData(0xE, &AE_g_qOldAlpha);
    *(anon_3*)&g_gsContext.ALPHA_1 = AE_g_qOldAlpha;
    GsUpdate();
    AE_g_UseAlphaTestValues = 0;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1646–1657 */
/* addr: 0x00162af0  size: 148 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1646
 *   +0x0004 -> line 1647
 *   +0x0008 -> line 1646
 *   +0x000c -> line 1647
 *   +0x0010 -> line 1648
 *   +0x0014 -> line 1647
 *   +0x0018 -> line 1648
 *   +0x001c -> line 1647
 *   +0x0020 -> line 1649
 *   +0x0024 -> line 1648
 *   +0x0028 -> line 1649
 *   +0x002c -> line 1648
 *   +0x0030 -> line 1652
 *   +0x0034 -> line 1649
 *   +0x0038 -> line 1652
 *   +0x003c -> line 1649
 *   +0x0044 -> line 1652
 *   +0x004c -> line 1653
 *   +0x0054 -> line 1654
 *   +0x0060 -> line 1655
 *   +0x0068 -> line 1656
 *   +0x0088 -> line 1657
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_Begin(void)
{
    AE_g_iOldPSM = g_gsContext.FRAME_1.PSM;
    AE_g_iOldBP = g_gsContext.FRAME_1.FBP;
    AE_g_iOldMSK = g_gsContext.FRAME_1.FBMSK;
    if (g_stBufferInfo.iAuxBufferSize)
        PS2glFreeTexBlockSafe(0, g_stBufferInfo.iAuxBufferSize);
    AE_g_bOldDepthTest = PS2glIsEnabled(0xB71);
    PS2glDisable(0xB71);
    AE_g_qOldAlpha = *(anon_3*)&g_gsContext.ALPHA_1;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1617–1622 */
/* addr: 0x00162b90  size: 280 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1621
 *   +0x0004 -> line 1618
 *   +0x0008 -> line 1621
 *   +0x000c -> line 1618
 *   +0x0010 -> line 1617
 *   +0x0014 -> line 1619
 *   +0x0018 -> line 1617
 *   +0x001c -> line 1619
 *   +0x0020 -> line 1620
 *   +0x0024 -> line 1617
 *   +0x002c -> line 1620
 *   +0x0030 -> line 1617
 *   +0x0038 -> line 1618
 *   +0x003c -> line 1619
 *   +0x0040 -> line 1620
 *   +0x0044 -> line 1617
 *   +0x006c -> line 1618
 *   +0x009c -> line 1619
 *   +0x00cc -> line 1620
 *   +0x00fc -> line 1621
 *   +0x0110 -> line 1622
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SetGS(int vA, int vB, int vC, int vD, unsigned int vFIX)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1595–1612 */
/* addr: 0x00162cb0  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1595
 *   +0x0004 -> line 1596
 *   +0x0008 -> line 1595
 *   +0x000c -> line 1599
 *   +0x0014 -> line 1596
 *   +0x0018 -> line 1599
 *   +0x001c -> line 1596
 *   +0x0020 -> line 1597
 *   +0x0024 -> line 1599
 *   +0x0028 -> line 1601
 *   +0x0030 -> line 1599
 *   +0x0034 -> line 1600
 *   +0x0038 -> line 1599
 *   +0x0040 -> line 1600
 *   +0x0044 -> line 1595
 *   +0x004c -> line 1599
 *   +0x0050 -> line 1601
 *   +0x0058 -> line 1603
 *   +0x0074 -> line 1605
 *   +0x007c -> line 1608
 *   +0x0098 -> line 1609
 *   +0x009c -> line 1611
 *   +0x00bc -> line 1612
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_DrawWindowWithoutOptimization(float x1, float y1, float x2, float y2, float r, float g, float b, float a, float u1, float v1, float u2, float v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1573–1590 */
/* addr: 0x00162d80  size: 200 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1573
 *   +0x0004 -> line 1574
 *   +0x0008 -> line 1573
 *   +0x000c -> line 1577
 *   +0x0014 -> line 1574
 *   +0x0018 -> line 1577
 *   +0x001c -> line 1574
 *   +0x0020 -> line 1575
 *   +0x0024 -> line 1577
 *   +0x0028 -> line 1579
 *   +0x0030 -> line 1577
 *   +0x0034 -> line 1578
 *   +0x0038 -> line 1577
 *   +0x0040 -> line 1578
 *   +0x0044 -> line 1573
 *   +0x004c -> line 1577
 *   +0x0050 -> line 1579
 *   +0x0058 -> line 1581
 *   +0x0074 -> line 1583
 *   +0x007c -> line 1586
 *   +0x0098 -> line 1587
 *   +0x009c -> line 1589
 *   +0x00bc -> line 1590
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_DrawWindow(float x1, float y1, float x2, float y2, float r, float g, float b, float a, float u1, float v1, float u2, float v2)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1526–1559 */
/* addr: 0x00162e50  size: 1232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1526
 *   +0x0004 -> line 1530
 *   +0x0008 -> line 1526
 *   +0x000c -> line 1530
 *   +0x0010 -> line 1526
 *   +0x0014 -> line 1530
 *   +0x00d8 -> line 1534
 *   +0x0198 -> line 1538
 *   +0x01a4 -> line 1541
 *   +0x0268 -> line 1545
 *   +0x032c -> line 1549
 *   +0x0338 -> line 1552
 *   +0x03fc -> line 1556
 *   +0x04c0 -> line 1559
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlurWithOptimization(int Counter)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1489–1522 */
/* addr: 0x00163320  size: 1232 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1489
 *   +0x0004 -> line 1493
 *   +0x0008 -> line 1489
 *   +0x000c -> line 1493
 *   +0x0010 -> line 1489
 *   +0x0014 -> line 1493
 *   +0x00d8 -> line 1497
 *   +0x0198 -> line 1501
 *   +0x01a4 -> line 1504
 *   +0x0268 -> line 1508
 *   +0x032c -> line 1512
 *   +0x0338 -> line 1515
 *   +0x03fc -> line 1519
 *   +0x04c0 -> line 1522
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_SimpleBlur(int Counter)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1468–1470 */
/* addr: 0x001637f0  size: 204 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1468
 *   +0x0004 -> line 1469
 *   +0x0008 -> line 1468
 *   +0x000c -> line 1469
 *   +0x00c0 -> line 1470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void AE_CopyScreen(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1283–1427 */
/* addr: 0x001638c0  size: 3680 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1283
 *   +0x0004 -> line 1288
 *   +0x0008 -> line 1283
 *   +0x001c -> line 1288
 *   +0x0028 -> line 1290
 *   +0x0078 -> line 1294
 *   +0x007c -> line 1295
 *   +0x0080 -> line 1294
 *   +0x0084 -> line 1296
 *   +0x008c -> line 1297
 *   +0x0090 -> line 1296
 *   +0x0094 -> line 1299
 *   +0x0098 -> line 1300
 *   +0x00a0 -> line 1296
 *   +0x00a4 -> line 1294
 *   +0x00a8 -> line 1296
 *   +0x00ac -> line 1295
 *   +0x00b0 -> line 1296
 *   +0x00b4 -> line 1297
 *   +0x00b8 -> line 1295
 *   +0x00bc -> line 1301
 *   +0x00c4 -> line 1296
 *   +0x00e0 -> line 1302
 *   +0x00e8 -> line 1297
 *   +0x00ec -> line 1296
 *   +0x00f0 -> line 1297
 *   +0x00f4 -> line 1296
 *   +0x00fc -> line 1297
 *   +0x0100 -> line 1296
 *   +0x0104 -> line 1297
 *   +0x0108 -> line 1296
 *   +0x010c -> line 1303
 *   +0x0110 -> line 1296
 *   +0x0114 -> line 1297
 *   +0x0118 -> line 1299
 *   +0x011c -> line 1297
 *   +0x0120 -> line 1299
 *   +0x0124 -> line 1297
 *   +0x0138 -> line 1304
 *   +0x013c -> line 1297
 *   +0x0140 -> line 1300
 *   +0x0144 -> line 1299
 *   +0x0148 -> line 1304
 *   +0x014c -> line 1303
 *   +0x0150 -> line 1306
 *   +0x0154 -> line 1299
 *   +0x0160 -> line 1304
 *   +0x0164 -> line 1300
 *   +0x017c -> line 1306
 *   +0x0180 -> line 1300
 *   +0x0184 -> line 1306
 *   +0x0188 -> line 1300
 *   +0x019c -> line 1301
 *   +0x01cc -> line 1302
 *   +0x01fc -> line 1303
 *   +0x022c -> line 1304
 *   +0x0240 -> line 1306
 *   +0x0284 -> line 1308
 *   +0x0290 -> line 1306
 *   +0x02b4 -> line 1308
 *   +0x02bc -> line 1309
 *   +0x02c0 -> line 1310
 *   +0x02d4 -> line 1311
 *   +0x02e8 -> line 1312
 *   +0x02ec -> line 1311
 *   +0x0300 -> line 1312
 *   +0x0374 -> line 1316
 *   +0x0388 -> line 1318
 *   +0x03d0 -> line 1320
 *   +0x03d4 -> line 1318
 *   +0x03d8 -> line 1320
 *   +0x03dc -> line 1318
 *   +0x03e0 -> line 1322
 *   +0x03e4 -> line 1319
 *   +0x03e8 -> line 1322
 *   +0x03ec -> line 1323
 *   +0x03f4 -> line 1318
 *   +0x03f8 -> line 1319
 *   +0x03fc -> line 1318
 *   +0x0400 -> line 1319
 *   +0x0408 -> line 1318
 *   +0x040c -> line 1319
 *   +0x0410 -> line 1318
 *   +0x0418 -> line 1319
 *   +0x041c -> line 1318
 *   +0x0420 -> line 1319
 *   +0x0424 -> line 1318
 *   +0x042c -> line 1319
 *   +0x0448 -> line 1328
 *   +0x0450 -> line 1329
 *   +0x0458 -> line 1335
 *   +0x045c -> line 1331
 *   +0x0460 -> line 1333
 *   +0x0464 -> line 1337
 *   +0x0468 -> line 1332
 *   +0x0474 -> line 1335
 *   +0x047c -> line 1337
 *   +0x0480 -> line 1332
 *   +0x0488 -> line 1333
 *   +0x048c -> line 1332
 *   +0x0490 -> line 1331
 *   +0x0498 -> line 1332
 *   +0x04b4 -> line 1333
 *   +0x04b8 -> line 1332
 *   +0x04bc -> line 1333
 *   +0x04c0 -> line 1332
 *   +0x04c8 -> line 1333
 *   +0x04cc -> line 1332
 *   +0x04d0 -> line 1333
 *   +0x04d4 -> line 1332
 *   +0x04dc -> line 1333
 *   +0x04fc -> line 1335
 *   +0x0508 -> line 1337
 *   +0x0510 -> line 1339
 *   +0x0524 -> line 1340
 *   +0x052c -> line 1339
 *   +0x0554 -> line 1340
 *   +0x0580 -> line 1341
 *   +0x0588 -> line 1344
 *   +0x058c -> line 1345
 *   +0x0590 -> line 1344
 *   +0x0598 -> line 1345
 *   +0x059c -> line 1344
 *   +0x05a4 -> line 1345
 *   +0x05a8 -> line 1346
 *   +0x05ac -> line 1344
 *   +0x05d4 -> line 1345
 *   +0x0604 -> line 1348
 *   +0x0608 -> line 1350
 *   +0x060c -> line 1348
 *   +0x0620 -> line 1349
 *   +0x0628 -> line 1348
 *   +0x0630 -> line 1351
 *   +0x0638 -> line 1350
 *   +0x0640 -> line 1348
 *   +0x0660 -> line 1349
 *   +0x0690 -> line 1350
 *   +0x06a4 -> line 1351
 *   +0x0708 -> line 1355
 *   +0x071c -> line 1357
 *   +0x0758 -> line 1358
 *   +0x075c -> line 1357
 *   +0x0764 -> line 1358
 *   +0x0768 -> line 1357
 *   +0x0778 -> line 1358
 *   +0x0780 -> line 1357
 *   +0x0784 -> line 1358
 *   +0x0788 -> line 1357
 *   +0x0790 -> line 1358
 *   +0x0794 -> line 1357
 *   +0x0798 -> line 1358
 *   +0x079c -> line 1357
 *   +0x07a4 -> line 1358
 *   +0x07c0 -> line 1359
 *   +0x07c8 -> line 1360
 *   +0x07d0 -> line 1366
 *   +0x07d4 -> line 1362
 *   +0x07d8 -> line 1364
 *   +0x07dc -> line 1363
 *   +0x07e8 -> line 1366
 *   +0x07f0 -> line 1367
 *   +0x07f4 -> line 1363
 *   +0x07f8 -> line 1368
 *   +0x07fc -> line 1363
 *   +0x0800 -> line 1364
 *   +0x0804 -> line 1363
 *   +0x0808 -> line 1362
 *   +0x0810 -> line 1368
 *   +0x0814 -> line 1363
 *   +0x0830 -> line 1369
 *   +0x0838 -> line 1364
 *   +0x083c -> line 1363
 *   +0x0840 -> line 1364
 *   +0x0844 -> line 1363
 *   +0x084c -> line 1364
 *   +0x0850 -> line 1363
 *   +0x0854 -> line 1364
 *   +0x0858 -> line 1363
 *   +0x085c -> line 1371
 *   +0x0860 -> line 1363
 *   +0x0864 -> line 1371
 *   +0x0868 -> line 1364
 *   +0x086c -> line 1370
 *   +0x0870 -> line 1364
 *   +0x0874 -> line 1371
 *   +0x0878 -> line 1370
 *   +0x087c -> line 1371
 *   +0x0880 -> line 1364
 *   +0x0894 -> line 1367
 *   +0x0898 -> line 1364
 *   +0x089c -> line 1366
 *   +0x08a0 -> line 1367
 *   +0x08a4 -> line 1366
 *   +0x08b0 -> line 1371
 *   +0x08b4 -> line 1367
 *   +0x08c0 -> line 1373
 *   +0x08c8 -> line 1371
 *   +0x08d0 -> line 1367
 *   +0x08f0 -> line 1368
 *   +0x0920 -> line 1369
 *   +0x0950 -> line 1370
 *   +0x0980 -> line 1371
 *   +0x0994 -> line 1373
 *   +0x09f8 -> line 1377
 *   +0x0a0c -> line 1379
 *   +0x0a48 -> line 1380
 *   +0x0a4c -> line 1379
 *   +0x0a54 -> line 1380
 *   +0x0a58 -> line 1379
 *   +0x0a68 -> line 1380
 *   +0x0a70 -> line 1379
 *   +0x0a74 -> line 1380
 *   +0x0a78 -> line 1379
 *   +0x0a80 -> line 1380
 *   +0x0a84 -> line 1379
 *   +0x0a88 -> line 1380
 *   +0x0a8c -> line 1379
 *   +0x0a94 -> line 1380
 *   +0x0ab0 -> line 1381
 *   +0x0ab8 -> line 1382
 *   +0x0ac0 -> line 1384
 *   +0x0ad0 -> line 1385
 *   +0x0b1c -> line 1386
 *   +0x0b24 -> line 1388
 *   +0x0b28 -> line 1387
 *   +0x0b2c -> line 1388
 *   +0x0b30 -> line 1387
 *   +0x0b34 -> line 1388
 *   +0x0b38 -> line 1390
 *   +0x0b3c -> line 1388
 *   +0x0b48 -> line 1390
 *   +0x0b4c -> line 1387
 *   +0x0b50 -> line 1388
 *   +0x0b5c -> line 1390
 *   +0x0b60 -> line 1388
 *   +0x0b8c -> line 1390
 *   +0x0b94 -> line 1391
 *   +0x0b98 -> line 1392
 *   +0x0bac -> line 1393
 *   +0x0bd0 -> line 1394
 *   +0x0bd8 -> line 1393
 *   +0x0bdc -> line 1394
 *   +0x0c40 -> line 1405
 *   +0x0c44 -> line 1397
 *   +0x0c48 -> line 1405
 *   +0x0c50 -> line 1397
 *   +0x0c58 -> line 1399
 *   +0x0c60 -> line 1400
 *   +0x0c64 -> line 1405
 *   +0x0c6c -> line 1406
 *   +0x0cbc -> line 1407
 *   +0x0cc4 -> line 1408
 *   +0x0ccc -> line 1416
 *   +0x0cd0 -> line 1413
 *   +0x0cd4 -> line 1415
 *   +0x0cd8 -> line 1417
 *   +0x0cdc -> line 1414
 *   +0x0ce8 -> line 1416
 *   +0x0cf0 -> line 1417
 *   +0x0cf4 -> line 1414
 *   +0x0cf8 -> line 1415
 *   +0x0cfc -> line 1414
 *   +0x0d00 -> line 1413
 *   +0x0d08 -> line 1414
 *   +0x0d24 -> line 1415
 *   +0x0d28 -> line 1414
 *   +0x0d2c -> line 1415
 *   +0x0d30 -> line 1414
 *   +0x0d38 -> line 1415
 *   +0x0d3c -> line 1414
 *   +0x0d40 -> line 1415
 *   +0x0d44 -> line 1414
 *   +0x0d4c -> line 1415
 *   +0x0d6c -> line 1416
 *   +0x0d74 -> line 1417
 *   +0x0d78 -> line 1418
 *   +0x0d80 -> line 1419
 *   +0x0d88 -> line 1420
 *   +0x0d98 -> line 1421
 *   +0x0d9c -> line 1420
 *   +0x0da0 -> line 1421
 *   +0x0dd8 -> line 1422
 *   +0x0ddc -> line 1421
 *   +0x0de4 -> line 1422
 *   +0x0de8 -> line 1421
 *   +0x0df8 -> line 1422
 *   +0x0e00 -> line 1421
 *   +0x0e04 -> line 1422
 *   +0x0e08 -> line 1421
 *   +0x0e10 -> line 1422
 *   +0x0e14 -> line 1421
 *   +0x0e18 -> line 1422
 *   +0x0e1c -> line 1421
 *   +0x0e24 -> line 1422
 *   +0x0e40 -> line 1423
 *   +0x0e48 -> line 1427
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glAccum(unsigned int op, float value)
{
    float vOldColor[4];
    anon_3 qOldAlpha;
    anon_3 qword;
    int iOldPSM;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1258–1280 */
/* addr: 0x00164720  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1260
 *   +0x0004 -> line 1258
 *   +0x0008 -> line 1260
 *   +0x0030 -> line 1275
 *   +0x0038 -> line 1280
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glReadPixels(int x, int y, int width, int height, unsigned int format, unsigned int type, void* pixels)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1148–1251 */
/* addr: 0x00164770  size: 1168 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1148
 *   +0x0004 -> line 1151
 *   +0x0008 -> line 1148
 *   +0x000c -> line 1150
 *   +0x0010 -> line 1148
 *   +0x0020 -> line 1149
 *   +0x0024 -> line 1148
 *   +0x0028 -> line 1149
 *   +0x002c -> line 1148
 *   +0x0040 -> line 1158
 *   +0x0044 -> line 1148
 *   +0x0048 -> line 1149
 *   +0x004c -> line 1151
 *   +0x0050 -> line 1149
 *   +0x0058 -> line 1151
 *   +0x0064 -> line 1158
 *   +0x0068 -> line 1161
 *   +0x0070 -> line 1163
 *   +0x0074 -> line 1164
 *   +0x0078 -> line 1165
 *   +0x007c -> line 1166
 *   +0x0080 -> line 1168
 *   +0x0090 -> line 1171
 *   +0x0094 -> line 1170
 *   +0x0098 -> line 1171
 *   +0x009c -> line 1173
 *   +0x00a4 -> line 1177
 *   +0x00ac -> line 1179
 *   +0x00b0 -> line 1180
 *   +0x00b4 -> line 1181
 *   +0x00b8 -> line 1183
 *   +0x00c8 -> line 1185
 *   +0x00d0 -> line 1187
 *   +0x00d8 -> line 1198
 *   +0x00f4 -> line 1204
 *   +0x0100 -> line 1206
 *   +0x0108 -> line 1208
 *   +0x0114 -> line 1210
 *   +0x0130 -> line 1213
 *   +0x024c -> line 1214
 *   +0x0254 -> line 1215
 *   +0x0258 -> line 1216
 *   +0x02a8 -> line 1219
 *   +0x02b0 -> line 1221
 *   +0x02c0 -> line 1222
 *   +0x02c8 -> line 1225
 *   +0x02e8 -> line 1228
 *   +0x040c -> line 1229
 *   +0x0414 -> line 1231
 *   +0x0464 -> line 1251
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalReadFastRgbaPixels(int x, int y, int width, int height, unsigned int format, void* pixels)
{
    unsigned char* src;
    int row;
    int iScreenHeight;
    int iScreenWidth;
    unsigned char bClip;
    int destY;
    int destX;
    int drawHeight;
    int drawWidth;
    int skipRows;
    int skipPixels;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1144–1145 */
/* addr: 0x00164c00  size: 12 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1144
 *   +0x0004 -> line 1145
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glReadBuffer(unsigned int mode)
{
    g_PS2glContext.eBufferReadMode = mode;
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1060–1069 */
/* addr: 0x00164c10  size: 104 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1060
 *   +0x0008 -> line 1064
 *   +0x001c -> line 1065
 *   +0x0030 -> line 1066
 *   +0x0044 -> line 1067
 *   +0x004c -> line 1068
 *   +0x0050 -> line 1067
 *   +0x0054 -> line 1068
 *   +0x005c -> line 1069
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4sv(short* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = (float)v[3];
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1048–1057 */
/* addr: 0x00164c80  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1054
 *   +0x0004 -> line 1048
 *   +0x0008 -> line 1053
 *   +0x000c -> line 1048
 *   +0x0010 -> line 1054
 *   +0x0018 -> line 1053
 *   +0x001c -> line 1055
 *   +0x0024 -> line 1053
 *   +0x0028 -> line 1055
 *   +0x002c -> line 1052
 *   +0x0034 -> line 1055
 *   +0x0038 -> line 1052
 *   +0x003c -> line 1056
 *   +0x0048 -> line 1057
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4s(short x, short y, short z, short w)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = (float)w;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1036–1045 */
/* addr: 0x00164ce0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1036
 *   +0x0008 -> line 1040
 *   +0x0014 -> line 1041
 *   +0x0020 -> line 1042
 *   +0x002c -> line 1043
 *   +0x0034 -> line 1044
 *   +0x0040 -> line 1045
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4iv(int* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = (float)v[3];
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 1024–1033 */
/* addr: 0x00164d30  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1030
 *   +0x0004 -> line 1024
 *   +0x0008 -> line 1029
 *   +0x000c -> line 1024
 *   +0x0010 -> line 1030
 *   +0x0018 -> line 1029
 *   +0x001c -> line 1031
 *   +0x0024 -> line 1029
 *   +0x0028 -> line 1031
 *   +0x002c -> line 1028
 *   +0x0034 -> line 1031
 *   +0x0038 -> line 1028
 *   +0x003c -> line 1032
 *   +0x0048 -> line 1033
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4i(int x, int y, int z, int w)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = (float)w;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 939–1021 */
/* addr: 0x00164d90  size: 688 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 939
 *   +0x0004 -> line 950
 *   +0x0008 -> line 939
 *   +0x000c -> line 950
 *   +0x0010 -> line 939
 *   +0x0014 -> line 950
 *   +0x0018 -> line 939
 *   +0x0020 -> line 945
 *   +0x0028 -> line 946
 *   +0x0030 -> line 947
 *   +0x0038 -> line 948
 *   +0x0040 -> line 950
 *   +0x0048 -> line 953
 *   +0x00c0 -> line 956
 *   +0x00c8 -> line 959
 *   +0x00cc -> line 963
 *   +0x00d0 -> line 959
 *   +0x00dc -> line 963
 *   +0x00e8 -> line 959
 *   +0x00fc -> line 963
 *   +0x0104 -> line 966
 *   +0x0188 -> line 968
 *   +0x018c -> line 969
 *   +0x0194 -> line 992
 *   +0x019c -> line 1002
 *   +0x01a0 -> line 992
 *   +0x01a4 -> line 995
 *   +0x01a8 -> line 997
 *   +0x01ac -> line 994
 *   +0x01b0 -> line 998
 *   +0x01b4 -> line 994
 *   +0x01b8 -> line 999
 *   +0x01bc -> line 993
 *   +0x01c0 -> line 999
 *   +0x01c4 -> line 993
 *   +0x01c8 -> line 1000
 *   +0x01cc -> line 992
 *   +0x01d0 -> line 993
 *   +0x01d4 -> line 992
 *   +0x01d8 -> line 1002
 *   +0x01e0 -> line 1003
 *   +0x01ec -> line 1006
 *   +0x01f0 -> line 1003
 *   +0x01f4 -> line 1006
 *   +0x01fc -> line 1005
 *   +0x0204 -> line 1004
 *   +0x020c -> line 1003
 *   +0x0210 -> line 1004
 *   +0x0214 -> line 1003
 *   +0x0218 -> line 1006
 *   +0x0220 -> line 1008
 *   +0x0230 -> line 1010
 *   +0x023c -> line 1019
 *   +0x0240 -> line 1015
 *   +0x024c -> line 1011
 *   +0x0250 -> line 1010
 *   +0x0254 -> line 1019
 *   +0x025c -> line 1018
 *   +0x0260 -> line 1017
 *   +0x0264 -> line 1015
 *   +0x026c -> line 1017
 *   +0x0270 -> line 1018
 *   +0x0274 -> line 1011
 *   +0x0280 -> line 1015
 *   +0x028c -> line 1017
 *   +0x0298 -> line 1021
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4fv(float* v1)
{
    float mViewScreen[4][4];
    float d;
    float clip[4];
    float eye[4];
    float v[4];
    float vScreenScale[4];
    float vScreenOrg[4];
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 927–936 */
/* addr: 0x00165040  size: 44 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 927
 *   +0x0008 -> line 935
 *   +0x000c -> line 931
 *   +0x0010 -> line 932
 *   +0x0014 -> line 933
 *   +0x0018 -> line 935
 *   +0x0020 -> line 936
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4f(float x, float y, float z, float w)
{
    float v1[4];
    v1[0] = x;
    v1[1] = y;
    v1[2] = z;
    v1[3] = w;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 915–924 */
/* addr: 0x00165070  size: 88 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 915
 *   +0x0010 -> line 919
 *   +0x001c -> line 920
 *   +0x0028 -> line 921
 *   +0x0034 -> line 922
 *   +0x0040 -> line 923
 *   +0x0048 -> line 924
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4dv(double* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = (float)v[3];
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 903–912 */
/* addr: 0x001650d0  size: 108 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 903
 *   +0x001c -> line 907
 *   +0x0024 -> line 908
 *   +0x0030 -> line 909
 *   +0x003c -> line 910
 *   +0x004c -> line 911
 *   +0x0054 -> line 912
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos4d(double x, double y, double z, double w)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = (float)w;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 891–900 */
/* addr: 0x00165140  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 891
 *   +0x0004 -> line 898
 *   +0x0008 -> line 891
 *   +0x000c -> line 895
 *   +0x0020 -> line 896
 *   +0x0034 -> line 897
 *   +0x003c -> line 898
 *   +0x0040 -> line 899
 *   +0x0044 -> line 897
 *   +0x0048 -> line 899
 *   +0x0050 -> line 900
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3sv(short* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 879–888 */
/* addr: 0x001651a0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 885
 *   +0x0004 -> line 879
 *   +0x0008 -> line 884
 *   +0x000c -> line 879
 *   +0x0010 -> line 885
 *   +0x0014 -> line 886
 *   +0x001c -> line 885
 *   +0x0020 -> line 883
 *   +0x0028 -> line 884
 *   +0x002c -> line 887
 *   +0x0030 -> line 883
 *   +0x0034 -> line 884
 *   +0x0038 -> line 887
 *   +0x0040 -> line 888
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3s(short x, short y, short z)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 867–876 */
/* addr: 0x001651f0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 867
 *   +0x0004 -> line 874
 *   +0x0008 -> line 867
 *   +0x000c -> line 871
 *   +0x0018 -> line 872
 *   +0x0024 -> line 873
 *   +0x002c -> line 874
 *   +0x0030 -> line 875
 *   +0x003c -> line 876
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3iv(int* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 855–864 */
/* addr: 0x00165240  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 861
 *   +0x0004 -> line 855
 *   +0x0008 -> line 860
 *   +0x000c -> line 855
 *   +0x0010 -> line 861
 *   +0x0014 -> line 862
 *   +0x001c -> line 861
 *   +0x0020 -> line 859
 *   +0x0028 -> line 860
 *   +0x002c -> line 863
 *   +0x0030 -> line 859
 *   +0x0034 -> line 860
 *   +0x0038 -> line 863
 *   +0x0040 -> line 864
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3i(int x, int y, int z)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 843–852 */
/* addr: 0x00165290  size: 60 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 843
 *   +0x0004 -> line 850
 *   +0x0008 -> line 843
 *   +0x000c -> line 847
 *   +0x0014 -> line 848
 *   +0x001c -> line 849
 *   +0x0024 -> line 851
 *   +0x0030 -> line 852
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3fv(float* v)
{
    float v1[4];
    v1[0] = v[0];
    v1[1] = v[1];
    v1[2] = v[2];
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 831–840 */
/* addr: 0x001652d0  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 831
 *   +0x0004 -> line 838
 *   +0x0008 -> line 831
 *   +0x000c -> line 839
 *   +0x0010 -> line 835
 *   +0x0014 -> line 838
 *   +0x0018 -> line 836
 *   +0x001c -> line 839
 *   +0x0024 -> line 840
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3f(float x, float y, float z)
{
    float v1[4];
    v1[0] = x;
    v1[1] = y;
    v1[2] = z;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 819–828 */
/* addr: 0x00165300  size: 84 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 819
 *   +0x0010 -> line 823
 *   +0x001c -> line 824
 *   +0x0028 -> line 825
 *   +0x0030 -> line 826
 *   +0x0034 -> line 827
 *   +0x0038 -> line 825
 *   +0x003c -> line 827
 *   +0x0044 -> line 828
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3dv(double* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = (float)v[2];
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 807–816 */
/* addr: 0x00165360  size: 92 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 807
 *   +0x0014 -> line 811
 *   +0x001c -> line 812
 *   +0x0028 -> line 813
 *   +0x0034 -> line 814
 *   +0x0038 -> line 815
 *   +0x003c -> line 813
 *   +0x0040 -> line 815
 *   +0x0048 -> line 816
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos3d(double x, double y, double z)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = (float)z;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 795–804 */
/* addr: 0x001653c0  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 795
 *   +0x0004 -> line 802
 *   +0x0008 -> line 795
 *   +0x000c -> line 799
 *   +0x0020 -> line 800
 *   +0x0028 -> line 802
 *   +0x002c -> line 803
 *   +0x0030 -> line 801
 *   +0x0034 -> line 800
 *   +0x0038 -> line 803
 *   +0x0040 -> line 804
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2sv(short* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 783–792 */
/* addr: 0x00165410  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 788
 *   +0x0004 -> line 783
 *   +0x000c -> line 787
 *   +0x0014 -> line 788
 *   +0x0018 -> line 790
 *   +0x0020 -> line 791
 *   +0x0024 -> line 789
 *   +0x0028 -> line 788
 *   +0x002c -> line 787
 *   +0x0030 -> line 791
 *   +0x0038 -> line 792
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2s(short x, short y)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 771–780 */
/* addr: 0x00165460  size: 64 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 771
 *   +0x0004 -> line 778
 *   +0x0008 -> line 771
 *   +0x000c -> line 775
 *   +0x0018 -> line 776
 *   +0x0020 -> line 778
 *   +0x0024 -> line 779
 *   +0x0028 -> line 777
 *   +0x002c -> line 779
 *   +0x0034 -> line 780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2iv(int* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 759–768 */
/* addr: 0x001654a0  size: 68 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 764
 *   +0x0004 -> line 759
 *   +0x000c -> line 763
 *   +0x0014 -> line 764
 *   +0x0018 -> line 766
 *   +0x0020 -> line 767
 *   +0x0024 -> line 765
 *   +0x0028 -> line 764
 *   +0x002c -> line 763
 *   +0x0030 -> line 767
 *   +0x0038 -> line 768
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2i(int x, int y)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 747–756 */
/* addr: 0x001654f0  size: 56 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 747
 *   +0x0004 -> line 754
 *   +0x0008 -> line 747
 *   +0x000c -> line 751
 *   +0x0014 -> line 752
 *   +0x001c -> line 755
 *   +0x0020 -> line 754
 *   +0x0024 -> line 755
 *   +0x002c -> line 756
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2fv(float* v)
{
    float v1[4];
    v1[0] = v[0];
    v1[1] = v[1];
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 735–744 */
/* addr: 0x00165530  size: 48 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 735
 *   +0x0004 -> line 742
 *   +0x0008 -> line 735
 *   +0x000c -> line 743
 *   +0x0010 -> line 739
 *   +0x0014 -> line 742
 *   +0x0018 -> line 740
 *   +0x001c -> line 743
 *   +0x0024 -> line 744
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2f(float x, float y)
{
    float v1[4];
    v1[0] = x;
    v1[1] = y;
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 723–732 */
/* addr: 0x00165560  size: 76 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 723
 *   +0x0010 -> line 727
 *   +0x001c -> line 728
 *   +0x0024 -> line 730
 *   +0x0028 -> line 731
 *   +0x002c -> line 728
 *   +0x0030 -> line 730
 *   +0x0034 -> line 731
 *   +0x003c -> line 732
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2dv(double* v)
{
    float v1[4];
    v1[0] = (float)v[0];
    v1[1] = (float)v[1];
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 711–720 */
/* addr: 0x001655b0  size: 72 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 711
 *   +0x000c -> line 715
 *   +0x0014 -> line 716
 *   +0x0020 -> line 718
 *   +0x0024 -> line 719
 *   +0x0028 -> line 716
 *   +0x002c -> line 718
 *   +0x0030 -> line 719
 *   +0x0038 -> line 720
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glRasterPos2d(double x, double y)
{
    float v1[4];
    v1[0] = (float)x;
    v1[1] = (float)y;
    v1[2] = 0.0f;
    v1[3] = 1.0f;
    impPS2glRasterPos4fv(v1);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 708–708 */
/* addr: 0x00165600  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 708
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelZoom(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 702–702 */
/* addr: 0x00165610  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 702
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelTransferi(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 696–696 */
/* addr: 0x00165620  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 696
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelTransferf(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 690–690 */
/* addr: 0x00165630  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 690
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelStorei(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 684–684 */
/* addr: 0x00165640  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 684
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelStoref(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 678–678 */
/* addr: 0x00165650  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 678
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelMapusv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 672–672 */
/* addr: 0x00165660  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 672
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelMapuiv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 666–666 */
/* addr: 0x00165670  size: 8 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 666
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glPixelMapfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 632–660 */
/* addr: 0x00165680  size: 156 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 632
 *   +0x0004 -> line 636
 *   +0x0008 -> line 632
 *   +0x0010 -> line 636
 *   +0x0028 -> line 639
 *   +0x0038 -> line 642
 *   +0x003c -> line 640
 *   +0x0044 -> line 639
 *   +0x004c -> line 642
 *   +0x0050 -> line 640
 *   +0x0058 -> line 639
 *   +0x005c -> line 640
 *   +0x0060 -> line 642
 *   +0x0080 -> line 657
 *   +0x0090 -> line 660
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDrawPixels(int width, int height, unsigned int format, unsigned int type, void* pixels)
{
    int y;
    int x;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 526–629 */
/* addr: 0x00165720  size: 1160 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 526
 *   +0x0004 -> line 536
 *   +0x0008 -> line 526
 *   +0x000c -> line 529
 *   +0x0010 -> line 526
 *   +0x0014 -> line 527
 *   +0x0018 -> line 526
 *   +0x0024 -> line 527
 *   +0x0028 -> line 526
 *   +0x002c -> line 528
 *   +0x0030 -> line 526
 *   +0x0044 -> line 527
 *   +0x0048 -> line 526
 *   +0x004c -> line 527
 *   +0x0050 -> line 529
 *   +0x0054 -> line 527
 *   +0x0058 -> line 529
 *   +0x005c -> line 536
 *   +0x0060 -> line 539
 *   +0x0068 -> line 541
 *   +0x006c -> line 542
 *   +0x0070 -> line 543
 *   +0x0074 -> line 544
 *   +0x0078 -> line 546
 *   +0x0088 -> line 549
 *   +0x008c -> line 548
 *   +0x0090 -> line 549
 *   +0x0094 -> line 551
 *   +0x009c -> line 555
 *   +0x00a4 -> line 557
 *   +0x00a8 -> line 558
 *   +0x00ac -> line 559
 *   +0x00b0 -> line 561
 *   +0x00c0 -> line 563
 *   +0x00c8 -> line 565
 *   +0x00d0 -> line 575
 *   +0x00ec -> line 581
 *   +0x00f8 -> line 583
 *   +0x0100 -> line 585
 *   +0x010c -> line 587
 *   +0x0128 -> line 590
 *   +0x0244 -> line 591
 *   +0x024c -> line 592
 *   +0x0250 -> line 593
 *   +0x02a0 -> line 597
 *   +0x02a8 -> line 599
 *   +0x02b8 -> line 600
 *   +0x02c0 -> line 603
 *   +0x02e0 -> line 606
 *   +0x0404 -> line 607
 *   +0x040c -> line 609
 *   +0x045c -> line 629
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void internalPS2glDrawRgbaPixels(int x, int y, int width, int height, unsigned int format, void* pixels)
{
    unsigned char* src;
    int row;
    int iScreenHeight;
    int iScreenWidth;
    unsigned char bClip;
    int destY;
    int destX;
    int drawHeight;
    int drawWidth;
    int skipRows;
    int skipPixels;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 123–454 */
/* addr: 0x00165bb0  size: 6008 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 123
 *   +0x001c -> line 129
 *   +0x0020 -> line 123
 *   +0x002c -> line 136
 *   +0x0030 -> line 123
 *   +0x0034 -> line 131
 *   +0x0038 -> line 123
 *   +0x003c -> line 131
 *   +0x0044 -> line 136
 *   +0x0060 -> line 139
 *   +0x006c -> line 141
 *   +0x0080 -> line 142
 *   +0x0088 -> line 144
 *   +0x0090 -> line 147
 *   +0x0094 -> line 141
 *   +0x00b4 -> line 142
 *   +0x00b8 -> line 141
 *   +0x00bc -> line 142
 *   +0x00c0 -> line 141
 *   +0x00c4 -> line 144
 *   +0x00c8 -> line 142
 *   +0x00d0 -> line 143
 *   +0x00d4 -> line 142
 *   +0x00d8 -> line 143
 *   +0x00dc -> line 142
 *   +0x00e0 -> line 144
 *   +0x00e8 -> line 141
 *   +0x00ec -> line 144
 *   +0x00f0 -> line 141
 *   +0x00f8 -> line 144
 *   +0x00fc -> line 141
 *   +0x0100 -> line 148
 *   +0x0104 -> line 142
 *   +0x0108 -> line 145
 *   +0x010c -> line 142
 *   +0x0114 -> line 148
 *   +0x0118 -> line 142
 *   +0x011c -> line 148
 *   +0x0120 -> line 143
 *   +0x0124 -> line 148
 *   +0x0128 -> line 143
 *   +0x0130 -> line 145
 *   +0x0134 -> line 143
 *   +0x0138 -> line 145
 *   +0x013c -> line 144
 *   +0x0140 -> line 143
 *   +0x0144 -> line 144
 *   +0x0148 -> line 143
 *   +0x014c -> line 144
 *   +0x015c -> line 145
 *   +0x0160 -> line 144
 *   +0x0164 -> line 145
 *   +0x0168 -> line 144
 *   +0x016c -> line 143
 *   +0x0170 -> line 145
 *   +0x0174 -> line 143
 *   +0x0178 -> line 145
 *   +0x017c -> line 144
 *   +0x018c -> line 145
 *   +0x01a8 -> line 148
 *   +0x01b0 -> line 150
 *   +0x01c4 -> line 152
 *   +0x01e4 -> line 153
 *   +0x01ec -> line 154
 *   +0x01f0 -> line 153
 *   +0x01f4 -> line 154
 *   +0x01fc -> line 157
 *   +0x0210 -> line 160
 *   +0x0218 -> line 162
 *   +0x021c -> line 157
 *   +0x0220 -> line 162
 *   +0x0224 -> line 160
 *   +0x0228 -> line 158
 *   +0x022c -> line 162
 *   +0x0234 -> line 159
 *   +0x0238 -> line 158
 *   +0x023c -> line 162
 *   +0x0240 -> line 158
 *   +0x0244 -> line 162
 *   +0x0248 -> line 159
 *   +0x0250 -> line 162
 *   +0x0254 -> line 163
 *   +0x025c -> line 166
 *   +0x0270 -> line 168
 *   +0x0274 -> line 170
 *   +0x0284 -> line 171
 *   +0x028c -> line 172
 *   +0x0290 -> line 174
 *   +0x0294 -> line 172
 *   +0x0298 -> line 174
 *   +0x02b8 -> line 173
 *   +0x02bc -> line 172
 *   +0x02c0 -> line 173
 *   +0x02c4 -> line 174
 *   +0x02c8 -> line 172
 *   +0x02cc -> line 174
 *   +0x02d0 -> line 176
 *   +0x02d4 -> line 174
 *   +0x02e4 -> line 176
 *   +0x02ec -> line 174
 *   +0x02f0 -> line 176
 *   +0x02f4 -> line 174
 *   +0x02f8 -> line 177
 *   +0x02fc -> line 175
 *   +0x0300 -> line 173
 *   +0x0304 -> line 175
 *   +0x0308 -> line 173
 *   +0x030c -> line 174
 *   +0x0310 -> line 173
 *   +0x0314 -> line 174
 *   +0x0324 -> line 176
 *   +0x0328 -> line 177
 *   +0x032c -> line 176
 *   +0x0330 -> line 175
 *   +0x0338 -> line 176
 *   +0x0348 -> line 177
 *   +0x034c -> line 176
 *   +0x0350 -> line 177
 *   +0x0354 -> line 176
 *   +0x0358 -> line 179
 *   +0x035c -> line 177
 *   +0x0360 -> line 179
 *   +0x0364 -> line 177
 *   +0x0368 -> line 176
 *   +0x036c -> line 179
 *   +0x0370 -> line 176
 *   +0x037c -> line 177
 *   +0x0398 -> line 179
 *   +0x03a0 -> line 181
 *   +0x03a8 -> line 182
 *   +0x03b0 -> line 183
 *   +0x03b4 -> line 184
 *   +0x03b8 -> line 183
 *   +0x03bc -> line 184
 *   +0x03c4 -> line 185
 *   +0x0424 -> line 188
 *   +0x0460 -> line 189
 *   +0x0468 -> line 191
 *   +0x0470 -> line 193
 *   +0x048c -> line 195
 *   +0x0494 -> line 197
 *   +0x04a8 -> line 200
 *   +0x04b8 -> line 202
 *   +0x04c0 -> line 203
 *   +0x04c4 -> line 202
 *   +0x04c8 -> line 203
 *   +0x04cc -> line 202
 *   +0x04d0 -> line 203
 *   +0x04d4 -> line 204
 *   +0x04dc -> line 207
 *   +0x04e0 -> line 209
 *   +0x04e4 -> line 207
 *   +0x04e8 -> line 214
 *   +0x04ec -> line 209
 *   +0x04f0 -> line 207
 *   +0x04f4 -> line 209
 *   +0x0500 -> line 207
 *   +0x0504 -> line 209
 *   +0x0508 -> line 207
 *   +0x0510 -> line 209
 *   +0x0514 -> line 207
 *   +0x0524 -> line 214
 *   +0x0530 -> line 208
 *   +0x0534 -> line 207
 *   +0x0538 -> line 208
 *   +0x053c -> line 207
 *   +0x0540 -> line 209
 *   +0x0554 -> line 207
 *   +0x0558 -> line 209
 *   +0x055c -> line 207
 *   +0x0560 -> line 209
 *   +0x0564 -> line 207
 *   +0x0568 -> line 209
 *   +0x056c -> line 207
 *   +0x0570 -> line 209
 *   +0x0574 -> line 208
 *   +0x0578 -> line 209
 *   +0x057c -> line 208
 *   +0x0580 -> line 209
 *   +0x0588 -> line 208
 *   +0x058c -> line 210
 *   +0x0590 -> line 209
 *   +0x0594 -> line 210
 *   +0x0598 -> line 209
 *   +0x059c -> line 211
 *   +0x05a4 -> line 209
 *   +0x05ac -> line 212
 *   +0x05b4 -> line 213
 *   +0x05bc -> line 209
 *   +0x05c0 -> line 214
 *   +0x05c8 -> line 215
 *   +0x05d0 -> line 216
 *   +0x05d8 -> line 217
 *   +0x0638 -> line 219
 *   +0x064c -> line 220
 *   +0x0650 -> line 222
 *   +0x0658 -> line 231
 *   +0x065c -> line 219
 *   +0x0678 -> line 220
 *   +0x067c -> line 219
 *   +0x0680 -> line 220
 *   +0x0684 -> line 219
 *   +0x0688 -> line 220
 *   +0x0690 -> line 221
 *   +0x0694 -> line 220
 *   +0x0698 -> line 221
 *   +0x06a8 -> line 222
 *   +0x06ac -> line 221
 *   +0x06b0 -> line 222
 *   +0x06b4 -> line 221
 *   +0x06b8 -> line 219
 *   +0x06c4 -> line 222
 *   +0x06c8 -> line 219
 *   +0x06cc -> line 220
 *   +0x06d8 -> line 222
 *   +0x06dc -> line 220
 *   +0x06e4 -> line 221
 *   +0x06ec -> line 220
 *   +0x06f0 -> line 222
 *   +0x06f4 -> line 220
 *   +0x06f8 -> line 222
 *   +0x06fc -> line 228
 *   +0x0700 -> line 222
 *   +0x0708 -> line 223
 *   +0x070c -> line 222
 *   +0x0710 -> line 223
 *   +0x0714 -> line 222
 *   +0x0718 -> line 224
 *   +0x0720 -> line 223
 *   +0x0724 -> line 224
 *   +0x0728 -> line 223
 *   +0x072c -> line 224
 *   +0x0738 -> line 222
 *   +0x073c -> line 224
 *   +0x0740 -> line 222
 *   +0x0744 -> line 223
 *   +0x0748 -> line 220
 *   +0x074c -> line 223
 *   +0x0754 -> line 220
 *   +0x0758 -> line 224
 *   +0x0760 -> line 220
 *   +0x0764 -> line 223
 *   +0x0768 -> line 220
 *   +0x076c -> line 223
 *   +0x0770 -> line 221
 *   +0x0774 -> line 227
 *   +0x0778 -> line 221
 *   +0x077c -> line 228
 *   +0x0780 -> line 223
 *   +0x0784 -> line 221
 *   +0x0788 -> line 223
 *   +0x078c -> line 221
 *   +0x0790 -> line 224
 *   +0x0794 -> line 227
 *   +0x0798 -> line 224
 *   +0x079c -> line 228
 *   +0x07a0 -> line 223
 *   +0x07a4 -> line 230
 *   +0x07a8 -> line 223
 *   +0x07ac -> line 228
 *   +0x07b0 -> line 225
 *   +0x07bc -> line 227
 *   +0x07c4 -> line 231
 *   +0x07c8 -> line 227
 *   +0x07cc -> line 228
 *   +0x07d0 -> line 227
 *   +0x07d4 -> line 225
 *   +0x07e0 -> line 221
 *   +0x07e4 -> line 225
 *   +0x07e8 -> line 221
 *   +0x07ec -> line 225
 *   +0x07f0 -> line 224
 *   +0x07f4 -> line 230
 *   +0x07f8 -> line 224
 *   +0x07fc -> line 229
 *   +0x0800 -> line 230
 *   +0x0804 -> line 225
 *   +0x0808 -> line 224
 *   +0x080c -> line 225
 *   +0x0810 -> line 230
 *   +0x0814 -> line 224
 *   +0x0820 -> line 229
 *   +0x0824 -> line 225
 *   +0x0828 -> line 229
 *   +0x082c -> line 225
 *   +0x0830 -> line 229
 *   +0x0834 -> line 230
 *   +0x0838 -> line 231
 *   +0x0840 -> line 225
 *   +0x0850 -> line 231
 *   +0x0858 -> line 233
 *   +0x086c -> line 235
 *   +0x0870 -> line 237
 *   +0x0874 -> line 235
 *   +0x0878 -> line 236
 *   +0x0880 -> line 235
 *   +0x0884 -> line 237
 *   +0x088c -> line 238
 *   +0x089c -> line 240
 *   +0x08a0 -> line 242
 *   +0x08a4 -> line 240
 *   +0x08a8 -> line 242
 *   +0x08b4 -> line 243
 *   +0x08b8 -> line 241
 *   +0x08c0 -> line 240
 *   +0x08c4 -> line 241
 *   +0x08c8 -> line 243
 *   +0x08cc -> line 242
 *   +0x08d4 -> line 243
 *   +0x0908 -> line 244
 *   +0x0944 -> line 245
 *   +0x094c -> line 246
 *   +0x0954 -> line 248
 *   +0x0968 -> line 250
 *   +0x0974 -> line 255
 *   +0x0978 -> line 250
 *   +0x097c -> line 255
 *   +0x0980 -> line 250
 *   +0x0984 -> line 251
 *   +0x0994 -> line 252
 *   +0x0998 -> line 253
 *   +0x09a0 -> line 254
 *   +0x09a4 -> line 256
 *   +0x09a8 -> line 250
 *   +0x09ac -> line 252
 *   +0x09b0 -> line 250
 *   +0x09b4 -> line 252
 *   +0x09b8 -> line 255
 *   +0x09bc -> line 254
 *   +0x09c0 -> line 251
 *   +0x09c4 -> line 256
 *   +0x09c8 -> line 251
 *   +0x09cc -> line 256
 *   +0x09d4 -> line 258
 *   +0x09dc -> line 251
 *   +0x09ec -> line 256
 *   +0x09f0 -> line 251
 *   +0x09f4 -> line 256
 *   +0x09f8 -> line 251
 *   +0x09fc -> line 256
 *   +0x0a10 -> line 251
 *   +0x0a1c -> line 256
 *   +0x0a20 -> line 251
 *   +0x0a24 -> line 256
 *   +0x0a28 -> line 252
 *   +0x0a2c -> line 256
 *   +0x0a30 -> line 252
 *   +0x0a34 -> line 256
 *   +0x0a4c -> line 252
 *   +0x0a74 -> line 253
 *   +0x0aa4 -> line 254
 *   +0x0ad4 -> line 255
 *   +0x0aec -> line 258
 *   +0x0af4 -> line 259
 *   +0x0af8 -> line 260
 *   +0x0afc -> line 259
 *   +0x0b00 -> line 260
 *   +0x0b10 -> line 261
 *   +0x0b44 -> line 262
 *   +0x0b4c -> line 261
 *   +0x0b60 -> line 262
 *   +0x0b64 -> line 261
 *   +0x0b70 -> line 262
 *   +0x0b78 -> line 261
 *   +0x0b7c -> line 262
 *   +0x0b80 -> line 261
 *   +0x0b88 -> line 262
 *   +0x0b8c -> line 261
 *   +0x0b90 -> line 262
 *   +0x0b94 -> line 264
 *   +0x0b9c -> line 261
 *   +0x0ba4 -> line 262
 *   +0x0ba8 -> line 264
 *   +0x0c1c -> line 278
 *   +0x0c30 -> line 279
 *   +0x0c38 -> line 288
 *   +0x0c3c -> line 292
 *   +0x0c40 -> line 288
 *   +0x0c44 -> line 292
 *   +0x0c48 -> line 289
 *   +0x0c4c -> line 292
 *   +0x0c50 -> line 289
 *   +0x0c54 -> line 292
 *   +0x0c58 -> line 290
 *   +0x0c5c -> line 292
 *   +0x0c60 -> line 290
 *   +0x0c64 -> line 292
 *   +0x0c68 -> line 291
 *   +0x0c6c -> line 293
 *   +0x0c70 -> line 291
 *   +0x0c74 -> line 280
 *   +0x0c7c -> line 292
 *   +0x0c80 -> line 280
 *   +0x0c84 -> line 292
 *   +0x0c88 -> line 282
 *   +0x0c8c -> line 292
 *   +0x0c90 -> line 282
 *   +0x0c94 -> line 293
 *   +0x0c98 -> line 283
 *   +0x0c9c -> line 293
 *   +0x0ca0 -> line 283
 *   +0x0ca4 -> line 292
 *   +0x0cb8 -> line 293
 *   +0x0cbc -> line 292
 *   +0x0ccc -> line 293
 *   +0x0cd4 -> line 292
 *   +0x0cd8 -> line 293
 *   +0x0cdc -> line 292
 *   +0x0ce0 -> line 293
 *   +0x0cf0 -> line 292
 *   +0x0cf4 -> line 293
 *   +0x0cf8 -> line 292
 *   +0x0cfc -> line 293
 *   +0x0d00 -> line 292
 *   +0x0d08 -> line 293
 *   +0x0d14 -> line 294
 *   +0x0d1c -> line 297
 *   +0x0d24 -> line 299
 *   +0x0d30 -> line 301
 *   +0x0d38 -> line 303
 *   +0x0d4c -> line 305
 *   +0x0d50 -> line 307
 *   +0x0d54 -> line 305
 *   +0x0d58 -> line 313
 *   +0x0d5c -> line 307
 *   +0x0d60 -> line 305
 *   +0x0d64 -> line 307
 *   +0x0d70 -> line 305
 *   +0x0d74 -> line 307
 *   +0x0d78 -> line 305
 *   +0x0d80 -> line 307
 *   +0x0d84 -> line 305
 *   +0x0d94 -> line 313
 *   +0x0da0 -> line 306
 *   +0x0da4 -> line 305
 *   +0x0da8 -> line 306
 *   +0x0dac -> line 305
 *   +0x0db0 -> line 307
 *   +0x0dc4 -> line 305
 *   +0x0dc8 -> line 307
 *   +0x0dcc -> line 305
 *   +0x0dd0 -> line 307
 *   +0x0dd4 -> line 305
 *   +0x0dd8 -> line 307
 *   +0x0ddc -> line 305
 *   +0x0de0 -> line 307
 *   +0x0de4 -> line 306
 *   +0x0de8 -> line 307
 *   +0x0dec -> line 306
 *   +0x0df0 -> line 307
 *   +0x0df8 -> line 306
 *   +0x0dfc -> line 309
 *   +0x0e00 -> line 307
 *   +0x0e04 -> line 309
 *   +0x0e08 -> line 307
 *   +0x0e0c -> line 310
 *   +0x0e14 -> line 307
 *   +0x0e1c -> line 311
 *   +0x0e24 -> line 312
 *   +0x0e2c -> line 307
 *   +0x0e30 -> line 313
 *   +0x0e38 -> line 314
 *   +0x0e40 -> line 315
 *   +0x0e48 -> line 316
 *   +0x0ea8 -> line 322
 *   +0x0eac -> line 323
 *   +0x0eb0 -> line 322
 *   +0x0eb4 -> line 328
 *   +0x0eb8 -> line 322
 *   +0x0ec4 -> line 323
 *   +0x0ec8 -> line 328
 *   +0x0ed0 -> line 333
 *   +0x0ed4 -> line 329
 *   +0x0ed8 -> line 323
 *   +0x0edc -> line 329
 *   +0x0ee0 -> line 322
 *   +0x0ef0 -> line 335
 *   +0x0ef4 -> line 337
 *   +0x0ef8 -> line 322
 *   +0x0f0c -> line 329
 *   +0x0f10 -> line 323
 *   +0x0f14 -> line 322
 *   +0x0f18 -> line 323
 *   +0x0f1c -> line 322
 *   +0x0f24 -> line 323
 *   +0x0f28 -> line 322
 *   +0x0f2c -> line 323
 *   +0x0f30 -> line 322
 *   +0x0f34 -> line 330
 *   +0x0f38 -> line 322
 *   +0x0f3c -> line 331
 *   +0x0f40 -> line 323
 *   +0x0f44 -> line 331
 *   +0x0f48 -> line 323
 *   +0x0f60 -> line 330
 *   +0x0f64 -> line 323
 *   +0x0f68 -> line 330
 *   +0x0f6c -> line 328
 *   +0x0f70 -> line 333
 *   +0x0f74 -> line 328
 *   +0x0f78 -> line 332
 *   +0x0f80 -> line 335
 *   +0x0f88 -> line 328
 *   +0x0f8c -> line 335
 *   +0x0f90 -> line 328
 *   +0x0f94 -> line 337
 *   +0x0f98 -> line 333
 *   +0x0f9c -> line 337
 *   +0x0fa0 -> line 329
 *   +0x0fb8 -> line 335
 *   +0x0fbc -> line 329
 *   +0x0fc0 -> line 335
 *   +0x0fc4 -> line 329
 *   +0x0fc8 -> line 335
 *   +0x0fdc -> line 329
 *   +0x0fe8 -> line 335
 *   +0x0fec -> line 329
 *   +0x0ff0 -> line 335
 *   +0x0ff4 -> line 330
 *   +0x0ff8 -> line 335
 *   +0x0ffc -> line 330
 *   +0x1000 -> line 335
 *   +0x1018 -> line 330
 *   +0x1040 -> line 331
 *   +0x1070 -> line 332
 *   +0x10a0 -> line 333
 *   +0x10b8 -> line 337
 *   +0x10c0 -> line 339
 *   +0x10c4 -> line 340
 *   +0x10c8 -> line 339
 *   +0x10cc -> line 340
 *   +0x10dc -> line 341
 *   +0x1110 -> line 342
 *   +0x1118 -> line 341
 *   +0x112c -> line 342
 *   +0x1130 -> line 341
 *   +0x113c -> line 342
 *   +0x1144 -> line 341
 *   +0x1148 -> line 342
 *   +0x114c -> line 341
 *   +0x1154 -> line 342
 *   +0x1158 -> line 341
 *   +0x115c -> line 342
 *   +0x1160 -> line 347
 *   +0x1168 -> line 341
 *   +0x1170 -> line 342
 *   +0x1174 -> line 347
 *   +0x11e8 -> line 362
 *   +0x11fc -> line 363
 *   +0x1204 -> line 372
 *   +0x1208 -> line 376
 *   +0x120c -> line 372
 *   +0x1210 -> line 376
 *   +0x1214 -> line 373
 *   +0x1218 -> line 376
 *   +0x121c -> line 373
 *   +0x1220 -> line 376
 *   +0x1224 -> line 374
 *   +0x1228 -> line 376
 *   +0x122c -> line 374
 *   +0x1230 -> line 376
 *   +0x1234 -> line 375
 *   +0x1238 -> line 377
 *   +0x123c -> line 375
 *   +0x1240 -> line 364
 *   +0x1248 -> line 376
 *   +0x124c -> line 364
 *   +0x1250 -> line 376
 *   +0x1254 -> line 366
 *   +0x1258 -> line 376
 *   +0x125c -> line 366
 *   +0x1260 -> line 377
 *   +0x1264 -> line 367
 *   +0x1268 -> line 377
 *   +0x126c -> line 367
 *   +0x1270 -> line 376
 *   +0x1284 -> line 377
 *   +0x1288 -> line 376
 *   +0x1298 -> line 377
 *   +0x12a0 -> line 376
 *   +0x12a4 -> line 377
 *   +0x12a8 -> line 376
 *   +0x12ac -> line 377
 *   +0x12bc -> line 376
 *   +0x12c0 -> line 377
 *   +0x12c4 -> line 376
 *   +0x12c8 -> line 377
 *   +0x12cc -> line 376
 *   +0x12d4 -> line 377
 *   +0x12e0 -> line 378
 *   +0x12e8 -> line 379
 *   +0x12f0 -> line 380
 *   +0x12f8 -> line 382
 *   +0x1300 -> line 384
 *   +0x1314 -> line 386
 *   +0x1324 -> line 388
 *   +0x1334 -> line 386
 *   +0x138c -> line 388
 *   +0x1394 -> line 390
 *   +0x1398 -> line 391
 *   +0x139c -> line 390
 *   +0x13a0 -> line 391
 *   +0x13b0 -> line 394
 *   +0x13b4 -> line 393
 *   +0x13b8 -> line 394
 *   +0x13bc -> line 393
 *   +0x13c8 -> line 396
 *   +0x13cc -> line 393
 *   +0x13d0 -> line 396
 *   +0x13d4 -> line 397
 *   +0x13dc -> line 393
 *   +0x13f0 -> line 402
 *   +0x13f8 -> line 407
 *   +0x13fc -> line 405
 *   +0x140c -> line 406
 *   +0x1410 -> line 408
 *   +0x1418 -> line 410
 *   +0x141c -> line 413
 *   +0x1420 -> line 414
 *   +0x1424 -> line 407
 *   +0x1428 -> line 405
 *   +0x1448 -> line 406
 *   +0x144c -> line 405
 *   +0x1450 -> line 406
 *   +0x1454 -> line 405
 *   +0x1458 -> line 406
 *   +0x1468 -> line 407
 *   +0x146c -> line 406
 *   +0x1470 -> line 407
 *   +0x1474 -> line 406
 *   +0x1478 -> line 411
 *   +0x147c -> line 405
 *   +0x1480 -> line 407
 *   +0x1484 -> line 405
 *   +0x1488 -> line 407
 *   +0x148c -> line 405
 *   +0x1490 -> line 411
 *   +0x1494 -> line 405
 *   +0x1498 -> line 406
 *   +0x149c -> line 410
 *   +0x14a0 -> line 406
 *   +0x14a8 -> line 414
 *   +0x14ac -> line 406
 *   +0x14b0 -> line 407
 *   +0x14b4 -> line 406
 *   +0x14b8 -> line 407
 *   +0x14bc -> line 406
 *   +0x14c0 -> line 408
 *   +0x14c4 -> line 414
 *   +0x14c8 -> line 408
 *   +0x14d4 -> line 409
 *   +0x14d8 -> line 408
 *   +0x14dc -> line 409
 *   +0x14e0 -> line 410
 *   +0x14f4 -> line 406
 *   +0x14f8 -> line 410
 *   +0x14fc -> line 406
 *   +0x1500 -> line 410
 *   +0x1504 -> line 408
 *   +0x1508 -> line 410
 *   +0x150c -> line 408
 *   +0x1510 -> line 411
 *   +0x1514 -> line 409
 *   +0x1518 -> line 414
 *   +0x151c -> line 409
 *   +0x1520 -> line 408
 *   +0x152c -> line 410
 *   +0x1534 -> line 407
 *   +0x153c -> line 409
 *   +0x1540 -> line 407
 *   +0x1544 -> line 409
 *   +0x1548 -> line 407
 *   +0x154c -> line 411
 *   +0x1550 -> line 409
 *   +0x1554 -> line 411
 *   +0x1558 -> line 409
 *   +0x155c -> line 407
 *   +0x1560 -> line 411
 *   +0x1564 -> line 407
 *   +0x1568 -> line 411
 *   +0x156c -> line 409
 *   +0x1574 -> line 411
 *   +0x157c -> line 410
 *   +0x1594 -> line 411
 *   +0x15ac -> line 414
 *   +0x15b4 -> line 417
 *   +0x15c4 -> line 419
 *   +0x15d0 -> line 417
 *   +0x1628 -> line 419
 *   +0x1630 -> line 421
 *   +0x1634 -> line 422
 *   +0x1638 -> line 421
 *   +0x163c -> line 422
 *   +0x164c -> line 424
 *   +0x1670 -> line 425
 *   +0x167c -> line 424
 *   +0x1680 -> line 425
 *   +0x1688 -> line 427
 *   +0x16ac -> line 428
 *   +0x16b4 -> line 429
 *   +0x16b8 -> line 428
 *   +0x16bc -> line 429
 *   +0x16c4 -> line 432
 *   +0x16d8 -> line 435
 *   +0x16e0 -> line 437
 *   +0x16e4 -> line 432
 *   +0x16e8 -> line 437
 *   +0x16ec -> line 435
 *   +0x16f0 -> line 433
 *   +0x16f4 -> line 438
 *   +0x16fc -> line 434
 *   +0x1700 -> line 440
 *   +0x1708 -> line 441
 *   +0x1710 -> line 437
 *   +0x1718 -> line 433
 *   +0x171c -> line 437
 *   +0x1720 -> line 433
 *   +0x1724 -> line 437
 *   +0x1728 -> line 434
 *   +0x1730 -> line 437
 *   +0x1734 -> line 446
 *   +0x173c -> line 448
 *   +0x1744 -> line 450
 *   +0x1748 -> line 454
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void impPS2glDrawBuffer(unsigned int mode)
{
    float iOldA;
    float iOldB;
    float iOldG;
    float iOldR;
    anon_3 qOldAlpha;
    anon_3 qword;
    unsigned int iOldMask;
    float fOldViewOrg[2];
    float vOldViewPort[4];
    float fOldDepthRange[2];
    int iOldZPSM;
    int iOldAux1PSM;
    int iOldColorClamp;
    unsigned char iOldDepthFlag;
    int iOldPSM;
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_PixelOperation.c lines 111–120 */
/* addr: 0x00167330  size: 344 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 111
 *   +0x0004 -> line 115
 *   +0x0008 -> line 111
 *   +0x000c -> line 116
 *   +0x0010 -> line 111
 *   +0x0014 -> line 113
 *   +0x001c -> line 115
 *   +0x0020 -> line 113
 *   +0x0024 -> line 115
 *   +0x002c -> line 113
 *   +0x0030 -> line 115
 *   +0x0034 -> line 113
 *   +0x0038 -> line 115
 *   +0x003c -> line 113
 *   +0x0040 -> line 115
 *   +0x0044 -> line 113
 *   +0x0054 -> line 116
 *   +0x0060 -> line 114
 *   +0x0064 -> line 113
 *   +0x0068 -> line 114
 *   +0x006c -> line 115
 *   +0x0070 -> line 113
 *   +0x0078 -> line 114
 *   +0x007c -> line 113
 *   +0x0080 -> line 114
 *   +0x0084 -> line 113
 *   +0x0088 -> line 115
 *   +0x008c -> line 113
 *   +0x0090 -> line 115
 *   +0x00b8 -> line 114
 *   +0x00bc -> line 115
 *   +0x00d0 -> line 116
 *   +0x00d8 -> line 117
 *   +0x00e0 -> line 118
 *   +0x00e8 -> line 119
 *   +0x0148 -> line 120
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glClearLastBits(void)
{
    unsigned int iOldMask;
    /* TODO: decompile from asm/... */
}
