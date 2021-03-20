#include <GoSheepGo/GraphicEntity.hh>

using namespace gosheep;



GraphicEntity::GraphicEntity(GraphicGroup graphics, pixelpt position, sizept size) {
    m_graphics = graphics;
    SetPosition(position);
    SetSize(size);

}

void GraphicEntity::SetActiveGraphic(std::string graphic_name) {
    m_active_graphic = graphic_name;
}

void GraphicEntity::Draw(SDL_Surface* dest_surf) {
    m_graphics.DrawIndividual(m_active_graphic, dest_surf, &m_rect);
}

pixelpt GraphicEntity::Position() { 
    
    pixelpt ret;
    ret.x = m_rect.x;
    ret.y = m_rect.y;

    return ret;
}

void GraphicEntity::SetPosition(pixelpt position) {
    
    m_rect.x = position.x;
    m_rect.y = position.y;
}

sizept GraphicEntity::Size(){
    sizept ret;
    ret.x = m_rect.w;
    ret.y = m_rect.h;

    return ret;
}

void GraphicEntity::SetSize(sizept size) {
    m_rect.w = size.x;
    m_rect.h = size.y;
}