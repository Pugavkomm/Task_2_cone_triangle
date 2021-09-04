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

class Line: public Shape{
    virtual coordinate_type derivative(double parameter) const;
    virtual coordinate_type point_per_parameter(double parameter) const;
};

class Ellipse: public Line{
    virtual coordinate_type derivative(double parametr) const;
    virtual coordinate_type point_per_parameter(double parameter) const;
}
#endif

//  Shape
template <typename T>
Shape<T>::Shape(){
    origin = Point<coordinate T>();
}

template <typename T>
Shape<T>::Shape(coordinate_type origin){
    this.origin = origin;
}

//  Line 
template <typename T>
virtual coordinate_type Line<T>::point_per_parameter(double parameter) const{
    return origin + direction * parameter;


virtual coordinate_type Line<T>::derivative(double parameter) const{

}
}
// Ellipse
