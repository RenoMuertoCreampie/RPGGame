#include "Application.hpp"

Application::Application(const char* title,int width,int height) : width(width), height(height)
{

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cerr << "SDL cannot initilize: " << SDL_GetError() << std::endl; 
        std::exit(1);
    }

    window = SDL_CreateWindow(title,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,width,height,0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
   
}

void printFPS(uint32_t deltaTime)
{
    static int frames = 0;
    static int time = 0;
    time+=deltaTime;
    frames++;
    if(time >= 1000)
    {
        std::cout << "FPS: " << frames << '\n';
        frames = 0;
        time = 0;
    }
}

void Application::run()
{
    uint32_t deltaTime = 0;
    while(running)
    {
        auto begin = SDL_GetTicks();
        printFPS(deltaTime);
        update();
        render(renderer);
        handleEvents();
        
        SDL_SetRenderDrawColor(renderer,255,255,255,255);
        SDL_RenderClear(renderer);
        
        SDL_RenderPresent(renderer);
        deltaTime = SDL_GetTicks() - begin;
    }
}

void Application::render(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderClear(renderer);
    

    SDL_RenderPresent(renderer);
}

void Application::update()
{

}

void Application::handleEvents()
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
}
