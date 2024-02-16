#pragma once
#include<string>
using namespace std;

class Shape
{
public:
	Shape(string);

	// create a draw method with using a pure virtual
	virtual void draw() = 0;
	// create a area method with using a pure virtual
	virtual double area() = 0;
	// create a virtual destructor
	virtual ~Shape();
protected:

	// create a protected attribute color
	string color;

};

