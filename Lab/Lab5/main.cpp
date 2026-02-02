#include <iostream>
#include "DekartovaTacka.h"
#include "PolarnaTacka.h"
#include "Poligon.h"

using namespace std;

int main() {
	// Poligon od Dekartovih tacaka
	Poligon<DekartovaTacka, 3> dekartovPoligon;
	cout << "Unesite Dekartove tacke za poligon:" << endl;
	cin >> dekartovPoligon;
	cout << "Dekartov poligon:" << endl;
	cout << dekartovPoligon;
	cout << "Obim dekartovog poligona: " << dekartovPoligon.obim() << endl;
	dekartovPoligon--;
	cout << "Dekartov poligon u odnosu na y-osu:" << endl;
	cout << dekartovPoligon;
	--dekartovPoligon;
	cout << "Dekartov poligon u odnosu na x-osu:" << endl;
	cout << dekartovPoligon;
	// Poligon od Polarnih tacaka
	Poligon<PolarnaTacka, 3> polarniPoligon;
	cout << "\nUnesite Polarne tacke za poligon:" << endl;
	cin >> polarniPoligon;
	cout << "Polarni poligon:" << endl;
	cout << polarniPoligon;
	cout << "Obim polarnog poligona: " << polarniPoligon.obim() << endl;
	polarniPoligon--;
	cout << "Polarni poligon u odnosu na y-osu:" << endl;
	cout << polarniPoligon;
	--polarniPoligon;
	cout << "Polarni poligon u odnosu na x-osu:" << endl;
	cout << polarniPoligon;
	return 0;
}