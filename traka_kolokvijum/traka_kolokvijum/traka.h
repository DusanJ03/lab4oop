#pragma once
#include <fstream>
#include "otpornik.h"
#include "kondenzator.h"

class traka
{
protected:
	proizvod** p_traka;
	int brpr;

public:
	traka();
	traka(int);
	~traka();
	void povecanje(int);
	void ukloni();
	int GetBrpr();
	void upis();
};
