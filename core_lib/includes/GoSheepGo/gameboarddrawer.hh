/* 

#pragma once

#include<vector>
#include <SDL2/SDL.h>
#include <GoSheepGo/functions.hh>

using namespace gosheep;

class Gameboarddrawer {
    public:


    Gameboarddrawer(){
        Init_SDL_Video();

        m_window = Make_Window();
        m_window_surface = SDL_GetWindowSurface(m_window);

        Paint_Surface_Blue(m_window_surface);

        SDL_UpdateWindowSurface(m_window);
    }


    SDL_Window * m_window = nullptr;
    SDL_Surface * m_window_surface = nullptr;

    std::vector <SDL_Rect> m_rect_vector; 


    bool draw() {
        SDL_Event e;
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT)
            {
                return false;
            }

            SDL_UpdateWindowSurface(m_window);
        }
        m_rect_vector.clear();
        return true;
    }

    void add_element(gridpt p, int player) {

        auto pixelposition = convert_grid_to_pixel(p);

        m_rect.push_back(CreateRect({0,0},{98,45}));


        SDL_BlitSurface(grass, NULL, window_surface, &m_rect.back());
    }



    ~Gameboarddrawer(){
        SDL_DestroyWindow(m_window);
        SDL_Quit();
    }
};

*/