#pragma once
#include <iostream>
#include <SDL.h>
#include "Shapes.h"

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

private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;
};
