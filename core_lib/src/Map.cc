/*

#include <GoSheepGo/Map.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

Map::Map(window_surface target_surf)
    : grass_regular("../../res/grass.png")
    , grass_select("../../res/grass_sel.png")
    , sheep_white("../../res/sheep_white.png")
    , sheep_black("../../res/sheep_black.png")     
{
    FillLayer(m_tilemap, grass);
    FillLayer(m_sheepmap, none);
    DrawTiles(target_surf);
}

void Map::Draw() {
    DrawTiles();
    DrawSheep();
}

void Map::AddSheepAtSelect(Sheeps color) {
    m_sheepmap[m_select_position.x][m_select_position.y] = color;
}

void Map::RemoveSheepAt(gridpt position) {
    m_sheepmap[position.x][position.y] = none;
}

void Map::SetSelectPosition(gridpt position) {
    m_select_position = position;
    m_tilemap[position.x][position.y] = select;
}

void Map::DrawTiles(window_surface target_surf) {

    pixelpt offset;
    offset.x = 100;
    offset.y = 100;

    sizept tileshape;
    tileshape.x = 99;
    tileshape.y = 45;

    for (int x = 0; x < m_tilemap.size(); x++) {
        for (int y = 0; y < m_tilemap[x].size(); y++) {
            
            pixelpt pos;
            pos.x = offset.x + (x * tileshape.x/2) + (y * tileshape.x/2);
            pos.y = offset.y + (x * tileshape.y/2) - (y * tileshape.y/2);
            
            if (m_tilemap[x][y] == grass) {
                grass_regular.Draw(pos, target_surf);
            }
            else if (m_tilemap[x][y] == select) {
                grass_select.Draw(pos, target_surf);
            }
        }
    }
}


void Map::DrawSheep(window_surface target_surf) {}

template <class T>
void FillLayer(layer_t <T> target_layer, T value) {

    int const number_of_rows = target_layer.size();

    for (int row = 0; row < number_of_rows; row++) {
        std::fill(target_layer[row].begin(), target_layer[row].end(), value); 
    }
}

*/