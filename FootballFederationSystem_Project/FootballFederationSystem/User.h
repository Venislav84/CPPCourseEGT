#pragma once
using namespace std;
#include<iostream>
#include<string>
class User
{
public:
	User(string, string);
	void setName(string);
	string getname();
	void setPassword(string);
	string getPassword();
private:
	string name;
	string password;
};

