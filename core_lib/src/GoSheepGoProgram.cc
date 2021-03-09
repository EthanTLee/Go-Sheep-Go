#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include <exception>
#include "GoSheepGo/GoSheepGo.hh"
#include "GoSheepGo/GoSheepHelpers.hh"

using namespace gosheep;






void program(int argc, char* argv[]){

    SDL_Init(SDL_INIT_VIDEO);
    IMG_Init(IMG_INIT_PNG);

    auto window = SDL_CreateWindow(
        "Go Sheep Go",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN
    );


    SDL_Surface * window_surface = SDL_GetWindowSurface(window);
    
    SDL_FillRect(window_surface, NULL, SDL_MapRGB (window_surface -> format, 0x00, 0x00, 0xF0));
    SDL_UpdateWindowSurface(window);


    __not_null__ <SDL_Surface *> g_grass = IMG_Load("../res/grass.png");
    __not_null__ <SDL_Surface *> g_grass_sel = IMG_Load("../res/grass_sel.png");
    
    const int MAP_SHAPE[2] = {2,5};
    const int TILE_SHAPE[2] = {99,45};
    const int NUMBER_OF_TILES = MAP_SHAPE[0]*MAP_SHAPE[1];
    const int X_OFFSET = 100;
    const int Y_OFFSET = 100;


    std::vector <std::vector<SDL_Rect> > grass_pos(MAP_SHAPE[0]);

    for (int row_count = 0; row_count < MAP_SHAPE[0]; row_count++) {
        for (int col_count = 0; col_count < MAP_SHAPE[1]; col_count++) {

            grass_pos[row_count].push_back( CreateRect(
                // x
                X_OFFSET + (col_count * TILE_SHAPE[0]/2) + (row_count * TILE_SHAPE[0]/2),
                //y
                Y_OFFSET + (col_count * TILE_SHAPE[1]/2) - (row_count * TILE_SHAPE[1]/2),
                //w
                TILE_SHAPE[0],
                //h
                TILE_SHAPE[1]
            )); 
        }
    }

    int sel[2] = {0,0};
    bool quit = false;
    SDL_Event e;
    while (!quit)
    {
        while (SDL_PollEvent(&e) != 0)
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }

            else if( e.type == SDL_KEYDOWN ){
                switch (e.key.keysym.sym){

                    case SDLK_UP:                    
                    sel[0] += 1;
                    break;
                    
                    case SDLK_DOWN:
                    sel[0] -= 1;
                    break;
                    
                    case SDLK_RIGHT:
                    sel[1] += 1;
                    break;
                    
                    case SDLK_LEFT:
                    sel[1] -= 1;
                    break;                                
                }
            }

            for (int row_count = 0; row_count < MAP_SHAPE[0]; row_count++) {
                for (int col_count = 0; col_count < MAP_SHAPE[1]; col_count++) { 
                    if (sel[0] == row_count && sel[1] == col_count){
                        SDL_BlitSurface(g_grass_sel.m_ptr, NULL, window_surface, &grass_pos[row_count][col_count]);
                    }
                    else {
                        SDL_BlitSurface(g_grass.m_ptr, NULL, window_surface, &grass_pos[row_count][col_count]);
                    }
                    
                }
            }

            SDL_UpdateWindowSurface(window);
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}