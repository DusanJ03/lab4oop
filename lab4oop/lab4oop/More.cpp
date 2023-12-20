#include "More.h"
#include <cmath>

using namespace std;

More::More(const string& naziv, double povrsina, double plavetnilo, int snagaVetra)
    : SegmentPuta(naziv, 0.0, 0.0), P(povrsina), S(plavetnilo), MSV(snagaVetra) {
    KoefTezine = racunajKoefTezine();
    KoefLepote = racunajKoefLepote();
}

double More::racunajKoefTezine() {
    double L = racunajKoefLepote();
    double koefTezine = MSV * P / (L - 1);
    return round(koefTezine * 100) / 100;  
}

double More::racunajKoefLepote() {
    return round(MSV * S / P * 100) / 100;
}

string More::getAtributi() {
    char a[100];
    snprintf(a, sizeof(a), "Povrsina: %.2f, Plavetnilo: %.2f, SnagaVetra: %d", P, S, MSV);
    return a;
}

void More::unos(istream& stream) {
}

void More::ispis(ostream& stream) {
}
