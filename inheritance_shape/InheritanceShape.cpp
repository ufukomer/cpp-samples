#include <iostream>
#include "Triangle.h"

using namespace std;

int main() {

	Triangle triangle;
	int area;

	triangle.setWidth(19);
	triangle.setHeight(6);

	area = triangle.getArea();

	cout << "Triangle's area: " << area << endl;

	cout << "Cost: " << triangle.getCost(area) << endl; 

	return 0;
}