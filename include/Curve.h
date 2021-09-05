/**
 * @file Curve.h
 * @brief Curve class interface and implementation. Curve class is base class. 
 * 
 * 
 */
#pragma once
#ifndef CURVE
#define CURVE
#include "Point.h"
#include <cmath>
#include <string>

namespace Curves {
    /**
     * @brief Curve hierarchy base class
     * 
     */
    template <typename T>
    class Curve{
        /**
         * @brief Reference point for curves.
         * 
         */
        Point<T> origin; 
        /**
         * @brief The main parameter for the curve. To directly define the curve_parameter in the form `C (t) = origin + curve_parameter * parameter`. For an ellipse, the axes define their own radius for each.
         * 
         */
        Point<T> curve_parameter; 
    public:
        /**
         * @brief Default constructor that defines a point at the origin = (0, 0) and curve_parameter = (0, 0).
         */
        Curve();
        /**
         * @brief Сonstructor that defines a point at the origin and curve_parameter.
         */
        Curve(Point<T> origin, Point<T> curve_parameter);
        /**
         * @brief Set the origin point
         * 
         * @param origin 
         */
        void set_origin(Point<T> origin);
        /**
         * @brief Set the curve_parameter 
         * 
         * @param curve_parameter 
         */
        void set_curve_parameter(Point<T> curve_parameter);
        /**
         * @brief Get the origin point
         * 
         * @return Point<T> 
         */
        Point<T> get_origin();
        /**
         * @brief Get the curve_parameter
         * 
         * @return Point<T> 
         */
        Point<T> get_curve_parameter();
        /**
         * @brief Return type curve
         * 
         * @return std::string 
         */
        virtual std::string type();
        /**
         * @brief Placeholder 
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> derivative(double parameter); //placholder 
        /**
         * @brief Placeholder 
         * 
         * @param parameter 
         * @return Point<T> 
         */
        virtual Point<T> point_per_parameter(double parameter); //placholder
    };
}
#endif

namespace Curves{
    template <typename T>
    Curve<T>::Curve(){
        origin = Point<T>();
    }

    template <typename T>
    Curve<T>::Curve(Point<T> origin, Point<T> curve_parameter){
        this->set_origin(origin);
        this->set_curve_parameter(origin);
    }

    template <typename T>
    void Curve<T>::set_origin(Point<T> origin){
        this->origin = origin; 
    }

    template <typename T>
    void Curve<T>::set_curve_parameter(Point<T> curve_parameter){
        this->curve_parameter = curve_parameter; 
    }

    
    template <typename T>
    Point<T> Curve<T>::get_origin(){
        return origin; 
    }

    template <typename T>
    Point<T> Curve<T>::get_curve_parameter(){
        return  curve_parameter;
    }

    template <typename T>
    std::string Curve<T>::type(){
        return "Curve:Base";
    }

    template <typename T>
    Point<T> Curve<T>::derivative(double parameter){
        return Point<T>(); 
    }
    
    template <typename T> 
    Point<T> Curve<T>::point_per_parameter(double parameter){
        return Point<T>(); 
    }
}

