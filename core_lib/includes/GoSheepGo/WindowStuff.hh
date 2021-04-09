#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace gosheep {

using window_surface = SDL_Surface*;

inline SDL_Window* Make_Window() {
    SDL_Window* ret = SDL_CreateWindow(
        "Go Sheep Go",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN
    );
    return ret;
}

inline void Paint_Window_Blue(SDL_Surface* window_surface) {
    SDL_FillRect(window_surface, NULL, SDL_MapRGB (window_surface -> format, 0x00, 0x00, 0xF0));
}

} //namespace gosheep

