#pragma once

#include "Shapes/Shape.h"

class Square: public Shape {
	float sideLength;
	float rotation;

public:
	Square(int);
	Square(int, Point, float, float);

	void display();
};
