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

/**
 * @brief 
 * 
 */
template <typename T>
class Shape{
    using coordinate_type = T; 
    
    coordinate_type origin; 
public:
    Shape();
    Shape(coordinate_type origin);
    void set_origin(coordinate_type origin);
    void get_point(double parameter);
};

class Line: public Shape{
    virtual coordinate_type derivative(double parameter);
    virtual coordinate_type point(double parameter);
};

class Ellipse: public Line{
    virtual coordinate_type derivative(double parametr);
    virtual coordinate_type point(double parameter);
}
#endif

template <typename T>
Shape<T>::Shape(){
    origin = Point<coordinate T>
}