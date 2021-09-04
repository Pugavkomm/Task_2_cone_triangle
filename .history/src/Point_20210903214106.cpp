/**
 * @file point.cpp
 * @brief  Implementing the Point interface.
 */
#include "Point.h"


template <typename T>
Point<T>::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

template <typename T>
Point<T>::Point(point_type number, ...){
        if (number != DIM)
            throw std::out_of_range("number of coordinates = " + std::to_string(number) + 
            ", but DIM = " + std::to_string(DIM));
        for(auto *i = &number; i > 0; --i){
            point[i] = *(++number);
        }
    }
    