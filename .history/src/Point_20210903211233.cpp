/**
 * @file point.cpp
 * @brief  Implementing the Point interface.
 */
#include "Point.h"


template <typename T>
Point::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

