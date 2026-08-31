#!/usr/bin/env python3
"""Split source-owned Splat ranges in small batches.

Splat retains one full disassembler context per `asm` subsegment.  The Rayman
3 executable has enough debug-owned source ranges that one monolithic pass is
too memory hungry.  This runner keeps the active config's source-file layout,
but replaces all non-target ranges in each batch with cheap binary segments.
The resulting asm paths are exactly those in config/rayman3.yaml.
"""

from __future__ import annotations

import argparse
import copy
import re
import subprocess
import tempfile
from pathlib import Path

import yaml


ROOT = Path(__file__).resolve().parent.parent
CONFIG_PATH = ROOT / "config" / "rayman3.yaml"


def symbol_line_key(line: str) -> tuple[int, str]:
    """Sort Splat's generated definitions by address, then by name."""
    match = re.search(r"=\s*(0x[0-9A-Fa-f]+|\d+)\s*;", line)
    return (int(match.group(1), 0) if match else 0, line)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--batch-size", type=int, default=24)
    parser.add_argument("--start", type=int, default=0,
                        help="first source-range index to process")
    parser.add_argument("--count", type=int,
                        help="maximum number of source ranges to process")
    parser.add_argument("--quiet", action="store_true",
                        help="suppress Splat's per-range progress output")
    args = parser.parse_args()
    if args.batch_size < 1:
        raise SystemExit("--batch-size must be positive")

    config = yaml.safe_load(CONFIG_PATH.read_text())
    main_segment = next(
        segment for segment in config["segments"]
        if isinstance(segment, dict) and segment.get("name") == "main"
    )
    source_segments = main_segment["subsegments"]
    if not 0 <= args.start < len(source_segments):
        raise SystemExit(f"--start must be between 0 and {len(source_segments) - 1}")
    stop = min(len(source_segments), args.start + (args.count or len(source_segments)))
    code_start = main_segment["start"]
    code_end = next(
        segment[0] for segment in config["segments"]
        if isinstance(segment, list) and len(segment) == 1
    )

    with tempfile.TemporaryDirectory(prefix="rayman3-splat-") as temp_dir:
        temp_root = Path(temp_dir)
        undefined_func_lines: set[str] = set()
        undefined_sym_lines: set[str] = set()
        for batch_start in range(args.start, stop, args.batch_size):
            batch = source_segments[batch_start:min(batch_start + args.batch_size, stop)]
            next_index = batch_start + len(batch)
            batch_end = (source_segments[next_index][0]
                         if next_index < len(source_segments)
                         else code_end)
            batch_id = batch_start // args.batch_size
            subsegments = []
            if code_start < batch[0][0]:
                subsegments.append([code_start, "bin", f"skip/{batch_id:03d}_before"])
            subsegments.extend(batch)
            if batch_end < code_end:
                subsegments.append([batch_end, "bin", f"skip/{batch_id:03d}_after"])

            batch_config = copy.deepcopy(config)
            batch_options = batch_config["options"]
            batch_options["base_path"] = str(ROOT)
            batch_options["asset_path"] = str(temp_root / "assets")
            batch_options["build_path"] = str(temp_root / "build")
            batch_options["undefined_funcs_auto_path"] = str(
                temp_root / f"undefined_funcs_{batch_id:03d}.txt"
            )
            batch_options["undefined_syms_auto_path"] = str(
                temp_root / f"undefined_syms_{batch_id:03d}.txt"
            )
            batch_main = next(
                segment for segment in batch_config["segments"]
                if isinstance(segment, dict) and segment.get("name") == "main"
            )
            batch_main["subsegments"] = subsegments
            batch_path = temp_root / f"batch_{batch_id:03d}.yaml"
            batch_path.write_text(yaml.safe_dump(batch_config, sort_keys=False))

            print(
                f"[{batch_start + 1}-{next_index}/{len(source_segments)}] "
                f"0x{batch[0][0]:X}-0x{batch_end:X}: {len(batch)} source ranges",
                flush=True,
            )
            output = subprocess.DEVNULL if args.quiet else None
            subprocess.run(
                ["splat", "split", str(batch_path)], cwd=ROOT, check=True,
                stdout=output, stderr=output,
            )
            for option, destination in (
                ("undefined_funcs_auto_path", undefined_func_lines),
                ("undefined_syms_auto_path", undefined_sym_lines),
            ):
                generated_path = Path(batch_options[option])
                if generated_path.exists():
                    destination.update(
                        line.strip() for line in generated_path.read_text().splitlines()
                        if line.strip()
                    )

    if args.start == 0 and stop == len(source_segments):
        expected = [ROOT / "asm" / f"{segment[2]}.s" for segment in source_segments]
        missing = [path for path in expected if not path.exists()]
        if missing:
            raise SystemExit(f"Splat did not write {len(missing)} expected asm files")
        expected_set = set(expected)
        stale = [path for path in (ROOT / "asm").rglob("*.s")
                 if path not in expected_set]
        for output_path, lines in (
            (ROOT / config["options"]["undefined_funcs_auto_path"],
             undefined_func_lines),
            (ROOT / config["options"]["undefined_syms_auto_path"],
             undefined_sym_lines),
        ):
            output_path.write_text(
                "".join(f"{line}\n" for line in sorted(lines, key=symbol_line_key))
            )
        print(f"Completed {len(expected)} source-owned asm ranges.")
        if stale:
            print(
                f"Kept {len(stale)} obsolete generated asm files that are no longer "
                "listed by the config."
            )
    else:
        print(f"Completed source ranges {args.start + 1}-{stop}.")


if __name__ == "__main__":
    main()
