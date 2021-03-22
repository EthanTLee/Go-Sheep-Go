#include <GoSheepGo/TileGraphics.hh>

#include <SDL2/SDL.h>

using namespace gosheep;

TileGraphics::TileGraphics(
    SDL_Surface* regular_graph, 
    SDL_Surface* sel_graph
) {
    std::vector <SDL_Surface*> surfaces = {regular_graph, sel_graph};
    std::vector <std::string> names = {"reg", "sel"};
    GraphicGroup graphic_group(surfaces, names);

    m_graphic_group = graphic_group;
}

void TileGraphics::SetSelStatus(bool state) {
    m_sel_status = state;
}

bool TileGraphics::GetSelStatus() {
    return m_sel_status;
}

SDL_Surface* TileGraphics::GetActiveSurface() {
    SDL_Surface* ret = nullptr;

    if (m_sel_status == false) {
        ret = m_graphic_group.GetSurface("reg");
    }
    else {
        ret = m_graphic_group.GetSurface("sel");
    }

    return ret;
}