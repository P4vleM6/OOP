#include "PointCity.h"
using namespace std;

int main() {
    vector<PointCity> gradovi;
    ifstream inputFile("cities.txt");
    if (!inputFile) {
        cerr << "Greska pri otvaranju fajla!" << endl;
        return 1;
    }

    string nazivGrada, nazivDrzave, brojStanovnika;
    while (getline(inputFile, nazivGrada, '\t') && getline(inputFile, nazivDrzave, '\t') && getline(inputFile, brojStanovnika)) {
        if (!brojStanovnika.empty() && brojStanovnika.back() == '\r')
            brojStanovnika.pop_back();
        gradovi.emplace_back(0, 0, nazivGrada.c_str(), nazivDrzave.c_str(), brojStanovnika);
    }
    inputFile.close(); 

    sort(gradovi.begin(), gradovi.end(), [](const PointCity& a, const PointCity& b) {
        return a.getBrojStanovnika() > b.getBrojStanovnika();
        });

    ofstream outputFile("sorted_cities.txt");
    if (!outputFile) {
        cerr << "Greska pri otvaranju fajla za upis!" << endl;
        return 1;
    }

    for (const auto& grad : gradovi) {
        outputFile << grad.getBrojStanovnika() << "\t" 
                   << grad.getNazivGrada() << "\t" 
                   << grad.getNazivDrzave() << endl;
    }
    outputFile.close();

    for (const auto& grad : gradovi) {
        grad.printData();
    }

    return 0;
}
    