#pragma once
#include "Shape.h"
using namespace std;

// create a direved class Circle
class Circle : public Shape 
{
public:

	// create a constructor
	Circle(string color); 

	//method overdried method
	void draw() override; 
};

