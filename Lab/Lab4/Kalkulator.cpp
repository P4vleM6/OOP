#define _CRT_SECURE_NO_WARNINGS
#include "Kalkulator.h"

Kalkulator::Kalkulator(const char* n, int kapacitet)
	: akumulator(0), top(0), max(kapacitet) {
	naziv = new char[strlen(n) + 1];
	strcpy(naziv, n);
	stek = new Operacija*[max];
}

Kalkulator::~Kalkulator() {
	delete[] naziv;
	delete[] stek;
}

void Kalkulator::reset() {
	akumulator = 0;
	top = 0;
}

void Kalkulator::prikazi() const {
	cout << "Akumulator = " << akumulator << endl;
}

void Kalkulator::Do(Operacija& nova) {
	if (top >= max) return;

	akumulator = nova.DoOperation(
		akumulator,
		nova.getDrugiOperand()
	);

	stek[top++] = &nova;
	prikazi();
}

void Kalkulator::Undo() {
	if (top == 0) return;

	Operacija* poslednja = stek[--top];
	Operacija* suprotna = poslednja->getSuprotna();

	if (suprotna) {
		akumulator = suprotna->DoOperation(
			akumulator,
			poslednja->getDrugiOperand()
		);
	}

	prikazi();
}
