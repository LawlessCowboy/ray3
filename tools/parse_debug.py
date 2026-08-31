#!/usr/bin/env python3
"""
Parse Metrowerks PS2 debug sections from ELF object files.
Sections: .debug (STABS), .line, .mwcats
"""

import struct
import sys
from pathlib import Path

# STAB type constants (standard + some Metrowerks extensions)
STAB_TYPES = {
    0x00: 'UNDEF',
    0x20: 'GSYM',    # global symbol
    0x22: 'FNAME',   # function name (f77)
    0x24: 'FUN',     # function name / text segment variable
    0x26: 'STSYM',   # data segment variable (static)
    0x28: 'LCSYM',   # bss segment variable
    0x2a: 'MAIN',    # main function name
    0x2e: 'PC',      # global procedure (for pc)
    0x30: 'NSYMS',   # number of symbols (for .stab)
    0x32: 'NOMAP',   # no DST map for sym
    0x38: 'OBJ',     # object file path
    0x3a: 'OPT',     # options passed to compiler
    0x3c: 'RSYM',    # register variable
    0x3e: 'M2C',     # Modula-2 compilation unit
    0x40: 'SLINE',   # line number in text segment
    0x42: 'DSLINE',  # line number in data segment
    0x44: 'BSLINE',  # line number in bss segment
    0x46: 'DEFD',    # GNU Modula2 definition module dependency
    0x48: 'FLINE',   # function start line
    0x4e: 'EHDECL',  # GNU C++ exception variable
    0x50: 'CATCH',   # GNU C++ catch clause
    0x60: 'SSYM',    # structure or union element
    0x64: 'ENDM',    # last stab for module
    0x80: 'SO',      # path and name of source file
    0x82: 'MOD',     # Modula2 module (Sun only)
    0x84: 'ALIAS',   # SunPro F77: alias name
    0x86: 'OBJ2',    # alternate object file path?
    0xa0: 'LSYM',    # stack variable or type
    0xa2: 'BINCL',   # beginning of include file
    0xa4: 'SOL',     # name of include file
    0xc0: 'PSYM',    # parameter variable
    0xc2: 'EINCL',   # end of include file
    0xc4: 'ENTRY',   # alternate entry point
    0xe0: 'LBRAC',   # left (opening) bracket
    0xe2: 'EXCL',    # deleted include file
    0xe4: 'SCOPE',   # modula2 scope info (Sun)
    0xe6: 'PATCH',   # GNU (mw?) patch area
    0xf0: 'RBRAC',   # right (closing) bracket
    0xf2: 'BCOMM',   # begin common
    0xf4: 'ECOMM',   # end common
    0xf6: 'ECOML',   # end common (local name)
    0xfe: 'LENG',    # length of preceding entry
    # Metrowerks-specific?
    0x11: 'MW_UNKNOWN_11',
    0x06: 'MW_UNKNOWN_06',
    0x02: 'MW_UNKNOWN_02',
    0x04: 'MW_UNKNOWN_04',
    0x05: 'MW_UNKNOWN_05',
    0x07: 'MW_UNKNOWN_07',
    0x0b: 'MW_UNKNOWN_0B',
    0x0c: 'MW_UNKNOWN_0C',
    0x23: 'MW_UNKNOWN_23',
    0x55: 'MW_UNKNOWN_55',
}

def stab_type_name(t):
    return STAB_TYPES.get(t, f'0x{t:02x}')

def parse_stabs(data, strtab):
    """Parse STABS records: each is 12 bytes.
       strx(4LE) | type(1) | other(1) | desc(2LE) | value(4LE)
    """
    records = []
    for i in range(0, len(data), 12):
        if i + 12 > len(data):
            break
        strx, typ, other, desc, value = struct.unpack_from('<IBBHI', data, i)
        # Extract string from string table
        if strtab and strx < len(strtab):
            end = strtab.index(b'\x00', strx)
            s = strtab[strx:end].decode('latin-1')
        else:
            s = ''
        records.append({
            'offset': i,
            'strx': strx,
            'type': typ,
            'type_name': stab_type_name(typ),
            'other': other,
            'desc': desc,
            'value': value,
            'string': s,
        })
    return records

def parse_line(data):
    """Parse .line section.
       First 4 bytes: total section size (LE u32)
       Next 4 bytes:  reloc'd pointer to start of function (filled to 0 pre-link)
       Then entries: line_delta(2LE) | addr_offset(4LE)  -- repeat until sentinel
       Sentinel appears to be 0xFFFF for line delta
    """
    if len(data) < 8:
        return None
    size = struct.unpack_from('<I', data, 0)[0]
    func_addr = struct.unpack_from('<I', data, 4)[0]  # will be relocated
    entries = []
    pos = 8
    while pos + 6 <= len(data):
        line_delta, addr_offset = struct.unpack_from('<HI', data, pos)
        entries.append({'line_delta': line_delta, 'addr_offset': addr_offset})
        pos += 6
        if line_delta == 0xFFFF:
            break
    return {'size': size, 'func_addr_placeholder': func_addr, 'entries': entries}

def parse_mwcats(data):
    """Parse .mwcats section (8 bytes so far).
       Appears to be: unknown(2) | offset_in_debug(2) | func_addr(4 reloc'd)
    """
    if len(data) < 8:
        return None
    unk1, debug_offset, func_addr = struct.unpack_from('<HHI', data, 0)
    return {'unk1': unk1, 'debug_offset': debug_offset, 'func_addr_placeholder': func_addr}

def find_sections(elf_data):
    """Minimal ELF section finder."""
    # ELF header
    e_shoff, = struct.unpack_from('<I', elf_data, 32)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from('<HHH', elf_data, 46)

    # Section header string table
    shstr_off = e_shoff + e_shstrndx * e_shentsize
    sh_name_idx, sh_type, sh_flags, sh_addr, sh_offset, sh_size = struct.unpack_from('<IIIIII', elf_data, shstr_off)
    shstrtab = elf_data[sh_offset:sh_offset + sh_size]

    sections = []
    for i in range(e_shnum):
        off = e_shoff + i * e_shentsize
        sh_name, sh_type, sh_flags, sh_addr, sh_offset, sh_size, sh_link, sh_info, sh_addralign, sh_entsize = struct.unpack_from('<IIIIIIIIII', elf_data, off)
        name_end = shstrtab.index(b'\x00', sh_name)
        name = shstrtab[sh_name:name_end].decode('latin-1')
        sections.append({
            'index': i,
            'name': name,
            'type': sh_type,
            'offset': sh_offset,
            'size': sh_size,
            'link': sh_link,
            'data': elf_data[sh_offset:sh_offset + sh_size],
        })
    return sections

def print_stabs(records, label):
    print(f"\n{'='*70}")
    print(f"  STABS: {label}  ({len(records)} records)")
    print(f"{'='*70}")
    print(f"  {'Off':>4}  {'strx':>6}  {'type':<22} {'oth':>3}  {'desc':>6}  {'value':>10}  string")
    print(f"  {'-'*4}  {'-'*6}  {'-'*22} {'-'*3}  {'-'*6}  {'-'*10}  {'-'*30}")
    for r in records:
        print(f"  {r['offset']:>4}  {r['strx']:>6}  {r['type_name']:<22} {r['other']:>3}  {r['desc']:>6}  {r['value']:>10}  {r['string']!r}")

def print_line(parsed, label):
    print(f"\n{'='*70}")
    print(f"  LINE: {label}")
    print(f"{'='*70}")
    if not parsed:
        print("  (empty or too small)")
        return
    print(f"  Section size field : 0x{parsed['size']:08x} ({parsed['size']})")
    print(f"  Func addr (pre-rel): 0x{parsed['func_addr_placeholder']:08x}")
    print(f"  Entries:")
    print(f"    {'line_delta':>10}  {'addr_offset':>12}  note")
    for e in parsed['entries']:
        note = '<-- sentinel' if e['line_delta'] == 0xFFFF else ''
        print(f"    {e['line_delta']:>10}  0x{e['addr_offset']:08x}    {note}")

def print_mwcats(parsed, label):
    print(f"\n{'='*70}")
    print(f"  MWCATS: {label}")
    print(f"{'='*70}")
    if not parsed:
        print("  (empty or too small)")
        return
    print(f"  unk1 (u16)         : 0x{parsed['unk1']:04x} ({parsed['unk1']})")
    print(f"  debug_offset (u16) : 0x{parsed['debug_offset']:04x} ({parsed['debug_offset']})")
    print(f"  func_addr (pre-rel): 0x{parsed['func_addr_placeholder']:08x}")

def main(path):
    data = Path(path).read_bytes()
    sections = find_sections(data)

    # Group sections by name (there are multiple .debug, .line, .mwcats)
    debug_secs  = [(s['index'], s['data']) for s in sections if s['name'] == '.debug']
    strtab_secs = [(s['index'], s['data']) for s in sections if s['name'] == '.strtab']
    line_secs   = [(s['index'], s['data']) for s in sections if s['name'] == '.line']
    mwcats_secs = [(s['index'], s['data']) for s in sections if s['name'] == '.mwcats']

    # Find string table for stabs (each .debug section has its own strtab pointed to by sh_link)
    # Re-parse sections keeping sh_link
    all_secs = {s['index']: s for s in sections}

    print(f"\nFile: {path}")
    print(f"Sections found: {len(sections)}")
    for s in sections:
        if s['name']:
            print(f"  [{s['index']:2}] {s['name']:<20} size=0x{s['size']:04x}  type=0x{s['type']:08x}")

    # Parse each .debug section — find its associated .strtab via sh_link
    for s in sections:
        if s['name'] == '.debug':
            linked = all_secs.get(s['link'])
            strtab = linked['data'] if linked else b''
            label = f"section [{s['index']}]"
            # First record in a STABS section is the STABS header (strx=size of strtab, desc=num records)
            records = parse_stabs(s['data'], strtab)
            print_stabs(records, label)

    # Parse .line sections
    for s in sections:
        if s['name'] == '.line':
            print_line(parse_line(s['data']), f"section [{s['index']}]")

    # Parse .mwcats sections
    for s in sections:
        if s['name'] == '.mwcats':
            print_mwcats(parse_mwcats(s['data']), f"section [{s['index']}]")

if __name__ == '__main__':
    main(sys.argv[1] if len(sys.argv) > 1 else 'test_debug.o')
