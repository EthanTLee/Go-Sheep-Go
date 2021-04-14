#include <GoSheepGo/GoSheepHelpers.hh>

#include <array>

namespace gosheep {

class Map {
    //Game logic map 
public:
    Map();

    void PutSheepAt(gridpt position, SheepColor color);
    void RemoveSheepAt(gridpt position); 
    SheepColor GetSheepColorAt(gridpt position);
    void SetSelectTile(gridpt position);
    gridpt GetMapSize();

    
private:
    
    std::array<std::array<TileType, 5>,5> m_tilemap;
    std::array<std::array<SheepColor, 5>,5> m_sheeps;

};

} //namespace gosheep