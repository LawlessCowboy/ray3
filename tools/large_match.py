#!/usr/bin/env python3
"""Manage the repeatable m2c-first workflow for large Rayman functions.

This helper never edits canonical source.  It stores m2c seeds, verifier
output, source snapshots, and hypothesis notes under the ignored build tree so
workers can iterate without losing evidence or clobbering another attempt.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
RUN_ROOT = ROOT / "build" / "large-match"


def run(*args: str, check: bool = False) -> subprocess.CompletedProcess[str]:
    return subprocess.run(args, cwd=ROOT, text=True, capture_output=True,
                          check=check)


def safe_name(function: str) -> str:
    return re.sub(r"[^A-Za-z0-9_.-]+", "_", function)


def info(function: str) -> dict:
    result = run(sys.executable, "tools/match.py", "show", function, check=True)
    return json.loads(result.stdout)


def paths(function: str) -> tuple[Path, Path, Path]:
    directory = RUN_ROOT / safe_name(function)
    return directory, directory / "state.json", directory / "source.snapshot"


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def load_state(function: str) -> dict:
    _, state_path, _ = paths(function)
    if not state_path.exists():
        return {"function": function, "iterations": [], "hypotheses": []}
    return json.loads(state_path.read_text())


def save_state(function: str, state: dict) -> None:
    directory, state_path, _ = paths(function)
    directory.mkdir(parents=True, exist_ok=True)
    state_path.write_text(json.dumps(state, indent=2, sort_keys=True) + "\n")


def classify(output: str) -> str:
    header = re.search(r"text=(\d+)/(\d+)\s+relocs=(\d+)/(\d+)", output)
    if header:
        candidate_size, target_size, candidate_relocs, target_relocs = map(int, header.groups())
        if candidate_size != target_size:
            return "codegen/control-flow"
        if candidate_relocs != target_relocs:
            return "relocation/global-layout"
    if re.search(r"(?m)^MATCH\s*$", output) and not re.search(r"(?m)^MISMATCH\s*$", output):
        return "match"
    if "OBJECT_ERROR" in output or "compile" in output.lower():
        return "compile-or-object"
    if re.search(r"reloc|GP|global|symbol", output, re.I):
        return "relocation/global-layout"
    if re.search(r"branch|delay|control flow|line map", output, re.I):
        return "control-flow"
    if re.search(r"register|schedule|instruction", output, re.I):
        return "codegen/scheduling"
    return "unclassified-mismatch"


def command_start(args: argparse.Namespace) -> int:
    function = args.function
    metadata = info(function)
    source = ROOT / metadata["source"]
    directory, _, snapshot = paths(function)
    directory.mkdir(parents=True, exist_ok=True)
    seed = directory / "m2c-seed.c"
    seed_result = run(sys.executable, "tools/m2c_seed.py", function,
                      "--output", str(seed))
    if seed_result.returncode:
        sys.stderr.write(seed_result.stdout + seed_result.stderr)
        return seed_result.returncode
    seed_text = seed.read_text(errors="replace")
    warnings = []
    if "M2C_UNK" in seed_text:
        warnings.append("seed contains M2C_UNK placeholders")
    if re.search(r"\*(?:\([^)]*\))?\s*0x[0-9A-Fa-f]+", seed_text):
        warnings.append("seed contains absolute-address accesses")
    if not snapshot.exists():
        snapshot.write_bytes(source.read_bytes())
    state = load_state(function)
    state.update({"function": function, "source": metadata["source"],
                  "seed": str(seed.relative_to(ROOT)),
                  "source_snapshot": str(snapshot.relative_to(ROOT)),
                  "source_sha256": sha256(source),
                  "started_at": datetime.now(timezone.utc).isoformat(),
                  "seed_warnings": warnings})
    save_state(function, state)
    print(f"seed: {seed.relative_to(ROOT)}")
    print(f"candidate source: {metadata['source']}")
    for warning in warnings:
        print(f"warning: {warning}; resolve it before treating the seed as a C baseline")
    if not args.skip_baseline:
        print("capturing canonical baseline...")
        command_check(argparse.Namespace(
            function=function,
            note="canonical baseline before m2c-derived transfer",
        ))
    print("Transfer the seed's evidence-supported natural C into the canonical "
          "source, then run `large_match.py check FUNCTION --note HYPOTHESIS`.")
    return 0


def command_check(args: argparse.Namespace) -> int:
    function = args.function
    metadata = info(function)
    source = ROOT / metadata["source"]
    directory, _, snapshot = paths(function)
    directory.mkdir(parents=True, exist_ok=True)
    if not snapshot.exists():
        snapshot.write_bytes(source.read_bytes())
    result = run(sys.executable, "tools/match.py", "check", function, "--diff")
    state = load_state(function)
    iteration = len(state.get("iterations", [])) + 1
    diff_path = directory / f"iteration-{iteration:03d}.diff"
    diff_path.write_text(result.stdout + result.stderr)
    entry = {"iteration": iteration, "at": datetime.now(timezone.utc).isoformat(),
             "status": "MATCH" if result.returncode == 0 else "MISMATCH",
             "classification": classify(result.stdout + result.stderr),
             "diff": str(diff_path.relative_to(ROOT)),
             "source_sha256": sha256(source)}
    if args.note:
        entry["note"] = args.note
    state.setdefault("iterations", []).append(entry)
    save_state(function, state)
    print(f"iteration {iteration}: {entry['status']} ({entry['classification']})")
    print(f"diff: {diff_path.relative_to(ROOT)}")
    return result.returncode


def command_note(args: argparse.Namespace) -> int:
    state = load_state(args.function)
    state.setdefault("hypotheses", []).append({
        "at": datetime.now(timezone.utc).isoformat(), "text": args.text,
    })
    save_state(args.function, state)
    print(f"recorded hypothesis for {args.function}")
    return 0


def command_status(args: argparse.Namespace) -> int:
    state = load_state(args.function)
    print(json.dumps(state, indent=2, sort_keys=True))
    return 0


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    sub = parser.add_subparsers(dest="command", required=True)
    start = sub.add_parser("start", help="generate seed and snapshot source")
    start.add_argument("function")
    start.add_argument("--skip-baseline", action="store_true",
                       help="do not run the initial canonical verifier check")
    start.set_defaults(func=command_start)
    check = sub.add_parser("check", help="run full verifier diff and save evidence")
    check.add_argument("function")
    check.add_argument("--note")
    check.set_defaults(func=command_check)
    note = sub.add_parser("note", help="record a concrete experiment hypothesis")
    note.add_argument("function")
    note.add_argument("text")
    note.set_defaults(func=command_note)
    status = sub.add_parser("status", help="show saved workflow state")
    status.add_argument("function")
    status.set_defaults(func=command_status)
    args = parser.parse_args()
    return args.func(args)


if __name__ == "__main__":
    raise SystemExit(main())
