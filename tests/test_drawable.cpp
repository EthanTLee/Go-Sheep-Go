#include<GoSheepGo/Drawable.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>


using namespace gosheep;

TEST_CASE("draw a drawable", "[drawable]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    
    /*
    window_surface window_surf = SDL_GetWindowSurface(window);
    sprite grass_sprite = IMG_Load("../../res/grass.png");
    pixelpt pos;
    pos.x = 100;
    pos.y = 200;

    Drawable grass(grass_sprite, pos, window_surf);
    grass.Draw();

    */

    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();

}