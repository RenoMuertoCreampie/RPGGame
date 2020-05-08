#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>

class Application
{
    public:
        Application(const char* title,int width,int height);

        void run();
        void render(SDL_Renderer* renderer);
        void update();
        void handleEvents();

    private:
        //std::vector<StateBase*> states;
        SDL_Window* window;
        SDL_Renderer* renderer;
        bool running = true;

        int width,height;
};

