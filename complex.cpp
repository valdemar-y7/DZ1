#include "complex.h"

Complex Complex::sum(Complex cmp1)
{
	Complex sum = { cmp1.im + this->im,cmp1.re + this->re };
	return sum;
}

void Complex::print() {
	string sign = (this->re >= 0) ? "+" : "";
	cout << this->re << sign << this->im << "i";
}

Complex Complex::mult(Complex cmp1)
{
	Complex mult = { cmp1.re * this->im + cmp1.im * this->re , 0 - cmp1.re * this->re + cmp1.im * this->im };
	return mult;
}

Complex Complex::del(Complex cmp1) {
	Complex del = { (cmp1.re * this->im - this->re * cmp1.im) / (pow(cmp1.re,2) + pow(cmp1.im,2))
		,(this->re * cmp1.re + this->im * cmp1.im) / (pow(cmp1.re,2) + pow(cmp1.im,2)) };
	return del;
}

double Complex::mod() {
	double mod = sqrt(pow(this->re, 2) + pow(this->im, 2));
	return mod;
}