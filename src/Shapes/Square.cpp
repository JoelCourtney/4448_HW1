#include "Shapes/Square.h"
#include <iostream>

Square::Square(int id) : Shape(id), sideLength(1), rotation(0) {}

Square::Square(int id, Point p, float sL, float r) : Shape(id,p), sideLength(sL), rotation(r) {}

void Square::display() {
	std::cout << "ID: " << ID << ", Type: Square, Location: " << loc.toString() << ", Side Length: " << sideLength << ", Rotation: " << rotation << std::endl;
}
