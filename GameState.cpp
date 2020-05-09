#include "GameState.hpp"

GameState::GameState(Application* app) : BaseState(app)
{
    std::cout << "GameState constructor" << std::endl;
}
GameState::~GameState()
{
    std::cout << "GameState destructor" << std::endl;
}
void GameState::render(SDL_Renderer* renderer)
{
    SDL_SetRenderDrawColor(renderer,255,0,0,255);
    SDL_Rect rect = {50,50,50,50};
    SDL_RenderFillRect(renderer, &rect);
}
void GameState::update()
{

}