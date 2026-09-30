"""Aligned, symbolized function diffs through asm-differ.

``match.py check --diff`` compares relocation-resolved bytes position by
position, which is exact but hard to read: one inserted instruction marks the
rest of the function as different, and retail operands are raw addresses.

This module keeps the verifier unchanged and only improves the view:

* the retail function is written into a small relocatable ELF whose
  relocations are recovered from the linked code (``jal`` targets, ``%hi``/
  ``%lo`` pairs, ``$gp``-relative globals), so objdump prints symbol names on
  both sides in the same form;
* anonymous literals (``@N`` in the candidate, unnamed retail data) are shown
  as their string contents when they are C strings;
* asm-differ (https://github.com/simonlindholm/asm-differ, cloned locally into
  ``tools/asm-differ``) aligns the two listings with a Levenshtein diff.

Setup (both paths are git-ignored):

    git clone https://github.com/simonlindholm/asm-differ tools/asm-differ
    python3 -m venv --without-pip tools/asm-differ-venv
    python3 -m pip --python tools/asm-differ-venv/bin/python install levenshtein
"""
from __future__ import annotations

import bisect
import json
import re
import struct
import subprocess
import sys
import types
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DIFFER_DIR = ROOT / 'tools' / 'asm-differ'
VENV_DIR = ROOT / 'tools' / 'asm-differ-venv'
OBJDUMP = 'mipsel-linux-gnu-objdump'

R_MIPS_26, R_MIPS_HI16, R_MIPS_LO16, R_MIPS_GPREL16 = 4, 5, 6, 7
GP = 28

# I-type opcodes whose immediate is a signed address offset from rs.
LO16_OPCODES = {
    0x09,                                            # addiu
    0x20, 0x21, 0x23, 0x24, 0x25, 0x27,              # lb lh lw lbu lhu lwu
    0x28, 0x29, 0x2b,                                # sb sh sw
    0x31, 0x39, 0x35, 0x3d,                          # lwc1 swc1 ldc1 sdc1
    0x37, 0x3f, 0x1e, 0x1f,                          # ld sd lq sq
    0x1a, 0x1b, 0x2c, 0x2d, 0x22, 0x26, 0x2a, 0x2e,  # ldl ldr sdl sdr lwl lwr swl swr
    0x36, 0x3e,                                      # lqc2 sqc2
}
STORE_OPCODES = {0x28, 0x29, 0x2b, 0x39, 0x3d, 0x3f, 0x1f, 0x2c, 0x2d, 0x2a, 0x2e, 0x3e}
FP_LOAD_OPCODES = {0x31, 0x35, 0x36}
BRANCH_OPCODES = {0x01, 0x04, 0x05, 0x06, 0x07, 0x14, 0x15, 0x16, 0x17, 0x10, 0x11, 0x12}


class AsmDifferUnavailable(RuntimeError):
    pass


def _load_differ():
    """Import asm-differ's diff.py as a library with in-memory settings."""
    if not (DIFFER_DIR / 'diff.py').exists():
        raise AsmDifferUnavailable(
            f'asm-differ not found at {DIFFER_DIR.relative_to(ROOT)}; see tools/asmdiff.py')
    for site in sorted(VENV_DIR.glob('lib/python3*/site-packages')):
        if str(site) not in sys.path:
            sys.path.append(str(site))
    settings = types.ModuleType('diff_settings')

    def apply(config, args):
        config['arch'] = 'mipsee'
        config['objdump_executable'] = OBJDUMP
        config['show_line_numbers_default'] = False

    settings.apply = apply
    sys.modules['diff_settings'] = settings
    if str(DIFFER_DIR) not in sys.path:
        sys.path.insert(0, str(DIFFER_DIR))
    import diff as differ  # noqa: E402  (asm-differ's module name)
    if differ.parser is None:
        differ.main_early()
    return differ


def _string_label(data: bytes, offset: int) -> str | None:
    """Return a printable label for a NUL-terminated C string at offset.

    Requires at least two characters and an ASCII letter, digit or ``%`` so
    that small constant tables are not mistaken for strings.
    """
    end = data.find(b'\0', offset)
    if end - offset < 2 or end - offset > 200:
        return None
    raw = data[offset:end]
    if any(byte < 0x09 or (0x0d < byte < 0x20) or 0x7f <= byte < 0xa0 for byte in raw):
        return None
    if not any(chr(byte).isalnum() or byte == 0x25 for byte in raw if byte < 0x80):
        return None
    text = raw.decode('latin-1')
    if len(text) > 48:
        text = text[:45] + '...'
    # objdump and asm-differ split relocation rows on whitespace; keep the
    # label ASCII so objdump's output decodes cleanly.
    return json.dumps(text, ensure_ascii=True).replace(' ', '_')


class RetailSymbolizer:
    """Name addresses in the linked retail ELF."""

    def __init__(self, sections, symbols, gp: int):
        self.sections = [s for s in sections if s.addr and s.size]
        self.gp = gp
        named = [s for s in symbols if s.name and s.value and not s.name.startswith('$')
                 and s.type in (0, 1, 2)]
        # Prefer sized symbols; keep the first name per address.
        by_address: dict[int, object] = {}
        # Prefer real names over section-like ones (``.dma.12``) and larger extents.
        for symbol in sorted(named, key=lambda s: (s.value, s.name.startswith('.'), -s.size, len(s.name))):
            by_address.setdefault(symbol.value, symbol)
        self.symbols = sorted(by_address.values(), key=lambda s: s.value)
        self.addresses = [s.value for s in self.symbols]
        self.functions = {s.value: s.name for s in self.symbols if s.type == 2}

    def section_for(self, address: int):
        for section in self.sections:
            if section.addr <= address < section.addr + section.size:
                return section
        return None

    def name(self, address: int) -> tuple[str, int] | None:
        """Return (symbol, addend) for a data/code address, or None.

        The retail ELF has no section header for its .bss range, so a sized
        symbol containing the address is accepted even outside any section.
        """
        section = self.section_for(address)
        index = bisect.bisect_right(self.addresses, address) - 1
        # A large object can contain smaller symbols (e.g. g_PS2glContext);
        # take the innermost preceding symbol whose extent covers the address.
        for index in range(index, max(index - 64, -1), -1):
            symbol = self.symbols[index]
            if symbol.value <= address < symbol.value + max(symbol.size, 1):
                if symbol.name.startswith('@') and section is not None and section.type != 8:
                    label = _string_label(section.data, address - section.addr)
                    if label:
                        return label, 0
                return symbol.name, address - symbol.value
        # Array[-1]-style accesses address just below an object; MWCC then
        # relocates against that object with a negative addend.
        following = bisect.bisect_right(self.addresses, address)
        if following < len(self.symbols) and 0 < self.symbols[following].value - address <= 0x40:
            return self.symbols[following].name, address - self.symbols[following].value
        if section is None:
            return None
        if section.type != 8:  # not NOBITS: maybe an anonymous string literal
            label = _string_label(section.data, address - section.addr)
            if label:
                return label, 0
        return f'D_{address:08X}', 0

    def string_at(self, address: int) -> str | None:
        section = self.section_for(address)
        if section is None or section.type == 8:
            return None
        return _string_label(section.data, address - section.addr)


def _hi_lo(value: int) -> tuple[int, int]:
    lo = value & 0xFFFF
    hi = ((value + 0x8000) >> 16) & 0xFFFF
    return hi, lo


def _decode(word: int) -> tuple[int, int, int, int, int]:
    imm = word & 0xFFFF
    return word >> 26, (word >> 21) & 31, (word >> 16) & 31, imm, imm - 0x10000 if imm & 0x8000 else imm


def _written_register(word: int) -> int | None:
    opcode, rs, rt, _, _ = _decode(word)
    if opcode == 3:
        return 31
    if opcode in (0, 0x1C):  # SPECIAL / MMI
        return (word >> 11) & 31
    if opcode in STORE_OPCODES or opcode in FP_LOAD_OPCODES or opcode in BRANCH_OPCODES:
        return None
    if opcode in (2, 0x11, 0x12, 0x2f, 0x33):  # j, COP1, COP2, cache, pref
        return None
    return rt


def _control_flow(words: list[int], address: int) -> list[list[int]]:
    """Successor indices, with each delay slot flowing to its branch's targets."""
    count = len(words)
    succ: list[list[int]] = [[i + 1] if i + 1 < count else [] for i in range(count)]
    for i, word in enumerate(words[:-1]):
        opcode, rs, rt, _, simm = _decode(word)
        funct = word & 0x3F
        target = None
        unconditional = False
        if opcode in (4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17) or opcode == 1 or (
                opcode == 0x11 and rs == 8):
            target = i + 1 + simm
            unconditional = opcode == 4 and rs == 0 and rt == 0  # b
        elif opcode == 2:
            absolute = ((address + i * 4 + 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)
            target = (absolute - address) // 4 if address <= absolute < address + count * 4 else None
            unconditional = True
        elif opcode == 0 and funct == 8:  # jr
            unconditional = True
        delay = i + 1
        next_list = [] if unconditional else ([delay + 1] if delay + 1 < count else [])
        if target is not None and 0 <= target < count:
            next_list.append(target)
        succ[delay] = next_list
    return succ


def recover_relocations(code: bytes, address: int, symbolizer: RetailSymbolizer
                        ) -> tuple[bytearray, list[tuple[int, int, str]]]:
    """Recover (offset, type, symbol) relocations from linked MIPS code.

    ``lui`` values are propagated along branch edges (delay slots included),
    so a ``%lo`` user after a control-flow merge pairs with the ``lui`` that
    actually reaches it.  Relocated immediates are rewritten to their
    addends, as in a REL object, so objdump prints ``%hi(sym)``.
    """
    words = [struct.unpack_from('<I', code, i)[0] for i in range(0, len(code) - 3, 4)]
    count = len(words)
    succ = _control_flow(words, address)
    states: list[dict[int, frozenset] | None] = [None] * count
    worklist: list[int] = []
    # Code reached only through a jump table has no static predecessor; each
    # unreached instruction starts a fresh, empty state once the rest settles.
    while True:
        if not worklist:
            fresh = next((k for k in range(count) if states[k] is None), None)
            if fresh is None:
                break
            states[fresh] = {}
            worklist.append(fresh)
        i = worklist.pop()
        state = dict(states[i])
        word = words[i]
        opcode, _, rt, imm, _ = _decode(word)
        if opcode == 0x0F:
            state[rt] = frozenset({(i * 4, imm << 16)})
        else:
            written = _written_register(word)
            if written:
                state.pop(written, None)
        previous = words[i - 1] if i else 0
        if (previous >> 26) == 3 or ((previous >> 26) == 0 and (previous & 0x3F) == 9):
            # A call returns after its delay slot with caller-saved registers clobbered.
            state = {reg: v for reg, v in state.items() if 16 <= reg <= 23 or reg in (28, 29, 30)}
        for j in succ[i]:
            old = states[j]
            if old is None:
                states[j] = state
                worklist.append(j)
                continue
            merged = dict(old)
            changed = False
            for reg, values in state.items():
                union = merged.get(reg, frozenset()) | values
                if union != merged.get(reg):
                    merged[reg] = union
                    changed = True
            if changed:
                states[j] = merged
                worklist.append(j)

    relocs: dict[int, tuple[int, str]] = {}
    patched = list(words)
    for index, word in enumerate(words):
        offset = index * 4
        opcode, rs, _, imm, simm = _decode(word)
        if opcode in (2, 3):
            target = ((address + offset + 4) & 0xF0000000) | ((word & 0x03FFFFFF) << 2)
            if not address <= target < address + len(code) and target in symbolizer.functions:
                relocs[offset] = (R_MIPS_26, symbolizer.functions[target])
                patched[index] = word & 0xFC000000
            continue
        if opcode not in LO16_OPCODES and opcode != 0x0D:
            continue
        if rs == GP and opcode != 0x0D:
            resolved = symbolizer.name((symbolizer.gp + simm) & 0xFFFFFFFF)
            if resolved:
                name, addend = resolved
                relocs[offset] = (R_MIPS_GPREL16, name)
                patched[index] = (word & 0xFFFF0000) | (addend & 0xFFFF)
            continue
        luis = (states[index] or {}).get(rs, frozenset())
        hi_values = {hi_value for _, hi_value in luis}
        if len(hi_values) != 1:
            continue
        hi_value, = hi_values
        target = (hi_value | imm) if opcode == 0x0D else (hi_value + simm) & 0xFFFFFFFF
        resolved = symbolizer.name(target) if target >= 0x100000 else None
        if not resolved:
            continue
        name, addend = resolved
        hi, lo = _hi_lo(addend)
        relocs[offset] = (R_MIPS_LO16, name)
        patched[index] = (word & 0xFFFF0000) | lo
        for lui_offset, _ in luis:
            if lui_offset not in relocs:
                relocs[lui_offset] = (R_MIPS_HI16, name)
                patched[lui_offset // 4] = (words[lui_offset // 4] & 0xFFFF0000) | hi
    code_out = bytearray(b''.join(struct.pack('<I', w) for w in patched))
    return code_out, sorted((off, typ, name) for off, (typ, name) in relocs.items())


def build_object(name: str, code: bytes, relocs: list[tuple[int, int, str]]) -> bytes:
    """Build a minimal ELF32 MIPS REL object with one function."""
    reloc_names = sorted({reloc_name for _, _, reloc_name in relocs})
    strtab = bytearray(b'\0')

    def add_str(text: str) -> int:
        position = len(strtab)
        strtab.extend(text.encode('latin-1', errors='replace') + b'\0')
        return position

    symtab = bytearray(16)  # null symbol
    symtab += struct.pack('<IIIBBH', 0, 0, 0, 3, 0, 1)       # section symbol for .text
    symtab += struct.pack('<IIIBBH', add_str(name), 0, len(code), 0x12, 0, 1)
    symbol_index = {}
    for index, reloc_name in enumerate(reloc_names):
        symbol_index[reloc_name] = 3 + index
        symtab += struct.pack('<IIIBBH', add_str(reloc_name), 0, 0, 0x10, 0, 0)
    rel = bytearray()
    for offset, typ, reloc_name in relocs:
        rel += struct.pack('<II', offset, (symbol_index[reloc_name] << 8) | typ)
    shstrtab = bytearray(b'\0')
    names = {}
    for section_name in ('.text', '.rel.text', '.symtab', '.strtab', '.shstrtab'):
        names[section_name] = len(shstrtab)
        shstrtab.extend(section_name.encode() + b'\0')
    blobs = [bytes(code), bytes(rel), bytes(symtab), bytes(strtab), bytes(shstrtab)]
    offset = 52
    offsets = []
    for blob in blobs:
        offset = (offset + 15) & ~15
        offsets.append(offset)
        offset += len(blob)
    shoff = (offset + 3) & ~3
    headers = [bytes(40)]
    specs = [
        ('.text', 1, 0x6, 0, 0, 16, 0),
        ('.rel.text', 9, 0, 3, 1, 4, 8),
        ('.symtab', 2, 0, 4, 2, 4, 16),   # info: first global symbol index
        ('.strtab', 3, 0, 0, 0, 1, 0),
        ('.shstrtab', 3, 0, 0, 0, 1, 0),
    ]
    for (section_name, typ, flags, link, info, align, entsize), blob, blob_offset in zip(
            specs, blobs, offsets):
        headers.append(struct.pack('<IIIIIIIIII', names[section_name], typ, flags, 0,
                                   blob_offset, len(blob), link, info, align, entsize))
    ident = b'\x7fELF\x01\x01\x01' + bytes(9)
    header = ident + struct.pack('<HHIIIIIHHHHHH', 1, 8, 1, 0, 0, shoff, 0x20924001,
                                 52, 0, 0, 40, len(headers), 5)
    image = bytearray(header)
    for blob, blob_offset in zip(blobs, offsets):
        image.extend(bytes(blob_offset - len(image)))
        image.extend(blob)
    image.extend(bytes(shoff - len(image)))
    for section_header in headers:
        image.extend(section_header)
    return bytes(image)


def objdump_function(path: Path, symbol: str) -> str:
    return subprocess.run(
        [OBJDUMP, '-m', 'mips:5900', '-drz', '-j', '.text', f'--disassemble={symbol}', str(path)],
        check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True,
        errors='replace').stdout


def candidate_function(obj_sections, obj_symbols, symbol_name: str, target_symbols,
                       local_static_target) -> tuple[bytes, list[tuple[int, int, str]]]:
    """Extract a candidate function and its relocations from an MWCC object.

    objdump identifies MWCC objects only as generic ``elf32-little``, so the
    function is re-emitted through build_object like the retail side.  Names
    that only exist in the candidate are given the retail spelling: string
    literals (``@N``) become their contents, and numbered local statics
    (``str$12``) take the matching retail name (``str$219``).
    """
    symbol = next(s for s in obj_symbols if s.name == symbol_name and s.size)
    section = obj_sections[symbol.shndx]
    code = section.data[symbol.value:symbol.value + symbol.size]
    relocs = []
    for rel_section in obj_sections:
        if rel_section.type != 9 or rel_section.info != symbol.shndx:
            continue
        for offset in range(0, rel_section.size, 8):
            r_offset, info = struct.unpack_from('<II', rel_section.data, offset)
            if not symbol.value <= r_offset < symbol.value + symbol.size:
                continue
            target = obj_symbols[info >> 8]
            name = target.name or obj_sections[target.shndx].name
            if name.startswith('@') and 0 < target.shndx < len(obj_sections):
                data_section = obj_sections[target.shndx]
                if data_section.type != 8:
                    name = _string_label(data_section.data, target.value) or name
            elif '$' in name[1:]:
                retail = local_static_target(target, target_symbols)
                if retail is not None:
                    name = retail.name
            relocs.append((r_offset - symbol.value, info & 0xFF, name))
    return code, relocs


def render(result: dict, context, helpers: dict, fmt: str = 'plain',
           algorithm: str | None = None, max_lines: int = 4096) -> str:
    """Return asm-differ's aligned diff for a compare() result.

    ``helpers`` supplies match.py's ELF readers (read_sections, parse_symbols,
    local_static_target) so this module does not import the CLI script.
    """
    read_sections, parse_symbols = helpers['read_sections'], helpers['parse_symbols']
    local_static_target = helpers['local_static_target']
    differ = _load_differ()
    sections, target_symbols, main, _, target_names = context
    entry = result['entry']
    gp_symbol = target_names.get('_gp')
    symbolizer = RetailSymbolizer(sections, target_symbols, gp_symbol.value if gp_symbol else 0)
    target_path = ROOT / 'SLKA_250.78'
    start = main.offset + entry['address'] - main.addr
    target_code = target_path.read_bytes()[start:start + entry['size']]
    symbol = result['candidate_symbol']
    code, relocs = recover_relocations(target_code, entry['address'], symbolizer)
    build = ROOT / 'build' / 'asmdiff'
    build.mkdir(parents=True, exist_ok=True)
    target_obj = build / 'target.o'
    target_obj.write_bytes(build_object(symbol, code, relocs))

    obj_path = ROOT / result['object']
    obj_sections = read_sections(obj_path)
    obj_symbols = parse_symbols(obj_sections)
    candidate_code, candidate_relocs = candidate_function(
        obj_sections, obj_symbols, symbol, target_symbols, local_static_target)
    # Anonymous candidate data (switch tables, float pools) has object-local
    # @N names; when the retail side has an anonymous or unnamed object at the
    # same relocation, show the retail name on both sides.
    target_by_site = {(off, typ): name for off, typ, name in relocs}
    candidate_relocs = [
        (off, typ, target_by_site[(off, typ)]
         if name.startswith('@') and (target_by_site.get((off, typ), '')[:1] in ('@', 'D'))
         else name)
        for off, typ, name in candidate_relocs]
    candidate_obj = build / 'candidate.o'
    candidate_obj.write_bytes(build_object(symbol, candidate_code, candidate_relocs))
    candidate_dump = objdump_function(candidate_obj, symbol)
    target_dump = objdump_function(target_obj, symbol)

    try:
        import Levenshtein  # noqa: F401
        default_algorithm = 'levenshtein'
    except ModuleNotFoundError:
        default_algorithm = 'difflib'
    args = differ.parser.parse_args([
        symbol, '-o', '--no-pager', '--format', fmt, '--max-size', str(max_lines),
        '--algorithm', algorithm or default_algorithm])
    project = differ.create_project_settings({'arch': 'mipsee', 'objdump_executable': OBJDUMP,
                                              'show_line_numbers_default': False})
    config = differ.create_config(args, project)
    base = differ.preprocess_objdump_out(symbol, None, target_dump, config)
    mine = differ.preprocess_objdump_out(symbol, None, candidate_dump, config)
    output = differ.Display(base, mine, config).run_diff()[0]
    return f'asm-differ ({config.algorithm}): TARGET (left) vs CANDIDATE (right)\n{output}'
