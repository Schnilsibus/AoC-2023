BUILD_DIR := ..\$(BUILD_DIR)\filesystem

.PHONY: all
all: $(BUILD_DIR)\fileio.o

$(BUILD_DIR)\fileio.o: fileio.c fileio.h
	$(CC) -c fileio.c $(CFLAGS) -o $(BUILD_DIR)\fileio.o