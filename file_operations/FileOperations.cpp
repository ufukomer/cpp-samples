#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

void edit_line(FILE *file, int repeatTime);

int main() {

	FILE *file;
	fopen_s(&file, "File.txt", "r+");

	if (file == NULL) {
		cout << "File cannot open" << endl;
		exit(1);
	}
	else {
		edit_line(file, 10);
		fclose(file);
	}

	fopen_s(&file, "File.txt", "r+");

	for (int i = 0; i < 10; ++i) {
		char c[100];
		fgets(c, 100, file);

		if (*c == 'B')
			cout << "Line " << i + 1 << " begins with character B." << endl;
	}

	return 0;
}

void edit_line(FILE *file, int repeatTime) {

	srand(time(NULL));
	char characters[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

	for (int a = 0; a < repeatTime; ++a) {
		for (int b = 0; b < 10; ++b) {
			fputc(characters[rand() % 10], file);
		}
		fputs("\n", file);
	}
}