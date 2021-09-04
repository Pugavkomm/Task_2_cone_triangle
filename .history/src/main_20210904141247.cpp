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
	Curves::Point<double> o(0, 1);
	Curves::Point<double> d(1, 2);
	line l(o, d);
	ellipse e();
	shape* temp_shape = &l; 
	curves_vector.push_back(&e);
	curves_vector.push_back(&l);
	for (auto el : curves_vector)
		el->get_origin().printPoint();
	
	return 0; 
}