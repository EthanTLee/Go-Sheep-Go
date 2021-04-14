#include <GoSheepGo/Map.hh>

#include<GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

Map::Map() {

    for (int row; row < m_tilemap.size(); row++) {
        m_tilemap[row].fill(TileType::regular);
        m_sheeps[row].fill(SheepColor::none);
    }
    
    gridpt origin;
    origin.x = 0;
    origin.y = 0;
    SetSelectTile(origin);
}

void Map::PutSheepAt(gridpt position, SheepColor color) {
    m_sheeps[position.x][position.y] = color;
}

void Map::RemoveSheepAt(gridpt position) {
    m_sheeps[position.x][position.y] = SheepColor::none;
}

SheepColor Map::GetSheepColorAt(gridpt position) {
    return m_sheeps[position.x][position.y];
}

void Map::SetSelectTile(gridpt position) {
    m_tilemap[position.x][position.y] = TileType::select;
}

gridpt Map::GetMapSize() {
    gridpt ret;
    ret.x = m_sheeps.size();
    ret.y = m_sheeps[0].size();
    return ret;
}