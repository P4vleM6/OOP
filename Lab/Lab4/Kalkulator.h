#pragma once
#include "Operacija.h"
#include <iostream>
#include <cstring>
using namespace std;

class Kalkulator{
private:
	int akumulator;
	char* naziv;
	Operacija** stek;
	int top;
	int max;

public:
	Kalkulator(const char* n, int kapacitet);
	~Kalkulator();

	void reset();
	void prikazi() const;

	void Do(Operacija& nova);
	void Undo();
};

