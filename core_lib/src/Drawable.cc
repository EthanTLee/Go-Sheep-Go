#include <GoSheepGo/Drawable.hh>

#include <exception>

using namespace gosheep;

Drawable::Drawable(){}

Drawable::Drawable(sprite graphic) {
    m_sprite = graphic;

    if (m_sprite == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }    

}

Drawable::Drawable(std::string path_to_image) {
    m_sprite = LoadImageAsSprite(path_to_image);

    if (m_sprite == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }    

}

void Drawable::Draw(pixelpt target_position, window_surface target_surf) {
    sizept size; 
    size.x = m_sprite->w;
    size.y = m_sprite->h;
    
    SDL_Rect rect = CreateRect(target_position, size);

    SDL_BlitSurface(m_sprite, NULL, target_surf, &rect);
}

void Drawable::SetSprite(sprite image) {
    if (image == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }

    m_sprite = image;
}




