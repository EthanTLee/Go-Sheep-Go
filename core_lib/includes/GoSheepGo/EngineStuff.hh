#pragma once 

#include <SDL2/SDL.h>

namespace gosheep {

inline void Continue_Until_Quit() {
    bool quit = false;
    SDL_Event e;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
}

} //namespace gosheep