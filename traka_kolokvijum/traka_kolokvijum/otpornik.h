#pragma once
#include "proizvod.h"

class otpornik : proizvod
{
private:
	float otpornost;
	float mintemp;
	float maxtemp;

public:
	otpornik();
	otpornik(char*, float, float, float);

	bool defektan();
	void ispis(ostream&);
};

