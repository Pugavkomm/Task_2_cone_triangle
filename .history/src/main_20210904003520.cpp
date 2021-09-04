#include <iostream>


#include "Point.h"
#include "Shape.h"
#include <vector>

int main(int argc, char *argv[])
{
	Curves::Point<int> p;
	
	p.setPoint(1, 2);
	p.printPoint();
	return 0; 
}