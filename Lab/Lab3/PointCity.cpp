#include "PointCity.h"

PointCity::PointCity() : Point() {
	nazivGrada = nullptr;
	nazivDrzave = nullptr;
	brojStanovnika = 0;
}

PointCity::PointCity(double x, double y, const char* grad, const char* drzava, const string& brojStanovnikaStr) : Point(x, y) {
	nazivGrada = new char[strlen(grad) + 1];
	strcpy_s(nazivGrada, strlen(grad) + 1, grad);
	nazivDrzave = new char[strlen(drzava) + 1];
	strcpy_s(nazivDrzave, strlen(drzava) + 1, drzava);
	brojStanovnika = parseBrojStanovnika(brojStanovnikaStr);
}

PointCity::PointCity(const PointCity& other) : Point(other) {
	nazivGrada = new char[strlen(other.nazivGrada) + 1];
	strcpy_s(nazivGrada, strlen(other.nazivGrada) + 1, other.nazivGrada);

	nazivDrzave = new char[strlen(other.nazivDrzave) + 1];
	strcpy_s(nazivDrzave, strlen(other.nazivDrzave) + 1, other.nazivDrzave);

	brojStanovnika = other.brojStanovnika;
}

PointCity& PointCity::operator=(const PointCity& other) {
	if (this == &other) return *this;

	delete[] nazivGrada;
	delete[] nazivDrzave;

	nazivGrada = new char[strlen(other.nazivGrada) + 1];
	strcpy_s(nazivGrada, strlen(other.nazivGrada) + 1, other.nazivGrada);

	nazivDrzave = new char[strlen(other.nazivDrzave) + 1];
	strcpy_s(nazivDrzave, strlen(other.nazivDrzave) + 1, other.nazivDrzave);

	brojStanovnika = other.brojStanovnika;

	return *this;
} 

PointCity::~PointCity() {
	delete[] nazivGrada;
	delete[] nazivDrzave;
}

void PointCity::printData() const {
	cout << "City: " << nazivGrada << ", Country: " << nazivDrzave << ", Population: " << brojStanovnika << endl;
}

int PointCity::getBrojStanovnika() const {
	return brojStanovnika;
}

const char* PointCity::getNazivGrada() const {
	return nazivGrada;
}

const char* PointCity::getNazivDrzave() const {
	return nazivDrzave;
}