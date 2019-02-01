#pragma once

#include "Shapes/Shape.h"

class Circle: public Shape {
	float radius;

public:
	Circle(int);
	Circle(int, Point, float);

	void display();
};
