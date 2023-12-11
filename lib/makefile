BUILD_DIR := ..\libbuild
export BUILD_DIR

all: std aoc

.PHONY: aoc
aoc: $(BUILD_DIR)\aoc
	make -C .\aoc

.PHONY: std
std: $(BUILD_DIR)\std
	make -C .\std

$(BUILD_DIR)\aoc:
	mkdir $(BUILD_DIR)\aoc

$(BUILD_DIR)\std:
	mkdir $(BUILD_DIR)\std

.PHONY: clean
clean:
	rmdir /S /Q $(BUILD_DIR)
	mkdir $(BUILD_DIR)
