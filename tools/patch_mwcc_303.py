#!/usr/bin/env python3
"""Build Compiler/mwcps2-3.0.3-pad7b from the released MWCC PS2 3.0.3-020716.

Retail pads short loops, including empty 'b' loops, to 7 instructions. No
released build does both: 3.0.3 pads 'b' loops but only to 6, 3.0.1 pads to 7
but never pads 'b' loops. This changes the padloop limit from 6 to 7, in the
early-exit check and in the padding loop:

    file offset 0xAF2E2 (VA 0x4AFEE2): cmp edi,6 -> cmp edi,7
    file offset 0xAF327 (VA 0x4AFF27): cmp edi,6 -> cmp edi,7

Whole-game sweep against the released 3.0.3: +82 matches, none lost.
"""
import hashlib
import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SOURCE = ROOT / 'Compiler' / 'mwcps2-3.0.3-020716'
TARGET = ROOT / 'Compiler' / 'mwcps2-3.0.3-pad7b'
SOURCE_SHA1 = '76e25c5143dfea948f123ebecc5d44175eb431c1'
OFFSETS = (0xAF2E2, 0xAF327)


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
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
