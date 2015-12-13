#include <stdio.h>
#include <stdlib.h>

int summation(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int(*f[4])(int, int) = { summation, subtraction, multiplication, division };

int main() {

	printf("Please select a transaction ID: ");
	int trans;
	scanf_s("%d", &trans);
	int result;

	if (trans == 0) {
		result = (*f[0])(4, 2);
	}
	else if (trans == 1) {
		result = (*f[1])(4, 2);
	}
	else if (trans == 2) {
		result = (*f[2])(4, 2);
	}
	else {
		result = (*f[3])(4, 2);
	}

	printf("Result: %d\n", result);

	return 0;
}

int summation(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
}

int division(int a, int b) {
	return a / b;
}