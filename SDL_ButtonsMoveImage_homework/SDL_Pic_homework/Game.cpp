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
				// ADD PICTURE TO WINDOW
				//TextureManager::Instance()->loadTexture("assets/Sprite-Sheet.jpg", "jpg", renderer);
				SDL_Surface* tempSurface = IMG_Load("assets/odg.png");
				texture = SDL_CreateTextureFromSurface(renderer, tempSurface);
				SDL_FreeSurface(tempSurface);
				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);
				destinationRectangle.x = sourceRectangle.x = 0;
				destinationRectangle.y = sourceRectangle.y = 0;

				destinationRectangle.x = (width/ 2 -128);
				destinationRectangle.y = (height / 2) - 128;

				/*sourceRectangle.x = 75;
				sourceRectangle.y = 75;*/

				destinationRectangle.w = sourceRectangle.w;
				destinationRectangle.h = sourceRectangle.h;
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
	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, texture, &sourceRectangle, &destinationRectangle);

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
	if (event.type == SDL_KEYDOWN) {
		
		switch (event.key.keysym.sym)
		{
		case SDLK_w:
			if (destinationRectangle.y > 0)
			{
				destinationRectangle.y -= 3;
				break;
			}
		
		case SDLK_a:
			if (destinationRectangle.x > 0)
			{
				destinationRectangle.x -= 3;
				break;
			}
			
		
		case SDLK_s:
			if (destinationRectangle.y <344)
			{
				destinationRectangle.y += 3;
				break;
			}
		
		case SDLK_d:
			
			if (destinationRectangle.x < 544)
			{
				destinationRectangle.x += 3;
				break;
			} 
			
		}
	}
}
void Game::update() {
}
void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
bool Game::isRunning() {
	return Game::running;
}
Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
}
Game::~Game() {
}