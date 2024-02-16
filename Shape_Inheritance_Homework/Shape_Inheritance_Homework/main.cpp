#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

int main()
{
    // create new Circle
    Shape* circle = new Circle("red"); 
    // create new Rectangle
    Shape* rectangle = new Rectangle("blue");

    circle->draw();
    rectangle->draw();
}