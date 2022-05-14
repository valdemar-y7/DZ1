#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
#include <iostream>
using namespace std;

struct Complex {
	double re = 0;
	double im = 0;
	void print();
	Complex sum(Complex cmp1);
	Complex mult(Complex cmp1);
	Complex del(Complex cmp1);
	double mod();
};

#endif
