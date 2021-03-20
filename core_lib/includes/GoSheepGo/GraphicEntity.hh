#pragma once

#include <GoSheepGo/GraphicGroup.hh>
#include <GoSheepGo/GoSheepHelpers.hh>

namespace gosheep {

    class GraphicEntity {
        public:

        GraphicEntity(GraphicGroup graphics,pixelpt position, sizept size);

        GraphicGroup m_graphics;
        std::string m_active_graphic;

        void SetActiveGraphic(std::string graphic_name);

        void Draw(SDL_Surface* dest_surf);

        pixelpt Position();
        void SetPosition(pixelpt position);
        
        sizept Size();
        void SetSize(sizept size);

        protected:
        SDL_Rect m_rect;

    };


}

