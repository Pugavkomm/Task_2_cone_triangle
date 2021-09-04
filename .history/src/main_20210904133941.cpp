#include <iostream>

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
	line l;
	ellipse e;
	shape* temp_shape = &l; 
	//curves_vector.push_back(&l);
	//curves_vector.push_back(&e);
	for (auto el : curves_vector)
		el->get_origin()
	
	return 0; 
}