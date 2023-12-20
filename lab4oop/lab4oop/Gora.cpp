#include "Gora.h"
#include <cmath>
#include <iostream>

using namespace std;

Gora::Gora(const string& naziv, double povrsina, double duzina, double visina, double invPosumljenost)
    : SegmentPuta(naziv, 0.0, 0.0), P(povrsina), D(duzina), V(visina), B(invPosumljenost) {
    KoefTezine = racunajKoefTezine();
    KoefLepote = racunajKoefLepote();
}

double Gora::racunajKoefTezine() {
    double koefTezine = B * D / (D + P + V + D / P);
    return round(koefTezine * 100) / 100;
}

double Gora::racunajKoefLepote() {
    double koefLepote = (1 - B) * V;
    return round(koefLepote * 100) / 100;
}

string Gora::getAtributi() {
    char a[100];
    snprintf(a, sizeof(a), "Povrsina: %.2f, Duzina: %.2f, Visina: %.2f, InvPosumljenost: %.2f", P, D, V, B);
    return a;
}

void Gora::unos(istream& stream) {
    stream >> Naziv >> P >> D >> V >> B;
    KoefTezine = racunajKoefTezine();
    KoefLepote = racunajKoefLepote();
}

void Gora::ispis(ostream& stream) {
    stream << "Naziv: " << getNaziv() << ", " << getAtributi() << ", Tezina: " << getTezina() << ", Lepota: " << getLepota();
}