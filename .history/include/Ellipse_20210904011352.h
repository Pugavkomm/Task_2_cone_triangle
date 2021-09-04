
#pragma once
#ifndef ELLIPSE
#define ELLIPSE
#include "Shape.h"
#include <cmath>

template <typename T>
    class Ellipse : public Line{
        virtual coordinate_type derivative(double parametr) const;
        virtual coordinate_type point_per_parameter(double parameter) const;
    };
#endif

    template <typename T>
    T Ellipse<T>::point_per_parameter(double parameter) const {
        return origin + direction * Point<coordinate_type> (cos(parameter), sin(parameter));
    }

    template <typename T>
    T Ellipse::derivative(double parameter) const {
        return direction * Point<coordinate_type> (-sin(paramater), cos(parameter));
    }

    