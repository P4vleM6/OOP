#define _CRT_SECURE_NO_WARNINGS
#include "Operacija.h"

Operacija::Operacija(const char* _naziv, int drugiOperand)
	: drugiOperand(drugiOperand), suprotnaOperacija(nullptr) {
	naziv = new char[strlen(_naziv) + 1];
	strcpy(naziv, _naziv);
}

Operacija::~Operacija() {
	delete[] naziv;
}

void Operacija::setSuprotna(Operacija* op) {
	suprotnaOperacija = op;
}

Operacija* Operacija::getSuprotna() const {
	return suprotnaOperacija;
}

int Operacija::getDrugiOperand() const {
	return drugiOperand;
}

void Operacija::prikazi() const {
	cout << naziv << " " << drugiOperand;
	if (suprotnaOperacija)
		cout << " | Ima suprotnu operaciju";
	cout << endl;
}