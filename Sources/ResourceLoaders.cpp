#include "ResourceLoaders.hpp"

SDL_Texture* loadImageFrom(SDL_Renderer* renderer,const std::string filepath)
{
    if(!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
    {
        std::cerr << "Error initializing SDL_image" << std::endl;
        std::exit(1);
    }
    SDL_Surface* loadedSurface = IMG_Load(filepath.c_str());
    if(loadedSurface == nullptr)
    {
        std::cerr << "Error: " << IMG_GetError() << std::endl;
        std::exit(1);
    }
    return SDL_CreateTextureFromSurface(renderer,loadedSurface);
}