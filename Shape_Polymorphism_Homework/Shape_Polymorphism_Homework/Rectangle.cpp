#include "Rectangle.h"
#include <iostream>
using namespace std;

//use a composition
Rectangle::Rectangle(std::string color, double width, double height) : Shape(color) 
{
	this->width = width;
	this->height = height;
}

// display info for Rectangle
void Rectangle::draw()
{
	std::cout << "Drawing a " << this->color << " rectangle" << std::endl;
}

// calculate area for rectangle
double Rectangle::area()  
{
	return this->width * this->height;
}
