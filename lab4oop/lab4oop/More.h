#pragma once
#include "SegmentPuta.h"

class More : public SegmentPuta {
protected:
    double P; 
    double S; 
    int MSV; 

public:
    More(const string& naziv, double povrsina, double plavetnilo, int snagaVetra);

    virtual double racunajKoefTezine();
    virtual double racunajKoefLepote();

    virtual void unos(istream& stream);
    virtual void ispis(ostream& stream);

    string getAtributi();
};


