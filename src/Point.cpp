#include "Point.h"
#include <stdlib.h>

Point::Point() : x(0), y(0), z(0) {}

Point::Point(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}

std::string Point::toString() {
	return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

Point Point::RandomPoint() {
	return Point(rand()%10-5, rand()%10-5, rand()%10-5);
}
