

#include<GoSheepGo/GraphicGroup.hh>

#include "catch.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include <GoSheepGo/GoSheepHelpers.hh>
#include <string>
#include <vector>


using namespace gosheep;

TEST_CASE( "Construct GraphicGroup object", "[GraphicGroup]") {
    std::vector<SDL_Surface*> surfaces;
    surfaces = {IMG_Load("../../res/grass.png"), IMG_Load("../../res/grass_sel.png")};
    std::vector<std::string> names = {"grass","grass_sel"};
    GraphicGroup graphic_group(surfaces, names);
}

TEST_CASE( "Test blit member image", "[GraphicGroup]") {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    std::vector<SDL_Surface*> surfaces;
    surfaces = {IMG_Load("../../res/grass.png"), IMG_Load("../../res/grass_sel.png")};
    std::vector<std::string> names = {"grass","grass_sel"};
    GraphicGroup graphic_group(surfaces, names);

    sizept size;
    size.x = 98;
    size.y = 45;
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;
    SDL_Rect dest_rect = CreateRect(pos, size);

    SDL_BlitSurface(graphic_group.GetSurface("grass"), NULL, window_surf, &dest_rect); 
    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();

}

TEST_CASE( "check that names match images (sel on left, reg on right)", "[GraphicGroup]") {
    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);
    
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surf = SDL_GetWindowSurface(window);

    std::vector<SDL_Surface*> surfaces;
    surfaces = {IMG_Load("../../res/grass.png"), IMG_Load("../../res/grass_sel.png")};
    std::vector<std::string> names = {"grass","grass_sel"};
    GraphicGroup graphic_group(surfaces, names);

    sizept size;
    size.x = 98;
    size.y = 45;
    pixelpt pos;
    pos.x = 100;
    pos.y = 400;
    SDL_Rect dest_rect = CreateRect(pos, size);

    SDL_BlitSurface(graphic_group.GetSurface("grass"), NULL, window_surf, &dest_rect); 
    SDL_UpdateWindowSurface(window);

    pos.x = 0;
    pos.y = 400;
    dest_rect = CreateRect(pos, size);

    SDL_BlitSurface(graphic_group.GetSurface("grass_sel"), NULL, window_surf, &dest_rect); 
    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();
}



