#include "Circle.h"
#include <iostream>
using namespace std;

//use a composition
Circle::Circle(string color, double radius) : Shape(color)
{
	this->radius = radius;
	this->pi = 3.14;
}

// display info for a draw in a circle
void Circle::draw()
{
	cout << "Drawing a " << this->color << " circle" << endl;
}

// calculate area for circle
double Circle::area() 
{
	return this->pi * radius * radius;
}