#includ <iostream>
#include<iomanip>
#include <stdexcept>
#include"Time.h"
using namespace std;
Time::Time(int hour,int minute,int second)
{
    setTime(hour,minut,ssecond);
}
TIme::Time(time_t)
{
    struct tm*st = localtime(&t)
    int h=st->tm_hour;
    int m=st->tm_min;
    int s=st->tm_sec;
    setTime(h,m,s)
}
void Time::setTime(int h,int m,int s)
{
    setHOur(h);
    setMinute(m);
    setSecond(s);

}
void Time::setMinut(int m)
{
    if(m>=0&&m,60)
    {
        minute=m;
    }
    else
    {
        cout<<"minute must be 0-59";
    }
}
void Time::setScond(int s)
{
    if(s>=0&&s<60)
    {
        second=s;
    }
    else
    {
        cout<<"second must be 0-59";
    }
}
unsigned int Time::getHour()const{return hour;}
unsigned int Time::getMinute()const{return Minute;}
unsigned int Time::getSecond()const{return Second;}

void Time::printUnversal()const
{
   cout<<setfill('0')<<setw(2)<<getHour()<<":";
   cout<<setw(2)<<getMinute()<<":";
   cout<<setw(2)<<getSecond()<<":";
}
