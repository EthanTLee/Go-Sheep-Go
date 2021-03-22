#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>
#include <exception>

namespace gosheep {


    struct point {
        int x= 0, y=0;
    };

    struct pixelpt : public point {};

    struct gridpt : public point {};

    struct sizept : public pixelpt {};
    
    struct userinput {
        bool quit = false;
        bool up_key = false;
        bool down_key = false;
        bool right_key = false;
        bool left_key = false;
        bool space_bar = false;
    };


    template <typename T>
    class __not_null__{
        public :
        __not_null__(T ptr){
            m_ptr = ptr;
            if(!m_ptr){
                throw std::runtime_error("Pointer must not be null pointer!");
            }
        }
        T  m_ptr = nullptr;
    };


    inline SDL_Rect CreateRect (pixelpt position, sizept size) {
        SDL_Rect ret;
        ret.x = position.x;
        ret.y = position.y;
        ret.w = size.x;
        ret.h = size.y;

        return ret;
    }

    inline SDL_Window* Make_Window() {
        SDL_Window* ret = SDL_CreateWindow(
            "Go Sheep Go",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            640,
            480,
            SDL_WINDOW_SHOWN
        );
        return ret;
    }

    inline void Paint_Surface_Blue(SDL_Surface* window_surface) {
        SDL_FillRect(window_surface, NULL, SDL_MapRGB (window_surface -> format, 0x00, 0x00, 0xF0));
    }

    inline void Continue_Until_Quit() {
        bool quit = false;
        SDL_Event e;
        while (!quit) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    quit = true;
                }
            }
        }
    }

    inline userinput Get_Input(SDL_Event event) {
        userinput ret;

        switch (event.type) {
            case SDL_QUIT:
                ret.quit = true;
                break;

            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {

                    case SDLK_UP:                    
                    ret.up_key = true;
                    break;
                    case SDLK_DOWN:
                    ret.down_key = true;
                    break;
                    case SDLK_RIGHT:
                    ret.right_key = true;
                    break;
                    case SDLK_LEFT:
                    ret.left_key = true;
                    break;                                
                }
                break;

            case SDL_KEYUP:
                switch (event.key.keysym.sym) {

                    case SDLK_UP:                    
                    ret.up_key = false;
                    break;               
                    case SDLK_DOWN:
                    ret.down_key = false;
                    break;
                    case SDLK_RIGHT:
                    ret.right_key = false;
                    break;
                    case SDLK_LEFT:
                    ret.left_key = false;
                    break;                                
                }
                break;
        }

        return ret;
    }



}
