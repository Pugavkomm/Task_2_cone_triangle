/**
 * @file point.cpp
 * @brief  Implementing the Point interface.
 */
#include "Point.h"



Point::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

template <typename T>
Point::Point(T number, ...){
        if (number != DIM)
            throw out_of_range("number of coordinates = " + std::to_string(number) + 
            ", but DIM = " + std::to_string(DIM));
        for(auto *i = &number; i > 0; --i){
            point[i] = *(++number);
        }
    }