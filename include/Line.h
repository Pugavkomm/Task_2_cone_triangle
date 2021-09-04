#pragma once
#ifndef LINE
#define LINE
#include "Curve.h"
#include "Point.h"
#include <cmath>
#include <string>

namespace Curves{
    template <typename T>
    class Line : public Curve<T> {
    public: 
        Line();
        Line(Point<T> origin, Point<T> direction);
        virtual Point<T> derivative(double parameter);
        virtual Point<T> point_per_parameter(double parameter);
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
        return "Line";
    }
}