#include "complex.h"
#include <iostream>
#include <fstream>

int main()
{
	ifstream complex("complex.txt");
	int n = 0, i = 0;
	complex >> n;
	Complex* p = new Complex[n];
	while (n != i) {
		complex >> p[i].re;
		complex >> p[i].im;
		complex.seekg(1, ios_base::cur);
		i += 1;
	}
	double max = p[0].mod();
	int maxindex = 0;
	for (i = 1; i < n; i++) {
		if (max < p[i].mod())
		{
			maxindex = i;
			max = p[i].mod();
		}
	}
	cout << max << endl << maxindex << endl;
	p[maxindex].print();
	cout << "all good" << endl;
	complex.close();
}