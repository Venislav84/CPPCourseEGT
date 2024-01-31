#include "User.h"
using namespace std;

User::User(string name, string passw)
{
	setName(name);
	setPassword(passw);
}

void User::setName(string)
{
	this->name = name;
}

string User::getname()
{
	return this->name;
}


void User::setPassword(string p)
{
	if (p.length() > 4 && p.length() < 20)
	{
		this->password = p;
	}
	else {
		while (!(p.length() > 4 && p.length() < 20))
		{
			cout << "Inncorect password, Enter new one.";
			cin >> p;
		}
	}
	this->password = p;
}


string User::getPassword()
{
	return this->password;
}
