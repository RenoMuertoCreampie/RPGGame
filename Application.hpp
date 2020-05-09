#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "BaseState.hpp"

class Application
{
    public:
        Application(const char* title,int width,int height);
        ~Application();
        void run();
        void render(SDL_Renderer* renderer);
        void update();
        void handleEvents();

    private:
        std::vector<BaseState*> states;
        SDL_Window* window;
        SDL_Renderer* renderer;
        bool running = true;

        int width,height;
};

