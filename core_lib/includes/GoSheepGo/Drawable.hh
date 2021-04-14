#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <string>

namespace gosheep {

class Drawable {
public:
    Drawable();
    Drawable(sprite image);
    Drawable(std::string path_to_image);

    void Draw(pixelpt position, window_surface target_surf);
    void SetSprite(sprite image);

private:
    sprite m_image = nullptr;
};

}