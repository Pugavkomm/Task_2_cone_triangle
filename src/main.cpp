/**
 * @file main.cpp
 * @author Mechislav Pugavko 
 * @brief 
 * @version 1.0
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "consts.h"
#include "Point.h"
#include "Curve.h"
#include "Line.h"
#include "Ellipse.h"
#include <array>
#include <vector>
#include <memory>
using shape = Curves::Curve<double>;
using line = Curves::Line<double>;
using ellipse = Curves::Ellipse<double>;
using point = Curves::Point<double>;
using coordinate = std::array<double, DIM>;
const int number_of_curves = 20;
const double parameter = M_PI / 4.0;
const double PI_2 = 2 * M_PI;

double generate_random_value(double start = -10, double stop = 10){
	return start + (stop - start) * static_cast<double>(rand()) / RAND_MAX;
} 
int main(int argc, char *argv[])
{
	srand(time(0));
	std::vector<std::unique_ptr<shape>> curves_vector;
	std::array<double, DIM> origin_array;
	std::array<double, DIM> curve_parameter_array;
	
	point origin;
	point curve_parameter;
	for (int i = 0; i < number_of_curves; ++i){
		origin.setPoint(coordinate{generate_random_value(), generate_random_value()});
		curve_parameter.setPoint(coordinate{generate_random_value(), generate_random_value()});
		curves_vector.emplace_back(std::make_unique<line>(origin, curve_parameter));
		origin.setPoint(coordinate{generate_random_value(), generate_random_value()});
		curve_parameter.setPoint(coordinate{generate_random_value(PI_2), generate_random_value(PI_2)});
		curves_vector.push_back(std::make_unique<ellipse>(origin, curve_parameter));
	}
	for (auto const &el : curves_vector){
		std::cout << el->type() << "\t Point: " << el->point_per_parameter(parameter)
	    << "per parameter: " << parameter
		<< "and first derivative: " << el->derivative(parameter) << '\n';
	}

	
	return 0; 
}