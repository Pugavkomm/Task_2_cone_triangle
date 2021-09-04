/**
 * @file Shape.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SHAPE
#define SHAPE
#include "Point.h"
#include <cmath>

namespace Curves {
    /**
     * @brief 
     * 
     */
    template <typename T>
    class Shape{
        using coordinate_type = T; 
        
        coordinate_type origin; 
        coordinate_type direction; 
    public:
        Shape();
        Shape(coordinate_type origin);
        void set_origin(coordinate_type origin);
        void get_point(double parameter);
    };
}
template <typename T>
class Line : public Shape {
    virtual coordinate_type derivative(double parameter) const;
    virtual coordinate_type point_per_parameter(double parameter) const;
};

template <typename T>
class Ellipse : public Line{
    virtual coordinate_type derivative(double parametr) const;
    virtual coordinate_type point_per_parameter(double parameter) const;
};
#endif

//  Shape
template <typename T>
Shape<T>::Shape(){
    origin = Point<coordinate_type>();
}

template <typename T>
Shape<T>::Shape(coordinate_type origin){
    this.origin = origin;
}

//  Line 
template <typename T>
virtual coordinate_type Line<T>::point_per_parameter(double parameter) const{
    return origin + direction * parameter;
}

virtual coordinate_type Line<T>::derivative(double parameter) const{
    return direction; 

}

// Ellipse
template <typename T>
virtual coordinate_type Ellipse<T>::point_per_parameter(double parameter) const {
    return origin + direction * Point<coordinate_type> (cos(parameter), sin(parameter));
}

template <typename T>
virtual coordinate_type Ellipse::derivative(double parameter) const {
    return direction * Point<coordinate_type> (-sin(paramater), cos(parameter));
}