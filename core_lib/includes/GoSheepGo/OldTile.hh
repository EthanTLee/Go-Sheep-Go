#pragma once

#include <GoSheepGo/GraphicEntity.hh>

namespace gosheep{

    class Tile: public GraphicEntity {
        
        public:
        Tile(GraphicGroup graphics, gridpt gridpos, sizept size);
        
        gridpt Gridpos();
        void SetGridpos(gridpt gridpos);

        protected:
        gridpt m_gridpos;

        private:
        pixelpt Pixelpos();
    };
}