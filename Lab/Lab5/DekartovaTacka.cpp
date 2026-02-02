#include "DekartovaTacka.h"

DekartovaTacka::DekartovaTacka()
{
	x = 0;
	y = 0;
}

DekartovaTacka::DekartovaTacka(double _x, double _y)
{
	x = _x;
	y = _y;
}

double DekartovaTacka::rastojanje(const DekartovaTacka& t) const
{
	return sqrt((x - t.x) * (x - t.x) + (y - t.y) * (y - t.y));
}

DekartovaTacka& DekartovaTacka::operator--()
{
	y = -y;
	return *this;
}

DekartovaTacka DekartovaTacka::operator--(int)
{
	DekartovaTacka temp = *this;
	x = -x;
	return temp;
}

istream& operator>>(istream& in, DekartovaTacka& t)
{
	cout << "Unesite x koordinatu: ";
	in >> t.x;
	cout << "Unesite y koordinatu: ";
	in >> t.y;
	return in;
}

ostream& operator<<(ostream& out, const DekartovaTacka& t)
{
	out << "(" << t.x << ", " << t.y << ")";
	return out;
}