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
	
	return 0; 
}