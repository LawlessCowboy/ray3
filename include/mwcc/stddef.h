#ifndef RAY3_MWCC_STDDEF_H
#define RAY3_MWCC_STDDEF_H

/* PS2 EE pointers and size_t are 32-bit in the recovered build profile. */
typedef unsigned int size_t;
typedef int ptrdiff_t;

#ifndef NULL
#define NULL 0
#endif

#endif
