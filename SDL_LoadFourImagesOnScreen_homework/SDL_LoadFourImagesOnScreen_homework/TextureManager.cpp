#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren) {
    SDL_Surface* tempSurface = IMG_Load(fileName);

    if (tempSurface == 0) {
        std::cout << "tempSurface not created!" << std::endl;
        return false;
    }

    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface); //create texture
    SDL_FreeSurface(tempSurface); //delete surface

    if (tex != 0) {
        textureMap[id] = tex; //add the created texture in the textureMap map
        return true;
    }

    return false;
}

void TextureManager::drawTexture(std::string id, int x, int y, int width, int height, SDL_Renderer* ren, SDL_RendererFlip flip) {
    
        SDL_Rect srcRect;
        SDL_Rect destRect;
        srcRect.x = srcRect.y = 0;
        srcRect.w = destRect.w = width;
        srcRect.h = destRect.h = height;
        destRect.x = x;
        destRect.y = y;

        SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip); //paint on renderer
    }
    


void TextureManager::drawOneFrameFromTexture(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame,
    SDL_Renderer* ren, SDL_RendererFlip flip) {
    SDL_Rect srcRect;
    SDL_Rect destRect;
    srcRect.x = width * currentFrame;
    srcRect.y = height * (currentRow - 1);
    srcRect.w = destRect.w = width;
    srcRect.h = destRect.h = height;
    destRect.x = x;
    destRect.y = y;

    SDL_RenderCopyEx(ren, textureMap[id], &srcRect, &destRect, 0, 0, flip);
}


TextureManager* TextureManager::instance = 0;