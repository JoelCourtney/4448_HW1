#include "Shapes/Shape.h"

Shape::Shape(int id) : ID(id), loc(Point()) {}

Shape::Shape(int id, Point p) : ID(id), loc(p) {}

float Shape::getZ() {
	return loc.z;
}
