#include <SDL3/SDL.h>
#include "pizza.h"
#include "background.h"

bool currentlyMoving = false;
float offsetX, offsetY;
void checkDragAndDrop(SDL_Event buttonPressed)
{
    if (buttonPressed.type == SDL_EVENT_MOUSE_BUTTON_DOWN)
    {
        float moveX = buttonPressed.button.x;
        float moveY = buttonPressed.button.y;

        if (SDL_PointInRectFloat(&(SDL_FPoint){moveX, moveY}, &pizzaDough))
        {
            currentlyMoving = true;
            offsetX = moveX - pizzaDough.x;
            offsetY = moveY - pizzaDough.y;
        }
    }
    
    
    if (buttonPressed.type == SDL_EVENT_MOUSE_BUTTON_UP)
    {
        float moveX = buttonPressed.button.x;
        float moveY = buttonPressed.button.y;

        if(checkDropZone(moveX,moveY))
        {
            currentlyMoving = false;
        }
        
    }

    
    if (buttonPressed.type == SDL_EVENT_MOUSE_MOTION && currentlyMoving)
    {
        pizzaDough.x = buttonPressed.motion.x - offsetX;
        pizzaDough.y = buttonPressed.motion.y - offsetY;
    }
}