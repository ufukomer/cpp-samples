#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

	Employee employee_a(19, 2500, "Dovahkiin");
	Employee employee_b = clone(employee_a);

	cout << "ID: " << employee_b.getId() << ", Salary: " << employee_b.getSalary()
		<< ", Name: " << employee_b.getName() << endl;

	return 0;
}