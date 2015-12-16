#pragma once
class Child {
public:
	int id;
	char *name;

	Child() {}
	Child(int id, char *name) :id(id), name(name) {}

	~Child() {}
};