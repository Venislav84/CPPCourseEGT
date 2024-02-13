#include "Game.h"
using namespace std;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        cout << "SDL init success\n";

        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window != 0) {
            cout << "window creation success\n";
            renderer = SDL_CreateRenderer(window, -1, 0);
            if (renderer != 0) {
                cout << "renderer creation success\n";

            }
            else {
                cout << "renderer init failed\n";
                return false;
            }
        }
        else {
            cout << "window init failed\n";
            return false;
        }
    }
    else {
        cout << "SDL init fail\n";
        return false;
    }
    cout << "init success\n";
    running = true;
    return true;

}

void Game::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 150, 47, 0);

    SDL_RenderClear(renderer);


    int ww, wh;
    SDL_GetWindowSize(window, &ww, &wh);

    SDL_SetRenderDrawColor(renderer, 0, 0, 98, 50);

    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 200);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 201);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 202);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 199);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 198);
    Shapes::drawHexagon(renderer, ww / 2, wh / 2, 197);

    SDL_RenderPresent(renderer);
}

void Game::update()
{

}

void Game::handleEvents()
{
    SDL_Event event;
    if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        default:
            break;
        }
    }
}

void Game::clean()
{
    cout << "cleaning game\n";
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}

bool Game::isRunning()
{
    return this->running;
}
Game::Game()
{
    Game::window = NULL;
    Game::renderer = NULL;
    Game::running = true;
    Game::currentFrame = 0;

}

Game::~Game()
{
}