#define CATCH_CONFIG_MAIN 

#include <GoSheepGo/Drawer.hh>

#include <GoSheepGo/Graphic.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <string>

using namespace gosheep;

TEST_CASE("construct a drawer object", "[Drawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");

    Drawer drawer(graphic, window_surf);
    
}

TEST_CASE("draw a grass graphic using drawer", "[Drawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");

    Drawer drawer(graphic, window_surf);
    
    pixelpt pos;
    pos.x = 100;
    pos.y = 300;

    drawer.Draw(pos);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();
}

TEST_CASE("draw a grass graphic to a lower position", "[Drawer]") {

    IMG_Init(IMG_INIT_PNG);
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    Graphic graphic(IMG_Load("../../res/grass.png"), "grass");

    Drawer drawer(graphic, window_surf);
    
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;

    drawer.Draw(pos);

    SDL_UpdateWindowSurface(window);
    Continue_Until_Quit();
}

