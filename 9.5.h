
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
	explicit Complex(double = 0, double = 0);	//���캯��

	void setComplex(double, double);	//���ø���

	void setReal(double);	//����ʵ��
	void setImaginary(double);	//�����鲿

	double getReal() const;	//��ȡʵ��
	double getImaginary() const;	//��ȡ�鲿

	Complex addComplex(const Complex &);	//�ӷ�
	Complex minusComplex(const Complex &);	//����

	void printComplex() const;	//��ӡ

private:
	double realPart;	//ʵ��
	double imaginaryPart;	//�鲿
};
