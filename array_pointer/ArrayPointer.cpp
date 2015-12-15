#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

int main() {

	srand(time(NULL));

	int first[5], second[5], third[5], fourth[5], fifth[5];

	int *arr[5] = { first, second, third, fourth, fifth };

	int choice = -1;

	// Number between 0 and 4
	while (choice > 4 || choice < 0) {
		printf("Select the array that will be filled: ");
		scanf_s("%d", &choice);
	}

	int i, *p = arr[choice], *t = arr[choice];

	// Fill array with random values
	for (i = 0; i < choice + 1; ++i) {
		*p = rand() % 100;
		p++;
	}

	printf("The values that have been inserted into array %d:\n",
		choice + 1);

	for (i = 0; i < choice + 1; ++i) {
		printf("arr[%d]: %d\n", i, *t);
		t++;
	}

	return 0;
}