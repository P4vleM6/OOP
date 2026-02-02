#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class PolarnaTacka
{
private:
	double r;
	double theta; // u radijanima

public:
	PolarnaTacka();
	PolarnaTacka(double _r, double _theta);

	double rastojanje(const PolarnaTacka& t) const;

	PolarnaTacka& operator--();      // Prefix decrement
	PolarnaTacka operator--(int);   // Postfix decrement

	friend istream& operator>>(istream& in, PolarnaTacka& t);
	friend ostream& operator<<(ostream& out, const PolarnaTacka& t);
};

