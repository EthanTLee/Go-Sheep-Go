#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>
#include <string>

namespace gosheep {

    class Tile {
        public:

        Tile(
            gridpt tile_number,
            sizept tile_shape,
            SDL_Surface* tile_gfx,
            SDL_Surface* tile_sel_gfx 
        ) {
            
            gridcoord = tile_number;
            
            shape = tile_shape;

            gfx = tile_gfx;

            sel_gfx = tile_sel_gfx;

            pixelcoord = convert_grid_to_pixel(gridcoord, shape);

            rect = CreateRect(pixelcoord, shape);

        }

        gridpt gridcoord;
        sizept shape;
        SDL_Surface* gfx = nullptr;
        SDL_Surface* sel_gfx = nullptr;

        pixelpt pixelcoord;
        SDL_Rect rect;

        void blit() {
            
        }

    };
}

