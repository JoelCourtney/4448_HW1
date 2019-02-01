#include "Shapes/Circle.h"
#include <iostream>

Circle::Circle(int id) : Shape(id), radius(1) {}

Circle::Circle(int id, Point p, float rad) : Shape(id,p), radius(rad) {}

void Circle::display() {
	std::cout << "ID: " << ID << ", Type: Circle, Location: " << loc.toString() << ", Radius: " << radius << std::endl;
}
