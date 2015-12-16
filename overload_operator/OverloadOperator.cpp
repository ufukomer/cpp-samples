#include <iostream>

using namespace std;

class Date {
	int mo, da, yr;
public:
	Date(int m, int d, int y) {
		mo = m; da = d; yr = y;
	}

	friend ostream &operator<<(ostream &os, const Date &dt);
};

ostream &operator<<(ostream &os, const Date &dt) {
	os << dt.mo << '/' << dt.da << '/' << dt.yr << endl;
	return os;
}

int main() {

	Date dt(16, 12, 2015);

	cout << dt;
}