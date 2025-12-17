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

	Poligon& operator=(const Poligon& v);

	void ucitajKoordinate();
	double izracunajObim();
	void najudaljenijeTacke();
	void prikaziKoordinate();
	void izbaciTeme(int indeks);
};

