#pragma once
#include "Operacija.h"

class Sabiranje : public Operacija{
public:
	Sabiranje(int op);
	int DoOperation(int op1, int op2) override;
};

