#pragma once
#ifndef LINE
#define LINE
#include "Shape.h"
#include <cmath>

namespace Curves{
    template <typename T>
    class Line : Shape<T> {
        using coordinate_type = T;
    public: 
        virtual T derivative(double parameter);
        virtual T point_per_parameter(double parameter);
    };
}
#endif

namespace Curves{
    template <typename T>
    coordinate_type Line<T>::derivative(double parameter) {
        return this->direction; 

    }
    template <typename T>
    coordinate_type Line<T>::point_per_parameter(double parameter){
        return this->origin + this->direction * parameter;
    }
}