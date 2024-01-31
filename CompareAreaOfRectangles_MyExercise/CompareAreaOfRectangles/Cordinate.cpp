#include "Cordinate.h"
using namespace std;
Cordinate::Cordinate() {}
Cordinate::Cordinate(int x, int y) {
	setX(x);
	setY(y);
}

void Cordinate::setX(int x) {
	while (x <= 0) {
		cout << "Invalid cordinate for X. Please enter a positive number: ";
		cin >> x;
	}
	this->_x = x;
}

void Cordinate::setY(int y) {
	while (y <= 0) {
		cout << "Invalid cordinate for Y. Please enter a positive number: ";
		cin >> y;
	}
	this->_y = y;
}

int Cordinate::getX() const{
	return this->_x;
}

int Cordinate::getY() const {
	return this->_y;
}

void Cordinate::printCordinate() {
	cout << "The cordinate are: " << this->getX() << " and " << getY() << endl;
}

Cordinate operator+(Cordinate cord1, Cordinate cord2) {
	int x = cord1.getX() + cord2.getX();
	int y = cord1.getY() + cord2.getY();
	return Cordinate(x, y);
}

Cordinate operator-(Cordinate cord1, Cordinate cord2) {
	int x = cord1.getX() - cord2.getX();
	int y = cord1.getY() - cord2.getY();
	return Cordinate(x, y);
}

Cordinate operator*(Cordinate cord1, Cordinate cord2) {
	int x = cord1.getX() * cord2.getX();
	int y = cord1.getY() * cord2.getY();
	return Cordinate(x, y);
}
Cordinate operator/(Cordinate cord1, Cordinate cord2) {
	int x = cord1.getX() / cord2.getX();
	int y = cord1.getY() / cord2.getY();
	return Cordinate(x, y);
}

