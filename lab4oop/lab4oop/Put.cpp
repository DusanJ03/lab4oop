#include "Put.h"
#include <fstream>
#include <iostream> 

using namespace std;

Put::Put() : segmentiPuta(nullptr), brojSegmenata(0) {}

Put::~Put() {
    for (int i = 0; i < brojSegmenata; i++) {
        delete segmentiPuta[i];
    }
    delete[] segmentiPuta;
}

void Put::ucitajSegmenteIzFajla(const string& imefajla) {
    ifstream ulazniFajl(imefajla);
    if (!ulazniFajl.is_open()) {
        cout << "Nije moguće otvoriti fajl: " << imefajla << endl;
        return;
    }


    ulazniFajl >> brojSegmenata;

    segmentiPuta = new SegmentPuta * [brojSegmenata];

    for (int i = 0; i < brojSegmenata; i++) {
        string naziv;
        ulazniFajl >> naziv;

        if (naziv == "Gora") {
            double povrsina, duzina, visina, invPosumljenost;
            ulazniFajl >> povrsina >> duzina >> visina >> invPosumljenost;
            segmentiPuta[i] = new Gora(naziv, povrsina, duzina, visina, invPosumljenost);
        }
        else if (naziv == "More") {
            double povrsina, plavetnilo;
            int snagaVetra;
            ulazniFajl >> povrsina >> plavetnilo >> snagaVetra;
            segmentiPuta[i] = new More(naziv, povrsina, plavetnilo, snagaVetra);
        }
        else if (naziv == "Mocvara") {
            double povrsina, zitkostMulja;
            ulazniFajl >> povrsina >> zitkostMulja;
            segmentiPuta[i] = new Mocvara(naziv, povrsina, zitkostMulja);
        }
        else {
            cout << "Nepoznat tip segmenta: " << naziv << endl;
        }
    }

    ulazniFajl.close();
}

void Put::sortirajPoTezini() {
    for (int i = 0; i < brojSegmenata - 1; i++) {
        for (int j = 0; j < brojSegmenata - i - 1; j++) {
            if (segmentiPuta[j]->racunajKoefTezine() < segmentiPuta[j + 1]->racunajKoefTezine()) {
                swap(segmentiPuta[j], segmentiPuta[j + 1]);
            }
        }
    }
}

void Put::sortirajPoLepoti() {
    for (int i = 0; i < brojSegmenata - 1; i++) {
        for (int j = 0; j < brojSegmenata - i - 1; j++) {
            if (segmentiPuta[j]->racunajKoefLepote() < segmentiPuta[j + 1]->racunajKoefLepote()) {
                swap(segmentiPuta[j], segmentiPuta[j + 1]);
            }
        }
    }
}

void Put::snimiUFajl(const string& imefajla, bool dodajNaKraj) {
    ofstream izlazniFajl;

    if (dodajNaKraj) {
        izlazniFajl.open(imefajla, ios::app);
    }
    else {
        izlazniFajl.open(imefajla); 
    }

    if (!izlazniFajl.is_open()) {
        cout << "Nije moguće otvoriti fajl za pisanje: " << imefajla << endl;
        return;
    }

    for (int i = 0; i < brojSegmenata; i++) {

        izlazniFajl << "Naziv: " << segmentiPuta[i]->getNaziv()
            << ", " << segmentiPuta[i]->getAtributi()
            << ", Tezina: " << segmentiPuta[i]->getTezina()
            << ", Lepota: " << segmentiPuta[i]->getLepota() << endl;
    }

    izlazniFajl << endl;
    izlazniFajl.close();
}


void Put::stampajSegmente() {

    for (int i = 0; i < brojSegmenata; i++) {

        cout << "Naziv: " << segmentiPuta[i]->getNaziv()
            << ", " << segmentiPuta[i]->getAtributi()
            << ", Tezina: " << segmentiPuta[i]->getTezina()
            << ", Lepota: " << segmentiPuta[i]->getLepota() << endl;
    }
}
