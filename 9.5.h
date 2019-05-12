
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
	explicit Complex(double = 0, double = 0);	//构造函数

	void setComplex(double, double);	//设置复数

	void setReal(double);	//设置实部
	void setImaginary(double);	//设置虚部

	double getReal() const;	//获取实部
	double getImaginary() const;	//获取虚部

	Complex addComplex(const Complex &);	//加法
	Complex minusComplex(const Complex &);	//减法

	void printComplex() const;	//打印

private:
	double realPart;	//实部
	double imaginaryPart;	//虚部
};
