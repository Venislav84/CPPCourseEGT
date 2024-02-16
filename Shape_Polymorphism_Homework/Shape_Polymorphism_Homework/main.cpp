#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
using namespace std;

void printArea(Shape* shape) {
    cout << "Print area is: " << shape->area() << endl;
}

int main()
{
    // create new Circle
    Shape* circle = new Circle("red", 10.2);

    // create new Rectangle
    Shape* rectangle = new Rectangle("blue", 9.3, 11.55);


    circle->draw();
    rectangle->draw();


    cout << "Circle area: " << circle->area() << endl;
    cout << "Rectangle area: " << rectangle->area() << endl;

    printArea(circle);
    printArea(rectangle);
}