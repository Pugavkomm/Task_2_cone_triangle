#include <iostream>

#include "Point.h"
#include "Curve.h"
#include "Line.h"
#include "Ellipse.h"
#include <vector>
using shape = Curves::Curve<double>;
using line = Curves::Line<double>;
using ellipse = Curves::Ellipse<double>;
using point = Curves::Point<double>;

int main(int argc, char *argv[])
{
	std::vector<shape*> curves_vector;
	int number_of_curves = 20; 
	double parameter = M_PI; 
	point o(2, 5);
	point d(3, 2);
	line l(o, d);
	ellipse e (o, d);
	std::cout << l.get_origin() << '\n';
	std::cout << l.point_per_parameter(parameter) << '\n';
	std::cout << l.derivative(parameter) << '\n';
	
	std::cout << e.point_per_parameter(parameter) << '\n';
	std::cout << e.derivative(parameter) << '\n';

	return 0; 
}