/* E:\Rayman3\Disk_01\R3PS2_SCEA_engine_sources\sourcesV39\ps2\tempgrp\rm3\overlib.c */
/* Language: C++ */
/* Compiler: MW MIPS C Compiler */

#include <stddef.h>

void abort(void)
{
}

void exit(void)
{
}

/* Hand-written asm body: the target line map has one line per instruction
 * from the first abs.s/sub.s to madd.s, and the code uses callee-saved
 * $f24-$f26 in a leaf function, which MWCC does not choose for C.
 * abs.s and the R5900 accumulator ops (mula.s/msuba.s/madda.s) are not
 * emittable from C under the project baseline, so the arithmetic is
 * written as one statement-level asm block.
 * The argument is taken from $f12 (the o32 float argument register)
 * instead of the C parameter: naming the C variable makes MWCC treat
 * the block's first instruction as schedulable and hoist it above the
 * constant setup, which retail does not do.
 * ".set noreorder" / ".set reorder" pin the block (and the interleaved
 * callee-saved FPR saves) in place; the closing ".set reorder" restores
 * normal scheduling for the rest of the function. */
float PS2_dl_cosf(float val)
{
    float x0;
    float x1 = -0.15915493667125702f, x2 = 2.0f, x3 = 4194304.0f, x4 = 0.25f, x5 = 6.2831850051879883f, x6 = -41.341670989990234f, x7 = 81.60222625732422f, x8 = -76.57495880126953f, x9 = 39.71065902709961f;

    asm {
        .set noreorder
        abs.s   x0, $f12
        mula.s  x0, x1
        msuba.s x2, x3
        madda.s x2, x3
        msuba.s x0, x1
        msub.s  x0, x2, x4
        abs.s   x0, x0
        sub.s   $f26, x0, x4

        mul.s   x0, $f26, $f26
        mula.s  $f26, x5
        mul.s   $f24, $f26, x0
        mul.s   $f25, $f24, x0
        madda.s $f24, x6
        mul.s   $f24, $f25, x0
        madda.s $f25, x7
        mul.s   $f25, $f24, x0
        madda.s $f24, x8
        madd.s  x0, $f25, x9
        .set reorder
    }
    return x0;
}

/* Hand-written asm body: the target line map has one line per instruction
 * from the first abs.s/sub.s to madd.s, and the code uses callee-saved
 * $f24-$f26 in a leaf function, which MWCC does not choose for C.
 * See PS2_dl_cosf above for why the argument is read from $f12 and why
 * the block is wrapped in ".set noreorder" / ".set reorder". */
float PS2_dl_sinf(float val)
{
    float x0 = 1.5707963705062866f, x1 = -0.15915493667125702f, x2 = 2.0f, x3 = 4194304.0f, x4 = 0.25f, x5 = 6.2831850051879883f, x6 = -41.341670989990234f, x7 = 81.60222625732422f, x8 = -76.57495880126953f, x9 = 39.71065902709961f;

    asm {
        .set noreorder
        sub.s   x0, $f12, x0
        abs.s   x0, x0
        mula.s  x0, x1
        msuba.s x2, x3
        madda.s x2, x3
        msuba.s x0, x1
        msub.s  x0, x2, x4
        abs.s   x0, x0
        sub.s   $f26, x0, x4

        mul.s   x0, $f26, $f26
        mula.s  $f26, x5
        mul.s   $f24, $f26, x0
        mul.s   $f25, $f24, x0
        madda.s $f24, x6
        mul.s   $f24, $f25, x0
        madda.s $f25, x7
        mul.s   $f25, $f24, x0
        madda.s $f24, x8
        madd.s  x0, $f25, x9
        .set reorder
    }
    return x0;
}

void PS2_fn_vCreatemallocCriticalSection(void)
{
}
