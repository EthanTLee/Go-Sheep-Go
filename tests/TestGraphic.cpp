

#include<GoSheepGo/Graphic.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <GoSheepGo/GoSheepHelpers.hh>
#include <string>


using namespace gosheep;

TEST_CASE( "Construct Graphic object", "[Graphic]" ) {

    IMG_Init(IMG_INIT_PNG);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");
}

TEST_CASE( "Make sure naming works", "[Graphic]" ) {

    IMG_Init(IMG_INIT_PNG);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");
    REQUIRE(graphic.m_name == "grass");
}


TEST_CASE( "Blit two grass tiles using Graphic class", "[Graphic]" ) {

    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");
    REQUIRE(graphic.m_name == "grass");

    sizept size;
    size.x = 98;
    size.y = 45;

    pixelpt pos;
    pos.x = 100;
    pos.y = 400;
    SDL_Rect dest_rect = CreateRect(pos, size);
    SDL_BlitSurface(graphic.m_surface, NULL, window_surf, &dest_rect);

    pos.x = 300;
    pos.y = 200;
    dest_rect = CreateRect(pos, size);
    SDL_BlitSurface(graphic.m_surface, NULL, window_surf, &dest_rect);

    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();
}