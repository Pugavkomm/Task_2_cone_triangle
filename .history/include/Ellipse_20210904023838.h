
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Line.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Ellipse : public Line<T>{
    public:
        virtual T derivative(double parametr)  const;
        virtual T point_per_parameter(double parameter)  const;
    };
}
#endif
namespace Curves{
    template <typename T>
    T Ellipse<T>::point_per_parameter(double parameter) const {
        return this->get_origin() + this->get_direction * Point<T> (cos(parameter), sin(parameter));
    }

    template <typename T>
    T Ellipse<T>::derivative(double parameter) const {
         Point<T> der(-sin(parameter), cos(parameter));
        return this->direction * Point<T> (-sin(parameter), cos(parameter)) ;
    }
}
    