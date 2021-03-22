#pragma once

#include <GoSheepGo/Graphic.hh>

#include <GoSheepGo/GoSheepHelpers.hh>

#include <SDL2/SDL.h>

namespace gosheep {
    class Drawer {
        
        public:
        Drawer();
        Drawer(Graphic graph, SDL_Surface* dest_surf);
        
        void SetGraphic(Graphic graph);
        void SetDestSurf(SDL_Surface* dest_surf);

        void Draw(pixelpt pos);

        private:
        Graphic m_graph;
        SDL_Surface* m_dest_surf;
    };
}