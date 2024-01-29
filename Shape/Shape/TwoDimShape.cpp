#include "TwoDimShape.h"
#include <iostream>
using namespace std;

TwoDimShape::TwoDimShape(int a): Shape(a) {

}

double TwoDimShape::getArea() {
	cout << "2D shape area" << endl;
	return 0.0;
}

void TwoDimShape::position() {
	cout << "Position in 2D shape" << endl;
}

bool TwoDimShape::fill() {
	char answer;
	cout << "Do you want to fill the shape? y/n";
	cin >> answer;

	if (answer == 'Y' || answer == 'y') {
		cout << "Shape is fill" << endl;
		return true;
	}

	cout << "Shape is not fill" << endl;
	return false;
}

void TwoDimShape::draw() {
	cout << "2D Shape is drawing print" << endl;
}

void TwoDimShape::print() {
	cout << "In 2D print" << endl;
}