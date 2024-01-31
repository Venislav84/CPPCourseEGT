

#include <iostream>
#include "Cinema.h"
using namespace std;

Cinema::Cinema(string name, string address, vector<Hall> halls) {
    setName(name);
    setAddress(address);
    setHallsList(halls);
}

void Cinema::setName(string name) {
    this->name = name;
}

void Cinema::setAddress(string address) {
    this->address = address;
}

void Cinema::setHallsList(vector<Hall>halls) {
    this->hallslist = halls;
}

string Cinema::getName() {
    return this->name;
}

string Cinema::getAddress() {
    return this->address;
}

vector<Hall> Cinema::getHallsList() {
    return this->hallslist;
}

void Cinema::addHall(Hall hall) {
    this->hallslist.push_back(hall);
}

void Cinema::print() {
    cout << "Cinema name " << this->name << " addres " << this->getAddress() << endl;

    for (int i = 0; i < hallslist.size(); ++i) {
        this->hallslist.at(i).print();
    }

    std::cout << std::endl;
}

int main()
{
    cout << "Hello World!\n";
}

