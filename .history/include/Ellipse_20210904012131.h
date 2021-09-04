
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Shape.h"
#include <cmath>

template <typename T>
    class Ellipse : public Line<T>{
    public:
        virtual T derivative(double parametr) override const;
        virtual T point_per_parameter(double parameter)  const;
    };
#endif

    template <typename T>
    T Ellipse<T>::point_per_parameter(double parameter) const {
        return origin + direction * Point<coordinate_type> (cos(parameter), sin(parameter));
    }

    template <typename T>
    virtual T Ellipse<T>::derivative(double parameter) override const {
        return direction * Point<coordinate_type> (-sin(paramater), cos(parameter));
    }

    