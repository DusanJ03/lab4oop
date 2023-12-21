#include "traka.h"

traka::traka() {
	brpr = 0;
	p_traka = 0;
}

traka::traka(int brojpr): brpr(brojpr) {
	p_traka = new proizvod*[brpr];

	for (int i = 0; i < brpr; i++) {
		p_traka[i] = 0;
	}
}

traka::~traka() {
	for (int i = 0; i < brpr; i++) {
		delete[] p_traka[i];
		p_traka[i] = 0;
	}

	delete[] p_traka;
}

void traka::povecanje(int n) {

	proizvod** pp_traka = new proizvod * [brpr+n];

	for (int i = 0; i < brpr; i++) {
		pp_traka[i] = p_traka[i];
	}
	delete[] p_traka;
	brpr += n;
	p_traka = new proizvod * [brpr];

	for (int i = 0; i < brpr; i++) {
		p_traka[i] = 0;
	}

	for (int i = 0; i < brpr-n; i++) {
		p_traka[i] = pp_traka[i];
	}

	delete[] pp_traka;
}

void traka::ukloni() {
	delete[] p_traka[brpr - 1];
	for (int i = brpr-1; i > 0; i--) {
		p_traka[i] = p_traka[i - 1];
	}
	p_traka[0] = 0;
}

void traka::upis() {
	
}