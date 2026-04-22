#include <SDL3/SDL.h>
//x,y,bredd(x),höjd(y)
SDL_FRect pizzaDough = {300,200,75,75};


void renderPizza(SDL_Renderer * renderer)
{
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &pizzaDough);
}