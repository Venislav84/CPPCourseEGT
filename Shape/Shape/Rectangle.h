#pragma once
#ifndef SHAPE_RECTANGLE_H
#include<string>
#include "TwoDimShape.h"
using namespace std;
#define SHAPE_RECTANGLE_H
class Rectangle : public TwoDimShape {
public:
	Rectangle(int, int);

	double getArea();
	int getB();

	void setB(int);

	void position();
	bool fill();
	void draw();

	void print();

private:
	int b;
};

#endif SHAPE_RECTANGLE_H