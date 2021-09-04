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
        virtual coordinate_type derivative(double parameter) const;
        virtual coordinate_type point_per_parameter(double parameter) const;
    };
}
#endif

namespace Curves{
    template <typename T>
    T Line<T>::derivative(double parameter) const{
        return direction; 

    }
    template <typename T>
   T Line<T>::point_per_parameter(double parameter) const{
        return origin + direction * parameter;
    }
}