#include <GoSheepGo/GoSheepHelpers.hh>

#include <array>

namespace gosheep {

class Map {
    //Game logic map 
public:

    void PutSheepAt(gridpt position, SheepColor color);
    void RemoveSheepAt(gridpt position); 
    SheepColor GetSheepColorAt(gridpt position);
    gridpt GetMapSize();
    
private:
    std::array<std::array<SheepColor, 5>,5> m_sheeps = {
        {{SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none},
        {SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none},
        {SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none},
        {SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none},
        {SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none, SheepColor::none}}
    };
};

} //namespace gosheep