#include "Put.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    Put plan;

    plan.ucitajSegmenteIzFajla("put.txt");

    cout << "Segmenti pre sortiranja:" << endl;
    plan.stampajSegmente();
    cout << endl;

    plan.sortirajPoTezini();
    cout << "Segmenti sortirani po tezini:" << endl;
    plan.stampajSegmente();
    cout << endl;

    plan.snimiUFajl("sortirani_put.txt", false);

    plan.sortirajPoLepoti();
    cout << "Segmenti sortirani po lepoti:" << endl;
    plan.stampajSegmente();
    cout << endl;

    plan.snimiUFajl("sortirani_put.txt", true);

    Gora* sp = new Gora("c", 0, 0, 0, 0);

    ifstream ulazniFajl("put2.txt");

    sp->unos(ulazniFajl);
    sp->ispis(cout);

    ulazniFajl.close();



    return 0;
}
