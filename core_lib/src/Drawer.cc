#include <GoSheepGo/Drawer.hh>

using namespace gosheep;

Drawer::Drawer() {};

Drawer::Drawer(Graphic graph, SDL_Surface* dest_surf) {
    m_graph = graph;
    m_dest_surf = dest_surf;
}

void Drawer::SetGraphic(Graphic graph) {
    m_graph = graph;
}

void Drawer::SetDestSurf(SDL_Surface* dest_surf) {
    m_dest_surf = dest_surf;
}

void Drawer::Draw(pixelpt pos) {
    sizept size;
    size.x = m_graph.m_surface -> w;
    size.y = m_graph.m_surface -> h;

    SDL_Rect dest_rect = CreateRect(pos, size);
    SDL_BlitSurface(m_graph.m_surface, NULL, m_dest_surf, &dest_rect);
}