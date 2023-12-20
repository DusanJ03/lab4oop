#pragma once
#include "Gora.h"
#include "More.h"
#include "Mocvara.h"

class Put {
private:
    SegmentPuta** segmentiPuta;
    int brojSegmenata;

public:
    Put();
    ~Put();

    void ucitajSegmenteIzFajla(const string& imefajla);
    void sortirajPoTezini();
    void sortirajPoLepoti();
    void snimiUFajl(const string& imefajla, bool);
    void stampajSegmente();
};
