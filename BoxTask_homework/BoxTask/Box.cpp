#include "Box.h"
using namespace std;
static bool validateNumber(int number) {
	if (number > 0)
	{
		return true;
	}

	return false;
}

Box::Box(int width, int heigth, int length) {
	setWidth(width);
	setHeigth(heigth);
	setLength(length);
}
void Box::setWidth(int width) {
	while (!validateNumber(width))
	{
		cout << "Please enter a positive number for width: ";
		cin >> width;
	}
	this->_width = width;
}

void Box::setHeigth(int heigth) {
	while (!validateNumber(heigth))
	{
		cout << "Please enter a positive number for heigth: ";
		cin >> heigth;
	}
	this->_heigth = heigth;
}

void Box::setLength(int length) {
	while (!validateNumber(length))
	{
		cout << "Please enter a positive number for length: ";
		cin >> length;
	}
	this->_length = length;
}

int Box::getWidth() const {
	return this->_width;
}

int Box::getHeigth() const {
	return this->_heigth;
}

int Box::getLength() const {
	return this->_length;
}

void Box::printBox() {
	cout << "Width is: " << this->getWidth() << ", Heigth is: " << getHeigth() << " and Length is: " << this->getLength() << endl;
}

Box operator+(Box b1, Box b2) {
	int width = b1.getWidth() + b2.getWidth();
	return Box(width, b1.getHeigth(), b1.getLength());
}

Box operator-(Box b1, Box b2) {
	int width = b1.getWidth() - b2.getWidth();
	return Box(width, b1.getHeigth(), b1.getLength());
}