
#include "Cordinate.h"
#include <iostream>

int main()
{
    Cordinate cord1(37, 25);
    Cordinate cord2(15, 20);
    Cordinate cord3 = cord1 + cord2;
    Cordinate cord4 = cord1 - cord3;
    Cordinate cord5 = cord2 * cord4;
    Cordinate cord6 = cord1 / cord4;

    cord1.printCordinate();
    cord2.printCordinate();
    cord3.printCordinate();
    cord4.printCordinate();
    cord5.printCordinate();
    cord6.printCordinate();
    return 0;
}

