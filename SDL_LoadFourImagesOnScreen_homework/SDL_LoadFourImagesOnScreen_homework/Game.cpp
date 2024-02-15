#include "Game.h"
#include <string>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success!\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) {
			std::cout << "Window creation success!\n";
			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer != 0) {
				std::cout << "Renderer creation success!\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 50);

				TextureManager::Instance()->loadTexture("assets/roy.png", "roy", renderer);
				TextureManager::Instance()->loadTexture("assets/tank.png", "tank", renderer);
				TextureManager::Instance()->loadTexture("assets/tyson.jpg", "tyson", renderer);
				TextureManager::Instance()->loadTexture("assets/floyd.jpg", "floyd", renderer);

			}
			else {
				std::cout << "Renderer init failed!\n";
				return false;
			}
		}
		else {
			std::cout << "Window init failed!\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail!\n";
		return false;
	}
	std::cout << "Init success!\n";
	running = true;

	return true;
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 212, 209, 212, 255); // window background color
	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh); // get window size



	// drawing a vertical and horizontal line
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);
	SDL_RenderDrawLine(renderer, 0, wh/ 2, ww, wh / 2);

	

	if (windws[0]) {

		TextureManager::Instance()->drawTexture("roy", ww / 4 - 100, wh / 4 - 100, 200, 200, renderer);
	}
	else {
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_Rect rect1 = { 0, 0, ww / 2, wh / 2 };
		SDL_RenderFillRect(renderer, &rect1);
	}
	if (windws[1]) {
		TextureManager::Instance()->drawTexture("floyd", ww * 0.75 - 100, wh / 4 - 100, 200, 200, renderer);

	}
	else {
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_Rect rect2 = { ww / 2 + 3, wh / 2 + 3, ww, wh };
		SDL_RenderFillRect(renderer, &rect2);
	}

	if (windws[2]) {
		TextureManager::Instance()->drawTexture("tyson", ww / 4 - 100, wh * 0.75 - 100, 200, 200, renderer);

	}
	else {
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_Rect rect3 = { ww, wh / 2, ww / 2 - 3, wh / 2 };
		SDL_RenderFillRect(renderer, &rect3);
	}
	if (windws[3]) {

		TextureManager::Instance()->drawTexture("tank", ww * 0.75 - 100, wh / 2 + 50, 200, 200, renderer);
	}
	else {
		SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
		SDL_Rect rect4 = { ww / 2 + 2, wh / 2 + 2, ww, wh };
		SDL_RenderFillRect(renderer, &rect4);
	}

	SDL_RenderPresent(renderer);
}


void Game::update() {}

void Game::handleEvents()
{
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		case SDL_MOUSEBUTTONDOWN: {
			int msx, msy;
			if (event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&msx, &msy);
				mouseDownX = msx;
				mouseDownY = msy;

			}
		}break;
		case SDL_MOUSEBUTTONUP: {
			int msx, msy;
			//cout << "Mouse button up\n";
			if (event.button.button = SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&msx, &msy);
				std::cout << msx << ":" << msy << std::endl;
				int ww, wh;
				SDL_GetWindowSize(window, &ww, &wh);
				if (msx < ww / 2 && msy < wh / 2) {
					if (windws[0]) {
						windws[0] = false;

					}
					else {
						windws[0] = true;
					}
				}
				else if (msx > ww / 2 && msy < wh / 2) {
					if (windws[1]) {
						windws[1] = false;

					}
					else {
						windws[1] = true;
					}
				}
				else if (msx < ww / 2 && msy > wh / 2) {

					if (windws[2]) {
						windws[2] = false;

					}
					else {
						windws[2] = true;
					}
				}
				else if (msx > ww / 2 && msy > wh / 2) {

					if (windws[3]) {
						windws[3] = false;

					}
					else {
						windws[3] = true;
					}
				}

			}
		}break;
		default:
			break;
		}
	}
}

void Game::clean() {
	std::cout << "Cleaning game!\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() const {
	//return Game::running;
	return this->running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
	Game::currentRow = 1;
	Game::windws = {true, true, true, true};
	
}
Game::~Game() {
	/*delete window;
	delete renderer;*/
}