#include "kondenzator.h"

kondenzator::kondenzator():proizvod() {
	kapacitivnost = 0;
}

kondenzator::kondenzator(char* barkod, float kapac)
	:proizvod(barkod), kapacitivnost(kapac)
{
}

void kondenzator::ispis(ostream& os) {
	ispis(os);
	os << kapacitivnost;
}

bool kondenzator::defektan() {
	if (kapacitivnost == 0.0) {
		return true;
	}
	return false;
}