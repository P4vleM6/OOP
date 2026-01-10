#pragma once
#include "Operacija.h"

class Mnozenje : public Operacija{
public:
	Mnozenje(int op);
	int DoOperation(int op1, int op2) override;
};

