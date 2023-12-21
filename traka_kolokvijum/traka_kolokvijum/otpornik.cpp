#include "otpornik.h"

otpornik::otpornik() :proizvod() {
	otpornost = 0;
	mintemp = 0;
	maxtemp = 0;
}

otpornik::otpornik(char* barkod, float otp, float min, float max)
	:proizvod(barkod), otpornost(otp), mintemp(min), maxtemp(max)
{
}

void otpornik::ispis(ostream& os) {
	ispis(os);
	os << otpornost;
	os << mintemp;
	os << maxtemp;
}

bool otpornik::defektan() {
	if (otpornost == 0.0) {
		return true;
	}
	return false;
}