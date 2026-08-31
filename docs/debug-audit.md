# Linked-ELF audit and intermediate export

`debug_export.py` is a read-only companion to `extract_debug.py`.  It never
creates or changes `src/`; it emits a JSON snapshot that retains parser output,
symtab cross-checks, line-map coverage, duplicates, and raw type-record kind
counts.

Run it from `Compiler`:

```sh
python3 debug_export.py SLKA_250.78 --out debug-export.json
python3 test_debug_export.py
```

The JSON is deliberately evidence-preserving:

- `parser_candidates` contains the current parser result and both its debug
  source path and the independently read symtab name/size.
- `name_matches_symtab` and `address_candidate_count` are confidence signals,
  not a claim that a mismatch is invalid debug data.
- `line_without_parser_candidate` and `symtab_without_parser_candidate` are
  address lists for future parser work.
- `type_record_inventory` counts only named records currently recovered by the
  parser.  It deliberately does not claim a full raw type-table count: the
  exact linked-ELF type-graph boundaries still need probe-backed decoding.

This is an intermediate format, not a stable public schema.  It is suitable as
the input to future reconciliation/type-recovery tools and avoids overwriting
the existing generated stubs while the parser is still being improved.
