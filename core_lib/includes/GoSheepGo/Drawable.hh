#pragma once

#include<GoSheepGo/GoSheepHelpers.hh>

namespace gosheep {
    class Drawable {
    public:
        Drawable(sprite graphic, pixelpt target_pos, window_surface target_surf);

        void Draw();
        void SetPosition(pixelpt position);
        
        sprite m_sprite;

    private:
        SDL_Rect m_rect;
        window_surface m_target_surf;
    };

}