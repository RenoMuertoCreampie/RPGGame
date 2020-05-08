#include <SDL2/SDL_render.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <glm/glm.hpp>

int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cerr << "SDL cannot initilize: " << SDL_GetError() << std::endl; 
        std::exit(1);
    }

    std::cout << "Test22" << std::endl;

    SDL_Window* window = SDL_CreateWindow("Sample Window",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,600,0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED );
    

    bool running = true;
    while(running)
    {
        SDL_Event event;
        while(SDL_PollEvent(&event))
            switch(event.type)
            {
                case SDL_QUIT:
                {
                    running = false;    
                }break;
            }
        SDL_SetRenderDrawColor(renderer,255,255,255,255);
        SDL_RenderClear(renderer);
        

        SDL_RenderPresent(renderer);
    }

    SDL_Delay(5);

    return 0;
}
