#!/usr/bin/env python3
"""
extract_debug.py — Parse Metrowerks PS2 .debug, .line, .symtab sections from
a linked ELF and reconstruct the original build folder tree with C stub files.

Usage:
    python3 extract_debug.py SLKA_250.78 [--out ../src]
"""

import struct, sys, os, re, argparse
from collections import defaultdict
from pathlib import Path
from dataclasses import dataclass, field
from typing import Optional

# ---------------------------------------------------------------------------
# ELF helpers
# ---------------------------------------------------------------------------

def read_elf_sections(data: bytes) -> dict:
    e_shoff,  = struct.unpack_from('<I', data, 32)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from('<HHH', data, 46)
    shstr_o = e_shoff + e_shstrndx * e_shentsize
    _, _, _, _, shstr_off, shstr_sz = struct.unpack_from('<IIIIII', data, shstr_o)
    shstrtab = data[shstr_off:shstr_off + shstr_sz]
    sections = {}
    for i in range(e_shnum):
        o = e_shoff + i * e_shentsize
        nm, tp, fl, ad, of, sz, lk, inf, al, es = struct.unpack_from('<IIIIIIIIII', data, o)
        end = shstrtab.index(b'\x00', nm)
        name = shstrtab[nm:end].decode('latin-1')
        sections[name] = {
            'index': i, 'type': tp, 'addr': ad,
            'offset': of, 'size': sz,
            'data': data[of:of + sz],
        }
    return sections


def cstr(data: bytes, pos: int) -> tuple[str, int]:
    """Read null-terminated string at pos, return (string, next_pos)."""
    end = data.find(b'\x00', pos)
    if end < 0:
        end = len(data)
    return data[pos:end].decode('latin-1', errors='replace'), end + 1


SOURCE_PATH_RE = re.compile(
    r'(?i)\.(?:c|cc|cpp|cxx|h|hh|hpp|hxx|s|asm)$'
)


def is_source_path(value: str) -> bool:
    """Return whether an inline string is a credible source-file path.

    Relocated addresses can follow the same ``38 00`` opcode used by inline
    strings.  Interpreting their little-endian bytes as Latin-1 occasionally
    produces a backslash, which is not sufficient evidence of a path.
    """
    return (
        bool(value)
        and all(0x20 <= ord(char) <= 0x7e for char in value)
        and ('\\' in value or '/' in value)
        and SOURCE_PATH_RE.search(value) is not None
    )


# ---------------------------------------------------------------------------
# Type system
# ---------------------------------------------------------------------------

# Metrowerks register/type codes seen in 0x55 records
REG_TO_TYPE = {
    0x01: 'char',
    0x02: 'signed char',
    0x03: 'unsigned char',
    0x04: 'wchar_t',
    0x05: 'short',
    0x06: 'unsigned short',
    0x07: 'unsigned short',
    0x08: 'int',
    0x09: 'unsigned int',
    0x0a: 'unsigned int',
    0x0b: 'long',
    0x0c: 'unsigned long',
    0x0d: 'long long',
    0x0e: 'float',
    0x0f: 'double',
    0x10: 'long double',
    0x11: 'void',
    0x12: 'bool',
    0x14: 'void',
}

# Subtype byte after 55 00 RR 00
ROLE_RETURN = 0x13   # return value descriptor (first 55 record in func block)
# Integer returns in MWCC 2.4 are emitted with 0x43 rather than 0x13.
# This is verified by test_int_debug.o; floats use the 0x13 form.
ROLE_RETURN_ALT = 0x43
# A named struct return uses the aggregate-specific 0xa3 descriptor.
ROLE_RETURN_AGGREGATE = 0xa3
ROLE_PARAM  = 0x23   # function parameter
ROLE_LOCAL  = 0x1d   # local variable (appears inline sometimes)

# Pointer/aggregate markers preceding param type
MODIFIER_PTR    = 0x63   # pointer (int*)
MODIFIER_REF    = 0x64   # reference (int&)  — C++
MODIFIER_STRUCT = 0x72   # struct/class by value
MODIFIER_ARRAY  = 0x61   # array

# The aggregate record preserves that a value is passed by value, but the
# probe does not carry the C tag/typedef name.  Keep this compilable placeholder
# rather than silently downgrading it to an ordinary int.
UNKNOWN_AGGREGATE_TYPE = '/* aggregate */ int'
UNKNOWN_ARRAY_TYPE = '/* array */ int'
UNKNOWN_FUNCTION_POINTER_TYPE = '/* function pointer */ int'
# Type-record header layout is ``<abbrev:u32> <tag:u16> 12 00 <next:u32>``.
# The u16 is a DWARF tag; the first word is an abbreviation/form identifier
# and must not be used to decide what the type means.  In particular, valid
# structures in the linked game have many different abbreviation values.
DW_TAG_ARRAY_TYPE = 0x01
DW_TAG_CLASS_TYPE = 0x02
DW_TAG_ENUMERATION_TYPE = 0x04
DW_TAG_STRUCTURE_TYPE = 0x13
DW_TAG_SUBROUTINE_TYPE = 0x15
DW_TAG_UNION_TYPE = 0x17
NAMED_TYPE_TAGS = {
    DW_TAG_CLASS_TYPE,
    DW_TAG_ENUMERATION_TYPE,
    DW_TAG_STRUCTURE_TYPE,
    DW_TAG_UNION_TYPE,
}

# Language codes in 36 01 XX records
LANG_CODES = {0x02: 'C', 0x04: 'C++', 0x06: 'assembly'}


# ---------------------------------------------------------------------------
# Data structures
# ---------------------------------------------------------------------------

@dataclass
class VarInfo:
    name: str = ''
    type_str: str = 'int'
    reg_code: int = 0
    stack_offset: int = 0   # from 04 XX record
    role: str = 'local'     # 'param', 'local', 'return'
    line: int = 0
    bit_offset: Optional[int] = None
    bit_width: Optional[int] = None
    address: int = 0         # linked address for file-level globals


@dataclass
class FuncInfo:
    name: str = ''
    debug_name: str = ''     # original parser name when symtab corrects it
    source_file: str = ''
    addr: int = 0
    size: int = 0           # from .mwcats
    return_type: str = 'void'
    params: list = field(default_factory=list)      # list of VarInfo
    locals_: list = field(default_factory=list)     # list of VarInfo
    first_line: int = 0
    last_line: int = 0
    line_map: list = field(default_factory=list)    # [(addr_offset, line_num)]
    language: str = 'C'
    compiler: str = ''
    signature_trusted: bool = True


@dataclass
class TypeInfo:
    name: str
    kind: int                 # Metrowerks abbreviation/form identifier
    tag: int = 0              # semantic DWARF tag from header offset +4
    members: list = field(default_factory=list)  # list of VarInfo
    enum_values: list = field(default_factory=list)  # list of (name, value)
    bases: list = field(default_factory=list)  # list of (type_name, byte_offset)


@dataclass
class FileInfo:
    path: str = ''            # original Windows path
    language: str = 'C'
    compiler: str = ''
    functions: list = field(default_factory=list)   # list of FuncInfo
    globals_: list = field(default_factory=list)    # list of VarInfo
    types: list = field(default_factory=list)        # list of TypeInfo


# ---------------------------------------------------------------------------
# .debug stream parser
# ---------------------------------------------------------------------------

class DebugParser:
    def __init__(self, debug_data: bytes, verbose: bool = False,
                 function_addresses: Optional[set[int]] = None):
        self.d = debug_data
        self.verbose = verbose
        self.files: list[FileInfo] = []
        self._cur_file: Optional[FileInfo] = None
        self._cur_func: Optional[FuncInfo] = None
        # Linked 0x72 aggregate records point into file-level type records in
        # the same .debug blob.  Keys are offsets in that blob.
        self._type_names: dict[int, str] = {}
        self._type_reprs: dict[int, str] = {}
        self._type_kinds: dict[int, int] = {}
        self._type_tags: dict[int, int] = {}
        # In a linked target, a real function-entry ``11 01`` record must
        # name an address in the ELF function-symbol table.  Supplying this
        # set prevents type/member records in an oversized debug block from
        # being mistaken for a new function signature.  Probe objects do not
        # need the extra validation and intentionally retain the old
        # self-contained behaviour.
        self._function_addresses = function_addresses

    def _resolve_type_ref(self, type_ref: int, visiting: Optional[set[int]] = None) -> str:
        """Render a file-level type reference without flattening its graph.

        ``83`` records point both at complete type records (arrays, named
        aggregates) and at function-type records nested in the type list.
        Resolve them lazily, so a callback can itself take a pointer-to-array
        or another callback.  A cycle is possible in recursive declarations;
        use a conservative compilable placeholder in that case.
        """
        if type_ref in self._type_names:
            return self._type_names[type_ref]
        if type_ref in self._type_reprs:
            return self._type_reprs[type_ref]
        if visiting is None:
            visiting = set()
        if type_ref in visiting:
            return UNKNOWN_FUNCTION_POINTER_TYPE
        if type_ref < 0 or type_ref + 12 > len(self.d):
            return UNKNOWN_FUNCTION_POINTER_TYPE
        visiting.add(type_ref)
        try:
            tag = self._type_tags.get(type_ref)
            if tag is None and self.d[type_ref + 6:type_ref + 8] == b'\x12\x00':
                tag = struct.unpack_from('<H', self.d, type_ref + 4)[0]
                self._type_tags[type_ref] = tag
                self._type_kinds[type_ref] = struct.unpack_from('<I', self.d, type_ref)[0]
            if tag == DW_TAG_ARRAY_TYPE:
                return self._resolve_array_type(type_ref, visiting)
            if tag == DW_TAG_SUBROUTINE_TYPE:
                return self._resolve_function_type(type_ref, visiting)
        finally:
            visiting.remove(type_ref)
        return UNKNOWN_FUNCTION_POINTER_TYPE

    def _resolve_array_type(self, type_pos: int, visiting: set[int]) -> str:
        """Resolve an array record, including forward/nested array links."""
        d = self.d
        end = struct.unpack_from('<I', d, type_pos + 8)[0]
        if (not (type_pos + 31 <= end <= len(d))
                or d[type_pos + 12:type_pos + 18] != b'\x95\x00\x00\x00\xa3\x00'):
            return UNKNOWN_ARRAY_TYPE
        scalar_pos = d.find(b'\x55\x00', type_pos + 12, end)
        aggregate_pos = d.find(b'\x72\x00', type_pos + 12, end)
        if scalar_pos >= 0:
            element_type = REG_TO_TYPE.get(d[scalar_pos + 2], 'int')
        elif aggregate_pos >= 0 and aggregate_pos + 6 <= end:
            element_ref = struct.unpack_from('<I', d, aggregate_pos + 2)[0]
            element_type = self._type_names.get(element_ref)
            if element_type is None:
                element_type = self._type_reprs.get(element_ref)
            if element_type is None and element_ref not in visiting:
                element_type = self._resolve_type_ref(element_ref, visiting)
            if element_type is None:
                element_type = UNKNOWN_ARRAY_TYPE
        else:
            element_type = 'int'
        upper_bound = struct.unpack_from('<I', d, type_pos + 27)[0]
        if upper_bound == 0xffffffff:
            result = element_type
        else:
            bracket = element_type.find('[')
            if bracket >= 0:
                result = (f'{element_type[:bracket]}[{upper_bound + 1}]'
                          f'{element_type[bracket:]}')
            else:
                result = f'{element_type}[{upper_bound + 1}]'
        self._type_reprs[type_pos] = result
        return result

    def _resolve_indirect_type(self, type_ref: int, indirection_depth: int = 1,
                               visiting: Optional[set[int]] = None) -> str:
        """Render an ``83`` use with every encoded pointer component.

        The ``83`` shape field counts the declarator components before its
        relocated type reference: shape 5 has one component, shape 6 has two.
        Earlier code parsed that shape to find the reference but always added
        only one star, silently collapsing ``T **`` parameters into ``T *``.
        """
        stars = '*' * indirection_depth
        if type_ref in self._type_names:
            return f'{self._type_names[type_ref]}{stars}'
        referred = self._resolve_type_ref(type_ref, visiting)
        if self._type_tags.get(type_ref) == DW_TAG_ARRAY_TYPE and '[' in referred:
            base, dimensions = referred.split('[', 1)
            if indirection_depth == 1:
                return f'{base} (*)[{dimensions}'
            return f'{base} {stars}[{dimensions}'
        # A function type's spelling already places the pointer at the
        # declarator position, so adding another star here would be wrong.
        # A further component is a pointer-to-function-pointer.
        if indirection_depth > 1 and '(*)' in referred:
            return referred.replace('(*)', f'({stars})')
        return referred

    def _indirect_record(self, pos: int, end: int) -> Optional[tuple[int, int, int]]:
        """Return ``(type_ref, indirection_depth, next_pos)`` for an 83 record.

        The u16 shape field controls the number of one-byte declarator
        components before the relocated u32 reference: observed shape 5 has
        one component and shape 6 (array of callbacks) has two.
        """
        d = self.d
        if pos + 6 > end or d[pos:pos + 2] != b'\x83\x00':
            return None
        shape = struct.unpack_from('<H', d, pos + 2)[0]
        ref_pos = pos + shape
        if shape < 5 or ref_pos + 5 > end:
            return None
        return (struct.unpack_from('<I', d, ref_pos)[0], shape - 4,
                ref_pos + 5)

    def _resolve_function_type(self, type_pos: int, visiting: set[int]) -> str:
        """Decode a ``kind == 0x10`` function-type record.

        Its payload is an ordered sequence of return then parameter type
        descriptors.  Earlier code scanned only primitive/pointer descriptors,
        which silently dropped the ``83`` descriptors used for nested callback
        parameters.
        """
        d = self.d
        end = struct.unpack_from('<I', d, type_pos + 8)[0]
        if not (type_pos + 12 <= end <= len(d)):
            return UNKNOWN_FUNCTION_POINTER_TYPE
        markers = []
        scan = type_pos + 12
        while scan < end:
            if scan + 4 <= end and d[scan:scan + 2] == b'\x55\x00':
                markers.append(REG_TO_TYPE.get(d[scan + 2], 'int'))
                scan += 4
                continue
            if scan + 8 <= end and d[scan:scan + 2] == b'\x63\x00':
                depth = struct.unpack_from('<H', d, scan + 2)[0] - 2
                if depth >= 1:
                    # In a type record the scalar byte follows the storage
                    # byte.  It is the same layout established for variables.
                    primitive = d[scan + 5]
                    suffix = ('&' if d[scan + 4] == 0x02 else '*') * depth
                    markers.append(REG_TO_TYPE.get(primitive, 'int') + suffix)
                scan += 8
                continue
            if scan + 7 <= end and d[scan:scan + 2] == b'\x72\x00':
                markers.append(self._resolve_type_ref(
                    struct.unpack_from('<I', d, scan + 2)[0], visiting
                ))
                scan += 6
                continue
            indirect = self._indirect_record(scan, end)
            if indirect:
                type_ref, indirection_depth, next_scan = indirect
                markers.append(self._resolve_indirect_type(
                    type_ref, indirection_depth, visiting
                ))
                scan = next_scan
                continue
            scan += 1
        if not markers:
            return UNKNOWN_FUNCTION_POINTER_TYPE
        return_type, *params = markers
        return f'{return_type} (*)({", ".join(params) or "void"})'

    def parse(self):
        d = self.d
        i = 0
        n = len(d)

        # Some aggregate references cross the linked per-file type chain.  A
        # pre-pass over the unambiguous named-record prefix lets member records
        # resolve those names even when their owning type list was skipped.
        self._index_named_type_records()

        while i < n:
            # Skip to next recognisable record by scanning for known lead bytes
            b = d[i]

            # ---- 12-byte STABS-style header record ----
            # Starts every per-function .debug chunk in the concatenated blob.
            # Byte layout: u32 strtab_size, u8=0x11, u8=0x00, u16=0x0012, u32=section_end
            if (i + 12 <= n and b != 0 and
                    d[i+4] == 0x11 and d[i+5] == 0x00 and
                    d[i+6] == 0x12 and d[i+7] == 0x00):
                strtab_size, _, _, _, section_end = struct.unpack_from('<IBBHI', d, i)
                # The final word is a *stream offset* in a linked ELF, not
                # a byte count.  Relocatable object files use a byte count,
                # so both forms occur in our inputs.  Treat it as an absolute
                # end only when it can contain this header and its string
                # table; otherwise it is the object-local relative size.
                #
                # Misreading an absolute end as relative skipped every
                # following debug block in the final ELF.  The scanner then
                # consumed later aggregate/type records as the current
                # function's signature, causing missing parameters and the
                # previously observed enormous parameter lists.
                absolute_end = section_end
                relative_end = i + section_end

                def header_at(pos: int) -> bool:
                    return (pos + 12 <= n and d[pos] != 0
                            and d[pos+4:pos+8] == b'\x11\x00\x12\x00')

                # A relative size can numerically look like a valid absolute
                # stream offset once a probe object's sections are
                # concatenated.  Section boundaries disambiguate the two
                # encodings: the correct candidate is followed by the next
                # header (or the end of the blob).
                absolute_boundary = (
                    i + 12 + strtab_size <= absolute_end <= n
                    and (absolute_end == n or header_at(absolute_end))
                )
                relative_boundary = (
                    i + 12 <= relative_end <= n
                    and (relative_end == n or header_at(relative_end))
                )
                if absolute_boundary and not relative_boundary:
                    chunk_end = absolute_end
                else:
                    # Prefer the object-local size for an ambiguity; at
                    # offset zero both interpretations are identical.
                    chunk_end = min(relative_end, n)
                if chunk_end <= i + 12:
                    # A plausible byte sequence inside a type record can
                    # resemble a header.  It cannot form an empty/debug-less
                    # section, so continue the outer signature scan.
                    i += 1
                    continue
                self._parse_chunk(i + 12, chunk_end, strtab_size)
                i = chunk_end
                continue

            i += 1

        # Finalise last file
        self._finalise_func()
        self._finalise_file()
        return self.files

    def _index_named_type_records(self):
        """Index named ``b6`` type records not reached by a file type chain."""
        d = self.d
        marker = 0
        while True:
            marker = d.find(b'\xb6\x00', marker)
            if marker < 12:
                return
            pos = marker - 12
            marker += 2
            if pos + 14 > len(d) or d[pos + 6:pos + 8] != b'\x12\x00':
                continue
            kind = struct.unpack_from('<I', d, pos)[0]
            tag = struct.unpack_from('<H', d, pos + 4)[0]
            next_pos = struct.unpack_from('<I', d, pos + 8)[0]
            if tag not in NAMED_TYPE_TAGS or not (pos < next_pos <= len(d)):
                continue
            name_pos = self._named_type_name_pos(pos, next_pos, tag)
            if name_pos < 0:
                continue
            name, _ = cstr(d, name_pos + 2)
            if re.fullmatch(r'@anon(\d+)', name):
                name = f'anon_{name[5:]}'
            elif name == '@enum':
                # Anonymous enums still have a usable referenced identity.
                # Include the linked record offset to avoid conflating
                # unrelated per-translation-unit declarations.
                name = f'anon_enum_{pos:08x}'
            elif not (name and all(ch.isalnum() or ch == '_' for ch in name)):
                continue
            self._type_kinds[pos] = kind
            self._type_tags[pos] = tag
            self._type_names.setdefault(pos, name)

    def _named_type_name_pos(self, pos: int, end: int, tag: int) -> int:
        """Locate the actual name opcode in a named type record.

        Aggregates put it directly after ``b6 00 <size:u32>``.  Enumerations
        put their constants between that header and the final type name, so
        the final ``38 00`` is the name opcode.  A forward search is unsafe:
        an enum constant ending in the ASCII digit ``8`` contains those same
        two bytes at its string terminator.
        """
        if tag == DW_TAG_ENUMERATION_TYPE:
            return self.d.rfind(b'\x38\x00', pos + 18, end)
        name_pos = pos + 18
        return name_pos if self.d[name_pos:name_pos + 2] == b'\x38\x00' else -1

    def _terminal_identifier_record(self, marker: bytes, start: int,
                                    end: int) -> tuple[int, str]:
        """Find a trailing inline identifier record within a linked node.

        Location and bit-offset fields are raw little-endian integers, so
        their bytes can imitate the 38-name opcodes.  A declaration/member
        name is structurally the final NUL-terminated field in its node.
        """
        search_pos = start
        while search_pos < end:
            candidate = self.d.find(marker, search_pos, end)
            if candidate < 0:
                break
            name, name_end = cstr(self.d, candidate + len(marker))
            if (name_end == end
                    and re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', name)):
                return candidate, name
            search_pos = candidate + 1
        return -1, ''

    def _parse_chunk(self, start: int, end: int, strtab_size: int):
        """Parse one per-function chunk of the .debug stream."""
        d = self.d
        # A linked ELF concatenates independently emitted .debug sections.
        # Source/type metadata in the next section must not be allowed to
        # retag the function completed by the preceding one.  Metadata that
        # legitimately follows a function body lives before that section's
        # end and is still handled below.
        self._finalise_func()
        # Despite the STABS-like header, strtab_size does *not* delimit an
        # opaque trailing string table.  The controlled MWCC probes contain
        # parameter and local declarations in those final bytes.  Walk the
        # whole chunk and decode inline strings in place instead.
        stream_end = end
        is_function_chunk = d[start:start+2] == b'\x11\x01'

        # Walk the binary stream
        i = start
        cur_compiler = ''
        cur_lang = 'C'
        cur_source = ''
        pending_addr = 0
        current_func_addr = 0
        parsing_signature = True
        pending_var: Optional[VarInfo] = None
        pending_return_type: Optional[str] = None
        saw_return_descriptor = False
        awaiting_function_name = False
        pending_function_entry = False
        just_started_function = False
        skip_file_type_declarations = False

        def attach_pending_name(name: str):
            nonlocal pending_var
            if pending_var is None:
                return
            pending_var.name = name
            # C++ emits an explicit `this` declaration.  It is useful parser
            # evidence, but not part of the source-level method signature.
            if name == 'this' and self._cur_func and self._cur_func.language == 'C++':
                collection = (self._cur_func.params if pending_var.role == 'param'
                              else self._cur_func.locals_)
                if pending_var in collection:
                    collection.remove(pending_var)
            pending_var = None

        while i < stream_end:
            if i >= end:
                break
            b = d[i]

            # ---- 11 01 : block open (scope) ----
            if b == 0x11 and i+1 < end and d[i+1] == 0x01:
                # Aggregate-local probe: a 72 aggregate declaration may be
                # preceded by 11 01 00 00.  It is not a six-byte scope record;
                # consuming six bytes would swallow the 72 type marker.
                if i + 4 < end and d[i+4] == MODIFIER_STRUCT:
                    i += 4
                    continue
                if i + 6 <= end:
                    addr = struct.unpack_from('<I', d, i+2)[0]
                    # The 11 marker immediately before the function name is
                    # its entry address.  In the linked ELF this agrees with
                    # the ELF function symbol; the following 21 marker is the
                    # end/scope address, not the entry point.
                    if self._function_addresses is not None:
                        if addr in self._function_addresses:
                            # Linked debug bundles are not reliably split at
                            # source-file records.  A new code address is the
                            # authoritative function boundary; without this,
                            # a preceding function can absorb the next one's
                            # descriptors and prevent its name from starting.
                            if (self._cur_func is not None
                                    and self._cur_func.addr != addr):
                                self._finalise_func()
                                pending_var = None
                                pending_return_type = None
                                saw_return_descriptor = False
                                awaiting_function_name = False
                            current_func_addr = addr
                            pending_function_entry = True
                            skip_file_type_declarations = False
                            if self._cur_func:
                                # Repeated entry address: this is its body
                                # scope, not a second function.
                                parsing_signature = False
                        elif self._cur_func:
                            # Non-code 11 records open nested/local scopes.
                            parsing_signature = False
                    else:
                        if self._cur_func is None:
                            current_func_addr = addr
                        # The first 0x11 starts file metadata.  A later one
                        # after a function name starts its body/local scope.
                        if self._cur_func:
                            parsing_signature = False
                i += 6
                continue

            # ---- 21 01 : function address marker ----
            if b == 0x21 and i+1 < end and d[i+1] == 0x01:
                if i + 6 <= end:
                    # Scope/end marker.  Its address is useful future block
                    # metadata, but it must not replace the 11 entry address.
                    addr = struct.unpack_from('<I', d, i+2)[0]
                i += 6
                continue

            # ---- 06 01 : .line section pointer ----
            if b == 0x06 and i+1 < end and d[i+1] == 0x01:
                i += 6
                continue

            # ---- 36 01 : language code ----
            if b == 0x36 and i+1 < end and d[i+1] == 0x01:
                if i + 6 <= end:
                    lang_code = struct.unpack_from('<I', d, i+2)[0]
                    # 36 01 also occurs as byte data in richer type records.
                    # Unknown payloads are not language declarations.
                    cur_lang = LANG_CODES.get(lang_code, cur_lang)
                i += 6
                continue

            # ---- 58 02 : compiler name string ----
            if b == 0x58 and i+1 < end and d[i+1] == 0x02:
                s, nxt = cstr(d, i+2)
                cur_compiler = s
                i = nxt
                continue

            # A scalar return descriptor can carry an opaque attribute block
            # containing relocated type/debug addresses before the 07 38
            # function name.  Those address bytes are not declarations.  Once
            # the return has been decoded, scan only for the name marker; this
            # prevents embedded 0x72 bytes from replacing a void return with a
            # fictitious aggregate type.
            if (awaiting_function_name
                    and d[i:i + 3] != b'\x07\x38\x00'
                    and d[i:i + 2] != b'\x38\x00'):
                i += 1
                continue

            # ---- 38 00 : source file path string ----
            if b == 0x38 and i+1 < end and d[i+1] == 0x00:
                s, nxt = cstr(d, i+2)
                if is_source_path(s):
                    if (self._cur_func is not None
                            and self._function_addresses is not None):
                        # A linked record can repeat its source metadata
                        # *after* the function body (often first an included
                        # header, then the owning .c file), followed by a
                        # file-level type chain.  The next real code-entry
                        # marker closes the function; ending it here made the
                        # following type-member name look like a function.
                        # Associate the active function and its output unit
                        # with the owning source instead.
                        self._cur_func.source_file = s
                        if self._cur_file:
                            self._cur_file.path = s
                        # The linked record now switches to its file-level
                        # type chain.  Its 55/63/72/83 descriptors resemble
                        # locals and parameters, but belong to aggregate
                        # members; type collection below owns them instead.
                        skip_file_type_declarations = True
                        pending_var = None
                    else:
                        # A source path outside a live function starts a new
                        # output unit.
                        self._finalise_func()
                        self._finalise_file()
                        self._cur_file = FileInfo(
                            path=s, language=cur_lang, compiler=cur_compiler
                        )
                    cur_source = s
                    # Some linked records put their function-entry marker
                    # before the repeated compiler/source metadata, while
                    # probe objects put it after.  Do not clear a validated
                    # pending entry here: the next function-name record is
                    # still tied to that code address.
                    self._collect_type_names(nxt, end)
                elif (self._function_addresses is not None
                      and self._cur_file and self._cur_func is None
                      and pending_function_entry
                      and s and all(c.isalnum() or c in '_~<>:' for c in s)):
                    # Linked PS2 records encode some function names as a bare
                    # 38 string (rather than 07 38).  The validated pending
                    # code entry makes this unambiguous; without it, a later
                    # type-member name such as ``xX`` was promoted to a
                    # fictitious function.
                    self._cur_func = FuncInfo(
                        name=s,
                        source_file=cur_source,
                        addr=current_func_addr,
                        return_type=pending_return_type or 'void',
                        language=cur_lang,
                        compiler=cur_compiler,
                    )
                    just_started_function = True
                    if s in ('__ct', '__dt'):
                        self._cur_func.return_type = 'void'
                    pending_return_type = None
                    parsing_signature = True
                    pending_function_entry = False
                    skip_file_type_declarations = False
                    awaiting_function_name = False
                elif pending_var is not None:
                    # Local names use a bare 38 00 record, unlike parameters
                    # which use the 07 38 00 form.  A location address can
                    # contain a false 38 00 pair; do not consume through its
                    # payload as a string, or the real following name opcode
                    # is skipped.  Addresses 0x00383260 in PS2GL produced the
                    # bogus local name ``8`` this way.
                    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', s):
                        attach_pending_name(s)
                    else:
                        i += 1
                        continue
                i = nxt
                continue

            # ---- generic 12-byte linked-record header ----
            # Layout: <abbreviation:u32> <tag/storage:u16> 12 00 <next:u32>.
            # The relocated link is opaque.  Scanning through it made a low
            # byte of 0x72 look like an aggregate descriptor (and 0x04 like a
            # stack offset), producing aggregate-typed scalar locals and huge
            # fictitious offsets in the linked game.  Consume the complete
            # header; the declaration payload begins immediately after it.
            if i + 12 <= end and d[i + 6:i + 8] == b'\x12\x00':
                next_record = struct.unpack_from('<I', d, i + 8)[0]
                if i < next_record <= len(d):
                    i += 12
                    continue

            # ---- 04 : address/offset field (4 bytes) ----
            if b == 0x04 and i + 5 <= stream_end:
                pending_addr = struct.unpack_from('<I', d, i+1)[0]
                i += 5
                continue

            # ---- 07 38 00 : symbol name ----
            if b == 0x07 and i+2 < end and d[i+1] == 0x38 and d[i+2] == 0x00:
                s, nxt = cstr(d, i+3)
                if pending_var is not None:
                    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', s):
                        attach_pending_name(s)
                    else:
                        i += 1
                        continue
                elif s and all(c.isalnum() or c in '_~<>:' for c in s):
                    if (self._cur_file and self._cur_func is None
                          and (self._function_addresses is None
                               and is_function_chunk
                               or pending_function_entry)):
                        # This is the function name — start a new function
                        self._cur_func = FuncInfo(
                            name=s,
                            source_file=cur_source,
                            addr=current_func_addr,
                            return_type=pending_return_type or 'void',
                            language=cur_lang,
                            compiler=cur_compiler,
                        )
                        just_started_function = True
                        if s in ('__ct', '__dt'):
                            self._cur_func.return_type = 'void'
                        pending_return_type = None
                        parsing_signature = True
                        pending_function_entry = False
                        skip_file_type_declarations = False
                        awaiting_function_name = False
                i = nxt
                continue

            # ---- 08 20 <mangled-name> : C++ linkage name ----
            if b == 0x08 and i+1 < end and d[i+1] == 0x20:
                s, nxt = cstr(d, i+2)
                if self._cur_func and '__' in s:
                    self._cur_func.name = demangle_simple(s)
                i = nxt
                continue

            # ---- 55 00 : parameter / variable record ----
            if b == 0x55 and i+1 < end and d[i+1] == 0x00:
                if skip_file_type_declarations:
                    i += 4
                    continue
                if i + 4 <= end:
                    reg_code = d[i+2]
                    type_modifier = d[i+3]
                    role_byte = d[i+4] if i+4 < end else 0
                    if reg_code == 0x08 and type_modifier == 0x81:
                        type_str = 'long long'
                    elif reg_code == 0x08 and type_modifier == 0x82:
                        type_str = 'unsigned long long'
                    else:
                        type_str = REG_TO_TYPE.get(
                            reg_code, f'/*type_0x{reg_code:02x}*/ int'
                        )

                    # Check for modifier byte before role_byte
                    # Sometimes layout is: 55 00 RR 00 MOD TT ...
                    # or:                  55 00 RR 00 TT ...
                    mod = 0
                    if role_byte in (MODIFIER_PTR, MODIFIER_REF, MODIFIER_STRUCT, MODIFIER_ARRAY):
                        mod = role_byte
                        role_byte = d[i+5] if i+5 < end else 0

                    if mod == MODIFIER_PTR:
                        type_str += '*'
                    elif mod == MODIFIER_REF:
                        type_str += '&'
                    elif mod == MODIFIER_STRUCT:
                        type_str = f'/* struct */ {type_str}'

                    is_return = role_byte in (ROLE_RETURN, ROLE_RETURN_ALT)
                    # Some qualified/unsigned scalar returns insert modifier
                    # bytes before the role.  In a function chunk the first
                    # scalar declaration before its 07 38 name is always the
                    # return descriptor (verified with unsigned long).
                    if (not is_return and self._cur_func is None
                            and (self._function_addresses is None
                                 and is_function_chunk
                                 or pending_function_entry)
                            and not saw_return_descriptor):
                        is_return = True
                    role = 'return' if is_return else 'param'
                    if role == 'return':
                        saw_return_descriptor = True
                        if self._cur_func:
                            self._cur_func.return_type = type_str
                        else:
                            # Function return descriptors precede the 07 38
                            # function-name record in MWCC's stream.
                            pending_return_type = type_str
                            awaiting_function_name = True
                    elif self._cur_func:
                        if role != 'return':
                            var = VarInfo(
                                name='', type_str=type_str,
                                reg_code=reg_code,
                                role='param' if parsing_signature else 'local',
                                stack_offset=pending_addr,
                            )
                            if parsing_signature:
                                self._cur_func.params.append(var)
                            else:
                                self._cur_func.locals_.append(var)
                            pending_var = var
                i += 4
                continue

            # ---- 63 00 : pointer declaration ----
            # Pointer parameters do not use a 55 record.  The probe encoding
            # is: 63 00 <kind:u16> <storage> <base-type> 00 23.
            if b == MODIFIER_PTR and i + 8 <= end and d[i+1] == 0x00:
                if skip_file_type_declarations:
                    i += 1
                    continue
                # The u16 at +2 encodes the number/shape of indirections.
                # A normal pointer is 3 and has its role at +7; the verified
                # ``int **`` probe is 4 and has its role at +8.  In both
                # cases the primitive code is two bytes before the role.
                indirection_depth = struct.unpack_from('<H', d, i + 2)[0] - 2
                role_index = i + 6 + indirection_depth
                if (indirection_depth < 1 or role_index >= end
                        or d[role_index] not in (ROLE_RETURN, ROLE_PARAM)):
                    i += 1
                    continue
                reg_code = d[role_index - 2]
                indirection_kind = d[i+4]
                suffix = ('&' if indirection_kind == 0x02 else '*') * indirection_depth
                type_str = REG_TO_TYPE.get(reg_code, f'/*type_0x{reg_code:02x}*/ int') + suffix
                role_byte = d[role_index]
                if role_byte == ROLE_RETURN:
                    saw_return_descriptor = True
                    if self._cur_func:
                        self._cur_func.return_type = type_str
                    else:
                        pending_return_type = type_str
                elif self._cur_func:
                    var = VarInfo(
                        name='', type_str=type_str, reg_code=reg_code,
                        role='param' if parsing_signature else 'local',
                        stack_offset=pending_addr,
                    )
                    if parsing_signature:
                        self._cur_func.params.append(var)
                    else:
                        self._cur_func.locals_.append(var)
                    pending_var = var
                i = role_index + 1
                continue

            # ---- 83 00 : indirect/function type declaration ----
            # Used for a typedef'd function pointer, an aggregate pointer,
            # and C++'s implicit `this`.  A regular parameter has the 0x23
            # role byte immediately after the record.  MWCC omits that byte
            # for an indirect return descriptor, which is instead identified
            # by its position between a validated function entry and name.
            indirect = self._indirect_record(i, end)
            if indirect:
                type_ref, indirection_depth, next_i = indirect
                if skip_file_type_declarations:
                    i = next_i
                    continue
                type_str = self._resolve_indirect_type(type_ref, indirection_depth)
                # The byte following the relocated type reference is normally
                # the role.  For an indirect return MWCC omits the role, so
                # this byte is already the following name-record marker.
                role_byte = d[next_i - 1]
                # Pointer returns in the linked MWCC stream may use a
                # pointer-specific trailing attribute (for example ``03 23``)
                # rather than the scalar 13/43 return role.  At a validated
                # function entry, the first indirect descriptor before the
                # name is necessarily the return type, matching the scalar
                # 55-record fallback above.
                is_first_pending_descriptor = (
                    self._cur_func is None and pending_function_entry
                    and not saw_return_descriptor
                )
                is_return = (
                    role_byte in (ROLE_RETURN, ROLE_RETURN_ALT,
                                  ROLE_RETURN_AGGREGATE)
                    or is_first_pending_descriptor
                    or (just_started_function and '(*)' in type_str
                        and not saw_return_descriptor)
                )
                if is_return:
                    saw_return_descriptor = True
                    if self._cur_func:
                        self._cur_func.return_type = type_str
                    else:
                        pending_return_type = type_str
                    just_started_function = False
                    # Revisit the marker; it begins the function name that
                    # immediately follows the return descriptor.
                    i = next_i - 1
                    continue
                elif role_byte == ROLE_PARAM and self._cur_func:
                    var = VarInfo(
                        name='', type_str=type_str,
                        role='param' if parsing_signature else 'local',
                        stack_offset=pending_addr,
                    )
                    if parsing_signature:
                        self._cur_func.params.append(var)
                    else:
                        self._cur_func.locals_.append(var)
                    pending_var = var
                    just_started_function = False
                    i = next_i
                    continue

            # ---- 72 00 : by-value aggregate declaration ----
            # The record gives no recoverable typedef/tag in the current
            # corpus, but it reliably distinguishes aggregates from scalars.
            if (b == MODIFIER_STRUCT and i + 7 <= end and d[i+1] == 0x00
                    and d[i+6] in (ROLE_RETURN, ROLE_RETURN_ALT,
                                   ROLE_RETURN_AGGREGATE, ROLE_PARAM)):
                if skip_file_type_declarations:
                    i += 7
                    continue
                role_byte = d[i+6]
                type_ref = struct.unpack_from('<I', d, i+2)[0]
                type_str = self._type_names.get(
                    type_ref, self._type_reprs.get(type_ref, UNKNOWN_AGGREGATE_TYPE)
                )
                if role_byte in (ROLE_RETURN, ROLE_RETURN_ALT,
                                 ROLE_RETURN_AGGREGATE):
                    saw_return_descriptor = True
                    if self._cur_func:
                        self._cur_func.return_type = type_str
                    else:
                        pending_return_type = type_str
                elif self._cur_func:
                    var = VarInfo(
                        name='', type_str=type_str,
                        role='param' if parsing_signature else 'local',
                        stack_offset=pending_addr,
                    )
                    if parsing_signature:
                        self._cur_func.params.append(var)
                    else:
                        self._cur_func.locals_.append(var)
                    pending_var = var
                i += 7
                continue

            # ---- 1d 00 : scope close ----
            if b == 0x1d and i+1 < end and d[i+1] == 0x00:
                i += 4
                continue

            # ---- 0b 00 : nested scope close ----
            if b == 0x0b and i+1 < end and d[i+1] == 0x00:
                i += 2
                continue

            # ---- inline string for variable/param name ----
            # Pattern: 07 38 00 <name\0> appearing after 55 record in param block
            # Actually a second 07 38 00 block — already handled above.
            # But variable names inside function bodies also use 38 00 (no 07 prefix):
            if b == 0x38 and i+1 < end and d[i+1] == 0x00:
                s, nxt = cstr(d, i+2)
                if s and all(c.isalnum() or c in '_' for c in s) and len(s) < 64:
                    # Variable/param name — attach to last unnamed param
                    if self._cur_func:
                        for p in reversed(self._cur_func.params):
                            if not p.name:
                                p.name = s
                                break
                i = nxt
                continue

            # ---- 23 00 : line number record ----
            if b == 0x23 and i+1 < end and d[i+1] == 0x00:
                if i + 6 <= end:
                    line_num = struct.unpack_from('<I', d, i+2)[0]
                    if self._cur_func and line_num > 0 and line_num < 100000:
                        if not self._cur_func.first_line:
                            self._cur_func.first_line = line_num
                        self._cur_func.last_line = line_num
                i += 6
                continue

            # ---- 05 00 12 00 : variable entry prefix ----
            if b == 0x05 and i+3 < end and d[i+1] == 0x00 and d[i+2] == 0x12 and d[i+3] == 0x00:
                # The prefix is followed by a u32 link to the next debug
                # record, then this variable's actual type descriptor.  It
                # is not an ``04`` address record.  Leaving the link for the
                # general scanner made a link ending in byte 0x04 consume the
                # first byte of the following descriptor; this specifically
                # dropped pointer parameters such as Dynam's ``h_Dynam``.
                i += 8
                continue

            i += 1

    def _collect_type_names(self, start: int, end: int):
        """Collect named file-level aggregate records following a source path.

        A type record starts at the byte immediately after the path and links
        to the next record through its u32 at +8.  Aggregate use records
        (0x72) relocate to that start offset.  We only record an identifier
        when the layout looks like a type record; ordinary function chunks
        therefore cannot pollute this map.
        """
        d = self.d
        pos = start
        pending_globals = []

        # File headers may begin with a linked list of global declarations.
        # The u16 at +4 is the storage class: 7 = externally visible, 12 =
        # file-static.  Their u32 at +8 points to the next declaration/type.
        while pos + 12 <= end and struct.unpack_from('<H', d, pos + 4)[0] in (7, 12):
            storage_class = struct.unpack_from('<H', d, pos + 4)[0]
            next_pos = struct.unpack_from('<I', d, pos + 8)[0]
            if not (pos < next_pos <= end):
                break
            # A linked global ends with ``38 00 <name> 00``.  Do not accept
            # the first 38 00 byte pair in the record: the preceding
            # ``05 00 03 <address:u32>`` can itself contain those bytes.  For
            # example, address 0x00382e60 made VU0_gs_LastMPRGLoaded appear as
            # the identifier ``8``.  The real name string is the one whose
            # terminator reaches the next linked record exactly.
            name_pos, name = self._terminal_identifier_record(
                b'\x38\x00', pos + 12, next_pos
            )
            if name_pos < 0:
                break
            type_str = 'int'
            type_ref = None
            scalar_pos = d.find(b'\x55\x00', pos + 12, name_pos)
            aggregate_pos = d.find(b'\x72\x00', pos + 12, name_pos)
            if scalar_pos >= 0:
                reg_code = d[scalar_pos + 2]
                type_str = REG_TO_TYPE.get(reg_code, f'/*type_0x{reg_code:02x}*/ int')
            elif aggregate_pos >= 0 and aggregate_pos + 6 <= name_pos:
                type_ref = struct.unpack_from('<I', d, aggregate_pos + 2)[0]
            address = 0
            address_pos = d.rfind(b'\x05\x00\x03', pos + 12, name_pos)
            if address_pos >= 0 and address_pos + 7 <= name_pos:
                address = struct.unpack_from('<I', d, address_pos + 3)[0]
            pending_globals.append((
                VarInfo(name=name, type_str=type_str,
                        role='static' if storage_class == 12 else 'global',
                        address=address),
                type_ref,
            ))
            pos = next_pos

        visited = set()
        type_records = []
        while pos not in visited and pos + 12 <= end:
            visited.add(pos)
            # Type records have an internal 0x12 u16 at +6.  This avoids
            # mistaking the next function chunk's header for a type record.
            if d[pos + 6:pos + 8] != b'\x12\x00':
                break
            next_pos = struct.unpack_from('<I', d, pos + 8)[0]
            search_end = next_pos if pos < next_pos <= end else end
            kind = struct.unpack_from('<I', d, pos)[0]
            tag = struct.unpack_from('<H', d, pos + 4)[0]
            name_pos = self._named_type_name_pos(pos, search_end, tag)
            self._type_kinds[pos] = kind
            self._type_tags[pos] = tag
            if name_pos >= 0 and tag in NAMED_TYPE_TAGS:
                name, _ = cstr(d, name_pos + 2)
                if re.fullmatch(r'@anon(\d+)', name):
                    # MWCC gives anonymous aggregates a stable internal name.
                    # Retain the identity, but make it a legal C identifier
                    # for later stub/type emission.
                    self._type_names[pos] = f'anon_{name[5:]}'
                elif name == '@enum':
                    self._type_names[pos] = f'anon_enum_{pos:08x}'
                elif re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', name):
                    self._type_names[pos] = name
            # Array records observed in controlled objects have this fixed
            # prefix before their element descriptor and upper bound.  The
            # numeric kinds 0x24/0x26 are also used by named type records in
            # the target; treating those as arrays reads four name bytes (for
            # example ``dstV``) as a fake dimension such as 1450472293.
            elif tag == DW_TAG_ARRAY_TYPE:
                self._resolve_array_type(pos, {pos})
            if tag in NAMED_TYPE_TAGS:
                type_records.append((pos, next_pos, kind, tag, name_pos))
            if not (pos < next_pos <= end):
                break
            pos = next_pos

        # Resolve these after the complete linked type list is indexed.  In
        # particular, indirect callback parameters can point at sibling type
        # records that have not yet been visited during the first pass.
        for type_pos, tag in tuple(self._type_tags.items()):
            if tag == DW_TAG_SUBROUTINE_TYPE and start <= type_pos < end:
                self._type_reprs[type_pos] = self._resolve_function_type(type_pos, {type_pos})

        if self._cur_file:
            for var, type_ref in pending_globals:
                if type_ref is not None:
                    var.type_str = self._type_names.get(
                        type_ref, self._type_reprs.get(type_ref, UNKNOWN_AGGREGATE_TYPE)
                    )
                self._cur_file.globals_.append(var)
            for type_pos, next_pos, kind, tag, name_pos in type_records:
                name = self._type_names.get(type_pos)
                if not name:
                    continue
                info = TypeInfo(name=name, kind=kind, tag=tag)
                name_end = d.find(b'\x00', name_pos + 2) + 1
                if tag == DW_TAG_ENUMERATION_TYPE:
                    # In the verified enum record, constant entries start at
                    # +24 as signed u32 followed by an inline NUL string and
                    # continue until the 38 00 enum-name record.
                    enum_pos = type_pos + 24
                    while enum_pos + 4 <= name_pos:
                        value = struct.unpack_from('<i', d, enum_pos)[0]
                        enum_name, enum_next = cstr(d, enum_pos + 4)
                        if (not enum_name or enum_next > name_pos
                                or not all(ch.isalnum() or ch == '_' for ch in enum_name)):
                            break
                        info.enum_values.append((enum_name, value))
                        enum_pos = enum_next
                member_pos = name_end
                visited_members = set()
                while member_pos not in visited_members and member_pos + 12 <= next_pos:
                    visited_members.add(member_pos)
                    if d[member_pos + 6:member_pos + 8] != b'\x12\x00':
                        break
                    member_next = struct.unpack_from('<I', d, member_pos + 8)[0]
                    if not (member_pos < member_next <= next_pos):
                        break
                    member_name_pos, member_name = self._terminal_identifier_record(
                        b'\x07\x38\x00', member_pos + 12, member_next
                    )
                    bitfield_marker = d.find(b'\x07\xd6\x00', member_pos + 12, member_next)
                    bit_width = bit_offset = None
                    if member_name_pos < 0 and bitfield_marker >= 0:
                        # Bitfield members use 07 D6 00 <width:u32> C5 00
                        # <bit-offset:u16> 38 00 <name>.  Unlike ordinary
                        # members, their name record has no 07 prefix.
                        bit_offset_marker = d.find(
                            b'\xc5\x00', bitfield_marker + 7, member_next
                        )
                        name_search_start = (
                            bit_offset_marker + 4
                            if bit_offset_marker >= 0
                            else bitfield_marker + 7
                        )
                        candidate_name_pos, candidate_name = self._terminal_identifier_record(
                            b'\x38\x00', name_search_start, member_next
                        )
                        if candidate_name_pos >= 0:
                            member_name_pos = candidate_name_pos
                            member_name = candidate_name
                            if bitfield_marker + 7 <= member_next:
                                bit_width = struct.unpack_from('<I', d, bitfield_marker + 3)[0]
                            if bit_offset_marker >= 0 and bit_offset_marker + 4 <= candidate_name_pos:
                                bit_offset = struct.unpack_from('<H', d, bit_offset_marker + 2)[0]
                    aggregate_pos = d.find(b'\x72\x00', member_pos + 12, member_next)
                    offset_marker = d.find(b'\x06\x00\x04', member_pos + 12, member_next)
                    offset = (struct.unpack_from('<I', d, offset_marker + 3)[0]
                              if offset_marker >= 0 and offset_marker + 7 <= member_next
                              else 0)
                    if member_name_pos < 0:
                        # A derived C++ class uses an unnamed aggregate member
                        # record for its public base.  Preserve the relation
                        # rather than inventing a field name.
                        if aggregate_pos >= 0 and aggregate_pos + 6 <= member_next:
                            type_ref = struct.unpack_from('<I', d, aggregate_pos + 2)[0]
                            base_name = self._type_names.get(type_ref)
                            if base_name:
                                info.bases.append((base_name, offset))
                        member_pos = member_next
                        continue
                    member_type = 'int'
                    scalar_pos = d.find(b'\x55\x00', member_pos + 12, member_name_pos)
                    aggregate_pos = d.find(b'\x72\x00', member_pos + 12, member_name_pos)
                    indirect_pos = d.find(b'\x83\x00', member_pos + 12, member_name_pos)
                    if scalar_pos >= 0:
                        reg_code = d[scalar_pos + 2]
                        member_type = REG_TO_TYPE.get(
                            reg_code, f'/*type_0x{reg_code:02x}*/ int'
                        )
                    elif indirect_pos >= 0:
                        indirect = self._indirect_record(indirect_pos, member_name_pos)
                        if indirect:
                            type_ref, indirection_depth, _ = indirect
                            member_type = self._resolve_indirect_type(
                                type_ref, indirection_depth
                            )
                    elif aggregate_pos >= 0 and aggregate_pos + 6 <= member_name_pos:
                        type_ref = struct.unpack_from('<I', d, aggregate_pos + 2)[0]
                        member_type = self._type_names.get(
                            type_ref, self._type_reprs.get(type_ref, UNKNOWN_AGGREGATE_TYPE)
                        )
                    info.members.append(VarInfo(
                        name=member_name, type_str=member_type, stack_offset=offset,
                        role='member', bit_offset=bit_offset, bit_width=bit_width,
                    ))
                    member_pos = member_next
                self._cur_file.types.append(info)

    def _finalise_func(self):
        if self._cur_func and self._cur_file:
            self._cur_file.functions.append(self._cur_func)
        self._cur_func = None

    def _finalise_file(self):
        if self._cur_file:
            self.files.append(self._cur_file)
        self._cur_file = None


# ---------------------------------------------------------------------------
# .line section parser
# ---------------------------------------------------------------------------

def parse_line_section(line_data: bytes, func_addr: int) -> list[tuple[int, int]]:
    """
    Parse a .line section for one function.
    Returns list of (code_offset, source_line_number) pairs.
    """
    if len(line_data) < 8:
        return []
    entries = []
    # Each entry is ten bytes: source line (u32), 0xffff marker (u16), and
    # code offset from the function entry (u32).  The final line-zero entry
    # carries the end offset and is not a source boundary.  The old parser
    # treated the stream as pairs of u16 values, which made every recovered
    # code offset zero and rendered the generated comments useless.
    pos = 8   # skip section-size and function-address header
    while pos + 10 <= len(line_data):
        line, marker, addr = struct.unpack_from('<IHI', line_data, pos)
        pos += 10
        if marker != 0xffff:
            continue
        if line > 0:
            entries.append((addr, line))
    return entries


def parse_line_blob(line_data: bytes) -> dict[int, list[tuple[int, int]]]:
    """Parse concatenated `.line` sections from a linked ELF by function."""
    line_maps = {}
    pos = 0
    while pos + 8 <= len(line_data):
        section_size, func_addr = struct.unpack_from('<II', line_data, pos)
        if section_size < 8 or pos + section_size > len(line_data):
            break
        line_maps[func_addr] = parse_line_section(
            line_data[pos:pos + section_size], func_addr
        )
        pos += section_size
    return line_maps


# ---------------------------------------------------------------------------
# .symtab parser
# ---------------------------------------------------------------------------

@dataclass
class SymbolInfo:
    name: str
    value: int
    size: int
    type_: int   # STT_* 0=NOTYPE 1=OBJECT 2=FUNC 3=SECTION 4=FILE
    bind: int    # STB_* 0=LOCAL 1=GLOBAL 2=WEAK
    shndx: int


STT_NOTYPE  = 0
STT_OBJECT  = 1
STT_FUNC    = 2
STT_SECTION = 3
STT_FILE    = 4
STB_LOCAL   = 0
STB_GLOBAL  = 1


def parse_symtab(symtab_data: bytes, strtab_data: bytes) -> list[SymbolInfo]:
    symbols = []
    for i in range(0, len(symtab_data), 16):
        if i + 16 > len(symtab_data):
            break
        st_name, st_value, st_size, st_info, st_other, st_shndx = \
            struct.unpack_from('<IIIBBH', symtab_data, i)
        sym_type = st_info & 0xf
        sym_bind = st_info >> 4
        # Read name
        end = strtab_data.find(b'\x00', st_name)
        name = strtab_data[st_name:end].decode('latin-1', errors='replace') if end > st_name else ''
        symbols.append(SymbolInfo(
            name=name, value=st_value, size=st_size,
            type_=sym_type, bind=sym_bind, shndx=st_shndx
        ))
    return symbols


# ---------------------------------------------------------------------------
# Type demangling helpers
# ---------------------------------------------------------------------------

def demangle_simple(name: str) -> str:
    """Very basic Metrowerks C++ name demangling for common patterns."""
    def class_name(encoded: str) -> str:
        m = re.match(r'^(\d+)(.+)$', encoded)
        if not m:
            return encoded
        return m.group(2)[:int(m.group(1))]

    # MW uses a length-prefixed class name: __ct__7CounterFi.
    m = re.match(r'^__dt__(.+?)F', name)
    if m:
        return f'~{class_name(m.group(1))}'
    m = re.match(r'^__ct__(.+?)F', name)
    if m:
        return class_name(m.group(1))
    m = re.match(r'^(.+?)__(.+?)F', name)
    if m:
        return f'{class_name(m.group(2))}::{m.group(1)}'
    return name


def windows_to_posix(path: str) -> str:
    """Convert Windows path to posix, stripping drive letter."""
    # e.g. Z:\home\barney\... -> home/barney/...
    #      C:\Program Files\Metrowerks\... -> keep as-is under vendor/
    path = path.replace('\\', '/')
    # Strip drive letter
    if len(path) > 2 and path[1] == ':':
        path = path[2:]
    # Remove leading slash
    path = path.lstrip('/')
    return path


def path_to_rel(win_path: str, strip_prefix: str = '') -> str:
    """Turn a Windows source path into a relative output path."""
    posix = windows_to_posix(win_path)
    if strip_prefix and posix.startswith(strip_prefix):
        posix = posix[len(strip_prefix):].lstrip('/')
    return posix


# ---------------------------------------------------------------------------
# Stub file generator
# ---------------------------------------------------------------------------

C_KEYWORDS = {
    'auto','break','case','char','const','continue','default','do','double',
    'else','enum','extern','float','for','goto','if','int','long','register',
    'return','short','signed','sizeof','static','struct','switch','typedef',
    'union','unsigned','void','volatile','while',
    # C++ extras
    'bool','class','delete','new','operator','private','protected','public',
    'template','this','throw','try','catch','virtual','inline','namespace',
    'using','true','false','nullptr',
}


def safe_param_name(name: str, idx: int) -> str:
    if (not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', name or '')
            or name in C_KEYWORDS):
        return f'param{idx}'
    return name


def safe_global_name(global_: VarInfo, idx: int) -> str:
    """Return a legal stable spelling for a malformed recovered global."""
    if (re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', global_.name or '')
            and global_.name not in C_KEYWORDS):
        return global_.name
    address = f'{global_.address:08x}' if global_.address else 'unknown'
    return f'global_{address}_{idx}'


def format_declaration(type_str: str, name: str) -> str:
    """Format a recovered declarator, including array/function-pointer forms."""
    # A pointer-to-array is itself a declarator.  Handle it before the plain
    # array case so ``float (*)[4]`` becomes ``float (*value)[4]`` rather than
    # the invalid ``float (*) value[4]``.
    if '(*)' in type_str:
        return type_str.replace('(*)', f'(*{name})')
    # Keep the complete suffix together: ``float[4][4]`` must become
    # ``float matrix[4][4]``, not the invalid ``float[4] matrix[4]``.
    array_match = re.match(r'^(.*?)(\[(?:\d+)\](?:\[(?:\d+)\])*)$', type_str)
    if array_match:
        return f'{array_match.group(1)} {name}{array_match.group(2)}'
    return f'{type_str} {name}'


def func_signature(f: FuncInfo) -> str:
    params = []
    for idx, p in enumerate(f.params):
        pname = safe_param_name(p.name, idx)
        params.append(format_declaration(p.type_str, pname))
    if not params:
        params = ['void']
    param_str = ', '.join(params)
    return f'{f.return_type} {f.name}({param_str})'


def aggregate_is_union(type_info: TypeInfo) -> bool:
    """Conservatively identify a union from its recovered member offsets."""
    return (len(type_info.members) > 1
            and not type_info.bases
            and not any(member.bit_width is not None for member in type_info.members)
            and all(member.stack_offset == 0 for member in type_info.members))


def order_aggregate_definitions(types: list[TypeInfo]) -> list[TypeInfo]:
    """Place aggregates after any complete by-value member dependencies."""
    by_name = {type_info.name: type_info for type_info in types}
    ordered: list[TypeInfo] = []
    visiting: set[str] = set()
    visited: set[str] = set()

    def visit(type_info: TypeInfo) -> None:
        if type_info.name in visited:
            return
        if type_info.name in visiting:
            # A genuine aggregate cannot contain itself by value.  Keep the
            # recovered order for malformed/cyclic records rather than
            # recursing forever.
            return
        visiting.add(type_info.name)
        for member in type_info.members:
            spelling = member.type_str.strip()
            if '*' in spelling or '&' in spelling:
                continue
            dependency_name = spelling.split('[', 1)[0].strip()
            dependency = by_name.get(dependency_name)
            if dependency is not None:
                visit(dependency)
        visiting.remove(type_info.name)
        visited.add(type_info.name)
        ordered.append(type_info)

    for type_info in types:
        visit(type_info)
    return ordered


def unresolved_pointer_type_names(file_info: FileInfo) -> list[tuple[str, str]]:
    """Find pointer-only typedef names absent from this debug type chain.

    MWCC emits the complete layout only for types needed by value in a
    translation unit.  Header-owned opaque types may therefore occur solely
    as ``Name*`` spellings without a corresponding named type record.  The
    original headers supplied their forward typedefs; recreate those safe,
    incomplete declarations so extracted units remain compilable.
    """
    defined_names = {
        type_info.name for type_info in file_info.types
        if type_info.members or type_info.bases or type_info.enum_values
    }
    tags_by_name = {type_info.name: type_info.tag for type_info in file_info.types}
    ignored_names = set(C_KEYWORDS) | {
        'size_t', 'ptrdiff_t', 'wchar_t',
    }
    spellings = []
    spellings.extend(global_.type_str for global_ in file_info.globals_)
    for type_info in file_info.types:
        spellings.extend(member.type_str for member in type_info.members)
    for function in file_info.functions:
        spellings.append(function.return_type)
        spellings.extend(parameter.type_str for parameter in function.params)
        spellings.extend(local.type_str for local in function.locals_)

    unresolved = set()
    for spelling in spellings:
        for match in re.finditer(r'\b([A-Za-z_][A-Za-z0-9_]*)\s*\*', spelling):
            name = match.group(1)
            if name not in defined_names and name not in ignored_names:
                unresolved.add(name)
    return [
        ('union' if tags_by_name.get(name) == DW_TAG_UNION_TYPE else 'struct',
         name)
        for name in sorted(unresolved)
    ]


def generate_type_definitions(file_info: FileInfo) -> list[str]:
    """Emit conservative C declarations for recovered aggregate layouts.

    Type names come directly from MWCC's type records; ``anon_N`` is a stable
    legal spelling substituted for its ``@anonN`` internal form.  We only
    infer a union when every recovered member begins at byte zero.  More
    complex anonymous-union nesting remains annotated rather than guessed.
    """
    aggregate_types = [
        type_info for type_info in file_info.types
        if type_info.members or type_info.bases
    ]
    aggregate_types = order_aggregate_definitions(aggregate_types)
    enum_types = [type_info for type_info in file_info.types if type_info.enum_values]
    opaque_pointer_types = unresolved_pointer_type_names(file_info)
    if not aggregate_types and not enum_types and not opaque_pointer_types:
        return []

    lines = ['/* Recovered aggregate layouts from MWCC debug type records. */']
    for keyword, type_name in opaque_pointer_types:
        lines.append(f'typedef {keyword} {type_name} {type_name};')
    for type_info in aggregate_types:
        keyword = 'union' if aggregate_is_union(type_info) else 'struct'
        lines.append(f'typedef {keyword} {type_info.name} {type_info.name};')
    lines.append('')

    # C does not support a useful forward declaration for an enum.  Define
    # value-bearing enums before structures that may refer to them.
    for type_info in enum_types:
        lines.append(f'typedef enum {type_info.name} {{')
        for name, value in type_info.enum_values:
            lines.append(f'    {name} = {value},')
        lines.append(f'}} {type_info.name};')
        lines.append('')

    for type_info in aggregate_types:
        keyword = 'union' if aggregate_is_union(type_info) else 'struct'
        lines.append(f'{keyword} {type_info.name} {{')
        for base_name, offset in type_info.bases:
            lines.append(f'    /* C++ base {base_name} at +0x{offset:x}. */')
        enum_names = {enum.name for enum in enum_types}
        cursor = 0
        padding_index = 0
        for member_index, member in enumerate(type_info.members):
            member_name = safe_param_name(member.name, 0)
            # MWCC debug records preserve member offsets, but do not emit
            # records for unnamed source padding.  Materialize gaps only when
            # the preceding member has a known scalar-sized representation;
            # unknown aggregate sizes are left untouched rather than guessed.
            if member.stack_offset > cursor and cursor >= 0:
                gap = member.stack_offset - cursor
                previous = type_info.members[member_index - 1] if member_index else None
                if gap > 0 and previous is not None and _known_four_byte_member(previous, enum_names):
                    lines.append(
                        f'    unsigned char _extractor_padding_{padding_index:02d}[{gap}];'
                        f' /* implicitly added by extractor; +0x{cursor:x}..'
                        f'0x{member.stack_offset - 1:x} */'
                    )
                    padding_index += 1
            if member.bit_width is not None:
                lines.append(
                    f'    {member.type_str} {member_name} : {member.bit_width};'
                    f' /* bit {member.bit_offset}, byte +0x{member.stack_offset:x} */'
                )
            else:
                lines.append(
                    f'    {format_declaration(member.type_str, member_name)};'
                    f' /* +0x{member.stack_offset:x} */'
                )
            member_size = _known_member_size(member, enum_names)
            cursor = member.stack_offset + member_size if member_size else member.stack_offset
        lines.append('};')
        lines.append('')
    return lines


def _known_four_byte_member(member: VarInfo, enum_names: set[str]) -> bool:
    return _known_member_size(member, enum_names) == 4


def _known_member_size(member: VarInfo, enum_names: set[str]) -> int | None:
    """Return a conservative size for members whose ABI size is known."""
    if member.bit_width is not None:
        return None
    spelling = member.type_str.strip()
    if spelling in enum_names or '*' in spelling:
        return 4
    if spelling in {'char', 'signed char', 'unsigned char', 'bool'}:
        return 1
    if spelling in {'short', 'signed short', 'unsigned short'}:
        return 2
    if spelling in {'int', 'signed int', 'unsigned int', 'float', 'long',
                    'signed long', 'unsigned long'}:
        return 4
    return None


def normalize_file_info(file_info: FileInfo) -> None:
    """Remove duplicate file-scope records caused by merged debug chunks.

    MWCC repeats header and file-scope debug records in multiple chunks of one
    source file.  Those repetitions are useful while parsing but invalid when
    emitted as one C/C++ translation unit: duplicate globals and enum
    definitions prevent otherwise independent functions from compiling.
    Prefer the richest type record and the first named global at each linked
    address; neither choice invents data that the debug stream did not carry.
    """
    globals_by_key: dict[tuple, VarInfo] = {}
    for global_ in file_info.globals_:
        legal_name = safe_global_name(global_, 0)
        key = ('address', global_.address) if global_.address else (
            'name', global_.role, legal_name)
        globals_by_key.setdefault(key, global_)
    file_info.globals_ = list(globals_by_key.values())

    def type_score(type_info: TypeInfo) -> tuple[int, int, int]:
        return (len(type_info.members) + len(type_info.enum_values) + len(type_info.bases),
                len(type_info.members), len(type_info.enum_values))

    types_by_name: dict[str, TypeInfo] = {}
    anonymous_types: list[TypeInfo] = []
    for type_info in file_info.types:
        if not type_info.name:
            anonymous_types.append(type_info)
            continue
        old = types_by_name.get(type_info.name)
        if old is None or type_score(type_info) > type_score(old):
            types_by_name[type_info.name] = type_info
    file_info.types = [*types_by_name.values(), *anonymous_types]


def generate_c_stub(file_info: FileInfo, func_list: list[FuncInfo],
                    sym_map: dict,
                    implemented_bodies: Optional[dict[int, str]] = None) -> str:
    lines = []
    lines.append(f'/* {file_info.path} */')
    lines.append(f'/* Language: {file_info.language} */')
    lines.append(f'/* Compiler: {file_info.compiler} */')
    lines.append('')

    # Gather all unique types used — add forward decls where needed
    # (basic types only for now)
    lines.append('#include <stddef.h>')
    if file_info.language == 'C++':
        pass  # no extra includes needed for stubs
    lines.append('')

    lines.extend(generate_type_definitions(file_info))

    for global_index, global_ in enumerate(file_info.globals_):
        storage = 'static ' if global_.role == 'static' else ''
        global_name = safe_global_name(global_, global_index)
        lines.append(f'{storage}{format_declaration(global_.type_str, global_name)};')
    if file_info.globals_:
        lines.append('')

    for func in func_list:
        # Line range comment
        if func.first_line and func.last_line:
            lines.append(f'/* {os.path.basename(file_info.path)}'
                         f' lines {func.first_line}–{func.last_line} */')
        elif func.first_line:
            lines.append(f'/* {os.path.basename(file_info.path)}'
                         f' line {func.first_line} */')

        # Address comment
        if func.addr:
            lines.append(f'/* addr: 0x{func.addr:08x}  size: {func.size} bytes */')
        if not func.signature_trusted:
            lines.append('/* Debug signature rejected: type-record data leaked into it. */')

        if func.line_map:
            lines.append('/* Target MWCC statement boundaries (code offset -> source line):')
            previous = None
            for offset, line in func.line_map:
                # Repeated identical records carry no additional matching
                # information, but preserve distinct lines at one offset.
                if (offset, line) == previous:
                    continue
                lines.append(f' *   +0x{offset:04x} -> line {line}')
                previous = (offset, line)
            lines.append(' * Place reconstructed statements at these boundaries;')
            lines.append(' * compare a candidate object\'s line table as an extra checkpoint.')
            lines.append(' */')

        # Signature
        sig = func_signature(func)
        lines.append(sig)
        lines.append('{')

        preserved_body = (implemented_bodies or {}).get(func.addr)
        if preserved_body is not None:
            lines.extend(preserved_body.splitlines())
            lines.append('}')
            lines.append('')
            continue

        # Local variable stubs
        for loc in func.locals_:
            lname = safe_param_name(loc.name, 0)
            lines.append(f'    {format_declaration(loc.type_str, lname)};')

        lines.append(f'    /* TODO: decompile from asm/... */')
        lines.append('}')
        lines.append('')

    return '\n'.join(lines)


def _function_body_after(text: str, start: int) -> Optional[tuple[str, int]]:
    """Return a C/C++ function body and its closing-brace position.

    ``start`` points just after an extractor-owned address comment.  The
    scanner ignores comments and quoted strings so braces in recovered line
    annotations or string literals do not affect nesting.
    """
    i = start
    opening = -1
    depth = 0
    state = 'code'
    while i < len(text):
        char = text[i]
        following = text[i + 1] if i + 1 < len(text) else ''
        if state == 'line_comment':
            if char == '\n':
                state = 'code'
        elif state == 'block_comment':
            if char == '*' and following == '/':
                state = 'code'
                i += 1
        elif state in ('string', 'char'):
            if char == '\\':
                i += 1
            elif ((state == 'string' and char == '"')
                  or (state == 'char' and char == "'")):
                state = 'code'
        elif char == '/' and following == '/':
            state = 'line_comment'
            i += 1
        elif char == '/' and following == '*':
            state = 'block_comment'
            i += 1
        elif char == '"':
            state = 'string'
        elif char == "'":
            state = 'char'
        elif char == '{':
            if opening < 0:
                opening = i
            depth += 1
        elif char == '}' and opening >= 0:
            depth -= 1
            if depth == 0:
                return text[opening + 1:i], i
        i += 1
    return None


def collect_implemented_bodies(out_root: Path) -> dict[int, str]:
    """Collect non-TODO bodies so a template refresh cannot erase matches."""
    bodies: dict[int, str] = {}
    address_pattern = re.compile(
        r'/\*\s*addr:\s*0x([0-9A-Fa-f]+)\s+size:\s*\d+\s+bytes\s*\*/'
    )
    if not out_root.exists():
        return bodies
    source_paths = (
        path for path in out_root.rglob('*')
        if path.is_file() and path.suffix.lower() in ('.c', '.cpp', '.cxx')
    )
    for path in source_paths:
        text = path.read_text(encoding='utf-8', errors='replace')
        for match in address_pattern.finditer(text):
            result = _function_body_after(text, match.end())
            if result is None:
                continue
            body, _ = result
            if 'TODO: decompile from asm/' not in body:
                bodies[int(match.group(1), 16)] = body.strip('\n')
    return bodies


# ---------------------------------------------------------------------------
# Main
# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('elf', help='Input ELF file')
    ap.add_argument('--out', default='../src', help='Output source tree root')
    ap.add_argument('--strip-prefix', default='', help='Path prefix to strip from source paths')
    ap.add_argument('--verbose', '-v', action='store_true')
    ap.add_argument('--list-files', action='store_true', help='Just list source files and exit')
    ap.add_argument(
        '--preserve-implemented', action='store_true',
        help='retain non-TODO function bodies already present under --out, keyed by address',
    )
    args = ap.parse_args()

    print(f'Reading {args.elf}...', flush=True)
    data = open(args.elf, 'rb').read()
    secs = read_elf_sections(data)

    if '.debug' not in secs:
        print('ERROR: no .debug section found')
        sys.exit(1)

    debug_data  = secs['.debug']['data']
    line_data   = secs.get('.line', {}).get('data', b'')
    symtab_data = secs.get('.symtab', {}).get('data', b'')
    strtab_data = secs.get('.strtab', {}).get('data', b'')
    mwcats_data = secs.get('.mwcats', {}).get('data', b'')

    # --- Parse symbols ---
    print('Parsing .symtab...', flush=True)
    symbols = parse_symtab(symtab_data, strtab_data) if symtab_data else []
    func_syms  = {s.value: s for s in symbols if s.type_ == STT_FUNC}
    obj_syms   = {s.name:  s for s in symbols if s.type_ == STT_OBJECT and s.bind == STB_GLOBAL}
    data_syms_by_addr: dict[int, list[SymbolInfo]] = {}
    for symbol in symbols:
        if (symbol.value and symbol.type_ in (STT_NOTYPE, STT_OBJECT)
                and re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', symbol.name)):
            data_syms_by_addr.setdefault(symbol.value, []).append(symbol)
    print(f'  {len(symbols)} symbols, {len(func_syms)} functions, {len(obj_syms)} global objects')

    # --- Parse .mwcats for function sizes ---
    mwcats = {}
    for i in range(0, len(mwcats_data) - 7, 8):
        f1, f2, f3 = struct.unpack_from('<HHI', mwcats_data, i)
        mwcats[f3] = f2   # addr -> size

    # --- Parse .debug ---
    print(f'Parsing .debug ({len(debug_data)//1024//1024} MB)...', flush=True)
    parser = DebugParser(
        debug_data, verbose=args.verbose, function_addresses=set(func_syms)
    )
    files = parser.parse()
    # A handful of C++ template/type metadata records mimic function names but
    # carry 0x00060000, outside the executable `main` code section.  Keep only
    # real code addresses for linked-target extraction; relocatable probe
    # objects are parsed directly by the regression suite and remain unchanged.
    code_section = secs.get('main')
    if code_section:
        code_start = code_section['addr']
        code_end = code_start + code_section['size']
        for file_info in files:
            file_info.functions = [
                function for function in file_info.functions
                if code_start <= function.addr < code_end
            ]
    total_funcs = sum(len(f.functions) for f in files)
    print(f'  Found {len(files)} source files, {total_funcs} functions')

    if args.list_files:
        for f in sorted(files, key=lambda x: x.path):
            nf = len(f.functions)
            print(f'  {f.path}  ({nf} function{"s" if nf!=1 else ""})')
        return

    # --- Enrich functions with symtab sizes and line maps ---
    print('Enriching with symtab/mwcats data...', flush=True)
    line_maps = parse_line_blob(line_data)
    repaired_global_names = 0
    for file_info in files:
        for global_ in file_info.globals_:
            if (re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', global_.name or '')
                    or not global_.address):
                continue
            candidates = data_syms_by_addr.get(global_.address, [])
            unique_names = sorted({symbol.name for symbol in candidates})
            if len(unique_names) == 1:
                global_.name = unique_names[0]
                repaired_global_names += 1
        for func in file_info.functions:
            # Size from symtab
            sym = func_syms.get(func.addr)
            if sym:
                func.size = sym.size
                # A C function's debug spelling should agree with the linked
                # symbol.  When it does not, the current stream scanner has
                # usually consumed an aggregate record as a signature (for
                # example HIE_fn_vFastPS2PushMatrix was emitted as `xX` with
                # hundreds of struct fields as parameters).  Keep the
                # authoritative name/address/size, but do not invent a
                # source prototype from that corrupted range.
                if (func.language == 'C' and func.name != sym.name) or len(func.params) > 64:
                    func.debug_name = func.name
                    func.name = sym.name
                    func.return_type = 'void'
                    func.params.clear()
                    func.locals_.clear()
                    func.signature_trusted = False
            # Size from mwcats (higher priority if present)
            if func.addr in mwcats:
                func.size = mwcats[func.addr]
            if func.addr in line_maps:
                func.line_map = line_maps[func.addr]
                if func.line_map:
                    func.first_line = min(line for _, line in func.line_map)
                    func.last_line = max(line for _, line in func.line_map)
            # Fix up unnamed params with sequential names
            for idx, p in enumerate(func.params):
                if not p.name:
                    p.name = safe_param_name('', idx)
    if repaired_global_names:
        print(f'  Repaired {repaired_global_names} malformed global names from .symtab')

    # --- Merge all FileInfo objects with the same source path ---
    print('Merging per-function chunks by source file...', flush=True)
    merged: dict[str, FileInfo] = {}   # rel_path -> FileInfo
    for file_info in files:
        if not file_info.path:
            continue
        rel = path_to_rel(file_info.path, args.strip_prefix)
        if not rel:
            continue
        if rel not in merged:
            merged[rel] = FileInfo(
                path=file_info.path,
                language=file_info.language,
                compiler=file_info.compiler,
            )
        merged[rel].functions.extend(file_info.functions)
        merged[rel].globals_.extend(file_info.globals_)
        merged[rel].types.extend(file_info.types)

    print(f'  {len(merged)} unique source files after merge', flush=True)

    # --- Generate output ---
    out_root = Path(args.out)
    print(f'Writing stub files to {out_root}...', flush=True)
    implemented_bodies = (
        collect_implemented_bodies(out_root) if args.preserve_implemented else {}
    )
    if args.preserve_implemented:
        print(f'  Preserving {len(implemented_bodies)} implemented function bodies')

    # Stats
    files_written = 0
    funcs_written = 0

    for rel, file_info in sorted(merged.items()):
        if not file_info.functions and not file_info.path:
            continue

        normalize_file_info(file_info)

        out_path = out_root / rel
        out_path.parent.mkdir(parents=True, exist_ok=True)

        # Sort functions by address
        file_info.functions.sort(key=lambda f: f.addr)

        # Generate stub
        stub = generate_c_stub(
            file_info, file_info.functions, obj_syms, implemented_bodies
        )
        out_path.write_text(stub, encoding='utf-8')
        files_written += 1
        funcs_written += len(file_info.functions)

        if args.verbose:
            print(f'  {rel}  ({len(file_info.functions)} funcs)')

    print(f'Done: {files_written} files, {funcs_written} functions written to {out_root}')

    # --- Print folder tree summary ---
    print('\nSource tree:')
    dirs = sorted(set(
        str(Path(rel).parent)
        for rel in merged
    ))
    for d in dirs[:50]:
        print(f'  {d}/')
    if len(dirs) > 50:
        print(f'  ... and {len(dirs)-50} more directories')


if __name__ == '__main__':
    main()
