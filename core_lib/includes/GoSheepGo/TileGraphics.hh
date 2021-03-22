#pragma once

#include <GoSheepGo/GraphicGroup.hh>

namespace gosheep {
    class TileGraphics {
        public:
        TileGraphics(SDL_Surface* regular_graph, SDL_Surface* sel_graph);

        void SetSelStatus(bool state);
        bool GetSelStatus();

        SDL_Surface* GetActiveSurface();

        private:
        bool m_sel_status;
        GraphicGroup m_graphic_group;
    };
}