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
    virtual coordinate_type derivative()
};

class Ellipse: public Line{

}
#endif
