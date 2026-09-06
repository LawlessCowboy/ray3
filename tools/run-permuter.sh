#!/bin/sh
# Run the ignored upstream checkout with its ignored project-local dependencies.
perm_root=$(CDPATH= cd -- "$(dirname -- "$0")/.." && pwd)
export PYTHONPATH="$perm_root/tools/decomp-permuter/.deps${PYTHONPATH:+:$PYTHONPATH}"
exec python3 "$perm_root/tools/decomp-permuter/permuter.py" "$@"
