# Data-model recovery agent

Work within one compileable TU. Inventory globals, enums, structs/unions, base offsets, and implicit padding. Validate layouts against small accessor functions and target relocations. Correct parser/emitter logic when evidence is systematic; do not force individual matches with raw pointers or invented fields. Record reusable findings with `tools/match.py insight`.
