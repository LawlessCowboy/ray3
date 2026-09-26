# Matching insights

Use `python3 tools/match.py insight add "..." --category compiler` to record
short, reusable findings for every matching worker. Record an observation only
after reproducing it in the target or a controlled probe; include the relevant
compiler option, construct, and outcome.

- [compiler] CodeWarrior PS2 3.0 (2001-11-26) emits the target's `daddu` zero
  idiom and `sd`/`ld` return-address save for `fn_pstAllocMind`; MWCC 2.4 Build
  0017 instead emits `pextlb` and `sq`/`lq`.
- [compiler] Current probes make `-opt level=3` and `-opt level=4`
  codegen-equivalent. Use level 3 as the baseline unless a verified function
  disproves it.
- [source-layout] MWCC line-table offsets can reveal source formatting. The
  matched `fn_vInterruptMenu2D` required braced `if`/`else` bodies and its
  final clamp on one source line to reproduce the target line-offset pattern.

- [tooling] Cached match checks take about 0.3 seconds when the source body is unchanged; run index --refresh only after extraction changes ownership comments. (2026-09-06)

- [tooling] Difficulty triage uses target code size, branch/call count, memory
  pressure, FP/VU instructions, debug-line complexity, and C++ status. It
  selects the least-cost model bucket; an early mismatch should still trigger
  escalation rather than forcing an unsuitable worker to persist. (2026-09-06)

- [debug-format] MWCC linked .debug function records may omit unused leading parameters: Micros null callbacks record only their used pointer 0x83/0x63 descriptors, while _tdstAllRetObjectSound's function-pointer types preserve the full signatures and target code uses the resulting a2/a3/t0 registers. Treat such extracted parameter lists as incomplete when callback type or C++ mangling proves greater arity. (2026-09-06)

- [compiler] MWCC PS2 3.0 recognizes #pragma schedule off/reset. On fn_ucFindPlaceInActionTable it restores the target's 100-byte size and unscheduled outer/final return slots, but changes loop-init and increment ordering, proving the target was not compiled with scheduling disabled for the whole function. (2026-09-06)

- [compiler] MWCC PS2 3.0: assigning a masked ternary expression to an unsigned int local and returning it from an unsigned-char function preserves the final andi 0xff conversion; equivalent early returns let range analysis remove that mask. (2026-09-06)

- [compiler] MWCC PS2 3.0 emits a post-call andi 0xff when an undeclared callee is implicitly assumed to return int; declaring its unsigned-char return type removes that conversion. (2026-09-06)

- [compiler] For GLI_vResetTableOfActiveLightsForChar, leaving memset without an explicit prototype reproduced the target tail-call exactly (24/24); declaring memset as void or void* changed argument evaluation/register scheduling and emitted 28 bytes. MWCC's implicit builtin/library handling is significant for memset wrappers. (2026-09-06)

- [debug-format] Keyword wrappers required correcting tduGetSetParam_ from generated struct to union (all members at offset 0) plus an omitted leading ABI parameter; fn_p_stNoVMTKeyWord then matched 20/20 with p_stTree in a1 and p_stValue in a2. (2026-09-06)

- [relocation] In HMU_Sync.c, the target encodes the shared HMU_g_bHMU_CS_Created relocation as gp-0x6614 in HMU_fn_bIsInitialized but gp-0x6610 in matched HMU_fn_vEnterCriticalSection. A single natural source declaration can match the latter but not both; treat isolated accessor failures as target relocation/data-layout evidence. (2026-09-06)

- [debug-format] fn_ucGetDsgVarBoolean is a three-argument ABI despite the recovered two-argument declaration; target loads byte from a0, writes output through a2, and tags it E_vt_Integer (6), not E_vt_Boolean (1). This exact natural-C signature/tag change produced a 24/24 MATCH. (2026-09-06)

- [compiler] MWCC PS2 3.0 level 3 only runs its loop unroller in speed mode: #pragma optimize_for_size off changed a signed-int 9-trip struct-array accumulation from an 84-byte rolled loop to a 320-byte factor-8 main loop plus scalar remainder; the compiler help independently states that loop unrolling requires -opt speed. (2026-09-06)

- [compiler] MWCC PS2 3.0: local #pragma optimize_for_size off changed repeated 0.001f and 0.7f constants from small-data literal loads into target-shaped lui/ori/mtc1 immediates in TXT_vAfficheSpecialWithTransparency; it did not change float-to-unsigned-char lowering through fptoui. (2026-09-07)

- [compiler] MWCC PS2 3.0 recognizes scoped #pragma fast_fptosi on/reset: under the accepted -opt level=3 baseline it changes natural signed float-to-int casts from fptosi calls into hardware cvt.w.s/mfc1, while unsigned int/char casts still call fptoui. (2026-09-07)

- [debug-format] GLD_bWriteToViewportFinished's recovered one-parameter declaration omitted a leading ABI parameter: the target consumes hVP from , and adding an unused leading void* plus the natural hVP>>4/negative correction and (short) index cast produced the exact 64-byte match. Treat single-parameter MWCC records with unexpected  use as possible omitted leading parameters. (2026-09-13)

- [compiler] MWCC PS2 3.0 level 3: #pragma optimize_for_size off enables strength-reduced byte-offset induction for variable-bound loops over 80-byte struct arrays; default size mode recalculates index*80 and saves one fewer callee-saved register. (2026-09-13)

- [debug-format] Five trivial procedure callbacks in Procedur.c had extracted one-parameter signatures but target ABI returned ; adding a second natural pointer parameter and returning it reproduced jr/daddu exactly, confirming omitted leading callback parameters in debug extraction. (2026-09-13)

- [source-layout] In u_drawHier.c, SDC_VertexArrays_.pArrayOfVertexArrays is one pointer at +0xc, not a four-element pointer array: the following debug-field offsets place FrameDeformed at +0x1c; correcting the generated declaration reproduced GLI_vSetObjectDeformed's FrameDeformed store. (2026-09-13)

- [abi] SAI_Pub b-prefixed wrappers are actually int-returning and their flag parameters are int, despite debug-recovered unsigned char/unsigned short types. Unsigned narrowing inserted andi/mask instructions and stack frames; changing wrappers to int reproduced all 8 target tail-call bodies exactly. (2026-09-13)

- [debug-format] AiCondSound.c required explicit cross-TU declarations for fn_p_stEvalTree and SND_fn_bGetStereoSound; extractor emitted an undefined p_SuperObjPerso use in the two-parameter fn_p_stIsInStereoMode body. Adding natural prototypes and removing the stale cast restored TU compilation. (2026-09-13)

- [source-layout] AiCondSound fn_p_stIsEventValid matches when the output parameter is backed by int st_Param[4] (not a scalar or recovered tdstGetSetParam_ object); MWCC then places the temporary at sp+0x20 and emits the target addiu/movz boolean sequence. (2026-09-14)

- [abi] Two recovered wrappers with debug unsigned-char return records matched only when declared int: fn_bDoReflexPerso (56/56) and fn_ucWaitEndOfAction (44/44). MWCC target returns full 32/64-bit expression without andi; the debug return type is not sufficient to reconstruct source ABI. (2026-09-14)

- [debug-format] CollSet no-collision setters all require an int condition parameter for MWCC ABI: changing the extractor-generated unsigned char parameter to int produced exact 44-byte matches for the ZDE projectile, other sectors, main character, secondary character, projectile, and map setters. The target branches directly on a1; unsigned-char candidates emitted an extra andi/mask. (2026-09-14)

- [debug-format] Extractor aggregate sizing must treat long and unsigned long as 8-byte MWCC PS2 types; treating them as 4 bytes inserts false internal padding and shifts enclosing fields (confirmed by _stTimerCount and engine-layout matches). (2026-09-14)

- [debug-format] LNK_fn_p_SetLag raw debug signature decoded only one tdstNodeInterpret_* parameter, but target ABI returns ; adding the omitted leading HIE_tdstSuperObject_* parameter and returning the second argument reproduces the exact 8-byte thunk. Treat similar one-parameter callback wrappers as possible signature-gap cases and validate register usage. (2026-09-14)

- [compiler] SDLRefs printf probe: under MWCC PS2 3.0 O3, a C++ member method calling extern "C" printf emits a 0x20-byte stack-frame jal even with void/non-variadic declarations; target SDLRefs methods are 12-byte lui/j tail thunks. Recovered target literals are @820="Dummy interpol reference called !!\\n" and @823="Dummy reference called !!\\n". This points to a project macro/special declaration or compiler-context difference, not unknown string contents. (2026-09-14)

- [compiler] MWCC PS2 3.0 preserves independent byte-offset and element-index induction variables in a variable-bound handle scan; accessing the handle through (char*)base + Offset and incrementing Offset before i reproduces the target's addiu 0x10/addiu 1 loop order. (2026-09-15)

- [compiler] MWCC PS2 3.0 baseline does not recognize __builtin_sqrt in recovered C: both PS2SQRTF and INT_fn_xDistancePointToLine lower it through fptodp plus an unresolved __builtin_sqrt call, while retail targets use inline sqrt.s. Exact matches need the original compiler-specific intrinsic/macro context. (2026-09-23)

- [source-layout] MECTools.c DNM_stDynamicsBaseBlock needs extractor padding +0x78..0x7f before m_stPreviousMatrix and +0x16c..0x16f before the advanced block; target accesses then align at previous=0x80, current=0xe0, advanced=0x170, while all three recorded MECTools matches remain MATCH. (2026-09-23)

- [compiler] MWCC PS2 3.0 baseline lowers a plain float fabsf declaration to jal calls, while MAT_fn_bAreEquivalentWithEps and both MAT compose targets use inline abs.s; natural conditional absolute-value forms instead emit branch-heavy 1620-1796-byte code. Exact abs.s reconstruction needs the original project macro/header compiler context. (2026-09-24)

- [compiler] Exact MWCC PS2 3.0 probe: plain fabsf, __builtin_fabsf, __fabs, __fabsf, C++ abs(float), conditional sign tests, and union bit-mask forms do not emit abs.s under the project profile; ordinary fabs forms remain relocatable calls. This points to a missing project/SDK macro or inline-header construct, not an O3/O4 flag difference. (2026-09-24)

- [compiler] MWCCPS2 3.0 contains internal intrinsic __I_abs_s with signature __I_abs_s(long destination_reg, long source_reg); immediate register IDs are required and it emits abs.s directly (verified __I_abs_s(0,1) -> abs.s f0,f1). Natural abs_s(x), __abs_s(x), and __builtin_abs_s(x) are treated as external calls/conversions, so a project macro would need to wrap the internal register-form intrinsic or use an SDK inline helper. (2026-09-24)

- [compiler] Compiler binary intrinsic table exposes __I_abs_s with signature =D,S and opcode abs.s; direct calls require immediate physical FPU register IDs and emit the instruction, but do not create a C float value or influence MWCC register allocation. In a natural  probe, MWCC kept x in f1/f12, proving the intrinsic cannot be wrapped generically without the original register-binding/assembly convention. (2026-09-24)

- [compiler] Probe x=x-y; __I_abs_s(0,12); return x: MWCC kept x in f1/f12, so the direct intrinsic did not bind the C value to the requested source register. It cannot be wrapped generically without the original register-binding or assembly convention. (2026-09-24)

- [compiler] MWCC PS2 3.0 accepts a function-level asm definition such as `asm float f(float x) { abs.s $f0, $f12 }` and an inline `asm volatile { abs.s $f0, $f0 }` block; the former emits a standalone 4-byte wrapper using ABI f12->f0, while the latter preserves statement order but MWCC treats registers as unconstrained (it may allocate the C temporary in f1). This confirms the missing abs.s path likely came from an SDK asm helper/macro, not a normal fabs function or __I_abs_s wrapper; do not use inline asm in canonical sources. (2026-09-24)

- [compiler] MWCC PS2 inline asm accepts numeric FPU names (`$f0`, `$f12`) in asm function bodies, but SDK-style aliases such as `$fv0` and `$fa0` are rejected as undefined identifiers; any original wrapper must use numeric registers or a macro layer that expands aliases before MWCC parsing. (2026-09-24)

- [compiler] MWCC PS2 3.0 symbolic inline-asm operands bind C float lvalues to allocated FPU registers: `float d=x-y; asm { abs.s d,d }` emits exact `sub.s f0,f12,f13; abs.s f0,f0; c.lt.s f0,f14`. A header macro `#define MTH_ABS_IN_PLACE(v) asm { abs.s v,v }` preserves the same sequence for pointer loads and chained comparisons; plain and volatile asm are byte-identical, while asm functions never inline even with `-inline all`. (2026-09-24)

- [compiler] MWCC PS2 3.0: to preserve chained-&& lowering around a statement-form symbolic abs helper, keep comparisons in an int temporary and gate later blocks with `if (test = !!test)`. This emits the target `sltu test,zero,test; beqz test` pair; assigning to an unsigned-char result only at case exit emits one final `andi`, reproducing MAT_fn_bAreEquivalentWithEps instruction-for-instruction. (2026-09-24)

- [compiler] MWCC PS2 3.0 lowers a 12-byte float-vector struct assignment through lwc1/swc1 plus a local-address temporary, but a union view with an unsigned-int[3] word copy emits direct lw/sw to stack slots. In CAM_fn_vComputeCameraSystemAxis this changed a 1020-byte candidate to the target 1016-byte size and reproduced the retail copy core exactly. (2026-09-24)

- [compiler] MWCC PS2 symbolic FP inline-asm operands accept scalar C float lvalues but reject aggregate-member expressions such as vector.x directly with 'illegal operand'; assign the component to a scalar temporary before applying recovered mula.s/madda.s/madd.s, sqrt.s, or abs.s helper macros. (2026-09-24)

- [compiler] MWCC PS2 3.0 C++ exceptions default to on under the baseline invocation and suppress level-3 tail-call optimization: adding `#pragma exceptions off` changed usnd_memcmp/usnd_memcpy/usnd_memset from 28-byte jal frames to exact 8-byte j thunks, and usnd_vDeleteCritSect from 40 bytes to the exact 20-byte tail jump. Use this only where retail C++ wrappers prove exception-free tail calls. (2026-09-24)

- [debug-format] MWCC PS2 treats unsigned long as 8 bytes; an extractor-inserted 4-byte pad between consecutive unsigned long fields in _stTimerCount made each timer record 8 bytes too large and shifted later tdstEngineStructure fields. Removing that pad fixed the stCineManager relocation by 0x10 in CineDef.c. (2026-09-24)

- [debug-format] GLI_vSetDynShadowParam's recovered four-parameter declaration was ABI-incomplete: target callers populate a1 with an object pointer, f12 with length, a2 with level, and a3 with close-state. Restoring an ignored void* second parameter yields the exact 20-byte target (a0/f12/a2/a3 stores). Use caller register setup to audit debug signatures when hard-float parameters appear to compress GPR numbering. (2026-09-24)

- [compiler] MWCC PS2 function-local #pragma optimization_level 1 preserves simple load/store optimization but leaves jr delay slots as nop (exact for SVG_fn_bGetActiveVms and SVG_fn_vSetMC0AsChanged); level 0 additionally spills and reloads an int parameter at stack offset 0 (exact for SVG_fn_SetAsCurrentMemoryCard). (2026-09-24)

- [compiler] MWCC PS2 3.0 O3 folds pointer postincrement followed by returning that pointer into addiu on v0, but an explicit byte-pointer reassignment keeps the addiu in the parameter register and emits the return-register move in the jr delay slot. This exact distinction matched 18 Intell evaluator callbacks. (2026-09-24)

- [debug-format] MWCC debug definition records omit unreferenced parameters, but a same-TU declaration record keeps the full prototype. AGO2_CreateCylinder reads its part pointer from a1 and floats from f12/f13 while its definition records only (AGO2_Part_*, float, float); the declaration has the full 16-parameter callback type. tools/extract_debug.py now completes such definitions (26 in the retail ELF, marked with a "Signature completed" comment) when the recovered types are an in-order subsequence. Files extracted earlier still show the short form: check signature evidence before trusting a short parameter list. (2026-09-26)

- [compiler] MWCC PS2: field-by-field float copies written through int lvalues (*(int*)&d->xX = *(int*)&s->xX, xY, xZ) compile to interleaved lw/sw via a GPR, which is how the retail code copies MTH vectors (e.g. set-translation in MEC_fn_vGroundObstacleManagement, with lui 0x3F80 for xW=1.0f scheduled after the first lw). Plain struct assignment, V3 casts, or float field copies all use lwc1/swc1 instead. (2026-09-26)

- [compiler] MWCC PS2: a comparison cast to unsigned char, if ((unsigned char)(p->e != 99)), is materialized as xori/sltu/beqz; plain comparisons, ?1:0, int casts and != 0 wrappers branch directly (beq/bne). Retail MEC code uses this for boolean-returning macros (m_xCollidedEntity != 99, m_hPlatform != 0). (2026-09-26)

- [relocation] The extractor types some pointer globals as int (g_a_stObstacle in MECBhv.c, g_pPS2glApiTable in PS2GL_ApiTable.c). Symptom: source written as (T*)&g_x, which compiles to addiu reg,gp,off while the target loads the pointer with lw reg,off(gp); relocations still match because the symbol is the same. Check the size-4 symbol and the target lw before trusting &g_x casts. (2026-09-26)

- [debug-format] When histogramming target opcodes, construct rabbitizer.Instruction with category=rabbitizer.InstrCategory.R5900; the default MIPS decoder shows mula.s/madda.s/madd.s (used by the MTH_*_TO asm macros, which do match the retail code) as .word. (2026-09-26)

- [compiler] MWCC PS2 3.0: assigning through a pointer to a plain struct { float f[4]; } __attribute__((aligned(16))) (16 bytes, 16-byte aligned) compiles the whole-object copy as a single lq/sq quadword pair. The same copy through a union { unsigned long long u64[2]; float f[4]; } (align 8) instead compiles as two ld/sd pairs (8 bytes larger). Confirmed on impPS2glTexCoord4fv/impPS2glMultiTexCoord4fvARB in PS2GL_DataInput.c. (2026-09-26)
