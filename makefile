include gmsl
include lib\libmake

SHELL := C:\Windows\System32\cmd.exe
CC := gcc
CFLAGS := -ansi -pedantic -Wall -Wextra
AOC_BUILD_DIR := aocbuild
AOC_DAYS := $(wildcard Day*)
export SHELL
export CC
export CFLAGS

.PHONY: all
all: lib

.PHONY: lib
lib:
	make -C .\lib -f libmake

$(AOC_BUILD_DIR):
	mkdir $(AOC_BUILD_DIR)

.PHONY: $(AOC_DAYS)
$(AOC_DAYS):
	@echo trying to compile $@\main.c in $(AOC_BUILD_DIR)\$(call lc, $@).exe
	$(CC) $@\main.c -o $(AOC_BUILD_DIR)\$(call lc, $@).exe

.PHONY: clean
clean:
	-rmdir /S /Q $(AOC_BUILD_DIR)
	make -C .\lib -f libmake clean