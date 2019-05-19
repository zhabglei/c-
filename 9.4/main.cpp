#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int hour, int minute, int second) {
        setTime(hour, minute, second);
}

//ʹ��time��localtime�����ĵ�ǰʱ��Ĺ��캯��
Time::Time(time_t t) {
        struct tm* st = localtime(&t);
        int h = st->tm_hour;
        int m = st->tm_min;
        int s = st->tm_sec;
        setTime(h, m, s);
}

void Time::setTime(int h, int m, int s) {
        setHour(h);
        setMinute(m);
        setSecond(s);
}

void Time::setHour(int h) {
        if (h >= 0 && h < 24) {
                hour = h;
        }
        else {
                throw invalid_argument("hour must be 0-23");
        }
}

void Time::setMinute(int m) {
        if (m >= 0 && m < 60) {
                minute = m;
        }
        else {
                throw invalid_argument("minute must be 0-59");
        }
}

void Time::setSecond(int s) {
        if (s >= 0 && s < 60) {
                second = s;
        }
        else {
                throw invalid_argument("second must be 0-59");
        }
}

unsigned int Time::getHour() const {
        return hour;
}

unsigned int Time::getMinute() const {
        return minute;
}

unsigned int Time::getSecond() const {
        return second;
}

void Time::printUniversal() const {
        cout << setfill('0') << setw(2) << getHour() << ":"\
                << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard() const {
        cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)\
                << ":" << setfill('0') << setw(2) << getMinute()\
                << ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}

//�����ô���
int main() {
        Time tm1(13, 29, 2);
        tm1.printUniversal();
        cout << endl;
        tm1.printStandard();
        cout << endl;

        cout << endl;

        Time tm2(time(NULL));
        tm2.printUniversal();
        cout << endl;
        tm2.printStandard();
        cout << endl;
        system("pause");
        return 0;
}
