# Rayman 3 (PS2 Korean) — MWCC object build
#
# This builds the currently recovered C/C++ translation units to individual
# MWCC objects.  It intentionally does not link: a byte-faithful link still
# needs the original/recovered PS2 SDK libraries, runtime objects, and LCF.

SHELL := /bin/bash

SRC_DIR := src
INCLUDE_DIR := include
BUILD_DIR := build
OBJ_DIR := $(BUILD_DIR)/obj

# CodeWarrior PS2 3.0 (2001-11-26) and Wibo are intentionally not distributed.
# Set these to local installations, for example:
#   make WIBO=/path/to/wibo-x86_64 MWCC=/path/to/mwccps2.exe
WIBO ?= wibo-x86_64
MWCC ?= mwccps2.exe
MWCC_RUN := $(WIBO) $(MWCC)

TOOLS_DIR := tools

# Evidence-backed project profile:
# - Debug sections are present in the target.
# - level=3 and level=4 are codegen-equivalent in every current MWCCPS2 probe;
#   level=3 is selected as the conservative spelling.
# - Do not use -opt all/full or -opt speed: target-shaped loop evidence differs.
# - farcall=off and sdatathreshold=8 have direct target evidence.
# - inline=off, strings=reuse,nopool, and enum=int are compiler defaults and
#   currently have no evidence of project-wide override.
MWCC_FLAGS := -c -g -opt level=3 -farcall off -sdatathreshold 8 \
              -inline off -strings reuse,nopool -enum int
CPPFLAGS := -I$(INCLUDE_DIR)

# Escaping spaces keeps GNU make paths such as "Program Files/..." intact.
SOURCES := $(shell find $(SRC_DIR) -type f \( -name '*.c' -o -name '*.cpp' -o -name '*.cxx' \) -print | sed 's/ /\\ /g')
OBJECTS := $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%.o,$(SOURCES))

.DEFAULT_GOAL := objects
.PHONY: all objects extract list dry-run clean

all: objects

objects: $(OBJECTS)

# The extension is retained in the object name (for example foo.c.o), which
# makes one pattern rule work for C, CPP, and CXX paths without collisions.
$(OBJ_DIR)/%.o: $(SRC_DIR)/%
	@mkdir -p "$(@D)"
	$(MWCC_RUN) $(CPPFLAGS) $(MWCC_FLAGS) "$<" -o "$@"

extract:
	@test -n "$(TARGET)" || (echo "Set TARGET=/path/to/SLKA_250.78"; exit 2)
	python3 $(TOOLS_DIR)/extract_debug.py "$(TARGET)" --out $(SRC_DIR) \
		--preserve-implemented

list:
	@printf '%s\n' $(SOURCES)

dry-run:
	@printf 'MWCC: %s\n' "$(MWCC_RUN)"
	@printf 'Flags: %s %s\n' "$(CPPFLAGS)" "$(MWCC_FLAGS)"
	@printf 'Sources: %s\n' "$(words $(SOURCES))"
	@printf 'Objects: %s\n' "$(words $(OBJECTS))"

clean:
	rm -rf "$(OBJ_DIR)"
