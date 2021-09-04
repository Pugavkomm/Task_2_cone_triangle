
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Line.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Ellipse : public Line<T>{
    public:
        virtual Point<T> derivative(double parametr)  const;
        virtual Point<T> point_per_parameter(double parameter)  const;
    };
}
#endif
namespace Curves{
    template <typename T>
    Point<T> Ellipse<T>::point_per_parameter(double parameter) const {
        Point<T> radi(cos(parameter), sin(parameter))
        return this->get_origin() + this->get_direction() * radi;
    }

    template <typename T>
    Point<T> Ellipse<T>::derivative(double parameter) const {
        Point<T> der(-sin(parameter), cos(parameter));
        der_rad
        return this->get_direction() * Point<T> (-sin(parameter), cos(parameter)) ;
    }
}
    