CXX=cl
CFLAGS=/Wall /W2 /std:c++17 /EHsc /Iinclude
LIBS=SDL2.lib SDL2main.lib SDL2_image.lib

SOURCES=Sources/*.cpp
OBJECTS=Build/main.obj Build/Application.obj Build/GameState.obj Build/ResourceLoaders.obj

all:$(OBJECTS)
	@echo [Info] Compilando esta mierda
	$(CXX) $(LIBS) $(CFLAGS) $(OBJECTS) /Fe:Build/main.exe
	@echo [Info] Mierda compilada
	.\Build\main.exe
	
clean:
	del /q Build\*.*

Build/main.obj: Sources/main.cpp
	$(CXX) $(CFLAGS) -c Sources/main.cpp /Fo:Build/

Build/Application.obj: Sources/Application.cpp Include/Application.hpp
	$(CXX) $(CFLAGS) -c Sources/Application.cpp /Fo:Build/

Build/GameState.obj: Sources/GameState.cpp Include/BaseState.hpp Include/GameState.hpp
	$(CXX) $(CFLAGS) -c Sources/GameState.cpp /Fo:Build/

Build/ResourceLoaders.obj: Sources/ResourceLoaders.cpp Include/ResourceLoaders.hpp
	$(CXX) $(CFLAGS) -c Sources/ResourceLoaders.cpp /Fo:Build/
