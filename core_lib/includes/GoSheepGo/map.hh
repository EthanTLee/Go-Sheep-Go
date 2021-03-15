#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <GoSheepGo/tile.hh>
#include <vector>
#include <iterator>
#include <exception>
#include <string>

namespace gosheep {

    class Tilemap {
        public:

        Tilemap(
            gridpt map_size,
            sizept single_tile_size, 
            std::string tile_gfx_path, 
            std::string tile_sel_gfx_path,
            SDL_Surface* dest_window_surf
        ) {
            
            m_size = map_size;

            __not_null__ <SDL_Surface *> g_grass = IMG_Load(tile_gfx_path.c_str());
            __not_null__ <SDL_Surface *> g_grass_sel = IMG_Load(tile_sel_gfx_path.c_str());

            for (int x; x < map_size.x; x++) {
                for (int y; y < map_size.y; y++) {

                    gridpt tile_number;
                    tile_number.x = x;
                    tile_number.y = y;

                    sizept tile_size;                
                    tile_size.x = single_tile_size.x;
                    tile_size.y = single_tile_size.y;

            
                    m_tile_vector.push_back( Tile(
                        tile_number, 
                        tile_size,
                        g_grass.m_ptr,
                        g_grass_sel.m_ptr,
                        dest_window_surf
                    ));
                }
            }
        }

        gridpt m_size;
        std::vector <Tile> m_tile_vector;
        std::vector <Tile>::iterator m_tile_iterator;

        void draw_map(gridpt sel_tile_coord) {
            for (
                m_tile_iterator = m_tile_vector.begin(); 
                m_tile_iterator != m_tile_vector.end(); 
                m_tile_iterator++
            ) {
                if(
                    m_tile_iterator->gridcoord.x == sel_tile_coord.x 
                    && m_tile_iterator->gridcoord.y == sel_tile_coord.y) {
                    m_tile_iterator->blit("sel");
                }
                else {
                    m_tile_iterator -> blit("reg");
                }
                
            }
        }
    };
}