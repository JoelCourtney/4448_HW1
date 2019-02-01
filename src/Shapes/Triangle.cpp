#include "Shapes/Triangle.h"
#include <iostream>

Triangle::Triangle(int id) : Shape(id), v1(Point()), v2(Point()), v3(Point()) {}

Triangle::Triangle(int id, Point p1, Point p2, Point p3) : Shape(id), v1(p1), v2(p2), v3(p3) {}

void Triangle::display() {
	std::cout << "ID: " << ID << ", Type: Triangle, Vertex 1: " << v1.toString() << ", Vertex 2: " << v2.toString() << ", Vertex 3: " << v3.toString() << std::endl;
}

float Triangle::getZ() {
	return (v1.z + v2.z + v3.z) / 3;
}
