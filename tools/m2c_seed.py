#!/usr/bin/env python3
"""Generate an m2c scaffold for a Rayman function.

The output is only a candidate for refinement and verification; it never
replaces canonical source automatically.
"""

from __future__ import annotations

import argparse
import importlib.util
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parent.parent


def metadata(function: str) -> dict:
    result = subprocess.run(
        [sys.executable, str(ROOT / "tools/match.py"), "show", function],
        cwd=ROOT, check=True, capture_output=True, text=True,
    )
    return json.loads(result.stdout)


def find_asm(function: str, preferred_source: str | None) -> Path:
    matches = []
    for path in (ROOT / "asm").rglob("*.s"):
        try:
            text = path.read_text(errors="ignore")
        except OSError:
            continue
        if f"glabel {function}" in text:
            matches.append(path)
    if not matches:
        raise SystemExit(f"no asm file containing glabel {function!r} was found")
    if preferred_source:
        source_name = Path(preferred_source).stem.lower()
        for path in matches:
            if source_name in path.stem.lower():
                return path
    return matches[0]


def m2c_command() -> list[str]:
    configured = os.environ.get("M2C")
    executable = configured or shutil.which("m2c")
    if executable:
        return [executable]
    local_main = ROOT / "tools/m2c-lib/m2c/main.py"
    if local_main.exists():
        return [sys.executable, "-m", "m2c.main"]
    if importlib.util.find_spec("m2c") is not None:
        return [sys.executable, "-m", "m2c"]
    raise SystemExit(
        "m2c is not installed; install it with "
        "python3 -m pip install 'm2c @ git+https://github.com/matt-kempster/m2c.git'"
    )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("function", help="indexed Rayman function name")
    parser.add_argument("-o", "--output", type=Path, help="write the seed C file here")
    parser.add_argument("--asm", type=Path, help="override the assembly input")
    parser.add_argument("--context", action="append", type=Path, help="additional m2c context file")
    parser.add_argument("--no-source-context", action="store_true")
    args = parser.parse_args()

    info = metadata(args.function)
    source = ROOT / info["source"]
    asm = args.asm
    if asm and not asm.is_absolute():
        asm = ROOT / asm
    asm = asm or find_asm(args.function, info.get("source"))
    language = "c++" if info.get("language") == "C++" else "c"
    command = m2c_command() + ["--target", f"mipsel-mwcc-{language}", "--valid-syntax", "--globals=used", "-f", args.function]
    contexts = [] if args.no_source_context else [source]
    contexts += [ROOT / item if not item.is_absolute() else item for item in (args.context or [])]
    for context in contexts:
        command += ["--context", str(context)]
    command.append(str(asm))
    print("m2c seed:", " ".join(command), file=sys.stderr)
    env = os.environ.copy()
    local_lib = ROOT / "tools/m2c-lib"
    if local_lib.exists():
        env["PYTHONPATH"] = str(local_lib) + os.pathsep + env.get("PYTHONPATH", "")
    result = subprocess.run(command, cwd=ROOT, env=env, text=True, capture_output=True)
    # The recovered source templates contain preprocessor directives that the
    # current m2c parser cannot consume.  Retry without source context so the
    # worker still receives a useful assembly-derived scaffold; the context is
    # advisory and can be restored manually after generation.
    if result.returncode and contexts and "Directives not supported" in result.stdout:
        fallback = [part for part in command]
        context_args = {str(path) for path in contexts}
        filtered = []
        i = 0
        while i < len(fallback):
            if fallback[i] == "--context" and i + 1 < len(fallback) and fallback[i + 1] in context_args:
                i += 2
                continue
            filtered.append(fallback[i])
            i += 1
        print("m2c seed: source context rejected; retrying without context", file=sys.stderr)
        result = subprocess.run(filtered, cwd=ROOT, env=env, text=True, capture_output=True)
    if result.returncode:
        if result.stdout:
            sys.stderr.write(result.stdout)
        sys.stderr.write(result.stderr)
        return result.returncode
    if args.output:
        output = args.output if args.output.is_absolute() else ROOT / args.output
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text(result.stdout)
    else:
        sys.stdout.write(result.stdout)
    if result.stderr:
        sys.stderr.write(result.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
