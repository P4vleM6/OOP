#include "Slika.h"

int main() {
	int n, m, k;
	cout << "Unesite broj temena za prvi poligon: ";
	cin >> n;
	Poligon* p1 = new Poligon(n);
	cin >> *p1;
	cout << "Poligon pre preslikavanja: " << *p1 << endl;
	p1->preslikajXKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na X osu: " << *p1 << endl;
	p1->preslikajYKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na Y osu: " << *p1 << endl;

	cout << "Unesite broj temena za drugi poligon: ";
	cin >> m;
	Poligon* p2 = new Poligon(m);
	cin >> *p2;
	cout << "Poligon pre preslikavanja: " << *p2 << endl;
	p2->preslikajXKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na X osu: " << *p2 << endl;
	p2->preslikajYKoordinate();
	cout << "Poligon nakon preslikavanja u odnosu na Y osu: " << *p2 << endl;

	cout << "Unesite maksimalan broj poligona za sliku: ";
	cin >> k;
	Slika slika(k);
	slika.dodajPoligon(p1);
	slika.dodajPoligon(p2);

	for (int i = 0; i < k - 2; ++i) {
		int brojTemena;
		cout << "Unesite broj temena za poligon: " << i + 3 << ": ";
		cin >> brojTemena;
		Poligon* p = new Poligon(brojTemena);
		cin >> *p;
		slika.dodajPoligon(p);
	}

	cout << "\n" << slika;

	return 0;
}
