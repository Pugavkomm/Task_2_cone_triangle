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
         * @brief Default constructor that defines a point at the origin = (0, 0) and curve_parameter = (0, 0).
         */
        Line();
        /**
         * @brief Сonstructor that defines a point at the origin and curve_parameter.
         * @param origin is origin
         * @param curve_parameter is curve_parameter
         */
        Line(Point<T> origin, Point<T> curve_parameter);
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
        this->set_curve_parameter(d);
    }


    template <typename T>
    Point<T> Line<T>::derivative(double parameter) {
        return this->get_curve_parameter(); 

    }
    template <typename T>
    Point<T> Line<T>::point_per_parameter(double parameter){
        return this->get_origin() + this->get_curve_parameter() * parameter;
    }

    template <typename T>
    std::string Line<T>::type(){
        return "Curve:Line";
    }
}