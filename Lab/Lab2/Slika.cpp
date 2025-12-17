#include <iostream>
#include "Slika.h"
using namespace std;

Slika::Slika(int max) {
	maxPoligona = max;
	brojPoligona = 0;
	poligoni = new Poligon * [maxPoligona];
}

Slika::~Slika() {
	for (int i = 0; i < brojPoligona; ++i) {
		delete poligoni[i];
	}
	delete[] poligoni;
}

void Slika::dodajPoligon(Poligon* p) {
	if (brojPoligona < maxPoligona) {
		poligoni[brojPoligona++] = p;
	}
	else {
		cout << "Nije moguce dodati vise poligona. Slika je puna." << endl;
	}
}

ostream& operator<<(ostream& os, const Slika& s) {
	os << "Slika sa poligonima:\n";
	for (int i = 0; i < s.brojPoligona; ++i) {
		os << *(s.poligoni[i]) << "\n";
	}
	return os;
}