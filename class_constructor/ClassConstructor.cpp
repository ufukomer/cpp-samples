#include <iostream>
#include "Employee.h"

using namespace std;

int main(){

	Employee employee_a(12, 1500, "Nikola Tesla");
	Employee employee_b(employee_a);

	cout << "ID: " << employee_b.id << ", Salary: " << employee_b.salary 
		<< ", Name: " << employee_b.name << endl;

	return 0;
}