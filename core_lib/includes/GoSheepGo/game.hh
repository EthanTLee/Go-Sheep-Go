#pragma once

#include <GoSheepGo/GoSheepHelpers.hh>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

namespace gosheep {

    class Game {
        public:

        Game() {
            SDL_Init(SDL_INIT_VIDEO);
            IMG_Init(IMG_INIT_PNG);
        }

        SDL_Window* window = nullptr;
        SDL_Surface* window_surface = nullptr;
        SDL_Event e;

        void make_window() {

            window = SDL_CreateWindow(
                "Go Sheep Go",
                SDL_WINDOWPOS_UNDEFINED,
                SDL_WINDOWPOS_UNDEFINED,
                640,
                480,
                SDL_WINDOW_SHOWN
            );

            window_surface = SDL_GetWindowSurface(window);
            SDL_UpdateWindowSurface(window);
            SDL_FillRect(window_surface, NULL, SDL_MapRGB (window_surface -> format, 0x00, 0x00, 0xF0));
            SDL_UpdateWindowSurface(window);
        }

        void start_gameloop(){
            bool quit = false;
            while (!quit) {
                while (SDL_PollEvent(&e) != 0) {
                    if (e.type == SDL_QUIT) {
                        quit = true;
                    }
                    else if
                }
            }
        }
    };
}