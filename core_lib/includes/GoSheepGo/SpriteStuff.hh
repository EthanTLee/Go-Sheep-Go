#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>


namespace gosheep {

using sprite = SDL_Surface*;

inline sprite LoadImageAsSprite(std::string path_to_image) {
    sprite ret = IMG_Load(path_to_image.c_str());
    return ret;
}


} //namespace gosheep