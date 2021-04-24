#include <GoSheepGo/Core/GameWindow.hh>

#include <string>
#include <SDL2/SDL.h>

using namespace core; 


GameWindow::GameWindow(std::string name, int width, int height) {
    m_window = SDL_CreateWindow(
        name.c_str(),
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        width,
        height,
        SDL_WINDOW_SHOWN
    );
    m_surface = SDL_GetWindowSurface(m_window);
    m_renderer = SDL_CreateRenderer(m_window,-1,0);
}    


void GameWindow::Update() {
    SDL_UpdateWindowSurface(m_window);
}