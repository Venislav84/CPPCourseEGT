#include "Rectangle.h"
#include <iostream>
using namespace std;

//use a composition
Rectangle::Rectangle(string color) : Shape(color) 
{
}

// display info for Rectangle
void Rectangle::draw()
{
	cout << "Drawing a " << this->color << " rectangle" << endl;
}