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

asm void PS2glColorTableEXT(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColorTableEXT(v0)
    jr v1; nop
}

asm void PS2glMultiColor4usvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4usvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4uivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4uivARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4ubvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4ubvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4svARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4svARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4ivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4ivARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4fvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4fvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4dvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4dvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor4bvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor4bvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3usvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3usvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3uivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3uivARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3ubvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3ubvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3svARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3svARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3ivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3ivARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3fvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3fvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3dvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3dvARB(v0)
    jr v1; nop
}

asm void PS2glMultiColor3bvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiColor3bvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord4svARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord4svARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord4ivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord4ivARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord4fvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord4fvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord4dvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord4dvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord3svARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord3svARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord3ivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord3ivARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord3fvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord3fvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord3dvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord3dvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord2svARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord2svARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord2ivARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord2ivARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord2fvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord2fvARB(v0)
    jr v1; nop
}

asm void PS2glMultiTexCoord2dvARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMultiTexCoord2dvARB(v0)
    jr v1; nop
}

asm void PS2glActiveTextureARB(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glActiveTextureARB(v0)
    jr v1; nop
}

asm void PS2glSetGsRegister(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glSetGsRegister(v0)
    jr v1; nop
}

asm void PS2glViewport(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glViewport(v0)
    jr v1; nop
}

asm void PS2glVertexPointer(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertexPointer(v0)
    jr v1; nop
}

asm void PS2glVertex4sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex4sv(v0)
    jr v1; nop
}

asm void PS2glVertex4iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex4iv(v0)
    jr v1; nop
}

asm void PS2glVertex4fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex4fv(v0)
    jr v1; nop
}

asm void PS2glVertex4f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex4f(v0)
    jr v1; nop
}

asm void PS2glVertex4dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex4dv(v0)
    jr v1; nop
}

asm void PS2glVertex3sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3sv(v0)
    jr v1; nop
}

asm void PS2glVertex3iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3iv(v0)
    jr v1; nop
}

asm void PS2glVertex3fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3fv(v0)
    jr v1; nop
}

asm void PS2glVertex3f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3f(v0)
    jr v1; nop
}

asm void PS2glVertex3dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3dv(v0)
    jr v1; nop
}

asm void PS2glVertex3d(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex3d(v0)
    jr v1; nop
}

asm void PS2glVertex2sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex2sv(v0)
    jr v1; nop
}

asm void PS2glVertex2iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex2iv(v0)
    jr v1; nop
}

asm void PS2glVertex2fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex2fv(v0)
    jr v1; nop
}

asm void PS2glVertex2f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex2f(v0)
    jr v1; nop
}

asm void PS2glVertex2dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glVertex2dv(v0)
    jr v1; nop
}

asm void PS2glTranslatef(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTranslatef(v0)
    jr v1; nop
}

asm void PS2glTexParameteri(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexParameteri(v0)
    jr v1; nop
}

asm void PS2glTexImage2D(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexImage2D(v0)
    jr v1; nop
}

asm void PS2glTexEnvf(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexEnvf(v0)
    jr v1; nop
}

asm void PS2glTexCoordPointer(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoordPointer(v0)
    jr v1; nop
}

asm void PS2glTexCoord4sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord4sv(v0)
    jr v1; nop
}

asm void PS2glTexCoord4iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord4iv(v0)
    jr v1; nop
}

asm void PS2glTexCoord4fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord4fv(v0)
    jr v1; nop
}

asm void PS2glTexCoord4dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord4dv(v0)
    jr v1; nop
}

asm void PS2glTexCoord3sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord3sv(v0)
    jr v1; nop
}

asm void PS2glTexCoord3iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord3iv(v0)
    jr v1; nop
}

asm void PS2glTexCoord3fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord3fv(v0)
    jr v1; nop
}

asm void PS2glTexCoord3dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord3dv(v0)
    jr v1; nop
}

asm void PS2glTexCoord2sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord2sv(v0)
    jr v1; nop
}

asm void PS2glTexCoord2iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord2iv(v0)
    jr v1; nop
}

asm void PS2glTexCoord2fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord2fv(v0)
    jr v1; nop
}

asm void PS2glTexCoord2f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord2f(v0)
    jr v1; nop
}

asm void PS2glTexCoord2dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glTexCoord2dv(v0)
    jr v1; nop
}

asm void PS2glScissor(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glScissor(v0)
    jr v1; nop
}

asm void PS2glOrtho(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glOrtho(v0)
    jr v1; nop
}

asm void PS2glNormalPointer(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNormalPointer(v0)
    jr v1; nop
}

asm void PS2glNormal3sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNormal3sv(v0)
    jr v1; nop
}

asm void PS2glNormal3iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNormal3iv(v0)
    jr v1; nop
}

asm void PS2glNormal3fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNormal3fv(v0)
    jr v1; nop
}

asm void PS2glNormal3dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNormal3dv(v0)
    jr v1; nop
}

asm void PS2glNewList(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glNewList(v0)
    jr v1; nop
}

asm void PS2glMatrixMode(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMatrixMode(v0)
    jr v1; nop
}

asm void PS2glMateriali(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMateriali(v0)
    jr v1; nop
}

asm void PS2glMaterialfv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glMaterialfv(v0)
    jr v1; nop
}

asm void PS2glLoadMatrixf(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLoadMatrixf(v0)
    jr v1; nop
}

asm void PS2glLoadIdentity(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLoadIdentity(v0)
    jr v1; nop
}

asm void PS2glLighti(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLighti(v0)
    jr v1; nop
}

asm void PS2glLightfv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLightfv(v0)
    jr v1; nop
}

asm void PS2glLightModeli(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLightModeli(v0)
    jr v1; nop
}

asm void PS2glLightModelfv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glLightModelfv(v0)
    jr v1; nop
}

asm unsigned char PS2glIsEnabled(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glIsEnabled(v0)
    jr v1; nop
}

asm void PS2glHint(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glHint(v0)
    jr v1; nop
}

asm void PS2glGetIntegerv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glGetIntegerv(v0)
    jr v1; nop
}

asm void PS2glGetFloatv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glGetFloatv(v0)
    jr v1; nop
}

asm void PS2glGenTextures(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glGenTextures(v0)
    jr v1; nop
}

asm unsigned int PS2glGenLists(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glGenLists(v0)
    jr v1; nop
}

asm void PS2glFogiv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFogiv(v0)
    jr v1; nop
}

asm void PS2glFogi(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFogi(v0)
    jr v1; nop
}

asm void PS2glFogfv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFogfv(v0)
    jr v1; nop
}

asm void PS2glFogf(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFogf(v0)
    jr v1; nop
}

asm void PS2glFlush(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFlush(v0)
    jr v1; nop
}

asm void PS2glFinish(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glFinish(v0)
    jr v1; nop
}

asm void PS2glEndList(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glEndList(v0)
    jr v1; nop
}

asm void PS2glEnd(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glEnd(v0)
    jr v1; nop
}

asm void PS2glEnableClientState(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glEnableClientState(v0)
    jr v1; nop
}

asm void PS2glEnable(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glEnable(v0)
    jr v1; nop
}

asm void PS2glDrawArrays(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDrawArrays(v0)
    jr v1; nop
}

asm void PS2glDisableClientState(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDisableClientState(v0)
    jr v1; nop
}

asm void PS2glDisable(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDisable(v0)
    jr v1; nop
}

asm void PS2glDepthRange(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDepthRange(v0)
    jr v1; nop
}

asm void PS2glDepthMask(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDepthMask(v0)
    jr v1; nop
}

asm void PS2glDepthFunc(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDepthFunc(v0)
    jr v1; nop
}

asm void PS2glDeleteTextures(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDeleteTextures(v0)
    jr v1; nop
}

asm void PS2glDeleteLists(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glDeleteLists(v0)
    jr v1; nop
}

asm void PS2glCullFace(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glCullFace(v0)
    jr v1; nop
}

asm void PS2glColorPointer(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColorPointer(v0)
    jr v1; nop
}

asm void PS2glColorMask(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColorMask(v0)
    jr v1; nop
}

asm void PS2glColor4usv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4usv(v0)
    jr v1; nop
}

asm void PS2glColor4uiv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4uiv(v0)
    jr v1; nop
}

asm void PS2glColor4ubv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4ubv(v0)
    jr v1; nop
}

asm void PS2glColor4sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4sv(v0)
    jr v1; nop
}

asm void PS2glColor4iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4iv(v0)
    jr v1; nop
}

asm void PS2glColor4fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4fv(v0)
    jr v1; nop
}

asm void PS2glColor4f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4f(v0)
    jr v1; nop
}

asm void PS2glColor4dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4dv(v0)
    jr v1; nop
}

asm void PS2glColor4bv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor4bv(v0)
    jr v1; nop
}

asm void PS2glColor3usv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3usv(v0)
    jr v1; nop
}

asm void PS2glColor3uiv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3uiv(v0)
    jr v1; nop
}

asm void PS2glColor3ubv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3ubv(v0)
    jr v1; nop
}

asm void PS2glColor3sv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3sv(v0)
    jr v1; nop
}

asm void PS2glColor3iv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3iv(v0)
    jr v1; nop
}

asm void PS2glColor3fv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3fv(v0)
    jr v1; nop
}

asm void PS2glColor3f(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3f(v0)
    jr v1; nop
}

asm void PS2glColor3dv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3dv(v0)
    jr v1; nop
}

asm void PS2glColor3bv(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glColor3bv(v0)
    jr v1; nop
}

asm void PS2glClearColor(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glClearColor(v0)
    jr v1; nop
}

asm void PS2glClear(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glClear(v0)
    jr v1; nop
}

asm void PS2glBlendFunc(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glBlendFunc(v0)
    jr v1; nop
}

asm void PS2glBindTexture(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glBindTexture(v0)
    jr v1; nop
}

asm void PS2glBegin(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glBegin(v0)
    jr v1; nop
}

asm void PS2glArrayElement(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glArrayElement(v0)
    jr v1; nop
}

asm void PS2glAlphaFunc(void)
{
    lw v0, g_pPS2glApiTable
    lw v1, tagPS2glApiTable.pfn_PS2glAlphaFunc(v0)
    jr v1; nop
}
