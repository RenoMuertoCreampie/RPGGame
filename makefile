CXX=g++
CFLAGS=-Wall -Werror -pedantic -std=c++2a 
LIBS=-lSDL2 -lSDL2main

SOURCES=main.cpp
OBJECTS=main.o

all:$(OBJECTS)
	$(CXX) $(CFLAGS) $(OBJECTS) -o main $(LIBS)
	./main

main.o: main.cpp
	$(CXX) $(CFLAGS) -c $(SOURCES)


