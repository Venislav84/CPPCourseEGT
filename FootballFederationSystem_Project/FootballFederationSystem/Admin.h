#pragma once
#ifndef FOOTBALLFEDERATIONSYSTEM_ADMIN
#define FOOTBALLFEDERATIONSYSTEM_ADMIN
#include<vector>
#include "User.h"
#include "Team.h"

class Admin : public User {
public:
	Admin(string, string);
	void addTeam(Team);
	void removeTeam(Team);
	void updateTeam(Team);

private:
	vector<Team> teams;
};








#endif