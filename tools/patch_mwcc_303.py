#!/usr/bin/env python3
"""Build Compiler/mwcps2-3.0.3-pad7b from the released MWCC PS2 3.0.3-020716.

Retail pads short loops, including empty 'b' loops, to 7 instructions. No
released build does both: 3.0.3 pads 'b' loops but only to 6, 3.0.1 pads to 7
but never pads 'b' loops. This changes the padloop limit from 6 to 7, in the
early-exit check and in the padding loop:

    file offset 0xAF2E2 (VA 0x4AFEE2): cmp edi,6 -> cmp edi,7
    file offset 0xAF327 (VA 0x4AFF27): cmp edi,6 -> cmp edi,7

Whole-game sweep against the released 3.0.3: +82 matches, none lost.

It then builds Compiler/mwcps2-3.0.3-pad7b-unfold from that binary, for the files
in config/compiler-3.0.3-unfold-sources.txt. Retail computes A[a][b] and A[a].f[b]
as 'base + row; addiu r,r,field; addu index', keeping a zero offset as
'addiu r,r,0', which no released build emits for a global. When an index is added
to a virtual-register address with no object attached, this takes the existing
materialise path (0x49ece6) instead of carrying the offset into the load:

    file offset 0x9E0A0 (VA 0x49ECA0), 19 bytes:
        cmp edx,[first_virtual]; jge A; movsx eax,[sp_reg]; cmp edx,eax; jne B
    -> cmp edx,29; je A; cmp edx,32; jl B; cmp dword [esp+0x2a],0; je B; nop; nop
"""
import hashlib
import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / 'Compiler' / 'mwcps2-3.0.3-020716'
TARGET = ROOT / 'Compiler' / 'mwcps2-3.0.3-pad7b'
SOURCE_SHA1 = '76e25c5143dfea948f123ebecc5d44175eb431c1'
OFFSETS = (0xAF2E2, 0xAF327)
UNFOLD_TARGET = ROOT / 'Compiler' / 'mwcps2-3.0.3-pad7b-unfold'
UNFOLD_OFFSET = 0x9E0A0
UNFOLD_OLD = bytes.fromhex('3b1504c757007d0b0fbf0522db570039c27533')
UNFOLD_NEW = bytes.fromhex('83fa1d740e83fa207c3c837c242a0074359090')


def main() -> int:
    data = bytearray((SOURCE / 'mwccps2.exe').read_bytes())
    digest = hashlib.sha1(data).hexdigest()
    if digest != SOURCE_SHA1:
        raise SystemExit(f'unexpected 3.0.3 binary: sha1 {digest}')
    for offset in OFFSETS:
        if data[offset - 2:offset + 1] != bytes((0x83, 0xFF, 0x06)):
            raise SystemExit(f'unexpected bytes at {offset:#x}')
        data[offset] = 0x07
    TARGET.mkdir(parents=True, exist_ok=True)
    for path in SOURCE.iterdir():
        if path.name != 'mwccps2.exe' and path.is_file():
            shutil.copy2(path, TARGET / path.name)
    output = TARGET / 'mwccps2.exe'
    output.write_bytes(data)
    output.chmod(0o755)
    print(f'{output}: sha1 {hashlib.sha1(data).hexdigest()}')
    end = UNFOLD_OFFSET + len(UNFOLD_OLD)
    if data[UNFOLD_OFFSET:end] != UNFOLD_OLD:
        raise SystemExit(f'unexpected bytes at {UNFOLD_OFFSET:#x}')
    data[UNFOLD_OFFSET:end] = UNFOLD_NEW
    UNFOLD_TARGET.mkdir(parents=True, exist_ok=True)
    for path in TARGET.iterdir():
        if path.name != 'mwccps2.exe' and path.is_file():
            shutil.copy2(path, UNFOLD_TARGET / path.name)
    output = UNFOLD_TARGET / 'mwccps2.exe'
    output.write_bytes(data)
    output.chmod(0o755)
    print(f'{output}: sha1 {hashlib.sha1(data).hexdigest()}')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
