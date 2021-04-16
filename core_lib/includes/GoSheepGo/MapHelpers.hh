#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <array>
#include <extern/array_enumerator.hh>
#include <algorithm>
#include <cmath>

namespace gosheep {

inline pixelpt ConvertTileGridToPixel(gridpt grid_position) {

    pixelpt ret;

    pixelpt offset;
    offset.x = 100;
    offset.y = 200;
    sizept tile_size;
    tile_size.x = 98;
    tile_size.y = 45;

    ret.x = offset.x + grid_position.x*tile_size.x/2 + grid_position.y*tile_size.x/2;
    ret.y = offset.y + grid_position.x*tile_size.y/2 - grid_position.y*tile_size.y/2;

    return ret;
}

inline pixelpt ConvertSheepGridToPixel(gridpt grid_position) {

    pixelpt ret;

    pixelpt offset;
    offset.x = 100;
    offset.y = 200;
    sizept tile_size;
    tile_size.x = 98;
    tile_size.y = 45;

    ret.x = offset.x + grid_position.x*tile_size.x/2 + grid_position.y*tile_size.x/2;
    ret.y = offset.y + grid_position.x*tile_size.y/2 - grid_position.y*tile_size.y/2;

    return ret;
}

struct mapsize {
    constexpr mapsize (size_t number_of_rows_ = 0, size_t number_of_columns_ = 0) 
        : number_of_rows(number_of_rows_),
        number_of_columns(number_of_columns_) {}

    size_t number_of_rows = 0;
    size_t number_of_columns = 0;
};

constexpr mapsize gamemap_size(5, 5);

template <typename T>
using genericboard_t = std::array <
    std::array<T, gamemap_size.number_of_rows>, 
    gamemap_size.number_of_columns
>;

using gameboard_t = genericboard_t <TileType>;
using sheepboard_t = genericboard_t <SheepColor>;

struct surroundingsheep {

    surroundingsheep(gridpt sheepposition, sheepboard_t sheepmap ) {
        above = sheepmap[sheepposition.x][sheepposition.y+1];
        below = sheepmap[sheepposition.x][sheepposition.y-1];
        right = sheepmap[sheepposition.x+1][sheepposition.y];
        left = sheepmap[sheepposition.x-1][sheepposition.y];
    }

    SheepColor above;
    SheepColor below;
    SheepColor right;
    SheepColor left;
};

struct sheepgroup {
    sheepgroup(SheepColor color) {
        m_color = color;
    }
    SheepColor m_color;
    std::vector<gridpt> m_positions;

};

inline std::vector<gridpt> FindAllPositionsOfSameColor(SheepColor color, sheepboard_t sheepmap){
    std::vector<gridpt> ret;
    for (auto [row, col] : array_helpers::enumarate(sheepmap)) {
        if (sheepmap[row][col] == color) {
            ret.push_back(gridpt(row,col));
        }
    }        
    return ret;
}

inline std::vector<sheepgroup> FindSheepGroupsOf(SheepColor color, sheepboard_t sheepmap) {
    std::vector<sheepgroup> ret;
    auto all_positions = FindAllPositionsOfSameColor(color, sheepmap);
    if (all_positions.size() !=0) {

        sheepgroup group(color);
        group.m_positions.push_back(all_positions[0]);

        for (int i{1}; i < all_positions.size(); i++) {

            if (std::abs(all_positions[i].x - all_positions[i-1].x) <= 1 &&
                std::abs(all_positions[i].y - all_positions[i-1].y) <= 1) {
                
                group.m_positions.push_back(all_positions[i]);
            }
            else {
                ret.push_back(group);
                group = sheepgroup(color);
                group.m_positions.push_back(all_positions[i]);
            }
        }
        ret.push_back(group);
    }

    return ret;
}

inline bool DoesSheepGroupHaveLiberties(sheepgroup group, sheepboard_t sheepmap) {
    bool ret = false;
    for (auto e : group.m_positions) {
        surroundingsheep surround(e, sheepmap);
        if (
            surround.above == SheepColor::none ||
            surround.below == SheepColor::none ||
            surround.right == SheepColor::none ||
            surround.left  == SheepColor::none
        ) {
            ret = true;
        }
    }
    return ret;
}

inline sheepboard_t DeleteSurroundedSheepOf(SheepColor color, sheepboard_t sheepmap) {
    sheepboard_t ret = sheepmap;
    
    auto groups = FindSheepGroupsOf(color, sheepmap);

    for (auto e : groups) {
        if (DoesSheepGroupHaveLiberties(e,sheepmap) == false) {
            for (auto p : e.m_positions) {
                ret[p.x][p.y] = SheepColor::none;
            }
        }
    }
    return ret;
}

} // namespace gosheep