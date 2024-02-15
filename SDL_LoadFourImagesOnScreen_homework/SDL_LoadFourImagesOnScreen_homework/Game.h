#pragma once
#include "TextureManager.h"
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <vector>

class Game {
public:
	Game();
	~Game();

	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);

	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning() const;
	std::vector<bool> windws;

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
	SDL_Texture* texture = NULL;
	SDL_Rect sourceRectangle;
	SDL_Rect destinationRectangle;
	int mouseDownX, mouseDownY;
	int currentFrame;
	int currentRow;

};

