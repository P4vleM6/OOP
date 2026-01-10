#pragma once
#include "Operacija.h"

class Deljenje : public Operacija{
public:
	Deljenje(int op);
	int DoOperation(int op1, int op2) override;
};

