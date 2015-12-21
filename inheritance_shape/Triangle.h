#pragma once
#include "Shape.h"
#include "Cost.h"

class Triangle: public Shape, public Cost {
public:
	int getArea() {
		return (width * height) / 2;
	}
};