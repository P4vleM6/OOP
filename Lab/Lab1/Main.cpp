#include "Poligon.h"

int main() {
	Poligon poligon(4);
	poligon.ucitajKoordinate();
	cout << "Obim poligona: " << poligon.izracunajObim() << endl;
	poligon.prikaziKoordinate();

	Poligon* poligon2 = new Poligon(5);
	poligon2->ucitajKoordinate();
	poligon2->prikaziKoordinate();
	poligon2->najudaljenijeTacke();
	poligon2->izbaciTeme(2);
	cout << "Nakon izbacivanja temena:" << endl;
	poligon2->prikaziKoordinate();

	delete poligon2;

	return 0;
}
