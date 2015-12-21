#pragma once
class Shape {
protected:
	int height;
	int width;
public:
	void setHeight(int height) {
		this->height = height;
	}

	void setWidth(int width) {
		this->width = width;
	}
};