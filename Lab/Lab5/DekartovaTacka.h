#pragma once
#include <iostream>

using namespace std;

class DekartovaTacka
{
private:
	double x;
	double y;

public:
	DekartovaTacka();
	DekartovaTacka(double _x, double _y);

	double rastojanje(const DekartovaTacka& t) const;

	DekartovaTacka& operator--();      // Prefix decrement
	DekartovaTacka operator--(int);   // Postfix decrement

	friend istream& operator>>(istream& in, DekartovaTacka& t);
	friend ostream& operator<<(ostream& out, const DekartovaTacka& t);
};

