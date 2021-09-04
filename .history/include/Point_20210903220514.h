/**
 * @file point.h
 * @brief Point class interface
 */
// https://ravesli.com/urok-172-vyvod-obektov-klassov-cherez-operator-vyvoda/
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
    Point(point_type x1, point_type x2);

    /**
         * @brief The method sets the coordinates of the point.
         * @param x, y, z are coordinates of input.
         */
    void setPoint(double x, double x2, double z);
    void printPoint() const;
};
#endif

template <typename T>
Point<T>::Point(){
    for (auto i = 0; i < DIM; ++i)
        point[i] = 0;
}

template <typename T>
Point<T>::Point(point_type x1, point_type x2)
{
    point[0] = x1;
    point[1] = x2;
}
    