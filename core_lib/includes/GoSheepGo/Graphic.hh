#pragma once

#include <SDL2/SDL.h>
#include <string>

namespace gosheep {

    class Graphic {

        public:

        Graphic(std::string path_to_image, std::string name);

        SDL_Surface * m_surface = nullptr;

        std::string m_name;

        void Draw(SDL_Surface* dest_surf, SDL_Rect* dest_pos);

    };

}

