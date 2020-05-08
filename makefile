CXX=g++
CFLAGS=-Wall -Werror -pedantic -std=c++2a 
LIBS=-lSDL2 -lSDL2main

SOURCES=main.cpp Application.cpp
OBJECTS=main.o Application.o

all:$(OBJECTS)
	$(CXX) $(CFLAGS) $(OBJECTS) -o main $(LIBS)
	./main

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

Application.o: Application.cpp Application.hpp
	$(CXX) $(CFLAGS) -c Application.cpp


