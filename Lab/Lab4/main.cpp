#include <fstream>
#include "Kalkulator.h"
#include "Sabiranje.h"
#include "Oduzimanje.h"
#include "Mnozenje.h"
#include "Deljenje.h"

using namespace std;

int main() {
	Kalkulator* k = new Kalkulator("Moj Kalkulator", 2020);

	ifstream ulaz("ulaz.txt");

	char znak;
	int vrednost;

	while (ulaz >> znak >> vrednost) {
		Operacija* op = nullptr;
		Operacija* supr = nullptr;

		if (znak == '+') {
			op = new Sabiranje(vrednost);
			supr = new Oduzimanje(vrednost);
		}
		else if (znak == '-') {
			op = new Oduzimanje(vrednost);
			supr = new Sabiranje(vrednost);
		}
		else if (znak == '*') {
			op = new Mnozenje(vrednost);
			supr = new Deljenje(vrednost);
		}
		else if (znak == '/') {
			op = new Deljenje(vrednost);
			supr = new Mnozenje(vrednost);
		}

		op->setSuprotna(supr);
		k->Do(*op);

	}

		k->Undo();
		k->Undo();

		delete k;
		return 0;
}
