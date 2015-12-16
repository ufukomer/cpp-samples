#pragma once
#include <iostream>
#include <ctime>
#include "Child.h"

using namespace std;

class Employee {
private:
	int counter = 0;
public:
	Child arr[3];

	void addChild() {

		if (counter == 0) {
			Child child(12, "Omar");
			arr[counter] = child;
		}
		else if (counter == 1) {
			Child child(15, "Ali");
			arr[counter] = child;
		}
		else if (counter == 2) {
			Child child(17, "Khalid");
			arr[counter] = child;
		}

		counter++;

		if (counter == 3 || counter > 3) {
			for (int i = 0; i < 3; ++i) {
				cout << "Child " << i + 1 << " -> " << arr[i].name
					<< ", ID: " << arr[i].id << endl;
			}
		}
	}
};