#pragma once
#include "Point.h"
class PointCity : public Point{
private:
	char* nazivGrada;
	char* nazivDrzave;
	int brojStanovnika;

	int parseBrojStanovnika(const string& input) {
		string cleanedInput;
		for (char c : input) {
			if (isdigit(c)) {
				cleanedInput += c;
			}
			else if (c == '[') {
				break;
			}
		}
		return cleanedInput.empty() ? 0 : stoi(cleanedInput);
	}

public:
	PointCity();
	PointCity(double x, double y, const char* grad, const char* drzava, const string& brojStanovnikaStr);
	PointCity(const PointCity& other);
	~PointCity();

	PointCity& operator=(const PointCity& other);

	void printData() const override;
	int getBrojStanovnika() const;
	const char* getNazivGrada() const;
	const char* getNazivDrzave() const;
};