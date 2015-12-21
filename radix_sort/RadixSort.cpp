#include <iostream>

using namespace std;
const int MAX = 10;

void print(int *a, int sz) {
	for (int i = 0; i < sz; i++)
		cout << a[i] << " ";
	cout << endl;
}

void RadixSortLSD(int *a, int arraySize) {

	int i, bucket[MAX], maxVal = 0, digitPosition = 1;
	for (i = 0; i < arraySize; i++) {
		if (a[i] > maxVal) maxVal = a[i];
	}

	int pass = 1;  // Used to show the progress

	while (maxVal / digitPosition > 0) {

		int digitCount[10] = { 0 }; // Reset counter

		for (i = 0; i < arraySize; i++)
			digitCount[a[i] / digitPosition % 10]++;

		for (i = 1; i < 10; i++)
			digitCount[i] += digitCount[i - 1];

		for (i = arraySize - 1; i >= 0; i--)
			bucket[--digitCount[a[i] / digitPosition % 10]] = a[i];

		// Rearrange the original array using elements in the bucket
		for (i = 0; i < arraySize; i++)
			a[i] = bucket[i];

		cout << "Pass #" << pass++ << ": ";
		print(a, arraySize);

		// Move up the digit position
		digitPosition *= 10;
	}
}

int main() {

	int a[] = { 170, 45, 75, 90, 2, 24, 802, 66 };
	const size_t sz = sizeof(a) / sizeof(a[0]);

	cout << "pass #0: ";
	print(a, sz);

	RadixSortLSD(&a[0], sz);

	return 0;
}