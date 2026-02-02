#define M_PI 3.14159265358979323846
#include "PolarnaTacka.h"

PolarnaTacka::PolarnaTacka()
{
	r = 0;
	theta = 0;
}

PolarnaTacka::PolarnaTacka(double _r, double _theta)
{
	r = _r;
	theta = _theta;
}

double PolarnaTacka::rastojanje(const PolarnaTacka& t) const
{
	double x1 = r * cos(theta);
	double y1 = r * sin(theta);
	double x2 = t.r * cos(t.theta);
	double y2 = t.r * sin(t.theta);
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

PolarnaTacka& PolarnaTacka::operator--()
{
	theta = -theta;
	return *this;
}

PolarnaTacka PolarnaTacka::operator--(int)
{
	PolarnaTacka temp = *this;
	theta = M_PI - theta;
	return temp;
}

istream& operator>>(istream& in, PolarnaTacka& t)
{
	cout << "Unesite rastojanje od koordinatnog pocetka: ";
	in >> t.r;
	cout << "Unesite ugao (u radijanima): ";
	in >> t.theta;
	return in;
}

ostream& operator<<(ostream& out, const PolarnaTacka& t)
{
	out << "(r: " << t.r << ", theta: " << t.theta << " rad)";
	return out;
}