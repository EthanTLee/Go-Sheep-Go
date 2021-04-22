#pragma once

#include <SDL2/SDL.h>

namespace core {


struct point {
    int x= 0, y=0;

    bool operator==(const point& p) const {
        return (x == p.x) && (y == p.y);    
    }
};


struct pixelpt : public point {
    pixelpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }
};


struct sizept : public pixelpt {};


inline SDL_Rect CreateRect (pixelpt position, sizept size) {
    SDL_Rect ret;
    ret.x = position.x;
    ret.y = position.y;
    ret.w = size.x;
    ret.h = size.y;

    return ret;
}


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


} //namespace core