/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c */
/* Language: C */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct tagPS2glApiTable tagPS2glApiTable;

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

tagPS2glApiTable g_PS2glApiTableImp;
tagPS2glApiTable* g_pPS2glApiTable;

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6162–6164 */
/* addr: 0x0013b940  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6162
 *   +0x0004 -> line 6163
 *   +0x0008 -> line 6164
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColorTableEXT(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6142–6144 */
/* addr: 0x0013b950  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6142
 *   +0x0004 -> line 6143
 *   +0x0008 -> line 6144
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4usvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6114–6116 */
/* addr: 0x0013b960  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6114
 *   +0x0004 -> line 6115
 *   +0x0008 -> line 6116
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4uivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6086–6088 */
/* addr: 0x0013b970  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6086
 *   +0x0004 -> line 6087
 *   +0x0008 -> line 6088
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4ubvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6058–6060 */
/* addr: 0x0013b980  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6058
 *   +0x0004 -> line 6059
 *   +0x0008 -> line 6060
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4svARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6030–6032 */
/* addr: 0x0013b990  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6030
 *   +0x0004 -> line 6031
 *   +0x0008 -> line 6032
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4ivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 6002–6004 */
/* addr: 0x0013b9a0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 6002
 *   +0x0004 -> line 6003
 *   +0x0008 -> line 6004
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4fvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5974–5976 */
/* addr: 0x0013b9b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5974
 *   +0x0004 -> line 5975
 *   +0x0008 -> line 5976
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4dvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5946–5948 */
/* addr: 0x0013b9c0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5946
 *   +0x0004 -> line 5947
 *   +0x0008 -> line 5948
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor4bvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5918–5920 */
/* addr: 0x0013b9d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5918
 *   +0x0004 -> line 5919
 *   +0x0008 -> line 5920
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3usvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5890–5892 */
/* addr: 0x0013b9e0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5890
 *   +0x0004 -> line 5891
 *   +0x0008 -> line 5892
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3uivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5862–5864 */
/* addr: 0x0013b9f0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5862
 *   +0x0004 -> line 5863
 *   +0x0008 -> line 5864
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3ubvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5834–5836 */
/* addr: 0x0013ba00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5834
 *   +0x0004 -> line 5835
 *   +0x0008 -> line 5836
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3svARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5806–5808 */
/* addr: 0x0013ba10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5806
 *   +0x0004 -> line 5807
 *   +0x0008 -> line 5808
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3ivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5778–5780 */
/* addr: 0x0013ba20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5778
 *   +0x0004 -> line 5779
 *   +0x0008 -> line 5780
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3fvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5750–5752 */
/* addr: 0x0013ba30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5750
 *   +0x0004 -> line 5751
 *   +0x0008 -> line 5752
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3dvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5722–5724 */
/* addr: 0x0013ba40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5722
 *   +0x0004 -> line 5723
 *   +0x0008 -> line 5724
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiColor3bvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5692–5694 */
/* addr: 0x0013ba50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5692
 *   +0x0004 -> line 5693
 *   +0x0008 -> line 5694
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord4svARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5664–5666 */
/* addr: 0x0013ba60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5664
 *   +0x0004 -> line 5665
 *   +0x0008 -> line 5666
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord4ivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5636–5638 */
/* addr: 0x0013ba70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5636
 *   +0x0004 -> line 5637
 *   +0x0008 -> line 5638
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord4fvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5608–5610 */
/* addr: 0x0013ba80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5608
 *   +0x0004 -> line 5609
 *   +0x0008 -> line 5610
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord4dvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5580–5582 */
/* addr: 0x0013ba90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5580
 *   +0x0004 -> line 5581
 *   +0x0008 -> line 5582
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord3svARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5552–5554 */
/* addr: 0x0013baa0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5552
 *   +0x0004 -> line 5553
 *   +0x0008 -> line 5554
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord3ivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5524–5526 */
/* addr: 0x0013bab0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5524
 *   +0x0004 -> line 5525
 *   +0x0008 -> line 5526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord3fvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5496–5498 */
/* addr: 0x0013bac0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5496
 *   +0x0004 -> line 5497
 *   +0x0008 -> line 5498
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord3dvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5468–5470 */
/* addr: 0x0013bad0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5468
 *   +0x0004 -> line 5469
 *   +0x0008 -> line 5470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord2svARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5440–5442 */
/* addr: 0x0013bae0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5440
 *   +0x0004 -> line 5441
 *   +0x0008 -> line 5442
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord2ivARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5412–5414 */
/* addr: 0x0013baf0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5412
 *   +0x0004 -> line 5413
 *   +0x0008 -> line 5414
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord2fvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5384–5386 */
/* addr: 0x0013bb00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5384
 *   +0x0004 -> line 5385
 *   +0x0008 -> line 5386
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMultiTexCoord2dvARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5229–5231 */
/* addr: 0x0013bb10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5229
 *   +0x0004 -> line 5230
 *   +0x0008 -> line 5231
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glActiveTextureARB(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5197–5199 */
/* addr: 0x0013bb20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5197
 *   +0x0004 -> line 5198
 *   +0x0008 -> line 5199
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glSetGsRegister(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5182–5184 */
/* addr: 0x0013bb30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5182
 *   +0x0004 -> line 5183
 *   +0x0008 -> line 5184
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glViewport(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5168–5170 */
/* addr: 0x0013bb40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5168
 *   +0x0004 -> line 5169
 *   +0x0008 -> line 5170
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertexPointer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5154–5156 */
/* addr: 0x0013bb50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5154
 *   +0x0004 -> line 5155
 *   +0x0008 -> line 5156
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex4sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5126–5128 */
/* addr: 0x0013bb60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5126
 *   +0x0004 -> line 5127
 *   +0x0008 -> line 5128
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex4iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5098–5100 */
/* addr: 0x0013bb70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5098
 *   +0x0004 -> line 5099
 *   +0x0008 -> line 5100
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex4fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5084–5086 */
/* addr: 0x0013bb80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5084
 *   +0x0004 -> line 5085
 *   +0x0008 -> line 5086
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex4f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5070–5072 */
/* addr: 0x0013bb90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5070
 *   +0x0004 -> line 5071
 *   +0x0008 -> line 5072
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex4dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5042–5044 */
/* addr: 0x0013bba0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5042
 *   +0x0004 -> line 5043
 *   +0x0008 -> line 5044
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 5014–5016 */
/* addr: 0x0013bbb0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 5014
 *   +0x0004 -> line 5015
 *   +0x0008 -> line 5016
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4986–4988 */
/* addr: 0x0013bbc0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4986
 *   +0x0004 -> line 4987
 *   +0x0008 -> line 4988
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4972–4974 */
/* addr: 0x0013bbd0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4972
 *   +0x0004 -> line 4973
 *   +0x0008 -> line 4974
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4958–4960 */
/* addr: 0x0013bbe0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4958
 *   +0x0004 -> line 4959
 *   +0x0008 -> line 4960
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4944–4946 */
/* addr: 0x0013bbf0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4944
 *   +0x0004 -> line 4945
 *   +0x0008 -> line 4946
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex3d(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4930–4932 */
/* addr: 0x0013bc00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4930
 *   +0x0004 -> line 4931
 *   +0x0008 -> line 4932
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex2sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4902–4904 */
/* addr: 0x0013bc10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4902
 *   +0x0004 -> line 4903
 *   +0x0008 -> line 4904
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex2iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4874–4876 */
/* addr: 0x0013bc20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4874
 *   +0x0004 -> line 4875
 *   +0x0008 -> line 4876
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex2fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4860–4862 */
/* addr: 0x0013bc30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4860
 *   +0x0004 -> line 4861
 *   +0x0008 -> line 4862
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex2f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4846–4848 */
/* addr: 0x0013bc40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4846
 *   +0x0004 -> line 4847
 *   +0x0008 -> line 4848
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glVertex2dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4818–4820 */
/* addr: 0x0013bc50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4818
 *   +0x0004 -> line 4819
 *   +0x0008 -> line 4820
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTranslatef(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4748–4750 */
/* addr: 0x0013bc60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4748
 *   +0x0004 -> line 4749
 *   +0x0008 -> line 4750
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexParameteri(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4706–4708 */
/* addr: 0x0013bc70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4706
 *   +0x0004 -> line 4707
 *   +0x0008 -> line 4708
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexImage2D(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4552–4554 */
/* addr: 0x0013bc80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4552
 *   +0x0004 -> line 4553
 *   +0x0008 -> line 4554
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexEnvf(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4538–4540 */
/* addr: 0x0013bc90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4538
 *   +0x0004 -> line 4539
 *   +0x0008 -> line 4540
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoordPointer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4524–4526 */
/* addr: 0x0013bca0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4524
 *   +0x0004 -> line 4525
 *   +0x0008 -> line 4526
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord4sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4496–4498 */
/* addr: 0x0013bcb0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4496
 *   +0x0004 -> line 4497
 *   +0x0008 -> line 4498
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord4iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4468–4470 */
/* addr: 0x0013bcc0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4468
 *   +0x0004 -> line 4469
 *   +0x0008 -> line 4470
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord4fv(float* v)
{
    g_pPS2glApiTable->pfn_PS2glTexCoord4fv(v);
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4440–4442 */
/* addr: 0x0013bcd0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4440
 *   +0x0004 -> line 4441
 *   +0x0008 -> line 4442
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord4dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4412–4414 */
/* addr: 0x0013bce0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4412
 *   +0x0004 -> line 4413
 *   +0x0008 -> line 4414
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord3sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4384–4386 */
/* addr: 0x0013bcf0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4384
 *   +0x0004 -> line 4385
 *   +0x0008 -> line 4386
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord3iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4356–4358 */
/* addr: 0x0013bd00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4356
 *   +0x0004 -> line 4357
 *   +0x0008 -> line 4358
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord3fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4328–4330 */
/* addr: 0x0013bd10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4328
 *   +0x0004 -> line 4329
 *   +0x0008 -> line 4330
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord3dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4300–4302 */
/* addr: 0x0013bd20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4300
 *   +0x0004 -> line 4301
 *   +0x0008 -> line 4302
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord2sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4272–4274 */
/* addr: 0x0013bd30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4272
 *   +0x0004 -> line 4273
 *   +0x0008 -> line 4274
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord2iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4244–4246 */
/* addr: 0x0013bd40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4244
 *   +0x0004 -> line 4245
 *   +0x0008 -> line 4246
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord2fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4230–4232 */
/* addr: 0x0013bd50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4230
 *   +0x0004 -> line 4231
 *   +0x0008 -> line 4232
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord2f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4216–4218 */
/* addr: 0x0013bd60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4216
 *   +0x0004 -> line 4217
 *   +0x0008 -> line 4218
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glTexCoord2dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 4006–4008 */
/* addr: 0x0013bd70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 4006
 *   +0x0004 -> line 4007
 *   +0x0008 -> line 4008
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glScissor(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3137–3139 */
/* addr: 0x0013bd80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3137
 *   +0x0004 -> line 3138
 *   +0x0008 -> line 3139
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glOrtho(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3123–3125 */
/* addr: 0x0013bd90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3123
 *   +0x0004 -> line 3124
 *   +0x0008 -> line 3125
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNormalPointer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3109–3111 */
/* addr: 0x0013bda0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3109
 *   +0x0004 -> line 3110
 *   +0x0008 -> line 3111
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNormal3sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3081–3083 */
/* addr: 0x0013bdb0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3081
 *   +0x0004 -> line 3082
 *   +0x0008 -> line 3083
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNormal3iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3053–3055 */
/* addr: 0x0013bdc0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3053
 *   +0x0004 -> line 3054
 *   +0x0008 -> line 3055
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNormal3fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 3025–3027 */
/* addr: 0x0013bdd0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 3025
 *   +0x0004 -> line 3026
 *   +0x0008 -> line 3027
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNormal3dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2969–2971 */
/* addr: 0x0013bde0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2969
 *   +0x0004 -> line 2970
 *   +0x0008 -> line 2971
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glNewList(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2927–2929 */
/* addr: 0x0013bdf0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2927
 *   +0x0004 -> line 2928
 *   +0x0008 -> line 2929
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMatrixMode(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2899–2901 */
/* addr: 0x0013be00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2899
 *   +0x0004 -> line 2900
 *   +0x0008 -> line 2901
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMateriali(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2885–2887 */
/* addr: 0x0013be10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2885
 *   +0x0004 -> line 2886
 *   +0x0008 -> line 2887
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glMaterialfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2717–2719 */
/* addr: 0x0013be20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2717
 *   +0x0004 -> line 2718
 *   +0x0008 -> line 2719
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLoadMatrixf(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2689–2691 */
/* addr: 0x0013be30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2689
 *   +0x0004 -> line 2690
 *   +0x0008 -> line 2691
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLoadIdentity(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2619–2621 */
/* addr: 0x0013be40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2619
 *   +0x0004 -> line 2620
 *   +0x0008 -> line 2621
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLighti(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2605–2607 */
/* addr: 0x0013be50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2605
 *   +0x0004 -> line 2606
 *   +0x0008 -> line 2607
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLightfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2563–2565 */
/* addr: 0x0013be60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2563
 *   +0x0004 -> line 2564
 *   +0x0008 -> line 2565
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLightModeli(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2549–2551 */
/* addr: 0x0013be70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2549
 *   +0x0004 -> line 2550
 *   +0x0008 -> line 2551
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glLightModelfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2490–2492 */
/* addr: 0x0013be80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2490
 *   +0x0004 -> line 2491
 *   +0x0008 -> line 2492
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned char PS2glIsEnabled(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 2280–2282 */
/* addr: 0x0013be90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 2280
 *   +0x0004 -> line 2281
 *   +0x0008 -> line 2282
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glHint(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1943–1945 */
/* addr: 0x0013bea0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1943
 *   +0x0004 -> line 1944
 *   +0x0008 -> line 1945
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glGetIntegerv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1929–1931 */
/* addr: 0x0013beb0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1929
 *   +0x0004 -> line 1930
 *   +0x0008 -> line 1931
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glGetFloatv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1858–1860 */
/* addr: 0x0013bec0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1858
 *   +0x0004 -> line 1859
 *   +0x0008 -> line 1860
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glGenTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1843–1845 */
/* addr: 0x0013bed0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1843
 *   +0x0004 -> line 1844
 *   +0x0008 -> line 1845
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
unsigned int PS2glGenLists(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1801–1803 */
/* addr: 0x0013bee0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1801
 *   +0x0004 -> line 1802
 *   +0x0008 -> line 1803
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFogiv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1787–1789 */
/* addr: 0x0013bef0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1787
 *   +0x0004 -> line 1788
 *   +0x0008 -> line 1789
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFogi(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1773–1775 */
/* addr: 0x0013bf00  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1773
 *   +0x0004 -> line 1774
 *   +0x0008 -> line 1775
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFogfv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1759–1761 */
/* addr: 0x0013bf10  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1759
 *   +0x0004 -> line 1760
 *   +0x0008 -> line 1761
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFogf(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1745–1747 */
/* addr: 0x0013bf20  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1745
 *   +0x0004 -> line 1746
 *   +0x0008 -> line 1747
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFlush(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1731–1733 */
/* addr: 0x0013bf30  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1731
 *   +0x0004 -> line 1732
 *   +0x0008 -> line 1733
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glFinish(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1535–1537 */
/* addr: 0x0013bf40  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1535
 *   +0x0004 -> line 1536
 *   +0x0008 -> line 1537
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glEndList(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1521–1523 */
/* addr: 0x0013bf50  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1521
 *   +0x0004 -> line 1522
 *   +0x0008 -> line 1523
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glEnd(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1507–1509 */
/* addr: 0x0013bf60  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1507
 *   +0x0004 -> line 1508
 *   +0x0008 -> line 1509
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glEnableClientState(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1493–1495 */
/* addr: 0x0013bf70  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1493
 *   +0x0004 -> line 1494
 *   +0x0008 -> line 1495
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glEnable(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1395–1397 */
/* addr: 0x0013bf80  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1395
 *   +0x0004 -> line 1396
 *   +0x0008 -> line 1397
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDrawArrays(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1381–1383 */
/* addr: 0x0013bf90  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1381
 *   +0x0004 -> line 1382
 *   +0x0008 -> line 1383
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDisableClientState(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1367–1369 */
/* addr: 0x0013bfa0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1367
 *   +0x0004 -> line 1368
 *   +0x0008 -> line 1369
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDisable(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1353–1355 */
/* addr: 0x0013bfb0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1353
 *   +0x0004 -> line 1354
 *   +0x0008 -> line 1355
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDepthRange(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1339–1341 */
/* addr: 0x0013bfc0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1339
 *   +0x0004 -> line 1340
 *   +0x0008 -> line 1341
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDepthMask(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1325–1327 */
/* addr: 0x0013bfd0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1325
 *   +0x0004 -> line 1326
 *   +0x0008 -> line 1327
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDepthFunc(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1311–1313 */
/* addr: 0x0013bfe0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1311
 *   +0x0004 -> line 1312
 *   +0x0008 -> line 1313
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDeleteTextures(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1297–1299 */
/* addr: 0x0013bff0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1297
 *   +0x0004 -> line 1298
 *   +0x0008 -> line 1299
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glDeleteLists(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1283–1285 */
/* addr: 0x0013c000  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1283
 *   +0x0004 -> line 1284
 *   +0x0008 -> line 1285
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glCullFace(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1199–1201 */
/* addr: 0x0013c010  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1199
 *   +0x0004 -> line 1200
 *   +0x0008 -> line 1201
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColorPointer(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1171–1173 */
/* addr: 0x0013c020  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1171
 *   +0x0004 -> line 1172
 *   +0x0008 -> line 1173
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColorMask(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1157–1159 */
/* addr: 0x0013c030  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1157
 *   +0x0004 -> line 1158
 *   +0x0008 -> line 1159
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4usv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1129–1131 */
/* addr: 0x0013c040  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1129
 *   +0x0004 -> line 1130
 *   +0x0008 -> line 1131
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4uiv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1101–1103 */
/* addr: 0x0013c050  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1101
 *   +0x0004 -> line 1102
 *   +0x0008 -> line 1103
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4ubv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1073–1075 */
/* addr: 0x0013c060  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1073
 *   +0x0004 -> line 1074
 *   +0x0008 -> line 1075
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1045–1047 */
/* addr: 0x0013c070  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1045
 *   +0x0004 -> line 1046
 *   +0x0008 -> line 1047
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1017–1019 */
/* addr: 0x0013c080  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1017
 *   +0x0004 -> line 1018
 *   +0x0008 -> line 1019
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 1003–1005 */
/* addr: 0x0013c090  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 1003
 *   +0x0004 -> line 1004
 *   +0x0008 -> line 1005
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 989–991 */
/* addr: 0x0013c0a0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 989
 *   +0x0004 -> line 990
 *   +0x0008 -> line 991
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 961–963 */
/* addr: 0x0013c0b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 961
 *   +0x0004 -> line 962
 *   +0x0008 -> line 963
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor4bv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 933–935 */
/* addr: 0x0013c0c0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 933
 *   +0x0004 -> line 934
 *   +0x0008 -> line 935
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3usv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 905–907 */
/* addr: 0x0013c0d0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 905
 *   +0x0004 -> line 906
 *   +0x0008 -> line 907
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3uiv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 877–879 */
/* addr: 0x0013c0e0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 877
 *   +0x0004 -> line 878
 *   +0x0008 -> line 879
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3ubv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 849–851 */
/* addr: 0x0013c0f0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 849
 *   +0x0004 -> line 850
 *   +0x0008 -> line 851
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3sv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 821–823 */
/* addr: 0x0013c100  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 821
 *   +0x0004 -> line 822
 *   +0x0008 -> line 823
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3iv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 793–795 */
/* addr: 0x0013c110  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 793
 *   +0x0004 -> line 794
 *   +0x0008 -> line 795
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3fv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 779–781 */
/* addr: 0x0013c120  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 779
 *   +0x0004 -> line 780
 *   +0x0008 -> line 781
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3f(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 765–767 */
/* addr: 0x0013c130  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 765
 *   +0x0004 -> line 766
 *   +0x0008 -> line 767
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3dv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 737–739 */
/* addr: 0x0013c140  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 737
 *   +0x0004 -> line 738
 *   +0x0008 -> line 739
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glColor3bv(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 653–655 */
/* addr: 0x0013c150  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 653
 *   +0x0004 -> line 654
 *   +0x0008 -> line 655
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glClearColor(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 625–627 */
/* addr: 0x0013c160  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 625
 *   +0x0004 -> line 626
 *   +0x0008 -> line 627
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glClear(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 583–585 */
/* addr: 0x0013c170  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 583
 *   +0x0004 -> line 584
 *   +0x0008 -> line 585
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glBlendFunc(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 555–557 */
/* addr: 0x0013c180  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 555
 *   +0x0004 -> line 556
 *   +0x0008 -> line 557
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glBindTexture(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 541–543 */
/* addr: 0x0013c190  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 541
 *   +0x0004 -> line 542
 *   +0x0008 -> line 543
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glBegin(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 527–529 */
/* addr: 0x0013c1a0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 527
 *   +0x0004 -> line 528
 *   +0x0008 -> line 529
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glArrayElement(void)
{
    /* TODO: decompile from asm/... */
}

/* D:\dev\R3\Version13\ps2\PS2GL20\Src\PS2GL\PS2GL_ApiTable.c lines 498–500 */
/* addr: 0x0013c1b0  size: 16 bytes */
/* Target MWCC statement boundaries (code offset -> source line):
 *   +0x0000 -> line 498
 *   +0x0004 -> line 499
 *   +0x0008 -> line 500
 * Place reconstructed statements at these boundaries;
 * compare a candidate object's line table as an extra checkpoint.
 */
void PS2glAlphaFunc(void)
{
    /* TODO: decompile from asm/... */
}
