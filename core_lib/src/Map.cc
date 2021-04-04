#include <GoSheepGo/Map.hh>

#include<GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

void Map::PutSheepAt(gridpt position, SheepColor color) {
    m_sheeps[position.x][position.y] = color;
}

void Map::RemoveSheepAt(gridpt position) {
    m_sheeps[position.x][position.y] = SheepColor::none;
}

SheepColor Map::GetSheepColorAt(gridpt position) {
    return m_sheeps[position.x][position.y];
}

gridpt Map::GetMapSize() {
    gridpt ret;
    ret.x = m_sheeps.size();
    ret.y = m_sheeps[0].size();
    return ret;
}