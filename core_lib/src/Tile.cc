#include <GoSheepGo/Tile.hh>

using namespace gosheep;

Tile::Tile(GraphicGroup graphics, gridpt gridpos, sizept size) {
    m_graphics = graphics;
    SetGridpos(gridpos);
    SetSize(size);
}

gridpt Tile::Gridpos() { return m_gridpos;}

void Tile::SetGridpos(gridpt gridpos) {
    m_gridpos = gridpos;
    SetPosition(Pixelpos()); 
}

pixelpt Tile::Pixelpos() {
    const int X_OFFSET = 100;
    const int Y_OFFSET = 100;

    pixelpt ret;
    ret.x = X_OFFSET 
        + (m_gridpos.y * m_rect.w/2) 
        + (m_gridpos.x * m_rect.w/2);
    
    ret.y = Y_OFFSET 
            + (m_gridpos.y * m_rect.h/2) 
            - (m_gridpos.x * m_rect.h/2);

    return ret;
}