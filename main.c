#include <stdio.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include "src/background.h"
#include "src/pizza.h"
#include "src/movement.h"

int main(int argc, char *argv[])
{
    SDL_Window *window = SDL_CreateWindow("Pizza Place!", 1000, 800, 0); // Skapar mitt fönster. Namn, bredd, höjd, flaggor.
    SDL_ShowWindow(window);                                              // Visa mitt fönster
    SDL_Renderer *renderer;
    renderer = SDL_CreateRenderer(window, 0);
    SDL_Event buttonPressed;

    while (1)
    {
        while (SDL_PollEvent(&buttonPressed)) // Pollad lösning: har något hänt?
        {
            if (buttonPressed.type == SDL_EVENT_QUIT) // Trycker användaren på x
            {
                SDL_DestroyRenderer(renderer);
                SDL_DestroyWindow(window); // Stäng fönster
                SDL_Quit();                // Stäng program
                return 0;
            }

            checkDragAndDrop(buttonPressed);
            
        }
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // set color to white
        SDL_RenderClear(renderer);                            // White background

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        renderBackground(renderer);

        renderPizza(renderer);
        SDL_RenderPresent(renderer);
    }

    return 0;
}