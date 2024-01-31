#include "Admin.h"

Admin::Admin(string name, string pass):User(name, pass)
{

}

void Admin::addTeam(Team t)
{
	this->teams.push_back(t);
}

void Admin::removeTeam(Team t)
{
	string TeamName = t.getTeamName();
	for (int i = 0; i < teams.size(); i++)
	{
		if (teams.at(i).getTeamName() == TeamName) {
			teams.erase(teams.begin() + i);
		}
	}
}

void Admin::updateTeam(Team)
{
}
