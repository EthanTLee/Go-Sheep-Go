#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <exception>

namespace gosheep {

    struct point {
        int x= 0, y=0;
    };

    struct pixelpt : public point {};

    struct gridpt : public point {};

    struct sizept : public pixelpt {};


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


    inline pixelpt convert_grid_to_pixel( gridpt gridcoord, sizept tileshape) {
        const int X_OFFSET = 100;
        const int Y_OFFSET = 100;

        pixelpt pixelcoord;

        pixelcoord.x = X_OFFSET 
            + (gridcoord.y * tileshape.x/2) 
            + (gridcoord.x * tileshape.x/2);

        pixelcoord.y = Y_OFFSET 
            + (gridcoord.y * tileshape.y/2) 
            - (gridcoord.x * tileshape.y/2);        
        
        return pixelcoord;
    }


 inline   SDL_Rect CreateRect (pixelpt position, sizept size) {
        SDL_Rect ret;
        ret.x = position.x;
        ret.y = position.y;
        ret.w = size.x;
        ret.h = size.y;

        return ret;
    }

}   
