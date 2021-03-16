#include <catch.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "GoSheepGo/GoSheepHelpers.hh"
#include "GoSheepGo/game.hh"
#include "GoSheepGo/tile.hh"

using namespace gosheep;





TEST_CASE( "tile testing", "tile") {


    Game game;
    game.make_window();

    gridpt test_tile_gridcoord;
    sizept test_tile_shape;
    __not_null__ <SDL_Surface *>  test_tile_gfx = IMG_Load("../../res/grass.png");
    __not_null__ <SDL_Surface *> test_tile_sel_gfx = IMG_Load("../../res/grass_sel.png");

    Tile tile(
        test_tile_gridcoord, 
        test_tile_shape,
        test_tile_gfx.m_ptr,
        test_tile_sel_gfx.m_ptr,
        game.m_window_surface
    );

    REQUIRE(tile.m_gridcoord.x == test_tile_gridcoord.x);


    //Constructors

    REQUIRE(tile.m_gridcoord.x == test_tile_gridcoord.x);
    REQUIRE(tile.m_gridcoord.y == test_tile_gridcoord.y);

    REQUIRE(tile.m_shape.x == test_tile_shape.x);
    REQUIRE(tile.m_shape.y == test_tile_shape.y);

    REQUIRE(tile.m_gfx == test_tile_gfx.m_ptr);
    REQUIRE(tile.m_sel_gfx == test_tile_sel_gfx.m_ptr);

    //REQUIRE(tile.m_window_surf == test_window_surf);


    //m_rect

    REQUIRE(tile.m_rect.x 
        == 100  
        + (test_tile_gridcoord.y * test_tile_shape.x/2)
        + (test_tile_gridcoord.x * test_tile_shape.x/2)
    );

    REQUIRE(tile.m_rect.y
        == 100
        + (test_tile_gridcoord.y * test_tile_shape.y/2)
        - (test_tile_gridcoord.x * test_tile_shape.y/2)
    );

    REQUIRE(tile.m_rect.w == test_tile_shape.x);

    REQUIRE(tile.m_rect.h == test_tile_shape.y);

}
