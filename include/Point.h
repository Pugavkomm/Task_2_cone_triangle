/**
 * @file point.h
 * @brief Point class interface and implementation
 */
#pragma once
#ifndef POINT
#define POINT
#include <iostream>
#include "consts.h"
#include <stdexcept>
#include <string>
#include <array>
#include <cmath>
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
        /**
         * @brief Construct a new Point object (Copy constructor)
         * 
         * @param other 
         */
        Point(const Point<T> &other);
        void setPoint(const std::array<T, DIM> &point);
        Point<T> operator+(const Point<T> &right);
        Point<T> operator-(const Point<T> &right);
        Point<T> operator*( const Point<T> &right);
        Point<T> operator*(double right);
        Point<T> operator/(double right);
        T & operator[](size_t index);
        Point<T>& operator=(const Point<T> &right);
        double dist_between(const Point<T> &right);
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
    Point<T>::Point(const Point<T> &other): point(other.point) 
    {}

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
    Point<T> Point<T>::operator-(const Point<T> &right){
        std::array<T, DIM> out;
        for (int i = 0; i < DIM; ++i){
            out[i] = point[i] - right.point[i];
        }
        return out;
    }

    template <typename T> 
    double Point<T>::dist_between(const Point<T> &right){
        double out = 0;
        for (int i = 0; i < DIM; ++i){
            out += point[i] * point[i] + right.point[i] * right.point[i];
        }
        return sqrt(out);
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
    Point<T> Point<T>::operator/(double right){
        std::array<T, DIM> out;
        for (int i = 0; i < DIM; ++i){
            out[i] = point[i] / right;
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
    T & Point<T>::operator[](size_t index){
        return point[index];
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