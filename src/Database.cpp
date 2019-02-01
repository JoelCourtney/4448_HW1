#include "Database.h"
#include <iostream>
#include <stdlib.h>

Database::Database() { // Allocates an array of shapes of random size.
	size = rand() % 10 + 10;
	shapes.reserve(size);
}

Database::~Database() { // Clears the array and deletes shapes
	for (int i = 0; i < size; i++) {
		delete shapes.at(i);
	}
	shapes.clear();
}

void Database::read() { // Generates a random array of shapes
	int id = 0;
	for (int i = 0; i < size; i++) {
		int r = rand()%3;
		Shape* s;
		if (r == 0) {
			Point p = Point::RandomPoint();
			s = new Square(id++,p,(float) (rand()%10-5), (float) (rand()%10-5));
		} else if (r == 1) {
			Point p = Point::RandomPoint();
			s = new Circle(id++,p,rand()%10-5);
		} else if (r == 2) {
			Point p1 = Point::RandomPoint();
			Point p2 = Point::RandomPoint();
			Point p3 = Point::RandomPoint();
			s = new Triangle(id++, p1, p2, p3);
		}
		shapes.push_back(s);
	}
}

void Database::sort() { // Sorts shapes in increasing Z order with out of place selection sort.
	std::vector<Shape*> result;
	while (shapes.size() > 0) {
		int lowestZ = 100000;
		int lowestI = -1;
		for (int i = 0; i < shapes.size(); i++) {
			Shape* s = shapes.at(i);
			if (s->getZ() < lowestZ) {
				lowestZ = s->getZ();
				lowestI = i;
			}
		}
		result.push_back(shapes.at(lowestI));
		shapes.erase(shapes.begin() + lowestI);
	}
	shapes = result;
}

void Database::display() { // Prints the contents of the database
	std::cout << "Database contains " << size << " shapes.\n";
	for (int i = 0; i < size; i++) {
		shapes.at(i)->display();
	}
}
