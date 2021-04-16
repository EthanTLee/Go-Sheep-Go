#include "catch.hpp"

#include <array>
#include <GoSheepGo/MapHelpers.hh>
#include <extern/array_enumerator.hh>
#include <iostream>
#include <algorithm>

using namespace gosheep;

TEST_CASE("sheep deleter") {


sheepboard_t sheepmap {SheepColor::none};

sheepmap[2][3] = SheepColor::white;
sheepmap[2][2] = SheepColor::white;
sheepmap[3][3] = SheepColor::black;
sheepmap[1][3] = SheepColor::black;
sheepmap[2][4] = SheepColor::black;
sheepmap[2][1] = SheepColor::black;
sheepmap[1][2] = SheepColor::black;
sheepmap[3][2] = SheepColor::black;

/*
surroundingsheep surround (gridpt(1,4), sheepmap);

REQUIRE(surround.above == SheepColor::white);
REQUIRE(surround.left == SheepColor::none);
REQUIRE(surround.right == SheepColor::black);
*/
REQUIRE(gridpt(9,9) == gridpt(9,9));

auto w_groups = FindSheepGroupsOf(SheepColor::white, sheepmap);

REQUIRE(std::find(w_groups[0].m_positions.begin(), w_groups[0].m_positions.end(), gridpt(2,2)) != w_groups[0].m_positions.end());

REQUIRE(DoesSheepGroupHaveLiberties(w_groups[0], sheepmap) == false);

sheepmap = DeleteSurroundedSheepOf(SheepColor::white, sheepmap);
REQUIRE(sheepmap[2][3] == SheepColor::none);
REQUIRE(sheepmap[2][2] == SheepColor::none);


}