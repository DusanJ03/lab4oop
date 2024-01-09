#include "E3Point.h"

E3Point::E3Point() {
	x = y = z = 0;
	this->naziv = new char[6];
	strcpy_s(this->naziv, 6, "naziv");
}

E3Point::E3Point(float a, float b, float c) {
	x = a; y = b; z = c;
	this->naziv = new char[7];
	strcpy_s(this->naziv, 7, "naziv1");
}

E3Point::~E3Point() {
	if (naziv != nullptr) {
		delete[] naziv;
		naziv = nullptr;
	}
}

/*E3Point E3Point::operator+(E3Point p) {
	E3Point *e = new E3Point();

	e->x = this->x + p.x;
	e->y = this->y + p.y;
	e->z = this->z + p.z;
	e.naziv = new char[4];
	strcpy_s(e.naziv, sizeof(e.naziv), "naz");
	strcat_s(this->naziv, sizeof(this->naziv), p.naziv);
	strcpy_s(e.naziv, sizeof(e.naziv), this->naziv);
	
	return *e;
}*/


E3Point& E3Point::operator=(E3Point& p) {
	if (this != &p)
	{
		this->x = p.x;
		this->y = p.y;
		this->z = p.z;
		strcpy_s(this->naziv, 7, p.naziv);
	}
	return *this;
}

istream& operator>>(istream& is, E3Point& e) {
	return is >> e.x >> e.y >> e.z >> e.naziv;
};

ostream& operator<<(ostream& os, E3Point& e) {
	return os << e.x << endl << e.y << endl << e.z << endl << e.naziv;
};