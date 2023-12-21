#pragma once
#include <iostream>

using namespace std;

class proizvod
{
protected:
	char* barkod;

public:
	proizvod();
	proizvod(char*);
	virtual ~proizvod();
	virtual bool defektan() = 0;
	virtual void ispis(ostream&);
};

