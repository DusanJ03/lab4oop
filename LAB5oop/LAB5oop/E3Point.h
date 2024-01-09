#pragma once
#include <string.h>
#include <iostream>

using namespace std;

class E3Point
{
	float x, y, z;
	char* naziv;
public:
	E3Point();
	E3Point(float, float, float);
	~E3Point();

	E3Point operator+(E3Point);
	E3Point& operator=(E3Point&);
	friend istream& operator>>(istream&, E3Point&);
	friend ostream& operator<<(ostream&, E3Point&);
};

