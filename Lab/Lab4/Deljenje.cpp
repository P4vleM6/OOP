#include "Deljenje.h"

Deljenje::Deljenje(int op)
	: Operacija("Deljenje", op) {}

int Deljenje::DoOperation(int op1, int op2) {
	if (op2 == 0) {
		std::cerr << "Greska: Deljenje sa nulom!" << std::endl;
		return 0; // ili baciti izuzetak
	}
	return op1 / op2;
}
