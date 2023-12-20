#include "Mocvara.h"
#include <cmath>

using namespace std;

Mocvara::Mocvara(const string& naziv, double povrsina, double zitkostMulja)
    : SegmentPuta(naziv, 0.0, 0.0), P(povrsina), Z(zitkostMulja) {
    KoefTezine = racunajKoefTezine();
    KoefLepote = racunajKoefLepote();
}

double Mocvara::racunajKoefTezine() {
    return round((1 - Z) * (1 - 1 / (Z * P)) * 100) / 100; 
}

double Mocvara::racunajKoefLepote() {
    double T = racunajKoefTezine();
    return round((1 - T) * 100) / 100; 
}

string Mocvara::getAtributi() {
    char a[100];
    snprintf(a, sizeof(a), "Povrsina: %.2f, ZitkostMulja: %.2f", P, Z);
    return a;
}

void Mocvara::unos(istream& stream) {
}

void Mocvara::ispis(ostream& stream) {
}