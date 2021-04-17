#pragma once
#include <vector>
#include <GoSheepGo/GoSheepHelpers.hh>
#include <GoSheepGo/MapHelpers.hh>

namespace gosheep {

inline std::vector<gridpt> GetSurrounding(gridpt boundary, gridpt position) {
    std::vector<gridpt> ret;
    if (position.x > 0) {
        ret.emplace_back(position.x-1, position.y);
    }
    if (position.y > 0) {
        ret.emplace_back(position.x, position.y-1);
    }
    if (position.x < boundary.x-1) {
        ret.emplace_back(position.x+1, position.y);
    }
    if (position.y < boundary.y-1) {
        ret.emplace_back(position.x, position.y+1);
    }
    return ret;
}

inline bool InCluster(const std::vector<sheepgroup>& clusters, gridpt position) {
    for(const auto& cluster : clusters) {
        for (const auto& point : cluster.m_positions) {
            if (point == position) {
                return true;
            }
        }
    }
    return false;
}


inline std::vector<sheepgroup> ClusterFinder(const sheepboard_t& sheeps, SheepColor color){
    std::vector<sheepgroup> ret;
    for (auto [row, col] : array_helpers::enumarate(sheeps)) {
        if (sheeps[row][col] != color) {
            continue;
        }
        if(!InCluster(ret, gridpt(row,col))) {
            ret.emplace_back(color);
            ret.back().m_positions.emplace_back(row,col);
        }
        for (const auto& surrounding : GetSurrounding({5,5}, gridpt(row,col))) {
            if(sheeps[surrounding.x][surrounding.y] == color && !InCluster(ret, surrounding)) {
                ret.back().m_positions.push_back(surrounding);
            }
        }
    }
    /*
    ret.erase(std::remove_if(ret.begin(), 
                              ret.end(),
                              [](const auto& x){return x.m_positions.size() == 1;}),
               ret.end());
    */

    return ret;
}

inline bool DoesSheepGroupHaveLiberties(sheepgroup group, sheepboard_t sheepmap, gameboard_t tilemap) {
    std::vector<gridpt> positions_that_need_to_be_open;

    for (auto& p : group.m_positions) {
         positions_that_need_to_be_open.emplace_back(p.x+1,p.y);
         positions_that_need_to_be_open.emplace_back(p.x-1,p.y);
         positions_that_need_to_be_open.emplace_back(p.x,p.y-1);
         positions_that_need_to_be_open.emplace_back(p.x,p.y+1);
    }

    for (auto& p : positions_that_need_to_be_open) {
        if ((sheepmap[p.x][p.y] == SheepColor::none) && (tilemap[p.x][p.y] != TileType::wall)) {
            return true;
        }
    }
    return false;
}

inline sheepboard_t DeleteSurroundedSheepOf(sheepboard_t sheepmap, gameboard_t tilemap) {
    sheepboard_t ret = sheepmap;
    
    auto clusters_white = ClusterFinder(sheepmap, SheepColor::white);
    auto clusters_black = ClusterFinder(sheepmap, SheepColor::black);

    std::vector<gridpt> trashbin; 

    for (auto e : clusters_white) {
        if (DoesSheepGroupHaveLiberties(e,sheepmap, tilemap) == false) {
            for (auto p : e.m_positions) {
                trashbin.push_back(p);
            }
        }
    }
    for (auto e : clusters_black) {
        if (DoesSheepGroupHaveLiberties(e,sheepmap, tilemap) == false) {
            for (auto p : e.m_positions) {
                trashbin.push_back(p);
            }
        }
    }
    for (auto p : trashbin) {
        ret[p.x][p.y] = SheepColor::none;
    }
    return ret;
}

}