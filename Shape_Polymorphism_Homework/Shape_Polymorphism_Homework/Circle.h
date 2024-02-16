#pragma once
#include "Shape.h"
using namespace std;

// create a direved class Circle
class Circle : public Shape
{
public:
	// create a constructor
	Circle(string color, double);

	//method overdried method
	void draw() override;

	//method overdried method
	double area() override;
private:

	double radius;
	double pi;
};

