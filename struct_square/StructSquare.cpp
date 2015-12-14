#include <cstdlib>
#include <stdio.h>
#include <iostream>

using namespace std;

struct  numberSquare {
	int number;
	int numberS;
} s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;

int main() {

	struct numberSquare arr[10] = { s1, s2, s3, s4, s5, s6, s7, s8, s9, s10 };

	for (int i = 0; i < 10; ++i) {
		arr[i].number = i + 1;
		arr[i].numberS = (i + 1) * (i + 1);
	}

	cout << "arr[8].numberS: " << arr[8].numberS << endl;

	return 0;
}