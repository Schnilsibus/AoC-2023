CC := gcc
CFLAGS := -ansi -pedantic -Wall -Wextra
export CC
export CFLAGS

.PHONY: all
all: lib

.PHONY: lib
lib:
	make -C .\lib

.PHONY: clean
clean:
	make -C .\lib clean