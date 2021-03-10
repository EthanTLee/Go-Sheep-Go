#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace gosheep {

    class Game {
        public:

        Game() {}

        SDL_Window* window = nullptr;
        SDL_Surface* window_surface = nullptr;

        void make_window(int argc, char* argv[]) {

            SDL_Init(SDL_INIT_VIDEO);
            IMG_Init(IMG_INIT_PNG);

            window = SDL_CreateWindow(
                "Go Sheep Go",
                SDL_WINDOWPOS_UNDEFINED,
                SDL_WINDOWPOS_UNDEFINED,
                640,
                480,
                SDL_WINDOW_SHOWN
            );

            window_surface = SDL_GetWindowSurface(window);

        }

        void start_gameloop(int argc, char* argv[]){
            bool quit = false;
            SDL_Event e;
        }
    };
}