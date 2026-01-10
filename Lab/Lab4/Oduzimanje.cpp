#include "Oduzimanje.h"

Oduzimanje::Oduzimanje(int op)
	: Operacija("Oduzimanje", op) {}

int Oduzimanje::DoOperation(int op1, int op2) {
	return op1 - op2;
}