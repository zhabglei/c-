#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double A;
int main()
{
    cout<<"ÊäÈëA:";
    cin>>A;
    for(int i=0;i<20;++i)
    {
        switch(i)
        {
          case 1:
              ceil(A);
              break;
          case 2:
            cos(A);
             break;
          case 3:
            exp(A);
             break;
          case 4:
            fabs(A);
             break;
          case 5:
            floor(A);
             break;
        }
    }
    cout<<"½á¹û£º";
    cout<<"\n    1"<<setw(15)<<ceil(A)
    <<"\n   2"<<setw(15)<<cos(A)
    <<"\n   3"<<setw(15)<<exp(A)
    <<"\n   4"<<setw(15)<<fabs(A)
    <<"\n   5"<<setw(15)<<floor(A)<<endl;



   return 0;
}
