#include <SDL3/SDL.h>

SDL_FRect background = {0,0,100,100};

void renderBackground(SDL_Renderer * renderer)
{
    SDL_RenderFillRect(renderer, &background);
}