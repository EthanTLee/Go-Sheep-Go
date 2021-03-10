#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>
#include <string>
#include <exception>

namespace gosheep {

    class Tile {
        public:

        Tile(
            gridpt tile_number,
            sizept tile_shape,
            SDL_Surface* tile_gfx,
            SDL_Surface* tile_sel_gfx, 
            SDL_Surface* window_surf
        ) {
            
            gridcoord = tile_number;
            
            shape = tile_shape;

            gfx = tile_gfx;

            sel_gfx = tile_sel_gfx;

            window = window_surf;

            pixelcoord = convert_grid_to_pixel(gridcoord, shape);

            rect = CreateRect(pixelcoord, shape);

        }

        gridpt gridcoord;
        sizept shape;
        SDL_Surface* gfx = nullptr;
        SDL_Surface* sel_gfx = nullptr;
        SDL_Surface* window = nullptr;

        pixelpt pixelcoord;
        SDL_Rect rect;

        void blit(std::string reg_or_sel) {
            if (reg_or_sel == "reg") {
                SDL_BlitSurface(gfx, NULL, window, &rect);
            }
            else if (reg_or_sel == "sel") {
                SDL_BlitSurface(sel_gfx, NULL, window, &rect);
            }
            else {
                throw std::runtime_error("must choose reg or sel");
            } 
        }
        
    };
}

