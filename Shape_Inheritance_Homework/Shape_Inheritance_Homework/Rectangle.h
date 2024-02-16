#pragma once
#include"Shape.h"
using namespace std;

// create a direved class Rectangle
class Rectangle : public Shape
{
public:

	// create a constructor
	Rectangle(string);

	//method overdried method
	void draw() override;
};

