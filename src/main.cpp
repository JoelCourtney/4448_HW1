#include "Shapes.h"
#include "Point.h"
#include "Database.h"

int main() {
	// Create, sort, and display a randomly generated database of shapes.
	Database db;
	db.read();
	db.sort();
	db.display();
	return 0;
}
