#pragma once
#include <iostream>
using namespace std;
#include <vector>

class OnlineShop {
public:	
	void saledDrinksInfo();
	void bestClientWithExpensiveOrder();
	void specificTypeOfDrink();
	void TenClients();

private:
	vector<Drinks> drinks;
};
