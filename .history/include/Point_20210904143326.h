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

/**
     * @brief Point is point in DIM space
     * 
     */
namespace Curves
{
    template <typename T> 
    class Point
    {
    /**
         * @brief point = (x1, x2, ..., DIM). DIM - is space dimension 
         * 
         */
        T point[DIM];
    public:
        
        /**
             * @brief Default constructor that defines a point at the origin.
             */
        Point();

        /**
             * @brief The constructor defines point.
             * @param coordinate - point (x1, x2, x3, ..., DIM)
             */
        Point(T x1, T x2);

        /**
             * @brief The method sets the coordinates of the point.
             * @param x, y, z are coordinates of input.
             */
        void setPoint(T x1, T x2);
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
    Point<T>::Point(){
        for (auto i = 0; i < DIM; ++i)
            point[i] = 0;
    }

    template <typename T>
    Point<T>::Point(T x1, T x2)
    {
        point[0] = x1;
        point[1] = x2;
    }

    template <typename T>
    void Point<T>::setPoint(T x1, T x2){
        point[0] = x1;
        point[1] = x2;
    }

    template<typename T>
    void Point<T>::printPoint() const{
        std::cout << '(' << point[0] << ", " << point[1] << ')' << '\n';
    }

    template <typename T>
    Point<T> Point<T>::operator+(const Point<T> &right){
        return Point<T>(this->point[0] + right.point[0], this->point[1] + right.point[1]);
    }

    template <typename T>
    Point<T> Point<T>::operator*(const Point<T> &right){
        return Point<T>(this->point[0] * right.point[0], this->point[1] * right.point[1]);
    }

    template <typename T>
    Point<T> Point<T>::operator*(const double right){
        return Point<T>(this->point[0] * right, this->point[1] * right);
    }

    template <typename T>
    Point<T>& Point<T>::operator=(const Point<T> &right){
        for (int i = 0; i < DIM; ++i){
            this->point[i] = right.point[i];
        }
        return *this;
    }

    template <typename T>
    std::ostream & operator << (std::ostream &out, const Point<T> &p)
{
    out << '(';
    for (int i = 0; i < DIM; ++i){
        out << p.point[i];
        if (i)
        out << ", ";
        }
    out << ')';
    out << '\n';
    return out;
}

}