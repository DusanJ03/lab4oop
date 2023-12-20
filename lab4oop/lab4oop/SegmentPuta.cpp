#include "SegmentPuta.h"

SegmentPuta::SegmentPuta(const string& naziv, double tezina, double lepota)
    : Naziv(naziv), KoefTezine(tezina), KoefLepote(lepota) {}

string SegmentPuta::getNaziv() {
    return Naziv;
}

double SegmentPuta::getTezina() {
    return KoefTezine;
}

double SegmentPuta::getLepota() {
    return KoefLepote;
}
