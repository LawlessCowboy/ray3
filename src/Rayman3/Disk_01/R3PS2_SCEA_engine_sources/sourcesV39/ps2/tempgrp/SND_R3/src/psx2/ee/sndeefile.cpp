/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\SND_R3\src\psx2\ee\sndeefile.cpp */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

/* Recovered aggregate layouts from MWCC debug type records. */
typedef struct aggregate aggregate;
typedef struct _glue _glue;
typedef struct __sbuf __sbuf;
typedef struct __sFILE __sFILE;
typedef struct _Bigint _Bigint;
typedef struct _atexit _atexit;
typedef struct _reent _reent;
typedef struct tm tm;


struct _glue {
    _glue* _next; /* +0x0 */
    int _niobs; /* +0x4 */
    __sFILE* _iobs; /* +0x8 */
};

struct __sbuf {
    int _base; /* +0x0 */
    int _size; /* +0x4 */
};

struct __sFILE {
    int _p; /* +0x0 */
    int _r; /* +0x4 */
    int _w; /* +0x8 */
    short _flags; /* +0xc */
    short _file; /* +0xe */
    __sbuf _bf; /* +0x10 */
    int _lbfsize; /* +0x18 */
    int _cookie; /* +0x1c */
    int (*_read)(void*, char*, int); /* +0x20 */
    int (*_write)(void*, char*, int); /* +0x24 */
    long (*_seek)(void*, long, int); /* +0x28 */
    int (*_close)(void*); /* +0x2c */
    __sbuf _ub; /* +0x30 */
    int _up; /* +0x38 */
    int _ur; /* +0x3c */
    unsigned char _ubuf[3]; /* +0x40 */
    unsigned char _nbuf[1]; /* +0x43 */
    __sbuf _lb; /* +0x44 */
    int _blksize; /* +0x4c */
    int _offset; /* +0x50 */
    _reent* _data; /* +0x54 */
};

struct _Bigint {
    _Bigint* _next; /* +0x0 */
    int _k; /* +0x4 */
    int _maxwds; /* +0x8 */
    int _sign; /* +0xc */
    int _wds; /* +0x10 */
    unsigned int _x[1]; /* +0x14 */
};

struct _atexit {
    _atexit* _next; /* +0x0 */
    int _ind; /* +0x4 */
    int _fns[32]; /* +0x8 */
};

struct _reent {
    int _errno; /* +0x0 */
    __sFILE* _stdin; /* +0x4 */
    __sFILE* _stdout; /* +0x8 */
    __sFILE* _stderr; /* +0xc */
    int _inc; /* +0x10 */
    char _emergency[25]; /* +0x14 */
    int _current_category; /* +0x30 */
    int _current_locale; /* +0x34 */
    int __sdidinit; /* +0x38 */
    void (*__cleanup)(_reent*); /* +0x3c */
    _Bigint* _result; /* +0x40 */
    int _result_k; /* +0x44 */
    _Bigint* _p5s; /* +0x48 */
    _Bigint** _freelist; /* +0x4c */
    int _cvtlen; /* +0x50 */
    int _cvtbuf; /* +0x54 */
    /* aggregate */ int _new; /* +0x58 */
    unsigned char _extractor_padding_00[236]; /* implicitly added by extractor; +0x5c..0x147 */
    _atexit* _atexit_ptr; /* +0x148 */
    _atexit _atexit0; /* +0x14c */
    void (**_sig_func)(int); /* +0x1d4 */
    _glue __sglue; /* +0x1d8 */
    __sFILE __sf[3]; /* +0x1e4 */
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

extern "C" int fclose(__sFILE*);
extern "C" __sFILE* fopen(char*, char*);
extern "C" int fseek(__sFILE*, long, int);
extern "C" long ftell(__sFILE*);
extern "C" unsigned int fread(void*, unsigned int, unsigned int, __sFILE*);

extern "C" int usnd_feof(__sFILE* stream)
{
    return (stream->_flags & 0x20) != 0;
}

extern "C" unsigned int usnd_fread(void* buffer, unsigned int size, unsigned int count, __sFILE* stream)
{
    return fread(buffer, size, count, stream);
}

extern "C" long usnd_ftell(__sFILE* stream)
{
    return ftell(stream);
}

extern "C" int usnd_fseek(__sFILE* stream, long offset, int origin)
{
    fseek(stream, offset, origin);
    return (int)ftell(stream);
}

extern "C" int usnd_fclose(__sFILE* stream)
{
    return fclose(stream);
}

extern "C" __sFILE* usnd_fopen(char* filename, char* mode)
{
    return fopen(filename, mode);
}
