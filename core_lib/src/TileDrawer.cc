#include <GoSheepGo/TileDrawer.hh>

using namespace gosheep;

TileDrawer::TileDrawer() {}

TileDrawer::TileDrawer(TileGraphics tile_graphs, SDL_Surface* dest_surf){
    m_drawer = Drawer(tile_graphs.GetActiveSurface(), dest_surf);
}


void TileDrawer::Draw(pixelpt pos) {
    m_drawer.Draw(pos); 
}

