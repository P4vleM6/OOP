#include "Poligon.h"

Poligon::Poligon() {
	brojTemena = 0;
	xKoordinate = nullptr;
	yKoordinate = nullptr;
}

Poligon::Poligon(int broj) {
	brojTemena = broj;
	xKoordinate = new int[brojTemena];
	yKoordinate = new int[brojTemena];
}

Poligon::~Poligon() {
	delete[] xKoordinate;
	delete[] yKoordinate;
}

Poligon::Poligon(const Poligon& x) {
	brojTemena = x.brojTemena;
	xKoordinate = new int[brojTemena];
	yKoordinate = new int[brojTemena];
	for (int i = 0; i < brojTemena; i++) {
		xKoordinate[i] = x.xKoordinate[i];
		yKoordinate[i] = x.yKoordinate[i];
	}
}

Poligon& Poligon::operator=(const Poligon& v) {
	if (this != &v) {
		delete[] xKoordinate;
		delete[] yKoordinate;
		brojTemena = v.brojTemena;
		xKoordinate = new int[brojTemena];
		yKoordinate = new int[brojTemena];
		for (int i = 0; i < brojTemena; i++) {
			xKoordinate[i] = v.xKoordinate[i];
			yKoordinate[i] = v.yKoordinate[i];
		}
	}
	return *this;
}

void Poligon::ucitajKoordinate() {
	for (int i = 0; i < brojTemena; i++) {
		cout << "Unesite koordinate temena " << i + 1 << " (x y): ";
		cin >> xKoordinate[i] >> yKoordinate[i];
	}
}

double Poligon::izracunajObim() {
	double obim = 0.0;
	for (int i = 0; i < brojTemena; i++) {
		int nextIndex = (i + 1) % brojTemena;
		double dx = xKoordinate[nextIndex] - xKoordinate[i];
		double dy = yKoordinate[nextIndex] - yKoordinate[i];
		obim += sqrt(dx * dx + dy * dy);
	}
	return obim;
}

void Poligon::najudaljenijeTacke() {
	if (brojTemena < 2) {
		cout << "Nema dovoljno temena da se odredi najudaljenije tacke." << endl;
		return;
	}
	double maxUdaljenost = numeric_limits<double>::min();
	int indeks1 = 0, indeks2 = 1;
	for (int i = 0; i < brojTemena; ++i) {
		for (int j = i + 1; j < brojTemena; ++j) {
			double dx = xKoordinate[j] - xKoordinate[i];
			double dy = yKoordinate[j] - yKoordinate[i];
			double udaljenost = sqrt(dx * dx + dy * dy);
			if (udaljenost > maxUdaljenost) {
				maxUdaljenost = udaljenost;
				indeks1 = i;
				indeks2 = j;
			}
		}
	}
	cout << "Najudaljenije tacke su: (" << xKoordinate[indeks1] << ", " << yKoordinate[indeks1] << ") i ("
		<< xKoordinate[indeks2] << ", " << yKoordinate[indeks2] << ") sa udaljenosti: " << maxUdaljenost << endl;
}

void Poligon::prikaziKoordinate() {
	for (int i = 0; i < brojTemena; i++) {
		cout << "Teme " << i + 1 << ": (" << xKoordinate[i] << ", " << yKoordinate[i] << ")" << endl;
	}
}

void Poligon::izbaciTeme(int indeks) {
	if (indeks < 0 || indeks >= brojTemena) {
		cout << "Neispravan indeks." << endl;
		return;
	}

	int* noviX = new int[brojTemena - 1];
	int* noviY = new int[brojTemena - 1];

	for (int i = 0, j = 0; i < brojTemena; ++i) {
		if (i == indeks) continue;
		noviX[j] = xKoordinate[i];
		noviY[j] = yKoordinate[i];
		++j;
	}

	delete[] xKoordinate;
	delete[] yKoordinate;

	xKoordinate = noviX;
	yKoordinate = noviY;
	--brojTemena;
}