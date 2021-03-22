#include <GoSheepGo/Graphic.hh>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <exception>
#include <string>


using namespace gosheep;

Graphic::Graphic() { }; 

Graphic::Graphic(SDL_Surface* surface, std::string name) {

    m_surface = surface;
    if (m_surface == nullptr) {
        throw std::runtime_error("Image not loaded");
    }

    m_name = name;
}


