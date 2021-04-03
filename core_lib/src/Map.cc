#include <GoSheepGo/Map.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

Map::Map(window_surface target_surf) {

    grass_regular.SetSprite(LoadImageAsSprite())

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


void Map::DrawTiles() {

}
void Map::DrawSheep() {}

template <class T>
void FillLayer(layer_t <T> target_layer, T value) {

    int const number_of_rows = target_layer.size();

    for (int row = 0; row < number_of_rows; row++) {
        std::fill(target_layer[row].begin(), target_layer[row].end(), value); 
    }
}