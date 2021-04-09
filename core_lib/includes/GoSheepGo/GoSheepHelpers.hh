#pragma once

#include <exception>

namespace gosheep {

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

} //namespace gosheep