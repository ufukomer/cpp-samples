#pragma once
class Complex {
public:
	int real;
	int imag;

	Complex(int real, int imag) :real(real), imag(imag){};
	Complex() :real(0), imag(0){};

	Complex operator+(const Complex &other);

};

Complex Complex::operator+(const Complex &other) {
	return Complex(real + other.real, imag + other.imag);
}