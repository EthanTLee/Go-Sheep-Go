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

        SDL_Window* m_window = nullptr;
        SDL_Surface* m_window_surface = nullptr;
        SDL_Event m_e;

        void make_window() {

            m_window = SDL_CreateWindow(
                "Go Sheep Go",
                SDL_WINDOWPOS_UNDEFINED,
                SDL_WINDOWPOS_UNDEFINED,
                640,
                480,
                SDL_WINDOW_SHOWN
            );

            m_window_surface = SDL_GetWindowSurface(m_window);
            SDL_UpdateWindowSurface(m_window);
            SDL_FillRect(m_window_surface, NULL, SDL_MapRGB (m_window_surface -> format, 0x00, 0x00, 0xF0));
            SDL_UpdateWindowSurface(m_window);
        }

        void start_gameloop(){
            bool quit = false;
            while (!quit) {
                while (SDL_PollEvent(&m_e) != 0) {
                    if (m_e.type == SDL_QUIT) {
                        quit = true;
                    }
                    else if
                }
            }
        }
    };
}