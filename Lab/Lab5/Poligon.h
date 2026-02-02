#pragma once
#include <iostream>

using namespace std;

template <typename T, int N>
class Poligon {
private:
	T tacke[N];

public:
	Poligon() {}

	double obim() const 
	{
		double sum = 0;
		for (int i = 0; i < N; ++i) 
		{
			sum += tacke[i].rastojanje(tacke[(i + 1) % N]);
		}
		return sum;
	}

	Poligon& operator--() 
	{
		for (int i = 0; i < N; ++i) 
		{
			--tacke[i];
		}
		return *this;
	}

	Poligon operator--(int) 
	{
		Poligon temp = *this;
		for (int i = 0; i < N; ++i)
		{
			tacke[i]--;
		}
		return temp;
	}

	friend istream& operator>>(istream& in, Poligon& p) 
	{
		for (int i = 0; i < N; ++i)
		{
			cout << "Unesite tacku " << i + 1 << ": ";
			in >> p.tacke[i];
		}
		return in;
	}

	friend ostream& operator<<(ostream& out, Poligon& p)
	{
		for (int i = 0; i < N; ++i)
		{
			out << "Tacka " << i + 1 << ": " << p.tacke[i] << endl;
		}
		return out;
	}
};