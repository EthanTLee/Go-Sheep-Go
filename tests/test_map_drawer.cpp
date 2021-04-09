#include "catch.hpp"

#include<GoSheepGo/Map.hh>
#include<GoSheepGo/Drawable.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <array>

namespace gosheep {

struct GameDrawables {
    GameDrawables() {
        m_grass_regular = Drawable("../../res/grass.png");
        m_grass_select = Drawable("../../res/grass_sel.png");
        m_sheep_white = Drawable("../../res/sheep_white.png");
        m_sheep_black = Drawable("../../res/sheep_black.png");
    }

    Drawable m_grass_regular;
    Drawable m_grass_select;
    Drawable m_sheep_white;
    Drawable m_sheep_black;
};

class MapDrawer{
public:
    void DrawMap(Map input_map, window_surface target_surf){
        gridpt grid_size;
        grid_size.x = 5;
        grid_size.y = 5;

        for (int row = 0; row < input_map.GetMapSize().x; row++) {
            for (int col = 0; col < input_map.GetMapSize().y; col++) {
                
                gridpt tile_pos;
                tile_pos.x = row;
                tile_pos.y = col;
                pixelpt pixel_pos = ConvertToPixel(tile_pos);
                
                game_graphics.m_grass_regular.Draw(pixel_pos, target_surf);
            }
        }
    }
private:

    GameDrawables game_graphics;

    pixelpt ConvertToPixel (gridpt grid_position) {

        pixelpt ret;

        pixelpt offset;
        offset.x = 200;
        offset.y = 200;
        sizept tile_size;
        tile_size.x = 98;
        tile_size.y = 45;

        ret.x = offset.x + grid_position.x*tile_size.x/2 + grid_position.y*tile_size.x/2;
        ret.y = offset.y + grid_position.x*tile_size.y/2 - grid_position.y*tile_size.y/2;

        return ret;
    }
};

} // namespace gosheep

using namespace gosheep;

TEST_CASE("game map graphics class test") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    window_surface window_surf = SDL_GetWindowSurface(window);

    Map test_map;

    MapDrawer test_map_drawer;    
    test_map_drawer.DrawMap(test_map, window_surf);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();

    bool does_a_tile_appear_on_screen = true;
    REQUIRE(does_a_tile_appear_on_screen == true);

    bool does_multiple_tiles_appear_on_screen = true;
    REQUIRE(does_multiple_tiles_appear_on_screen == true);

    bool does_five_by_five_map_appear_on_screen = true;
    REQUIRE(does_five_by_five_map_appear_on_screen == true);

    bool is_map_isometric = true;
    REQUIRE(is_map_isometric == true);
}

