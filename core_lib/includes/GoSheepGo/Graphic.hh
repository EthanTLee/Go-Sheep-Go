#pragma once

#include <exception>
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace gosheep {

    class Graphic {

        public:


        Graphic(std::string path_to_image) {

            m_surface = IMG_Load(path_to_image.c_str());
            if (m_surface == nullptr) {
                throw std::runtime_error("Image not loaded");
            }
        }


        SDL_Surface * m_surface = nullptr;


        void Draw(SDL_Surface* dest_surf, SDL_Rect* dest_pos) {

            SDL_BlitSurface(m_surface, NULL, dest_surf, dest_pos); 

        }

    };

}

