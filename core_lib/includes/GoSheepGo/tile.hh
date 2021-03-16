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
            SDL_Surface* dest_window_surf
        ) {  
            init( 
                tile_number, 
                tile_shape, 
                tile_gfx, 
                tile_sel_gfx, 
                dest_window_surf
            );
        }

        gridpt m_gridcoord;
        sizept m_shape;
        SDL_Surface* m_gfx = nullptr;
        SDL_Surface* m_sel_gfx = nullptr;
        SDL_Surface* m_window_surf = nullptr;
        pixelpt m_pixelcoord;
        SDL_Rect m_rect;
        bool sel;

        void init(
            gridpt tile_number,
            sizept tile_shape,
            SDL_Surface* tile_gfx,
            SDL_Surface* tile_sel_gfx, 
            SDL_Surface* dest_window_surf
        ) {
            m_gridcoord = tile_number;
            m_shape = tile_shape;
            m_gfx = tile_gfx;
            m_sel_gfx = tile_sel_gfx;
            m_window_surf = dest_window_surf;
            
            m_pixelcoord = convert_grid_to_pixel(m_gridcoord, m_shape);
            m_rect = CreateRect(m_pixelcoord, m_shape);
        }

        void update(){}

        void draw() {
            if (!sel) {
                SDL_BlitSurface(m_gfx, NULL, m_window_surf, &m_rect);
            }
            else {
                SDL_BlitSurface(m_sel_gfx, NULL, m_window_surf, &m_rect);
            }
        }
        
    };
}

