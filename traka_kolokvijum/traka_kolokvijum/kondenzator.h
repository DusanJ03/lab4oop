#pragma once
#include "proizvod.h"

class kondenzator : public proizvod
{
private:
	float kapacitivnost;

public:
	kondenzator();
	kondenzator(char*, float);

	bool defektan();
	void ispis(ostream&);
};

