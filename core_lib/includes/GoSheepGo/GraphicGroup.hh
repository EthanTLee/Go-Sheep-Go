#pragma once

#include <GoSheepGo/Graphic.hh>

#include <SDL2/SDL.h>
#include <vector>
#include <string>


namespace gosheep {

    class GraphicGroup {
        public:

        GraphicGroup(std::vector<Graphic> list);

        std::vector<Graphic> m_list;

        void DrawIndividual(
            std::string graphic_name, 
            SDL_Surface* dest_surf, 
            SDL_Rect* dest_pos
        );

    };
}