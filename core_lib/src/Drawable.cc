#include <GoSheepGo/Drawable.hh>
#include <exception>
#include <string>

using namespace gosheep;

Drawable::Drawable(){}

Drawable::Drawable(sprite image) {
    m_image = image;

    if (image == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }    
}

Drawable::Drawable(std::string path_to_image) {
    
    m_image = LoadImageAsSprite(path_to_image);
}

void Drawable::Draw(pixelpt target_position, window_surface target_surf) {
    sizept size; 
    size.x = m_image->w;
    size.y = m_image->h;
    
    SDL_Rect rect = CreateRect(target_position, size);

    SDL_BlitSurface(m_image, NULL, target_surf, &rect);
}

void Drawable::SetSprite(sprite image) {
    if (image == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }

    m_image = image;
}




