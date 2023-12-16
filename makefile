include gmsl
include lib\libmake

SHELL := C:\Windows\System32\cmd.exe
CC := gcc
CFLAGS := -ansi -pedantic -Wall -Wextra
AOC_BUILD_DIR := aocbuild
AOC_DAYS := $(wildcard Day*)
BUILD_DAYS := $(addprefix $(AOC_BUILD_DIR)\,$(addsuffix .exe,$(call lc,$(AOC_DAYS))))
export SHELL
export CC
export CFLAGS

.PHONY: all
all: lib $(AOC_BUILD_DIR) $(BUILD_DAYS)

.PHONY: info
info:
	@echo BUILD_DAYS: $(BUILD_DAYS)

.PHONY: lib
lib:
	make -C lib -f libmake

$(AOC_BUILD_DIR):
	mkdir $(AOC_BUILD_DIR)

$(BUILD_DAYS): $(call uc,$(basename $(notdir $@)))\main.c
	@echo traing to compile $(call uc,$(basename $(notdir $@)))\main.c
	$(CC) $@\main.c -o $(AOC_BUILD_DIR)\$(call lc, $@).exe
