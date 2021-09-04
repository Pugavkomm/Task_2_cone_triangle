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
     * @brief Base class for curve hierarchy
     * 
     */
    template <typename T>
    class Curve{
        /**
         * @brief Reference point for curves.
         * 
         */
        Point<T> origin; 
        /**
         * @brief The main parameter for the curve. To directly define the direction in the form `C (t) = origin + direction * parameter`. For an ellipse, the axes define their own radius for each.
         * 
         */
        Point<T> direction; 
    public:
        /**
         * @brief Default constructor that defines a point at the origin = (0, 0) and direction = (0, 0).
         */
        Curve();
        /**
         * @brief Сonstructor that defines a point at the origin and direction.
         */
        Curve(Point<T> origin, Point<T> direction);
        /**
         * @brief Set the origin point
         * 
         * @param origin 
         */
        void set_origin(Point<T> origin);
        /**
         * @brief Set the direction 
         * 
         * @param direction 
         */
        void set_direction(Point<T> direction);
        /**
         * @brief Get the origin point
         * 
         * @return Point<T> 
         */
        Point<T> get_origin();
        /**
         * @brief Get the direction
         * 
         * @return Point<T> 
         */
        Point<T> get_direction();
    };
}
#endif

namespace Curves{
    template <typename T>
    Curve<T>::Curve(){
        origin = Point<T>();
    }

    template <typename T>
    Curve<T>::Curve(Point<T> origin, Point<T> direction){
        this->set_origin(origin);
        this->set_direction(origin);
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
    Point<T> Curve<T>::get_origin(){
        return origin; 
    }

    template <typename T>
    Point<T> Curve<T>::get_direction(){
        return direction; 
    }
}

