#pragma once
#include <iostream>
#include <string>
using namespace std;

class Team {
public: 
	Team(string, string);

	void setTeamName(string);
	void setCity(string);

	string getTeamName();
	string getCity();
	void updatePoints(int);
	int getPoints();

	void print();

private:
	string _teamName;
	string _city;
	int _points;

};

