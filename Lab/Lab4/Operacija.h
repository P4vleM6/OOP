#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Operacija{
protected:
	char* naziv;
	int drugiOperand;
	Operacija* suprotnaOperacija;

public:
	Operacija(const char* naziv, int drugiOperand);
	virtual ~Operacija();

	void setSuprotna(Operacija* op);
	Operacija* getSuprotna() const;
	int getDrugiOperand() const;

	void prikazi() const;

	virtual int DoOperation(int op1, int op2) = 0;
};

