#pragma once
#include "Operacija.h"

class Oduzimanje : public Operacija{
public:
	Oduzimanje(int op);
	int DoOperation(int op1, int op2) override;
};

