/**
 * @file Line.h
 * @brief Line class interface and implementation
 * 
 */
#pragma once
#ifndef LINE
#define LINE
#include "Curve.h"
#include "Point.h"
#include <cmath>
#include <string>

namespace Curves{
    /**
     * @brief Curve:Line
     * 
     */
    template <typename T>
    class Line : public Curve<T> {
    public: 
        /**
         * @brief Default constructor that defines a point at the origin = (0, 0) and direction = (0, 0).
         */
        Line();
        /**
         * @brief Сonstructor that defines a point at the origin and direction.
         * @param origin is origin
         * @param direction is direction
         */
        Line(Point<T> origin, Point<T> direction);
        /**
         * @brief Method that return derivative per parameter
         * 
         * @param parametr 
         * @return Point<T> 
         */
        virtual Point<T> derivative(double parameter);
        /**
         * @brief Method that return point per parameter
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> point_per_parameter(double parameter);
        /**
         * @brief Method that return type
         * 
         * @return std::string 
         */
        virtual std::string type();
    };
}
#endif

namespace Curves{

    template <typename T>
    Line<T>::Line(){}
    template <typename T>
    Line<T>::Line(Point<T> o, Point<T> d)
    {
        this->set_origin(o);
        this->set_direction(d);
    }


    template <typename T>
    Point<T> Line<T>::derivative(double parameter) {
        return this->get_direction(); 

    }
    template <typename T>
    Point<T> Line<T>::point_per_parameter(double parameter){
        return this->get_origin() + this->get_direction() * parameter;
    }

    template <typename T>
    std::string Line<T>::type(){
        return "Curve:Line";
    }
}