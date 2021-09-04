/**
 * @file point.cpp
 * @brief  Implementing the Point interface.
 */
#include "Point.h"

using Point<T>::point_type = T

template <typename T>
Point<T>::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

template <typename T> 
Point<T>::Point(point_type... cordinate){

}