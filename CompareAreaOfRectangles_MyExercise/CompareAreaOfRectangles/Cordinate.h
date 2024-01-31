#pragma once
#include <iostream>
class Cordinate {
	friend Cordinate operator + (Cordinate, Cordinate);
	friend Cordinate operator - (Cordinate, Cordinate);
	friend Cordinate operator * (Cordinate, Cordinate);
	friend Cordinate operator / (Cordinate, Cordinate);

public:
	Cordinate();
	Cordinate(int, int);

	void setX(int);
	void setY(int);

	int getX() const;
	int getY() const;

	void printCordinate();
private:
	int _x;
	int _y;
};

