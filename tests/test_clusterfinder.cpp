#include "catch.hpp"

#include <GoSheepGo/MapHelpers.hh>
#include <GoSheepGo/clusterfinder.hh>

using namespace gosheep;


TEST_CASE("cluster finder") {


auto edge = GetSurrounding({5,5},{0,0});

REQUIRE(edge.size() == 2);

REQUIRE(edge[0] == gridpt(1,0));

REQUIRE(edge[1] == gridpt(0,1));

auto edge2 = GetSurrounding({5,5},{4,4});

REQUIRE(edge2.size() == 2);

REQUIRE(edge2[0] == gridpt(3,4));

REQUIRE(edge2[1] == gridpt(4,3));

auto edge3 = GetSurrounding({5,5},{2,3});

REQUIRE(edge3[0] == gridpt(1,3));

REQUIRE(edge3[1] == gridpt(2,2));

REQUIRE(edge3[2] == gridpt(3,3));

REQUIRE(edge3[3] == gridpt(2,4));

}


TEST_CASE("in cluster") {
std::vector<sheepgroup> clusters;
clusters.emplace_back(SheepColor::black);
clusters.emplace_back(SheepColor::white);

clusters[0].m_positions.emplace_back(1,2);
clusters[0].m_positions.emplace_back(3,2);
clusters[0].m_positions.emplace_back(4,2);


REQUIRE (InCluster(clusters, {1,2}) == true);
REQUIRE (InCluster(clusters, {1,1}) == false);

}

TEST_CASE("cluster finder ") {
sheepboard_t sheepmap {SheepColor::none};

sheepmap[2][3] = SheepColor::white;
sheepmap[2][2] = SheepColor::white;
sheepmap[3][3] = SheepColor::black;
sheepmap[1][3] = SheepColor::black;
sheepmap[2][4] = SheepColor::black;
sheepmap[2][1] = SheepColor::black;
sheepmap[1][2] = SheepColor::black;
sheepmap[3][2] = SheepColor::white;

auto cluster_white = ClusterFinder(sheepmap, SheepColor::white);
auto cluster_black = ClusterFinder(sheepmap, SheepColor::black);



}

TEST_CASE("sheep deleter") {
sheepboard_t sheepmap {SheepColor::none};

sheepmap[2][3] = SheepColor::white;
sheepmap[2][2] = SheepColor::white;
sheepmap[3][3] = SheepColor::black;
sheepmap[1][3] = SheepColor::black;
sheepmap[2][4] = SheepColor::black;
sheepmap[2][1] = SheepColor::black;
sheepmap[1][2] = SheepColor::black;
sheepmap[3][2] = SheepColor::white;
sheepmap[3][1] = SheepColor::black;
sheepmap[4][2] = SheepColor::white;

//sheepmap = DeleteSurroundedSheepOf(sheepmap);

REQUIRE(1==2);

}