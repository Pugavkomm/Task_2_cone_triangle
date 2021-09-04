/**
 * @file point.h
 * @brief Point class interface
 */
#pragma once
#ifndef POINT
#define POINT
#include "consts.h"
#include <stdexcept>
#include <string>

/**
     * @brief Point is point in DIM space
     * 
     */
namespace Curves
{
    template <typename T> 
    class Point
    {
        using Е = T;
    /**
         * @brief point = (x1, x2, ..., DIM). DIM - is space dimension 
         * 
         */
        Е point[DIM];
    public:
        
        /**
             * @brief Default constructor that defines a point at the origin.
             */
        Point();

        /**
             * @brief The constructor defines point.
             * @param coordinate - point (x1, x2, x3, ..., DIM)
             */
        Point(Е x1, Е x2);

        /**
             * @brief The method sets the coordinates of the point.
             * @param x, y, z are coordinates of input.
             */
        void setPoint(Е x1, Е x2);
        void printPoint() const;

    };
}
#endif
namespace Curves{
    template <typename T>
    Point<T>::Point(){
        for (auto i = 0; i < DIM; ++i)
            point[i] = 0;
    }

    template <typename T>
    Point<T>::Point(Е x1, Е x2)
    {
        point[0] = x1;
        point[1] = x2;
    }

    template <typename T>
    void Point<T>::setPoint(Е x1, Е x2){
        point[0] = x1;
        point[1] = x2;
    }

    template<typename T>
    void Point<T>::printPoint() const{
        std::cout << '(' << point[0] << ", " << point[1] << ')' << '\n';
    }
}
