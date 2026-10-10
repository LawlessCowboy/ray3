# Rayman 3 (PS2 Korean) — MWCC object build
#
# This builds the currently recovered C/C++ translation units to individual
# MWCC objects.  It intentionally does not link: a byte-faithful link still
# needs the original/recovered PS2 SDK libraries, runtime objects, and LCF.

SHELL := /bin/bash

SRC_DIR := src/Rayman3
INCLUDE_DIR := include
BUILD_DIR := build
OBJ_DIR := $(BUILD_DIR)/obj

# CodeWarrior PS2 compilers and Wibo are intentionally not distributed.
# Game sources use 3.0.1 (2002-01-23); the PS2GL library uses 3.0 (2001-11-26).
# Set these to local installations, for example:
#   make WIBO=/path/to/wibo-x86_64 MWCC=/path/to/3.0/mwccps2.exe GAME_MWCC=/path/to/3.0.1/mwccps2.exe
WIBO ?= wibo-x86_64
MWCC ?= mwccps2.exe
GAME_MWCC ?= $(MWCC)
# Game files listed here build with 3.0.3 (2002-07-16) instead; see the file header.
LATE_GAME_MWCC ?= $(GAME_MWCC)
LATE_GAME_SOURCES := $(patsubst src/Rayman3/%,%,$(shell grep -v '^\#' config/compiler-3.0.3-sources.txt))
# Library files that also take -O3,p (evidence in the list file).
comma := ,
LIBRARY_O3P_SOURCES := $(patsubst src/Rayman3/%,%,$(shell grep -v '^\#' config/library-O3p-sources.txt))
MWCC_RUN := $(WIBO) $(MWCC)

# MWCC searches this directory for angle-bracket standard headers.  The small
# compatibility header in this repository is sufficient for the recovered
# templates; a full PS2 SDK include tree can override it.
MWC_INCLUDES ?= $(abspath $(INCLUDE_DIR)/mwcc)
MWCC_ENV := MWCIncludes="$(MWC_INCLUDES)"

TOOLS_DIR := tools

# Evidence-backed project profile:
# - Debug sections are present in the target.
# - level=3 and level=4 are codegen-equivalent in every current MWCCPS2 probe;
#   level=3 is selected as the conservative spelling.
# - optimize_for_size off (speed): the target unrolls loops (e.g. by 8 in
#   PS2M2D_vReinitMenuTextures); adding it regressed no recorded match. The
#   command-line spelling -opt speed,level=3 has no effect, so use the pragma.
# - farcall=off and sdatathreshold=8 have direct target evidence.
# - inline=on, -Cpp_exceptions off and fast_fptosi were each adopted after
#   whole-repo probes with no recorded-match regressions.
# - strings=readonly: retail never addresses a string literal through GP small
#   data; without it, literals of 8 bytes or less land in .sdata.
# - padloop: R5900 short-loop workaround; retail pads short loops with nops.
# - enum=int is the compiler default.
# - dividefix (game sources only): retail game code has two nops between a
#   div.s and a following branch or call (202 of 204 sites); the PS2GL library
#   has none (114 of 117), and enabling it there loses 89 library matches.
# - inline deferred (game sources only): retail game objects list functions in
#   reverse source order, which is what deferred inlining emits; it also lets
#   a function inline a helper defined later in our ELF-ordered files. A
#   whole-game sweep lost no recorded match.
# - -O3,p (game sources only): the UNIX-style speed spelling, unlike
#   '-opt level=3' with the optimize_for_size pragma, pads loop-head branch
#   targets to 8 bytes with a nop as retail game code does (+48 matches, none
#   lost; the PS2GL library loses 89 with it).
MWCC_FLAGS := -c -g -opt level=3 -farcall off -sdatathreshold 8 \
              -inline on -strings reuse,nopool,readonly -enum int \
              -Cpp_exceptions off -pragma "fast_fptosi on" -pragma "padloop on" \
              -pragma "optimize_for_size off"
GAME_SOURCE_ROOT := Disk_01/R3PS2_SCEA_engine_sources
GAME_MWCC_FLAGS := -pragma "dividefix on" -inline deferred -O3,p
CPPFLAGS := -I$(INCLUDE_DIR)

# Escaping spaces keeps GNU make paths such as "Program Files/..." intact.
SOURCES := $(shell find $(SRC_DIR) -type f \( -name '*.c' -o -name '*.cpp' -o -name '*.cxx' \) -print | sed 's/ /\\ /g')
OBJECTS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%.o,$(SOURCES))

.DEFAULT_GOAL := objects
.PHONY: all objects extract list dry-run clean match-doctor match-coverage

all: objects

objects: $(OBJECTS)

# The extension is retained in the object name (for example foo.c.o), which
# makes one pattern rule work for C, CPP, and CXX paths without collisions.
$(OBJ_DIR)/%.o: $(SRC_DIR)/%
	@mkdir -p "$(@D)"
	$(MWCC_ENV) $(WIBO) $(if $(filter $(LATE_GAME_SOURCES),$(patsubst $(SRC_DIR)/%,%,$<)),$(LATE_GAME_MWCC),$(if $(findstring /$(GAME_SOURCE_ROOT)/,/$<),$(GAME_MWCC),$(MWCC))) $(CPPFLAGS) $(MWCC_FLAGS) $(if $(findstring /$(GAME_SOURCE_ROOT)/,/$<),$(GAME_MWCC_FLAGS)) $(if $(filter $(LIBRARY_O3P_SOURCES),$(patsubst $(SRC_DIR)/%,%,$<)),-O3$(comma)p) "$<" -o "$@"

extract:
	@test -n "$(TARGET)" || (echo "Set TARGET=/path/to/SLKA_250.78"; exit 2)
	python3 $(TOOLS_DIR)/extract_debug.py "$(TARGET)" --out $(SRC_DIR) \
		--preserve-implemented

list:
	@printf '%s\n' $(SOURCES)

dry-run:
	@printf 'MWCC: %s\n' "$(MWCC_RUN)"
	@printf 'Game MWCC: %s\n' "$(GAME_MWCC)"
	@printf 'Flags: %s %s\n' "$(CPPFLAGS)" "$(MWCC_FLAGS)"
	@printf 'Game-source flags: %s\n' "$(GAME_MWCC_FLAGS)"
	@printf 'Sources: %s\n' "$(words $(SOURCES))"
	@printf 'Objects: %s\n' "$(words $(OBJECTS))"

match-doctor:
	python3 $(TOOLS_DIR)/match.py doctor

match-coverage:
	python3 $(TOOLS_DIR)/match.py coverage

clean:
	rm -rf "$(OBJ_DIR)"
