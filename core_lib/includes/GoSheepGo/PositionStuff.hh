#pragma once

#include <SDL2/SDL.h>

namespace gosheep {

struct point {
    int x= 0, y=0;
};

struct pixelpt : public point {};

struct gridpt : public point {};

struct sizept : public pixelpt {};

inline SDL_Rect CreateRect (pixelpt position, sizept size) {
    SDL_Rect ret;
    ret.x = position.x;
    ret.y = position.y;
    ret.w = size.x;
    ret.h = size.y;

    return ret;
}

} // namespace gosheep