CXX=cl
CFLAGS=/Wall /W2 /std:c++17 /EHsc /Iinclude
LIBS=SDL2.lib SDL2main.lib

SOURCES=Sources/*.cpp
OBJECTS=Build/main.obj Build/Application.obj Build/GameState.obj

all:$(OBJECTS)
	$(CXX) $(LIBS) $(CFLAGS) $(OBJECTS) /Fe:Build/main.exe 
	Build/main.exe

clean:
	rm main *.o

Build/main.obj: Sources/main.cpp
	$(CXX) $(CFLAGS) -c Sources/main.cpp /Fo:Build/

Build/Application.obj: Sources/Application.cpp Include/Application.hpp
	$(CXX) $(CFLAGS) -c Sources/Application.cpp /Fo:Build/

Build/GameState.obj: Sources/GameState.cpp Include/BaseState.hpp Include/GameState.hpp
	$(CXX) $(CFLAGS) -c Sources/GameState.cpp /Fo:Build/
