#pragma once
#include <string>

using namespace std;

class SegmentPuta {
protected:
    string Naziv;
    double KoefTezine;
    double KoefLepote;

public:
    SegmentPuta(const string& naziv, double tezina, double lepota);

    virtual double racunajKoefTezine() = 0;
    virtual double racunajKoefLepote() = 0;
    virtual string getAtributi() = 0;
    virtual void unos(istream& stream) = 0;
    virtual void ispis(ostream& stream) = 0; 

    string getNaziv();
    double getTezina();
    double getLepota();
};


