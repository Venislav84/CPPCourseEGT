#pragma once
#include<string>
using namespace std;

class Shape
{
public:
	Shape(string);
	// create a draw method with using a pure virtual
	virtual void draw() = 0;
protected:
	// create a protected attribute color
	string color;

};

