
#ifndef LINE
#define LINE
#include "Shape.h"
#include <cmath>

namespace Curves{
    /**
     * @brief 
     * 
     */
    template <typename T>
    class Shape{
        using coordinate_type = T; 
        
        coordinate_type origin; 
        coordinate_type direction; 
    public:
        Shape();
        Shape(coordinate_type origin);
        void set_origin(coordinate_type origin);
        void get_point(double parameter);
    };

    template <typename T>
    class Line : public Shape {
        virtual coordinate_type derivative(double parameter) const;
        virtual coordinate_type point_per_parameter(double parameter) const;
    };
}
#endif
namespace Curves{
    //  Shape
    template <typename T>
    Shape<T>::Shape(){
        origin = Point<coordinate_type>();
    }

    template <typename T>
    Shape<T>::Shape(coordinate_type origin){
        this.origin = origin;
    }

    //  Line 
    template <typename T>
    virtual coordinate_type Line<T>::point_per_parameter(double parameter) const{
        return origin + direction * parameter;
    }

    virtual coordinate_type Line<T>::derivative(double parameter) const{
        return direction; 

    }
}