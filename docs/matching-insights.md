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
