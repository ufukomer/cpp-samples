#include <iostream>
#include "Complex.h"

using namespace std;

int main() {

	Complex a(1, 3), b(2, 3), c = a + b; // c = 3+6i

	cout << "c: " << c.real << "+" << c.imag << "i" << endl;

	return 0;
}