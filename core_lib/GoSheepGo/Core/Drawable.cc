#include <GoSheepGo/Core/Drawable.hh>
#include <exception>
#include <string>

using namespace core;

using image = SDL_Surface*;


Drawable::Drawable(){}


Drawable::Drawable(image sprite) {
    m_sprite = sprite;

    if (sprite == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }    
}


Drawable::Drawable(std::string path_to_image) {
    
    m_sprite = LoadImageFromDisk(path_to_image);
}


void Drawable::Draw(pixelpt target_position, SDL_Surface* target_surface) {
    sizept size; 
    size.x = m_sprite->w;
    size.y = m_sprite->h;
    
    SDL_Rect rect = CreateRect(target_position, size);

    SDL_BlitSurface(m_sprite, NULL, target_surface, &rect);
}


void Drawable::SetSprite(image sprite) {
    if (sprite == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }

    m_sprite = sprite;
}


image Drawable::LoadImageFromDisk(std::string path_to_image) {
    image ret = IMG_Load(path_to_image.c_str());

    if (ret == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }

    return ret;
}


