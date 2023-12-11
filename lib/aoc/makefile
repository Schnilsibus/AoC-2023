BUILD_DIR := ..\$(BUILD_DIR)\aoc

all: $(BUILD_DIR)\input.o

$(BUILD_DIR)\input.o: input.c input.h
	$(CC) -c input.c $(CFLAGS) -o $(BUILD_DIR)\input.o