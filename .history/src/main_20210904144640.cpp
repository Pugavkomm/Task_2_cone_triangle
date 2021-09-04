#include <iostream>

#include "Point.h"
#include "Curve.h"
#include "Line.h"
#include "Ellipse.h"
#include <vector>
using shape = Curves::Curve<double>;
using line = Curves::Line<double>;
using ellipse = Curves::Ellipse<double>;

int main(int argc, char *argv[])
{
	std::vector<shape*> curves_vector;
	int number_of_curves = 20; 
	line l;
	std::cout << l.get_origin();


	Curves::Point<double> p1(1, 23);
	Curves::Point<double> p1(1, 23);

	return 0; 
}