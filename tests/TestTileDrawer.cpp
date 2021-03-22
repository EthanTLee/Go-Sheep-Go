#define CATCH_CONFIG_MAIN 

#include <GoSheepGo/TileDrawer.hh>

#include <GoSheepGo/TileGraphics.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <string>

using namespace gosheep;

TEST_CASE("construct a tile drawer object", "[TileDrawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    TileDrawer tiledrawer(tile_graphics, window_surf);
    
}

TEST_CASE("draw a grass graphic using drawer", "[TileDrawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    TileDrawer tiledrawer(tile_graphics, window_surf);
    
    pixelpt pos;
    pos.x = 100;
    pos.y = 300;

    tiledrawer.Draw(pos);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();
}

TEST_CASE("draw a grass graphic to a lower position", "[TileDrawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    TileDrawer tiledrawer(tile_graphics, window_surf);
    
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;

    tiledrawer.Draw(pos);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();
}

TEST_CASE("draw a select grass graphic to a lower position", "[TileDrawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    TileDrawer tiledrawer(tile_graphics, window_surf);

    tile_graphics.SetSelStatus(true);
    
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;

    tiledrawer.Draw(pos);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();
}

