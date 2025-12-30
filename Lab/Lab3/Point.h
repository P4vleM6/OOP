#pragma once
#include <vector>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Point{
protected:
	double x;
	double y;

public:
	Point();
	Point(double x, double y);
	virtual ~Point();

	double rastojanje(const Point& p) const;

	virtual void printData() const;
};

