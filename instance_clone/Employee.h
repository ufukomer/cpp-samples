#pragma once
class Employee {
private:
	int id;
	int salary;
	char *name;
public:
	Employee() {}
	Employee(int id, int salary, char *name) :id(id), salary(salary), name(name) {}
	
	int getId() {
		return id;
	}

	int getSalary() {
		return salary;
	}

	char *getName() {
		return name;
	}

	friend Employee clone(Employee &other);

	~Employee() {}
};

Employee clone(Employee &other) {

	Employee clone;
	clone.id = other.id;
	clone.salary = other.salary;
	clone.name = other.name;

	return clone;
}