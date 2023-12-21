#include "proizvod.h"
#include "string.h"

proizvod::proizvod() {
	barkod = 0;
}

proizvod::proizvod(char* barkod) {
	this->barkod = new char[7];
	strcpy(this->barkod, barkod);
}

proizvod::~proizvod() {
	delete[] barkod;
}

void proizvod::ispis(ostream& os) {
	os << barkod;
}