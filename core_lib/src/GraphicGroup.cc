#include <GoSheepGo/GraphicGroup.hh>

#include<GoSheepGo/Graphic.hh>
#include <SDL2/SDL.h>
#include <vector>
#include <string>

using namespace gosheep;

GraphicGroup::GraphicGroup() { }

GraphicGroup::GraphicGroup(
    std::vector<SDL_Surface*> surfaces,
    std::vector<std::string> names
) {

    for (int i = 0; i < surfaces.size(); i++) {
        m_graphics.push_back(Graphic(surfaces[i],names[i]));
    }
}

SDL_Surface* GraphicGroup::GetSurface(std::string name) {
    SDL_Surface* ret;
    for (int i = 0; i < m_graphics.size(); i++) {
        if (m_graphics[i].m_name == name) {
            ret = m_graphics[i].m_surface;
        } 
    }
    return ret;
}