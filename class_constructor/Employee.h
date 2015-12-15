#pragma once
class Employee {
public:
	int id;
	int salary;
	char *name;

	// Constructor
	Employee(int id, int salary, char *name) :id(id), salary(salary), name(name) {}

	// Destructor
	~Employee() {}
};