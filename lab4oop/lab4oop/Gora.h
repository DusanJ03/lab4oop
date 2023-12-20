#pragma once
#include "SegmentPuta.h"

class Gora : public SegmentPuta {
protected:
    double P;
    double D; 
    double V; 
    double B; 

public:
    Gora(const string& naziv, double povrsina, double duzina, double visina, double invPosumljenost);

    virtual double racunajKoefTezine();
    virtual double racunajKoefLepote();

    virtual void unos(istream& stream);
    virtual void ispis(ostream& stream);

    string getAtributi();
};
