#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
        Rational(int = 0, int = 1);     //���캯��

        void setRational(int, int);     //���÷��ӡ���ĸ

        int getNumerator() const;       //��ȡ����
        int getDenominator() const;     //��ȡ��ĸ

        Rational addRational(const Rational &);         //�ӷ�
        Rational minusRational(const Rational &);       //����
        Rational mulRational(const Rational &);         //�˷�
        Rational divRational(const Rational &);         //����

        void printStandard() const;             //������ʽ��ӡ
        void printFloat() const;                //С����ʽ��ӡ

private:
        int numerator;  //����
        int denominator;                //��ĸ
        int getGCD(int, int);   //��ȡ���Ӻͷ�ĸ�����Լ��������Լ��
        int getLCM(int, int);   //��ȡ���Ӻͷ�ĸ����С�����������ڼӷ�����
};
