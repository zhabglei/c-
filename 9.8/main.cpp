#include<iostream>
#include "Date.h"
Date::Date( int m,int d,int y)
{
    if(m<30&&m>0)
    {
        month=m;
    }
     if(d<31&&d>0)
    {
        day=d;
    }

}
void Date::print()
{
    cout<<month<<<"    "<day<<"   "<<year;
}
