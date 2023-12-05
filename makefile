.PHONY: all
all: lib

.PHONY: lib
lib:
	make -f .\lib\makefile

clean:
	del *.o
	del *.exe