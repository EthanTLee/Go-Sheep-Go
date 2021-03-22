#pragma once

#include <GoSheepGo/Drawer.hh>
#include <GoSheepGo/TileGraphics.hh>

namespace gosheep {

    class TileDrawer {
        public:
        TileDrawer();
        TileDrawer(TileGraphics tile_graphs, SDL_Surface* dest_surf);

        
        void SetTileGraphics(TileGraphics tile_graphs);
        void SetDestSurf(SDL_Surface* dest_surf);
        
        void Draw(pixelpt pos);
        
        Drawer m_drawer;

    };
}