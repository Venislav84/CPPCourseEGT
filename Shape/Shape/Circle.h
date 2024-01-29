#pragma once
#include "TwoDimShape.h"

class Circle : public TwoDimShape {
public:
	Circle(int);

	double getArea();

	void position();
	bool fill();
	void draw();

	void print();

private:

};

