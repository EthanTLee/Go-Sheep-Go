#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <string>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>

namespace core {


class Drawable {

    using image = SDL_Surface*;

    public:
    Drawable();
    Drawable(image sprite);
    Drawable(std::string path_to_image);

    void Draw(pixelpt target_position, SDL_Surface* target_surface);
    void SetSprite(image sprite);

    private:
    image m_sprite = nullptr;
    image LoadImageFromDisk(std::string path_to_image);
};


} // namespace core

