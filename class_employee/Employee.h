#pragma once
#include <iostream>

using namespace std;

class Employee {

private:
	int id;
	int salary;
	char *name;
public:
	Employee(int id, int salary, char *name) :id(id), salary(salary), name(name) {}

	// A friend function has the right to access all private and protected members 
	// of the class.
	friend int operator+(const Employee &other_a, const Employee &other_b);
	int operator-(const Employee &other);
	friend void operator++(Employee &other);

	operator int() { return id; }

	int getSalary() {
		return salary;
	}
};

void operator++(Employee &other) {
	other.salary = other.salary + 500;
}

int operator+(const Employee &other_a, const Employee &other_b) {
	return other_b.salary + other_a.salary;
}

// It doesn't have to be friend function unless we decide not 
// to use class name and double colons before function name.
int Employee::operator-(const Employee &other) {
	return salary - other.salary;
}
