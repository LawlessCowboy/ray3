# TU unblocking agent

Work on one blocked translation unit at a time. Read `build/match/compileability.json`, reproduce the first compiler diagnostic, and fix only extractor-generated issues: duplicate declarations, missing forward types, malformed C++ ownership, or invalid aggregate emission. Do not implement function bodies or use speculative casts. Run `python3 tools/match.py preflight --jobs 4` after the fix and report the before/after compileability result.
