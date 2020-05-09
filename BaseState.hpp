#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include "Application.hpp"

class Application;

class BaseState
{
    public:
        BaseState(Application* app) : app(app)
            {}
        virtual void render(SDL_Renderer* renderer) = 0;
        virtual void update() = 0;
    
    private:
        Application* app;
};