#include "Sabiranje.h"

Sabiranje::Sabiranje(int op)
	: Operacija("Sabiranje", op) {}

int Sabiranje::DoOperation(int op1, int op2) {
	return op1 + op2;
}
