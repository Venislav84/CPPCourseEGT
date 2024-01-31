#include "Box.h"
#include <iostream>

int main()
{
    Box b1(35, 20, 40);
    Box b2(60, 40, 20);
    Box b3 = b1 + b2;
    Box b4 = b1 - b2;

    b1.printBox();
    b2.printBox();
    b3.printBox();
    b4.printBox();

    return 0;
}


