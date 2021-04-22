#pragma once

#include <GoSheepGo/Core/Drawable.hh>

namespace gosheep {

struct GameDrawables {
     GameDrawables() {
        grass_regular = core::Drawable("../../res/grass/grass.png");
        grass_select = core::Drawable("../../res/grass/grass_sel.png");
        grass_error = core::Drawable("../../res/grass/grass_err.png");
        sheep_white = core::Drawable("../../res/sheep/sheep_white.png");
        sheep_black = core::Drawable("../../res/sheep/sheep_black.png");
        wall = core::Drawable("../../res/wall/wall.png");
        wall_top = core::Drawable("../../res/wall/walltop.png");
        wall_left = core::Drawable("../../res/wall/wallleft.png");
        wall_bot = core::Drawable("../../res/wall/wallbot.png");
        wall_right = core::Drawable("../../res/wall/wallright.png");
    }

    core::Drawable grass_regular;
    core::Drawable grass_select;
    core::Drawable grass_error;
    core::Drawable sheep_white;
    core::Drawable sheep_black;
    core::Drawable wall;
    core::Drawable wall_top;
    core::Drawable wall_left;
    core::Drawable wall_bot;
    core::Drawable wall_right;
};

}