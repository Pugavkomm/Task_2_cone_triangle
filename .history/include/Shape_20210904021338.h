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
        Point<T> origin; 
        Point<T> direction; 
    public:
        using 
        Shape();
        Shape(T origin);
        void set_origin(T origin);
        void get_origin();
        void get_direction();
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
    T Shape<T>:: get_origin(){
        return 
    }
}

