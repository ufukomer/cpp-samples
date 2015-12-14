#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

	enum Days {
		Friday,
		Saturday,
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday
	} today; // or, enum Days today;

	today = (enum Days) 0;

	switch (today) {
	case Friday:
		cout << "Today is Friday" << endl;
		break;
	case Saturday:
		cout << "Today is Saturday" << endl;
		break;
	case Sunday:
		cout << "Today is Sunday" << endl;
		break;
	case Monday:
		cout << "Today is Monday" << endl;
		break;
	case Tuesday:
		cout << "Today is Tuesday" << endl;
		break;
	case Wednesday:
		cout << "Today is Wednesday" << endl;
		break;
	case Thursday:
		cout << "Today is Thursday" << endl;
		break;
	};

	return 0;
}