#pragma once

#include <SDL2/SDL.h>

namespace core {


struct point {
    int x= 0, y=0;

    bool operator==(const point& p) const {
        return (x == p.x) && (y == p.y);    
    }
};


struct pixelpt : public point {
    pixelpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }
};


struct Rectangle {
    Rectangle() {
        m_rect.x = 0;
        m_rect.y = 0;
        m_rect.w = 0;
        m_rect.h = 0;
    }
    Rectangle(pixelpt position, pixelpt size) {
        m_rect.x = position.x;
        m_rect.y = position.y;
        m_rect.w = size.x;
        m_rect.h = size.y;
    }
    SDL_Rect m_rect;
};


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


} //namespace core