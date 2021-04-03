#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include <GoSheepGo/GoSheepHelpers.hh>

using namespace gosheep;

TEST_CASE("make sure compiles", "[compile]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    window_surface window_surf = SDL_GetWindowSurface(window);
    
}


