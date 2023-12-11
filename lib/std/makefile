BUILD_DIR := ..\$(BUILD_DIR)\std

all: $(BUILD_DIR)\fileio.o $(BUILD_DIR)\string.o

$(BUILD_DIR)\fileio.o: fileio.c fileio.h
	$(CC) -c fileio.c $(CFLAGS) -o $(BUILD_DIR)\fileio.o

$(BUILD_DIR)\string.o: string.c string.h
	$(CC) -c string.c $(CFLAGS) -o $(BUILD_DIR)\string.o