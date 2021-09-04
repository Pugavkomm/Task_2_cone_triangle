#pragma once
#ifndef LINE
#define LINE
#include "Shape.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : public Shape<T> {
        using coordinate_type = T;
    public: 
        virtual coordinate_type derivative(double parameter);
        virtual coordinate_type point_per_parameter(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    T Line<T>::derivative(double parameter) {
        return this->direction; 

    }
    template <typename T>
    T Line<T>::point_per_parameter(double parameter){
        return origin + this->direction * parameter;
    }
}