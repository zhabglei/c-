#ifndef TIME_H
#define TIME_H
#include <ctime>
using namespace std;

class Time
{
public:
    explicit Time (int =0,int =0,int =0);
    explicit Time (time_t)
    void setTime(int, int, int);
    void setHour(int);
    void setMinute(int);
    void setScond(int);

    unsigned int getHour()const;
    unsigned int getMinute()const;
    unsigned int getSecond()const;

    void printUniversal()const;
    void printStandard()const;

private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

};
