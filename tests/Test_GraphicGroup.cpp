#include <GoSheepGo/GraphicGroup.hh>
#include <GoSheepGo/Graphic.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <vector>


using namespace gosheep;


TEST_CASE( "Drawing GraphicGroup Members", "[Graphic]" ) {

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surface = SDL_GetWindowSurface(window);
    Paint_Surface_Blue(window_surface);
    SDL_UpdateWindowSurface(window);

    Graphic g_grass("../../res/grass.png", "grass");
    Graphic g_grass_sel("../../res/grass_sel.png", "grass_sel");

    std::vector <Graphic> graphic_vec = {g_grass, g_grass_sel};

    GraphicGroup graphic_group(graphic_vec);

    SDL_Rect grass_rect;
    grass_rect.x = 100;
    grass_rect.y = 400;
    grass_rect.h = 45;
    grass_rect.w = 98;

    graphic_group.DrawIndividual("grass_sel", window_surface, &grass_rect);

    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();

}