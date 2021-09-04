/**
 * @file point.h
 * @brief Point class interface
 */
#ifndef POINT
#define POINT
#include "consts.h"
#include <stdexcept>
#include <string>
/**
     * @brief Point is point in DIM space
     * 
     */
template <typename T>
class Point
{
    using point_type = T;
/**
     * @brief point = (x1, x2, ..., DIM). DIM - is space dimension 
     * 
     */
    point_type point[DIM];
public:
    
    /**
         * @brief Default constructor that defines a point at the origin.
         */
    Point();

    /**
         * @brief The constructor defines point.
         * @param coordinate - point (x1, x2, x3, ..., DIM)
         */
    Point(point_type number, ...);

    /**
         * @brief The method sets the coordinates of the point.
         * @param x, y, z are coordinates of input.
         */
    void setPoint(double x, double y, double z);

    /**
         * @brief The method prints point.
         * @param left left operand.
         * @param right right operand.
         */
    void printPoint() const;

    /**
        * @brief Calculates the sum of the squares of the coordinates of a point
        * @returns the sum of the squares of the coordinates of a point
        */
};
#endif

template <typename T>
Point<T>::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

template <typename T>
Point<T>::Point(point_type number, ...){
    
    int i = 0;
    for(auto *ptr = &number; number > 0; --number){
        point[i] = *(++ptr);
        i++;
        if (i > DIM)
            throw std::out_of_range("number of coordinates = " + std::to_string(i) + 
            ", but DIM = " + std::to_string(DIM));
    }
}
    