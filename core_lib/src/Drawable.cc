#include <GoSheepGo/Drawable.hh>

using namespace gosheep;

Drawable::Drawable(sprite graphic, pixelpt target_pos, window_surface target_surf) {
    m_sprite = graphic;

    sizept size = {graphic->w, graphic->h};
    m_rect = CreateRect(target_pos, size);

    window_surface m_target_surf = target_surf;
}

void Drawable::Draw() {
    SDL_BlitSurface(m_sprite,NULL,m_target_surf,&m_rect);
}

void Drawable::SetPosition(pixelpt position) {
    m_rect.x = position.x;
    m_rect.y = position.y;
}


