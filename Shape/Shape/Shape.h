#pragma once

#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string> // C++ standard string class
#include <cmath>
using namespace std;


class Shape {
public:
	Shape(int);

	virtual double getArea();
	int getA();

	void setA(int);

	virtual void print();

private:
	int a;
};



#endif