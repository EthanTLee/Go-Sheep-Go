#include <GoSheepGo/GraphicGroup.hh>

#include <SDL2/SDL.h>
#include <vector>
#include <string>

using namespace gosheep;

GraphicGroup::GraphicGroup(std::vector<Graphic> list) {

    for (int i = 0; i < list.size(); i++) {
        m_list.push_back(list[i]);
    }
}

void GraphicGroup::DrawIndividual(
    std::string graphic_name, 
    SDL_Surface* dest_surf, 
    SDL_Rect* dest_pos
) {
    
    for (int i = 0; i < m_list.size(); i++) {
        if (m_list[i].m_name == graphic_name) {
            m_list[i].Draw(dest_surf, dest_pos);
        }
}