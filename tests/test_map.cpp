#include "catch.hpp"
#include <array>

#include <GoSheepGo/GoSheepHelpers.hh>



namespace gosheep {

enum class SheepColor {none, black, white};

class Map {
public:

    void PutSheepAt(gridpt position, SheepColor color) {
        m_sheeps[position.x][position.y] = color;
    }

    void RemoveSheepAt(gridpt position) {
        m_sheeps[position.x][position.y] = SheepColor::none;
    }

    SheepColor GetSheepColorAt(gridpt position) {
        return m_sheeps[position.x][position.y];
    }

    gridpt GetMapSize() {
        gridpt ret;
        ret.x = m_sheeps.size();
        ret.y = m_sheeps[0].size();
        return ret;
    }
    
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

using namespace gosheep;
TEST_CASE("game map class test") {

    Map test_map;

    gridpt position;
    position.x = 2;
    position.y = 2;
    
    test_map.PutSheepAt(position, SheepColor::black);
    REQUIRE(test_map.GetSheepColorAt(position) == SheepColor::black);

    position.x = 3;
    position.y = 2;
    
    test_map.PutSheepAt(position, SheepColor::black);
    REQUIRE(test_map.GetSheepColorAt(position) == SheepColor::black);

    test_map.GetMapSize();

    position.x = 3;
    position.y = 4;
    test_map.PutSheepAt(position, SheepColor::black);
    test_map.RemoveSheepAt(position);
    REQUIRE(test_map.GetSheepColorAt(position) == SheepColor::none);
    
}