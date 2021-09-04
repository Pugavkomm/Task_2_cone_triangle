
template <typename T>
    class Ellipse : public Line{
        virtual coordinate_type derivative(double parametr) const;
        virtual coordinate_type point_per_parameter(double parameter) const;
    };