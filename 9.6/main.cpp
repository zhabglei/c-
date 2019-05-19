#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Rational.h"
using namespace std;

Rational::Rational(int n, int d) {
        setRational(n, d);
}

void Rational::setRational(int n, int d) {
        if (d != 0) {
                int gcd = getGCD(n, d);
                numerator = n / gcd;
                denominator = d / gcd;
        }
        else
                throw invalid_argument("denominator must not be 0");
}

int Rational::getNumerator() const {
        return numerator;
}

int Rational::getDenominator() const {
        return denominator;
}

Rational Rational::addRational(const Rational &r1) {
        Rational r;
        int lcm = getLCM(this->denominator, r1.getDenominator());
        int n = lcm / this->denominator * this->numerator \
                + lcm / r1.getDenominator() * r1.getNumerator();
        r.setRational(n, lcm);
        return r;
}

Rational Rational::minusRational(const Rational &r1) {
        Rational r;
        int lcm = getLCM(getDenominator(), r1.getDenominator());
        int n = lcm / getDenominator() * getNumerator() \
                - lcm / r1.getDenominator() * r1.getNumerator();
        r.setRational(n, lcm);
        return r;
}

Rational Rational::mulRational(const Rational &r1) {
        Rational r;
        int n = getNumerator() * r1.getNumerator();
        int d = getDenominator() * r1.getDenominator();
        r.setRational(n, d);
        return r;
}

Rational Rational::divRational(const Rational &r1) {
        Rational r;
        r.setRational(r1.getDenominator(), r1.getNumerator());  //倒数，然后乘法
        r = mulRational(r);
        return r;
}

void Rational::printStandard() const {
        cout << getNumerator() << "/" << getDenominator();
}

void Rational::printFloat() const {
        cout << 1.0 * getNumerator() / getDenominator();
}

int Rational::getGCD(int a, int b) {
        return b==0?a:getGCD(b, a % b); //递归调用，获取最大公约数
}

int Rational::getLCM(int a, int b) {
        int gcd = getGCD(a, b);
        return a / gcd * b;
}

int main() {
        Rational r1(2, 4);
        cout << "r1: ";
        r1.printStandard();
        cout << "    ";
        r1.printFloat();
        cout << endl;

        Rational r2(3, 9);
        cout << "r2: ";
        r2.printStandard();
        cout << "    ";
        r2.printFloat();
        cout << endl << endl;

        Rational r3;    //用于存储计算结果

        cout << "r1 + r2: " << endl;
        r3 = r1.addRational(r2);
        r3.printStandard();
        cout << "    ";
        r3.printFloat();
        cout << endl << endl;

        cout << "r1 - r2: " << endl;
        r3 = r1.minusRational(r2);
        r3.printStandard();
        cout << "    ";
        r3.printFloat();
        cout << endl << endl;

        cout << "r1 * r2: " << endl;
        r3 = r1.mulRational(r2);
        r3.printStandard();
        cout << "    ";
        r3.printFloat();
        cout << endl << endl;

        cout << "r1 / r2: " << endl;
        r3 = r1.divRational(r2);
        r3.printStandard();
        cout << "    ";
        r3.printFloat();
        cout << endl << endl;

        system("pause");
        return 0;
}
