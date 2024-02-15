#include "Game.h"
#include <iostream>
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "jpg", renderer);
			}
			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}
void Game::render() {
	SDL_SetRenderDrawColor(renderer, 204, 127, 81, 255);
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	TextureManager::Instance()->drawOneFrameFromTexture("jpg", 0, 0, 130, 130, currentRow, currentFrame, renderer);


	//SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);
	//TextureManager::Instance()->drawOneFrameFromTexture("jpg", 0, 0, 130, 130, 1, currentFrame, renderer);
	//TextureManager::Instance()->drawOneFrameFromTexture("jpg", 0, 130, 130, 130, 2, currentFrame, renderer);
	//TextureManager::Instance()->drawTexture("jpg", 0, 0, 184, 158, renderer);
	//TextureManager::Instance()->drawTexture("bmp", 300, 300, 184, 158, renderer, SDL_FLIP_HORIZONTAL);
	SDL_RenderPresent(renderer);
}
void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}
void Game::update() {
	std::cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n";
	std::cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n";
	std::cout << "SDL_TICKS / 100 % 5: " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";
	std::cout << "Roll          :" << currentRow << "\n";

	currentFrame = int(((SDL_GetTicks() / 100) % 5)); // % 5 for 5 Frame
	if (currentFrame == 4) {
		isSprt = true;

	}
	std::cout << "isIt          :" << isSprt << "\n";

	if (isSprt && currentFrame == 0) {

		currentRow++;

		isSprt = false;
	}

	if (currentRow > 2) {
		currentRow = 1;
	}

}
void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game::isRunning() {
	//return Game::running;
	return this->running;
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
	Game::currentRow = 1;
	isSprt = false;
}
Game::~Game() {
}