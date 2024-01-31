#pragma once
using namespace std;
#include <vector>
#include "Screening.h"
class Hall {
public:

	Hall(string, int);
	Hall(string, int, vector<Screening>);

	void setScreeningList(vector<Screening>);
	void setName(string);
	void setSeats(int);

	vector<Screening> getScreeningList();
	void addScreening(Screening);
	void print();

private:

	string name;
	int seats;
	vector<Screening> screeningList;
};

