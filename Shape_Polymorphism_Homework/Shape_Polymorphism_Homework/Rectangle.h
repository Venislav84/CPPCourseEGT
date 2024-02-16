#pragma once
#include"Shape.h"
using namespace std;

// create a direved class Rectangle
class Rectangle : public Shape
{
public:

	// create a constructor
	Rectangle(string, double width, double height);

	//a draw method override from Shape
	void draw() override; 

	//an area method override from Shape
	double area() override; 

private:
	// private parameter width and height
	double width;
	double height;
};



