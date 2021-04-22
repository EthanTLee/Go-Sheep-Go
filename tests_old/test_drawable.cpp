#include<GoSheepGo/Drawable.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>


using namespace gosheep;

TEST_CASE("test Drawable class") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    window_surface window_surf = SDL_GetWindowSurface(window);

    pixelpt pos;
    pos.x = 0;
    pos.y = 200;

    Drawable grass("../../res/grass.png");
    grass.Draw(pos, window_surf);

    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();
}