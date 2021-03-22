#pragma once

#include <SDL2/SDL.h>
#include <string>

namespace gosheep {

    class Graphic {

        public:
        Graphic();
        Graphic(SDL_Surface* surface, std::string name);

        SDL_Surface * m_surface = nullptr;

        std::string m_name;

    };

}

