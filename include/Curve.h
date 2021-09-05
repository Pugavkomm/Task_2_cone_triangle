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
#include <string>

namespace Curves {
    /**
     * @brief Curve hierarchy base class
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
        /**
         * @brief Return type curve
         * 
         * @return std::string 
         */
        virtual std::string type();
        /**
         * @brief Placeholder and Coincides with get_direction()
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> derivative(double parameter); //placholder 
        /**
         * @brief Placeholder and Coincides with get_origin()
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> point_per_parameter(double parameter); //placholder
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
        return  direction;
    }

    template <typename T>
    std::string Curve<T>::type(){
        return "Curve:Base";
    }

    template <typename T>
    Point<T> Curve<T>::derivative(double parameter){
        return direction; 
    }
    
    template <typename T> 
    Point<T> Curve<T>::point_per_parameter(double parameter){
        return origin; 
    }
}

