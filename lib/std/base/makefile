BUILD_DIR := ..\$(BUILD_DIR)\base

all: $(BUILD_DIR)\stringx.o

$(BUILD_DIR)\stringx.o: stringx.c stringx.h
	$(CC) -c stringx.c $(CFLAGS) -o $(BUILD_DIR)\stringx.o