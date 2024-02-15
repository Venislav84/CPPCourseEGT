#include "Shapes.h"
#include <math.h>

void Shapes::drawRecnatgle(SDL_Renderer* renderer, int xpos, int ypos, int width, int height, int border) {
	SDL_Rect fillRect = { xpos, ypos, width, height };
	SDL_SetRenderDrawColor(renderer, 128, 128, 0, 0);
	SDL_RenderFillRect(renderer, &fillRect);

	SDL_Rect secondFillRect = { xpos + border, ypos + border, width - (border * 2), height - (border * 2) };
	SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderFillRect(renderer, &secondFillRect);
}
