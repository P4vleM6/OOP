#include "Slika.h"
#include <fstream>

int main() {
	ifstream ulaz("podaci.txt");
	if (!ulaz)
	{
		cerr << "greska pri ucitavanju fajla" << endl;
	}

	int* n = new int();
	int* m = new int();
	int* k = new int();

	cout << "Unesite broj temena za prvi poligon: ";
	ulaz >> *n;
	Poligon* p1 = new Poligon(*n);
	ulaz >> *p1;
	cout << "Poligon pre preslikavanja: " << *p1 << endl;
	p1->preslikajXKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na X osu: " << *p1 << endl;
	p1->preslikajYKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na Y osu: " << *p1 << endl;

	cout << "Unesite broj temena za drugi poligon: ";
	ulaz >> *m;
	Poligon* p2 = new Poligon(*m);
	ulaz >> *p2;
	cout << "Poligon pre preslikavanja: " << *p2 << endl;
	p2->preslikajXKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na X osu: " << *p2 << endl;
	p2->preslikajYKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na Y osu: " << *p2 << endl;

	cout << "Unesite maksimalan broj poligona za sliku: ";
	ulaz >> *k;
	Slika* slika = new Slika(*k);
	slika->dodajPoligon(p1);
	slika->dodajPoligon(p2);

	for (int i = 0; i < *k - 2; ++i) {
		int brojTemena;
		cout << "Unesite broj temena za poligon: " << i + 3 << ": ";
		ulaz >> brojTemena;
		Poligon* p = new Poligon(brojTemena);
		ulaz >> *p;
		slika->dodajPoligon(p);
	}

	cout << "\n" << *slika;

	delete p1;
	delete p2;
	delete k;

	return 0;
}
