/**
 * @file point.h
 * @brief Point class interface
 */
#pragma once
#ifndef POINT
#define POINT
#include <iostream>
#include "consts.h"
#include <stdexcept>
#include <string>
#include <array>
/*!
 *  \addtogroup Curves
 *  @{
 */

//! Generic Curves interfaces and implementations
namespace Curves
{
    /**
     * @brief Point is point in 2D space (because constant DIM = 2)
     * 
     */
    template <typename T> 
    class Point
    {
    /**
         * @brief point = (x1, x2, ..., DIM). DIM - is space dimension 
         * 
         */
        std::array<T, DIM> point;
    public:
        
        /**
             * @brief Default constructor that defines a point. 
             */
        Point();

        /**
             * @brief The constructor defines point.
             * @param coordinate - point: array
             */
        Point(const std::array<T, DIM> &point);

        /**
             * @brief The method sets the coordinates of the point.
             * @param std::array is coordinates of input.
             */
        void setPoint(const std::array<T, DIM> &point);
        void printPoint() const;
        Point<T> operator+(const Point<T> &right);
        Point<T> operator*( const Point<T> &right);
        Point<T> operator*(const double right);
        Point<T>& operator=(const Point<T> &right);
        template < typename U >
        friend std::ostream & operator << (std::ostream &out, const Point<U> &p);

    };
}
#endif
namespace Curves{
    template <typename T>
    Point<T>::Point(){}

    template <typename T>
    Point<T>::Point(const std::array<T, DIM> &point)
    {
        this->point = point;
    }

    template <typename T>
    void Point<T>::setPoint(const std::array<T, DIM> &point){
        this->point = point;
    }


    template <typename T>
    Point<T> Point<T>::operator+(const Point<T> &right){
        std::array<T, DIM> out;
        for (int i = 0; i < DIM; ++i){
            out[i] = point[i] + right.point[i];
        }
        return out;
    }

    template <typename T>
    Point<T> Point<T>::operator*(const Point<T> &right){
        std::array<T, DIM> out;
        for (int i = 0; i < DIM; ++i){
            out[i] = point[i] * right.point[i];
        }
        return out;
    }

    template <typename T>
    Point<T> Point<T>::operator*(const double right){
        std::array<T, DIM> out;
        for (int i = 0; i < DIM; ++i){
            out[i] = point[i] * right;
        }
        return out;
    }

    template <typename T>
    Point<T>& Point<T>::operator=(const Point<T> &right){
        this->point = right.point;
        
        return *this;
    }

    template <typename T>
    std::ostream & operator << (std::ostream &out, const Point<T> &p)
{
    out << '(';
    for (int i = 0; i < DIM; ++i){
        out << p.point[i];
        if (i < DIM - 1)
            out << ", ";
        }
    out << ')';
    
    return out;
}

}