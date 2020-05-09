CXX=cl
CFLAGS=/Wall /W2 /std:c++17 /EHsc
LIBS=SDL2.lib SDL2main.lib

SOURCES=main.cpp Application.cpp GameState.cpp
OBJECTS=main.obj Application.obj GameState.obj

all:$(OBJECTS)
	$(CXX) $(LIBS) $(CFLAGS) $(OBJECTS) /Fe:main.exe 
	main.exe

clean:
	rm main *.o

wclean:
	rm main.exe *.obj 

main.obj: main.cpp
	$(CXX) $(CFLAGS) -c main.cpp

Application.obj: Application.cpp Application.hpp
	$(CXX) $(CFLAGS) -c Application.cpp

GameState.obj: GameState.cpp BaseState.hpp GameState.hpp
	$(CXX) $(CFLAGS) -c GameState.cpp


