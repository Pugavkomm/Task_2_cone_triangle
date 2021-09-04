
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Shape.h"
#include <cmath>
namespace Curves{
    template <typename T>
    class Ellipse : public Line<T>{
        using coordinate_type = T;
    public:
        virtual T derivative(double parametr)  const;
        virtual T point_per_parameter(double parameter)  const;
    };
}
#endif
namespace Curves{
    template <typename T>
    T Ellipse<T>::point_per_parameter(double parameter) const {
        return origin + direction * Point<coordinate_type> (cos(parameter), sin(parameter));
    }

    template <typename T>
    T Ellipse<T>::derivative(double parameter) const {
         Point<coordinate_type> der = (-sin(parameter), cos(parameter))
        return direction * der ;
    }
}
    