#include "catch.hpp"

#include<GoSheepGo/Map.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

#include <array>

using namespace gosheep;
TEST_CASE("game logic map class test") {

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