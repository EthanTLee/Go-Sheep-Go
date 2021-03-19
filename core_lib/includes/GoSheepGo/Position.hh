#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <SDL2/SDL.h>

namespace gosheep {

    class Position {
        public:

        Position(sizept size, pixelpt pixelpos);
        Position(gridpt gridpos, sizept size, pixelpt pixelpos);

        gridpt m_grid;
        sizept m_size;
        pixelpt m_pixel;
        SDL_Rect m_rect;

    };


}