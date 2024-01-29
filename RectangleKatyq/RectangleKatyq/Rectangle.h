
//Create class Rectangle that stores only the Cartesian coordinates of the four corners of the rectangle.
//The constructor calls a set function that accepts four sets of coordinates and verifies that each of 
// these is in the first quadrant with no single x - or y - coordinate larger than 20.0
//The function also verifies that the supplied coordinates do, in fact, specify a rectangle.
//Provide member functions that calculate the lenght, width, perimeter and area.
//The lenght is the larger of two dimensions.
//Include a predicate function square that determines whether the rectangle is a square.

#pragma once
#ifndef RECTANGLEKATYQ_RECTANGLE_H
#define RECTANGLEKATYQ_RECTANGLE_H
#include "Point.h"

class Rectangle {
public:
	Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4);
		const Point& getP1() const;
	void setP1(const Point& p1);

	const Point& getP2() const;
	void setP2(const Point& p2);

	const Point& getP3() const;
	void setP3(const Point& p3);

	const Point& getP4() const;
	void setP4(const Point& p4);

	bool isRectangle();
	bool isSquare();

private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;

	int calculateLength(int, int);

};

#endif