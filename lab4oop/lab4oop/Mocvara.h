#pragma once
#include "SegmentPuta.h"

class Mocvara : public SegmentPuta {
protected:
    double P; 
    double Z;  

public:
    Mocvara(const string& naziv, double povrsina, double zitkostMulja);

    virtual double racunajKoefTezine();
    virtual double racunajKoefLepote();

    virtual void unos(istream& stream);
    virtual void ispis(ostream& stream);

    string getAtributi();
};
