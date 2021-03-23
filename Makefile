GXX = g++
DEPS =  il.cpp
ARGS = -g -Wall

all:
	$(GXX) $(ARGS) $(DEPS) -o il

clean:
	rm il.exe