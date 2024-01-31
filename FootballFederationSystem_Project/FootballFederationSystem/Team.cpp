#include "Team.h"
using namespace std;
#include <iostream>;

Team::Team(string teamName, string city)
{
	setTeamName(teamName);
	setCity(city);
	this->_points = 0;
}

void Team::setTeamName(string teamName)
{
	this->_teamName = teamName;
}

void Team::setCity(string city)
{
	this->_city = city;
}

void Team::updatePoints(int newPoints)
{
	this->_points = this->_points + newPoints;
}

string Team::getTeamName()
{
	return this->_teamName;
}

int Team::getPoints()
{
	return this->_points;
}

void Team::print()
{
	cout << "Team: " << this->getTeamName() << " " << this->getPoints() << endl;
}
