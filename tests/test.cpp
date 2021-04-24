#include "catch.hpp"

#include <string>
#include <iostream>
#include <GoSheepGo/Core/SpriteSheet.hh>

TEST_CASE("???") {

    core::SpriteSheet flashing("../../res/spritesheets/flashing_tile.spreet");

    std::cout << flashing.m_num_of_animes;

}

