#include "Mnozenje.h"

Mnozenje::Mnozenje(int op)
	: Operacija("Mnozenje", op) {}

int Mnozenje::DoOperation(int op1, int op2) {
	return op1 * op2;
}