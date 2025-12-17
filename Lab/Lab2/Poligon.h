#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

class Poligon{
private:
	int brojTemena;
	int* xKoordinate;
	int* yKoordinate;

public:
	Poligon();
	Poligon(int broj);
	~Poligon();
	Poligon(const Poligon& x);

	inline int getBrojTemena() const {
		return brojTemena;
	}

	friend ostream& operator<<(ostream& os, const Poligon& p);
	friend istream& operator>>(istream& is, Poligon& p);

	double izracunajObim();
	void najudaljenijeTacke();
	void izbaciTeme(int indeks);

	void preslikajXKoordinate();
	void preslikajYKoordinate();
};

