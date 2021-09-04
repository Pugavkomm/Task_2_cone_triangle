/**
 * @file point.h
 * @brief P class interface
 */
#pragma once
#ifndef POINT
#define POINT
#include "consts.h"
#include <stdexcept>
#include <string>
using Point<T> = P;

/**
     * @brief P is point in DIM space
     * 
     */
namespace Curves
{
    template <typename T> 
    class P
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
        P();

        /**
             * @brief The constructor defines point.
             * @param coordinate - point (x1, x2, x3, ..., DIM)
             */
        P(T x1, T x2);

        /**
             * @brief The method sets the coordinates of the point.
             * @param x, y, z are coordinates of input.
             */
        void setPoint(T x1, T x2);
        void printPoint() const;
        friend P<T> operator+(const P<T> &left, const P<T> &right);
        friend P<T> operator*(const P<T> &left, const P<T> &right);
        friend P<T> operator*(const P<T> &left, const T right);

    };
}
#endif
namespace Curves{
    template <typename T>
    P<T>::P(){
        for (auto i = 0; i < DIM; ++i)
            point[i] = 0;
    }

    template <typename T>
    P<T>::P(T x1, T x2)
    {
        point[0] = x1;
        point[1] = x2;
    }

    template <typename T>
    void P<T>::setPoint(T x1, T x2){
        point[0] = x1;
        point[1] = x2;
    }

    template<typename T>
    void P<T>::printPoint() const{
        std::cout << '(' << point[0] << ", " << point[1] << ')' << '\n';
    }
}

P<T> P<T>::operator+(const P<T> &left, const P<T> &right);
