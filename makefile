CXX=g++
CFLAGS=-Wall -Werror -pedantic -std=c++2a 
LIBS=-lSDL2 -lSDL2main

SOURCES=main.cpp Application.cpp GameState.cpp
OBJECTS=main.o Application.o GameState.o

all:$(OBJECTS)
	$(CXX) $(CFLAGS) $(OBJECTS) -o main $(LIBS)
	./main

clean:
	rm main *.o

main.o: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

Application.o: Application.cpp Application.hpp
	$(CXX) $(CFLAGS) -c Application.cpp

GameState.o: GameState.cpp BaseState.hpp GameState.hpp
	$(CXX) $(CFLAGS) -c GameState.cpp


