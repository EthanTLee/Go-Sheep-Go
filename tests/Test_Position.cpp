#include <GoSheepGo/Position.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include <SDL2/SDL.h>



using namespace gosheep;


TEST_CASE( "Position is calculated", "[Position]" ) {

    gridpt gridpos;
    gridpos.x = 2;
    gridpos.y = 5;

    sizept size;
    size.x = 100;
    size.y = 400;

    pixelpt pixelpos;
    pixelpos.x = 100;
    pixelpos.y = 200;

    Position test_pos_one(size, pixelpos);
    Position test_pos_two(gridpos, size, pixelpos);


    REQUIRE(test_pos_one.m_rect.h == size.y);
    REQUIRE(test_pos_one.m_rect.w == size.x);
    REQUIRE(test_pos_one.m_rect.x == pixelpos.x);
    REQUIRE(test_pos_one.m_rect.y == pixelpos.y);

    REQUIRE(test_pos_two.m_rect.h == size.y);
    REQUIRE(test_pos_two.m_rect.w == size.x);
    REQUIRE(test_pos_two.m_rect.x == pixelpos.x);
    REQUIRE(test_pos_two.m_rect.y == pixelpos.y);

}