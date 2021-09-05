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
#include <stdexcept>
using ellipse = Curves::Ellipse<double>;
using point = Curves::Point<double>;
using coordinate = std::array<double, DIM>;
const double PI_2 = 2 * M_PI;

double generate_random_value(double start = -10, double stop = 10){
	return start + (stop - start) * static_cast<double>(rand()) / RAND_MAX;
} 
int main(int argc, char *argv[])
{
    double height = 10;
    double radius = 5;
    int number_of_segments = 10;
    double step_parameter = PI_2 / number_of_segments;
    ellipse circle(coordinate{0, 0, 0}, coordinate{radius, radius, 0});
    point center(coordinate{0, 0, 0});
    point top(coordinate {0, 0, radius}); 

    std::cout << "A: " << top << '\n'; 
    for (int i = 0; i < number_of_segments; ++i){
        point vector_from_cone = circle.point_per_parameter(step_parameter * i) - center;
        vector_from_cone = vector_from_cone / vector_from_cone.dist_between(vector_from_cone);
        point normal = vector_from_cone * height / radius;
        normal[2] = radius / height;
        std::cout << "P" << i << ": " << circle.point_per_parameter(step_parameter * i) 
        << "\t normal: " << normal
        << "\n";
    }
	//if (argc < 3)
    //{
    //    throw std::invalid_argument("Error");
    //}

	
	return 0; 
}