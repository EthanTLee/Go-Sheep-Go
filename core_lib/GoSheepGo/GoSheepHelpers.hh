#pragma once

#include <exception>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <GoSheepGo/Core/Helpers.hh>


namespace gosheep {


struct gridpt : public core::point {

    gridpt(int x_ = 0, int y_ = 0) {
        x = x_;
        y = y_;
    }

};


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


} // end namespace gosheep