#pragma once

#include <SDL2/SDL.h>
#include <string>

namespace core {

class GameWindow {
    
    public:

    GameWindow(std::string name, int width, int height);

    SDL_Window* m_window = nullptr;
    SDL_Surface* m_surface = nullptr;
    SDL_Renderer* m_renderer = nullptr;

    void Update();
};

} // namespace core