#pragma once
#ifndef LINE
#define LINE
#include "Curve.h"
#include "Point.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : public Curve<T> {
    public: 
        Line();
        Line(T origin, T direction);
        virtual Point<T> derivative(double parameter);
        virtual Point<T> point_per_parameter(double parameter);
    };
}
#endif

namespace Curves{

    template <typename T>
    Line<T>::Line(){}
    template <typename T>
    Line<T>::Line(T o, T d)
    {
        set
    }


    template <typename T>
    Point<T> Line<T>::derivative(double parameter) {
        return this->get_direction(); 

    }
    template <typename T>
    Point<T> Line<T>::point_per_parameter(double parameter){
        return this->get_origin() + this->get_direction() * parameter;
    }
}