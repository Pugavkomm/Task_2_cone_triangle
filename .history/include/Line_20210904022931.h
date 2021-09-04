#pragma once
#ifndef LINE
#define LINE
#include "Shape.h"
#include "Point.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : public Shape<T> {
    public: 
        virtual T derivative(double parameter);
        virtual T point_per_parameter(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    Point<T> Line<T>::derivative(double parameter) {
        return get_direction(); 

    }
    template <typename T>
    Point<T> Line<T>::point_per_parameter(double parameter){
        return get_origin() + get_direction() * parameter;
    }
}