#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}

Point::~Point() {

}

double Point::rastojanje(const Point& p) const {
	return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

void Point::printData() const {
	cout << "Point: (" << x << ", " << y << ")" << endl;
}