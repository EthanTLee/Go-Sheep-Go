#pragma once

#include <exception>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>


namespace gosheep {

// Gameengine Helpers

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

// End Gameengine Helpers


// Userinput Helpers


// End Userinput Helpers


// Gameboard Helpers



// End Gameboard Helpers


// Sprite Helpers

using sprite = SDL_Surface*;

inline sprite LoadImageAsSprite(std::string path_to_image) {
    sprite ret = IMG_Load(path_to_image.c_str());

    if (ret == nullptr) {
        throw std::runtime_error("sprite not loaded");
    }

    return ret;
}

// End Sprite Helpers


// Position Helpers

struct point {
    int x= 0, y=0;
};

struct pixelpt : public point {
    pixelpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }
};

struct gridpt : public point {

    gridpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }

    bool operator==(const gridpt& p) const {
        return (x == p.x) && (y == p.y);    
    }
};

struct sizept : public pixelpt {};

inline SDL_Rect CreateRect (pixelpt position, sizept size) {
    SDL_Rect ret;
    ret.x = position.x;
    ret.y = position.y;
    ret.w = size.x;
    ret.h = size.y;

    return ret;
}

// End Position Helpers


// Window Helpers

using window_surface = SDL_Surface*;

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

inline void Paint_Window_Blue(SDL_Surface* window_surface) {
    SDL_FillRect(window_surface, NULL, SDL_MapRGB (window_surface -> format, 0x00, 0x00, 0xF0));
}

// End Window Helpers


// Other Helpers

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

// End Other Helpers


} // end namespace gosheep