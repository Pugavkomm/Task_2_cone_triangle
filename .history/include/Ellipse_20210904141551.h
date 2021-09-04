
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Line.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Ellipse : public Line<T>{
    public:
        Ellipse(): Line<T>(){
        }
        Ellipse(Point<T> o, Point<)
        virtual Point<T> derivative(double parametr);
        virtual Point<T> point_per_parameter(double parameter);
    };
}
#endif
namespace Curves{
    template <typename T>
    Point<T> Ellipse<T>::point_per_parameter(double parameter) {
        Point<T> radi(cos(parameter), sin(parameter));
        return this->get_origin() + this->get_direction() * radi;
    }

    template <typename T>
    Point<T> Ellipse<T>::derivative(double parameter) {
        Point<T> der_rad (-sin(parameter), cos(parameter));
        return this->get_direction() * der_rad ;
    }
}
    