/**
 * @file point.h
 * @brief Point class interface
 */
#ifndef POINT
#define POINT
#include "consts.h"
#include <stdexcept>
/**
     * @brief Point is point in DIM space
     * 
     */

class Point
{
using point_type = T
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
         * @param x, y, z are coordinates of input point.
         */
    Point(double x, double y, double z);

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