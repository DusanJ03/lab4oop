#pragma once
#include <iostream>

using namespace std;

template <class T>
class Niz
{
	T** niz;
	int n;
	int br;
public:
	Niz();
	Niz(int);
	~Niz();

	Niz& operator=(Niz&);
	T* operator[](int i) { return niz[i]; };
	int GetSize() { return n; };
	Niz operator+(Niz);
	void unos(T);
	void izlaz(ostream&);
};

template <class T>
Niz<T>::Niz() {
	n = 10;
	niz = new T * [n];
	for (int i = 0; i < n; i++) {
		niz[i] = 0;
	}
	br = 0;
}

template <class T>
Niz<T>::Niz(int br) {
	n = br;
	niz = new T * [n];
	for (int i = 0; i < n; i++) {
		niz[i] = 0;
	}
	br = 0;
}

template <class T>
Niz<T>::~Niz() {
	if (niz != 0) {
		for (int i = 0; i < n; i++) {
			delete[] niz[i];
			niz[i] = 0;
		}
		delete[] niz;
	}
}

template <class T>
Niz<T>& Niz<T>::operator=(Niz& c) {
	if (this != &c)
	{
		this->n = c.n;
		for (int i = 0; i < this->n; i++) {
			this->niz[i] = c.niz[i];
		}
	}

	return *this;
}

template <class T>
Niz<T> Niz<T>::operator+(Niz c) {
	int b = this->n < c.n ? this->n : c.n;
	Niz x;
	x.niz = new T * [b];
	x.n = b;
	for (int i = 0; i < b; i++) {
		T q = *c.niz[i] + *this->niz[i];
		*x.niz[i] = q;
	}
	return x;
}

template <class T>
void Niz<T>::unos(T t) {
	niz[br] = new T();
	*niz[br++] = t;
}

template <class T>
void Niz<T>::izlaz(ostream& os) {
	for (int i = 0; i < br; i++) {
		os << *niz[i] << endl;
	}
}