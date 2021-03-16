#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <GoSheepGo/tile.hh>
#include <vector>
#include <iterator>
#include <exception>
#include <string>

namespace gosheep {

    class Map {
        public:

        Map(
            gridpt map_size,
            SDL_Surface* dest_window_surf
        ) {
            
            m_size = map_size;




        }

        gridpt m_size;

        Maplayer <Tile> m_tile_layer;
        Maplayer <Sheep> m_sheep_layer;

        std::vector <SDL_Surface*> m_graphics; 

        gridpt sel_tile_coord;

        void init() {
            m_graphics = load_graphics();
            m_tile_layer.init();
            m_sheep_layer.init();
        }


        void update() {
            m_tile_layer.update();
            m_sheep_layer.update();
        }

        void draw() {
            m_tile_layer.draw();
            m_sheep_layer.draw();
        }

        std::vector <SDL_Surface*> load_graphics() {
            __not_null__ <SDL_Surface *> g_grass = IMG_Load("../res/grass.png"); 
            __not_null__ <SDL_Surface *> g_grass_sel = IMG_Load("../res/grass_sel.png");
            std::vector <SDL_Surface *> ret = {g_grass.m_ptr, g_grass_sel.m_ptr};
            return ret;
        }
    };
}