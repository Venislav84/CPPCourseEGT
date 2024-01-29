
#include <iostream>
#include "Rectangle.h"

class Rectangle;
double Rectangle::length()
{
    rectLength = fabs(x1 - x2);
    return rectLength;
}

double Rectangle::width()
{
    rectWidth = fabs(y1 - y2);
    return rectWidth;
}

void Rectangle::area()
{
    rectArea = rectLength * rectWidth;
}

void Rectangle::perimeter()
{
    rectPerimeter = (2 * rectLength) + (2 * rectWidth);
}

bool Rectangle::square()
{
    if (rectLength == rectWidth)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}