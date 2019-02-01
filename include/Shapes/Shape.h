#pragma once

#include "Point.h"

class Shape {
protected:
	int ID;
	Point loc;

public:
	Shape(int);
	Shape(int,Point);

	virtual float getZ();

	virtual void display() = 0;
};
