#pragma once

#include <string>

struct Point {
	int x, y, z;

	Point();
	Point(int,int,int);

	std::string toString();

	static Point RandomPoint();
};
