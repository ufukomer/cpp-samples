#include <stdio.h>
#include <stdlib.h>

template<typename T> void swap(T &a, T &b);

int main() {

	int arr_a[3] = { 1, 2, 3 }, 
		arr_b[3] = { 4, 5, 6 };

	int *p, *t;

	// Swap arr_a elements using XOR operator
	p = arr_a; // *p = 1
	t = arr_a + 1; // *t = 2
	*p = *p ^ *t; // *p = 1 ^ 2 = 3
	*t = *p ^ *t; // *t = 2 ^ 3 = 1
	*p = *p ^ *t; // *p = 1 ^ 3 = 2

	// Swap arr_b elements using template function
	swap(arr_b[0], arr_b[1]);

	for (int i = 0; i < 3; ++i)
		printf("arr_a[%d]: %d\n", i, arr_a[i]);

	for (int i = 0; i < 3; ++i)
		printf("arr_b[%d]: %d\n", i, arr_b[i]);
}

template<typename T> void swap(T &a, T &b) {
	T t = a;
	a = b;
	b = t;
}