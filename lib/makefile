SHELL := C:\Windows\System32\cmd.exe
BUILD_DIR := ..\libbuild
export BUILD_DIR

.PHONY: all
all: $(BUILD_DIR) std

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

.PHONY: std
std: $(BUILD_DIR)\std
	make -C .\std SHELL=$(SHELL)

$(BUILD_DIR)\std:
	mkdir $(BUILD_DIR)\std

.PHONY: clean
clean:
	rmdir /S /Q $(BUILD_DIR)
