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
        coordinate origin; 
        coordinate direction; 
    public:
        Shape();
        Shape(T origin);
        void set_origin(T origin);
        Point<T> get_origin();
        Point<T> get_direction();
        //void get_point(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    Shape<T>::Shape(){
        origin = Point<T>();
    }

    template <typename T>
    Shape<T>::Shape(T origin){
        this.origin = origin;
    }
    
    template <typename T>
    Point<T> Shape<T>::get_origin(){
        return origin; 
    }

    Point<T> Shape<T>::get_direction(){
        return direction; 
    }
}

