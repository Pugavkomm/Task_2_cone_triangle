
/**
 * @file Ellipse.h
 * @brief Ellipse class interface and implementation
 * 
 */

#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Line.h"
#include <cmath>
#include <string>


namespace Curves{
    /**
     * @brief Curve:Ellipse
     * 
     */
    template <typename T>
    class Ellipse : public Line<T>{
    public:
        /**
         * @brief Default constructor that defines a point at the origin = (0, 0) and direction = (0, 0).
         */
        Ellipse(): Line<T>(){}
        /**
         * @brief  Сonstructor that defines a point at the origin and direction.
         * 
         * @param origin is origin
         * @param direction is direction
         */
        Ellipse(Point<T> origin, Point<T> direction): Line<T>(origin, direction){}
        /**
         * @brief Method that return derivative per parameter
         * 
         * @param parametr 
         * @return Point<T> 
         */
        virtual Point<T> derivative(double parametr);
        /**
         * @brief Method that return point per parameter
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> point_per_parameter(double parameter);
        /**
         * @brief Method that return type
         * 
         * @return std::string 
         */
        virtual std::string type();
    };
}
#endif
namespace Curves{
    template <typename T>
    Point<T> Ellipse<T>::point_per_parameter(double parameter) {
        std::array<T, DIM> circle = {cos(parameter), sin(parameter)};
        Point<T> point_circle(circle);
        return this->get_origin() + this->get_direction() * point_circle;
    }

    template <typename T>
    Point<T> Ellipse<T>::derivative(double parameter) {
        std::array<T, DIM> der_circle = {-sin(parameter), cos(parameter)};
        Point<T> point_der_circle (der_circle);
        return this->get_direction() * point_der_circle;
    }

    template <typename T>
    std::string Ellipse<T>::type(){
        return "Curve:Ellipse"; 
    }
}
    