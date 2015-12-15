#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

	Employee employee_a(12, 1500, "C. S. Lewis");
	Employee employee_b(13, 1000, "Vera Rubin");

	int result = employee_a + employee_b;
	cout << "Result: " << result << endl;
	
	result = employee_a - employee_b;
	cout << "Result: " << result << endl;

	employee_b++;
	cout << "Salary: " << employee_b.getSalary() << endl;

	int id = (int)employee_a;
	cout << "ID: " << id << endl;

	return 0;
}