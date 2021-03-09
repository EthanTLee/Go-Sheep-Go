#include <catch.hpp>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "GoSheepGo/tile.hh"

int test_tile_number[2];
int test_tile_shape[2];
int test_tile_offset[2];
SDL_Surface*  test_tile_gfx = IMG_Load("../../res/grass.png");
SDL_Surface* test_tile_sel_gfx = IMG_Load("../../res/grass_sel.png");

Tile tile(
    test_tile_number, 
    test_tile_shape,
    test_tile_offset, 
    test_tile_gfx,
    test_tile_sel_gfx
);

TEST_CASE( "tile constructor testing", "tile") {

    REQUIRE(tile.number == test_tile_number);

    REQUIRE(tile.shape == test_tile_shape);

    REQUIRE(tile.offset == test_tile_offset);

    REQUIRE(tile.gfx == test_tile_gfx);

    REQUIRE(tile.sel_gfx == test_tile_sel_gfx);
}

TEST_CASE( "tile position testing", "tile") {

    REQUIRE(tile.pos.x 
        == test_tile_offset[0]  
        + (test_tile_number[1] * test_tile_shape[0]/2)
        + (test_tile_number[0] * test_tile_shape[0]/2)
    );
    
    REQUIRE(tile.pos.y
        == test_tile_offset[1]
        + (test_tile_number[1] * test_tile_shape[1]/2)
        - (test_tile_number[0] * test_tile_shape[1]/2)
    );

    REQUIRE(tile.pos.w == test_tile_shape[0]);
    
    REQUIRE(tile.pos.h == test_tile_shape[1]);
}

