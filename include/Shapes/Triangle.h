#pragma once

#include "Shapes/Shape.h"

class Triangle: public Shape {
	Point v1, v2, v3;

public:
	Triangle(int);
	Triangle(int, Point, Point, Point);

	void display();

	float getZ();
};
