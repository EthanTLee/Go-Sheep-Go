/* #include <string>

#include <GoSheepGo/GoSheepHelpers.hh>
#include <GoSheepGo/Graphic.hh>


using namespace gosheep;

void Test_Graphic() {

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = Make_Window();
    SDL_Surface* window_surface = SDL_GetWindowSurface(window);
    Paint_Surface_Blue(window_surface);
    SDL_UpdateWindowSurface(window);

    Graphic graphic("../res/grass.png");

    SDL_Rect grass_rect;
    grass_rect.x = 100;
    grass_rect.y = 400;
    grass_rect.h = 45;
    grass_rect.w = 98;

    graphic.Draw(window_surface, &grass_rect);

    SDL_UpdateWindowSurface(window);

    Continue_Until_Quit();

}

*/