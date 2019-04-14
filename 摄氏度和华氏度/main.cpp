#include <iostream>

using namespace std;
int res;
int celsius(int a=1)
{

    while (a<100)
        {cout<<"华氏度"<<res<<"     \t"<<"摄氏度"<<a<<"\n";
          res=a*17;
          a=a+1;
      }
    return 0;
}
double res2;
int fahrenheil(double b=1)
{

    while (b<=212)
        {
          cout<<"华氏度"<<b<<"     \t"<<"摄氏度"<<res2<<"\n";
        res2=b/17;
        b=b+1;
        }
     return 0;
}
int main()
{
    cout<<celsius()<<endl;
    cout<<fahrenheil()<<endl;
}
