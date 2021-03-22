

#include<GoSheepGo/TileGraphics.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <GoSheepGo/GoSheepHelpers.hh>
#include <string>
#include <vector>

using namespace gosheep;

TEST_CASE( "construct TileGraphics object", "[TileGraphics]") {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);
}

TEST_CASE("Test blit a regular grass tile", "[TileGraphics]") {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    tile_graphics.SetSelStatus(false);

    sizept size;
    size.x = 98;
    size.y = 45;
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;
    SDL_Rect dest_rect = CreateRect(pos, size);

    SDL_BlitSurface(tile_graphics.GetActiveSurface(), NULL, window_surf, &dest_rect); 
    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();

}


TEST_CASE("Test blit a select grass tile", "[TileGraphics]") {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    SDL_Surface* g_grass = IMG_Load("../../res/grass.png");
    SDL_Surface* g_grass_sel = IMG_Load("../../res/grass_sel.png");
    TileGraphics tile_graphics(g_grass, g_grass_sel);

    tile_graphics.SetSelStatus(true);

    sizept size;
    size.x = 98;
    size.y = 45;
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;
    SDL_Rect dest_rect = CreateRect(pos, size);

    SDL_BlitSurface(tile_graphics.GetActiveSurface(), NULL, window_surf, &dest_rect); 
    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();

}
