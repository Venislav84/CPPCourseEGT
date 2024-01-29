#pragma once
#include "TwoDimShape.h"

class Square : public TwoDimShape {
public:
	Square(int);

	double getArea();

	void position();
	bool fill();
	void draw();

	void print();

private:

};


