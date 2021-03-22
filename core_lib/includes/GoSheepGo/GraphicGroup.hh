#pragma once

#include <GoSheepGo/Graphic.hh>

#include <SDL2/SDL.h>
#include <vector>
#include <string>


namespace gosheep {

    class GraphicGroup {
        public:

        GraphicGroup();
        
        GraphicGroup(
            std::vector<SDL_Surface*> surfaces,
            std::vector<std::string> names
        );

        std::vector<Graphic> m_graphics;

        SDL_Surface* GetSurface(std::string name);

    };
}