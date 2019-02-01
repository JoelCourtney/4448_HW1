#pragma once

#include "Shapes.h"
#include <vector>

class Database {
	std::vector<Shape*> shapes;
	int index, size;

	Shape* getNextShape();

public:
	Database();
	~Database();

	void read();
	void sort();
	void display();
};
