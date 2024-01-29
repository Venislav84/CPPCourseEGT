// Create class rectangle that stores only the Cartesian coordinates of the four corners of the rectangle.
// The constructor calls a set function that accepts four sets of cordinates and verifies that each of these is in the first quadrant
// with no single x- or y-coordinate larger than 20.0. 
// The set function also verifies taht the supplied coordinates do, in fact, specify a rectangle. 
// Provide member functions that calculate the length, width, perimeter and area. The length is the larger of the two dimensions.
// Include a predicate function square that determines whether the rectangle is a square.

#pragma once

#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
//#include <math.h>
#include <cmath> 
struct Point
{
    double x;
    double y;
};

class Rectangle
{
private:
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double rectLength;
    double rectWidth;
    double rectArea;
    double rectPerimeter;
public:
    Rectangle(Point& cord1, Point& cord2, Point& cord3, Point& cord4)
    {
        x1 = cord1.x;
        y1 = cord1.y;
        x2 = cord2.x;
        y2 = cord2.y;
        x3 = cord3.x;
        y3 = cord3.y;
        x4 = cord4.x;
        y4 = cord4.y;
    }
    double length();
    double width();
    void area();
    void perimeter();
    bool square();

};

#endif // RECTANGLE_H_INCLUDED 
