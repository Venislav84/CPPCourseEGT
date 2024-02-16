#include "Circle.h"
#include <iostream>
using namespace std;

//use a composition
Circle::Circle(string color) : Shape(color) 
{
}

// display info for circle
void Circle::draw()
{
	cout << "Drawing a " << this->color << " circle" << endl;
}