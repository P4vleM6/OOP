#include "Poligon.h"

class Slika{
private:
	int maxPoligona;
	int brojPoligona;
	Poligon** poligoni;

public:
	Slika(int max);
	~Slika();

	void dodajPoligon(Poligon* p);

	friend ostream& operator<<(ostream& os, const Slika& s);
};

