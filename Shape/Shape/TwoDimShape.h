#pragma once

#ifndef SHAPE_H
#define SHAPE_H
#include <cmath>
#include "Shape.h"


class TwoDimShape : public Shape {
public: 
		TwoDimShape(int);
	  
	  double getArea();

	  virtual void position();
	  virtual bool fill();
	  virtual void draw();

	  void print();

private:
};

#endif

