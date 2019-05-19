#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double r, double i) {
	setComplex(r, i);
}

void Complex::setComplex(double r, double i) {
	setReal(r);
	setImaginary(i);
}

void Complex::setReal(double r) {
	realPart = r;
}

void Complex::setImaginary(double i) {
	imaginaryPart = i;
}

double Complex::getReal() const {
	return realPart;
}

double Complex::getImaginary() const {
	return imaginaryPart;
}

Complex Complex::addComplex(const Complex &c1) {
	Complex c;
	double r = getReal() + c1.getReal();
	double i = getImaginary() + c1.getImaginary();
	c.setComplex(r, i);
	return c;
}

Complex Complex::minusComplex(const Complex &c1) {
	Complex c;
	double r = getReal() - c1.getReal();
	double i = getImaginary() - c1.getImaginary();
	c.setComplex(r, i);
	return c;
}

void Complex::printComplex() const {
	cout << "(" << realPart << ", " << imaginaryPart << ")";
}

int main() {
	Complex c1(1.2, 3.4);
	Complex c2(4.7, 2.5);
	cout << "c1: ";
	c1.printComplex();
	cout << endl;
	cout << "c2: ";
	c2.printComplex();
	cout << endl << endl;

	Complex c3;
	cout << endl << "c1 + c2: " << endl;
	c3 = c1.addComplex(c2);
	c3.printComplex();
	cout << endl << endl;


	cout << endl << "c1 - c2" << endl;
	c3 = c1.minusComplex(c2);
	c3.printComplex();
	cout << endl << endl;

	system("pause");
	return 0;
}
