#include <GoSheepGo/Graphic.hh>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <exception>
#include <string>


using namespace gosheep;


Graphic::Graphic(std::string path_to_image, std::string name) {

    m_surface = IMG_Load(path_to_image.c_str());
    if (m_surface == nullptr) {
        throw std::runtime_error("Image not loaded");
    }

    m_name = name;
}


void Graphic::Draw(SDL_Surface* dest_surf, SDL_Rect* dest_pos) {

    SDL_BlitSurface(m_surface, NULL, dest_surf, dest_pos); 

}


