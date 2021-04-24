#pragma once

#include <GoSheepGo/Core/PointTypes.hh>

#include <SDL2/SDL.h>


namespace core {





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