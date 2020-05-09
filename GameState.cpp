#include "GameState.hpp"

void GameState::render(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer,255,0,0,255);
    SDL_RenderFillRect(renderer, new SDL_Rect{50,50,50,50});
}
void GameState::update()
{

}