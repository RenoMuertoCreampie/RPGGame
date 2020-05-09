#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include "Application.hpp"

class Application;

class GameState : public BaseState
{
    public:
        GameState(Application* app);
        ~GameState();
        void render(SDL_Renderer* renderer) override;
        void update() override;
    
    private:
        
};