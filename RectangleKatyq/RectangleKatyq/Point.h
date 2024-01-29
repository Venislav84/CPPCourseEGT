#pragma once
#ifndef RECTANGLEKATYQ_POINT_H
#define RECTANGLEKATYQ_POINT_H
#include<iostream>

class Point {
public:
	Point(int x, int y);

	int getX()const;
	void setX(int x);

	int getY()const;
	void setY(int y);

private:
	int x;
	int y;
};

#endif