#include <SDL3/SDL.h>
//1000(x) x 800(y) window
SDL_FRect table1 = {0,0,2,400};
SDL_FRect table2 = {998,0,2,400};
SDL_FRect table3 = {0,400,1000,2};

//x,y,bredd(x),höjd(y)
SDL_FRect workspace1 = {0,450,2,350};           //x 0-400. y 450
SDL_FRect workspace2 = {0,450,400,2};
SDL_FRect workspace3 = {400,450,2,500};

SDL_FRect legalDropZone = {0,450,400,500};

bool checkDropZone(float x, float y)
{
    return (x >= legalDropZone.x &&
            x <= legalDropZone.x + legalDropZone.w &&
            y >= legalDropZone.y &&
            y <= legalDropZone.y + legalDropZone.h);
}

SDL_FRect deliveryArea1 = {400,500,2,300};
SDL_FRect deliveryArea2 = {400,500,300,2};

SDL_FRect oven1 = {700,450,2,350};
SDL_FRect oven2 = {700,450,300,2};

SDL_FRect ovenDoor1 = {800,700,2,50};
SDL_FRect ovenDoor2 = {950,700,2,50};
SDL_FRect ovenDoor3 = {800,750,150,2};
SDL_FRect ovenDoor4 = {800,700,150,2};

void renderBackground(SDL_Renderer * renderer)
{
    SDL_RenderFillRect(renderer, &table1);
    SDL_RenderFillRect(renderer, &table2);
    SDL_RenderFillRect(renderer, &table3);

    SDL_RenderFillRect(renderer, &workspace1);
    SDL_RenderFillRect(renderer, &workspace2);
    SDL_RenderFillRect(renderer, &workspace3);

    SDL_RenderFillRect(renderer, &deliveryArea1);
    SDL_RenderFillRect(renderer, &deliveryArea2);
    
    SDL_RenderFillRect(renderer, &oven1);
    SDL_RenderFillRect(renderer, &oven2);

    SDL_RenderFillRect(renderer, &ovenDoor1);
    SDL_RenderFillRect(renderer, &ovenDoor2);
    SDL_RenderFillRect(renderer, &ovenDoor3);
    SDL_RenderFillRect(renderer, &ovenDoor4);
}