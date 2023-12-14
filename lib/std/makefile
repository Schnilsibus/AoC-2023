BUILD_DIR := ..\$(BUILD_DIR)\std

.PHONY: all
all: base filesystem

.PHONY: base
base: $(BUILD_DIR)\base
	make -C .\base SHELL=$(SHELL)

$(BUILD_DIR)\base:
	mkdir $(BUILD_DIR)\base

.PHONY: filesystem
filesystem: $(BUILD_DIR)\filesystem
	make -C .\filesystem SHELL=$(SHELL)

$(BUILD_DIR)\filesystem:
	mkdir $(BUILD_DIR)\filesystem