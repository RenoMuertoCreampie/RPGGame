#define SDL_MAIN_HANDLED
#include "Application.hpp"

int main()
{
    Application app("Text",600,600);
    app.run();

    return 0;
}