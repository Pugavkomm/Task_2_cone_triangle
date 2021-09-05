
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
        Ellipse(): Line<T>(){
        }
        Ellipse(Point<T> o, Point<T> d): Line<T>(o, d){
            
        }
        virtual Point<T> derivative(double parametr);
        virtual Point<T> point_per_parameter(double parameter);
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
    