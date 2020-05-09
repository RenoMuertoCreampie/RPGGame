CXX=g++
CFLAGS=-Wall -Werror -pedantic -std=c++17
LIBS=-lSDL2 -lSDL2main

SOURCES=main.cpp Application.cpp GameState.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all:$(OBJECTS)
	@echo  Compilando esta puta mierda
	$(CXX) $(CFLAGS) $(OBJECTS) -o main.exe $(LIBS)

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

Application.o: Application.cpp Application.hpp
	$(CXX) $(CFLAGS) -c Application.cpp

GameState.o: GameState.cpp BaseState.hpp GameState.hpp
	$(CXX) $(CFLAGS) -c GameState.cpp


	


