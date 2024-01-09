#include "E3Point.h"
#include "Niz.h"

int main()
{
	Niz<E3Point>* p1 = new Niz<E3Point>(3);
	Niz<int>* p2 = new Niz<int>(3);
	Niz<E3Point>* p3 = new Niz<E3Point>(2);

	int a = 3, b = 4, c = 5;
	E3Point* e1 = new E3Point(1.1, 1.2, 1.3);
	E3Point* e2 = new E3Point(2.1, 2.2, 2.3);
	E3Point* e3 = new E3Point(3.1, 3.2, 3.3);

	E3Point* e4 = new E3Point(4.1, 4.2, 4.3);
	E3Point* e5 = new E3Point(5.1, 5.2, 5.3);

	p1->unos(*e1);
	p1->unos(*e2);
	p1->unos(*e3);

	p2->unos(a);
	p2->unos(b);
	p2->unos(c);

	p3->unos(*e4);
	p3->unos(*e5);

	p1->izlaz(cout);
	p2->izlaz(cout);
	cout << endl;
	p3->izlaz(cout);

	cout << p1->GetSize();

	E3Point* e = (*p1)[2];
	cout << endl << *e << endl;

	//p3->operator+(*p1);
	p3->izlaz(cout);

	p1 = p3;
	p1->izlaz(cout);

	delete p3;
	delete p2;
	delete p1;
}