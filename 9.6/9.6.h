#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
        Rational(int = 0, int = 1);     //构造函数

        void setRational(int, int);     //设置分子、分母

        int getNumerator() const;       //获取分子
        int getDenominator() const;     //获取分母

        Rational addRational(const Rational &);         //加法
        Rational minusRational(const Rational &);       //减法
        Rational mulRational(const Rational &);         //乘法
        Rational divRational(const Rational &);         //除法

        void printStandard() const;             //分数形式打印
        void printFloat() const;                //小数形式打印

private:
        int numerator;  //分子
        int denominator;                //分母
        int getGCD(int, int);   //获取分子和分母的最大公约数，用于约分
        int getLCM(int, int);   //获取分子和分母的最小公倍数，用于加法减法
};
