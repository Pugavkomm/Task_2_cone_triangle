/**
 * @file Curve.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#pragma once
#ifndef CURVE
#define CURVE
#include "Point.h"
#include <cmath>

namespace Curves {
    /**
     * @brief 
     * 
     */
    template <typename T>
    class Curve{
        Point<T> origin; 
        Point<T> direction; 
    public:
        Curve();
        Curve(T origin);
        void set_origin(Point<T> origin);
        void set_direction(Point<T> direction);
        Point<T> *get_origin();
        Point<T> *get_direction();
        //void get_point(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    Curve<T>::Curve(){
        origin = Point<T>();
    }

    template <typename T>
    Curve<T>::Curve(T origin){
        this.origin = origin;
    }

    template <typename T>
    void Curve<T>::set_origin(Point<T> origin){
        this->origin = origin; 
    }

    template <typename T>
    void Curve<T>::set_direction(Point<T> direction){
        this->direction = direction; 
    }

    
    template <typename T>
    Point<T> *Curve<T>::get_origin(){
        std::vector<T> out = origin;
        return *out; 
    }

    template <typename T>
    Point<T> *Curve<T>::get_direction(){
        Point<T> out = direction;
        return *out; 
    }
}

