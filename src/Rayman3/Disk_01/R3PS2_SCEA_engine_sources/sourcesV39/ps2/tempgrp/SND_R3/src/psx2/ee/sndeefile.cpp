/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeefile.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct __sFILE __sFILE;
typedef struct _Bigint _Bigint;
typedef struct _reent _reent;
typedef struct _atexit _atexit;
typedef struct __sbuf __sbuf;
typedef struct tm tm;

struct __sFILE {
    int _p; /* +0x0 */
    int _r; /* +0x4 */
    int _w; /* +0x8 */
    short _flags; /* +0xc */
    short _file; /* +0xe */
    __sbuf _bf; /* +0x10 */
    int _lbfsize; /* +0x18 */
    int _cookie; /* +0x1c */
    int _read; /* +0x20 */
    int _write; /* +0x24 */
    int _seek; /* +0x28 */
    int _close; /* +0x2c */
    __sbuf _ub; /* +0x30 */
    int _up; /* +0x38 */
    int _ur; /* +0x3c */
    unsigned char _ubuf[3]; /* +0x40 */
    unsigned char _nbuf[1]; /* +0x43 */
    __sbuf _lb; /* +0x44 */
    int _blksize; /* +0x4c */
    int _offset; /* +0x50 */
    int _data; /* +0x54 */
};

struct _Bigint {
    int _next; /* +0x0 */
    int _k; /* +0x4 */
    int _maxwds; /* +0x8 */
    int _sign; /* +0xc */
    int _wds; /* +0x10 */
    unsigned int _x[1]; /* +0x14 */
};

struct _reent {
    int _errno; /* +0x0 */
    int _stdin; /* +0x4 */
    int _stdout; /* +0x8 */
    int _stderr; /* +0xc */
    int _inc; /* +0x10 */
    char _emergency[25]; /* +0x14 */
    int _current_category; /* +0x30 */
    int _current_locale; /* +0x34 */
    int __sdidinit; /* +0x38 */
    int __cleanup; /* +0x3c */
    int _result; /* +0x40 */
    int _result_k; /* +0x44 */
    int _p5s; /* +0x48 */
    int _freelist; /* +0x4c */
    int _cvtlen; /* +0x50 */
    int _cvtbuf; /* +0x54 */
    /* aggregate */ int _new; /* +0x58 */
    int _atexit; /* +0x148 */
    _atexit _atexit0; /* +0x14c */
    int _sig_func; /* +0x1d4 */
    /* aggregate */ int __sglue; /* +0x1d8 */
    __sFILE __sf[3]; /* +0x1e4 */
};

struct _atexit {
    int _next; /* +0x0 */
    int _ind; /* +0x4 */
    /* aggregate */ int _fns; /* +0x8 */
};

struct __sbuf {
    int _base; /* +0x0 */
    int _size; /* +0x4 */
};

struct tm {
    int tm_sec; /* +0x0 */
    int tm_min; /* +0x4 */
    int tm_hour; /* +0x8 */
    int tm_mday; /* +0xc */
    int tm_mon; /* +0x10 */
    int tm_year; /* +0x14 */
    int tm_wday; /* +0x18 */
    int tm_yday; /* +0x1c */
    int tm_isdst; /* +0x20 */
};

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeefile.cpp lines 254–254 */
/* addr: 0x0018a100  size: 32 bytes */
void Q24usnd34CIdObjPtr<Q24usnd14CWave::__opPQ24usnd14CWaveFileIdObj(void)
{
    /* line map: */
    /*   line 254 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeefile.cpp lines 59–59 */
/* addr: 0x0018a120  size: 16 bytes */
int usnd_feof(__sFILE* stream)
{
    /* line map: */
    /*   line 59 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0018a130  size: 8 bytes */
unsigned int usnd_fread(void* buffer, unsigned int size, unsigned int count, __sFILE* stream)
{
    /* TODO: decompile from asm/... */
}

/* addr: 0x0018a140  size: 8 bytes */
long usnd_ftell(__sFILE* stream)
{
    /* TODO: decompile from asm/... */
}

/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeefile.cpp lines 37–39 */
/* addr: 0x0018a150  size: 52 bytes */
int usnd_fseek(__sFILE* stream, long offset, int origin)
{
    /* line map: */
    /*   line 37 @ +0x000 */
    /*   line 39 @ +0x000 */
    /*   line 39 @ +0x000 */
    /*   line 39 @ +0x000 */
    /* TODO: decompile from asm/... */
}

/* addr: 0x0018a190  size: 8 bytes */
int usnd_fclose(__sFILE* stream)
{
    /* TODO: decompile from asm/... */
}
