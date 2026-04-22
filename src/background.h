#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SDL3/SDL.h>
extern SDL_FRect legalDropZone;
void renderBackground(SDL_Renderer * renderer);
bool checkDropZone(float x, float y);

#endif