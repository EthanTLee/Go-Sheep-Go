#include <GoSheepGo/Position.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

Position::Position(gridpt gridpos, sizept size, pixelpt pixelpos) {
    
    m_grid = gridpos;
    m_size = size;
    m_pixel = pixelpos;

    m_rect = CreateRect(pixelpos, size);
}

Position::Position(sizept size, pixelpt pixelpos) {

    m_grid.x = 0;
    m_grid.y = 0;
    m_size = size;
    m_pixel = pixelpos;

    m_rect = CreateRect(pixelpos, size);
}
