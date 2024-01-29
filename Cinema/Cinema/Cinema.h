#pragma once
#include <string>
#include "Hall.h"

class Cinema {
public:
	Cinema(string, string, vector<Hall>);
	void setName(string);
	void setAddress(string);
	void setHallsList(vector<Hall>);

	string getName();
	string getAddress();
	vector<Hall> getHallsList();

	void addHall(Hall);

	void print();
private:
	string name;
	string address;
	vector<Hall> hallslist;
};