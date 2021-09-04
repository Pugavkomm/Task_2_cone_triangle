/**
 * @file Shape.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once
#ifndef SHAPE
#define SHAPE
#include "Point.h"
#include <cmath>

namespace Curves {
    /**
     * @brief 
     * 
     */
    template <typename T>
    class Shape{
        T origin; 
        coordinate_type direction; 
    public:
        Shape();
        Shape(coordinate_type origin);
        void set_origin(coordinate_type origin);
        void get_point(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    Shape<T>::Shape(){
        origin = Point<coordinate_type>();
    }

    template <typename T>
    Shape<T>::Shape(coordinate_type origin){
        this.origin = origin;
    }
}