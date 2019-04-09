#include <iostream>

using namespace std;

int main()
{
   int a=0,number=0;
    int n=0;
    for (cin>>n;n>=1;--n)
    {
        cout<<"输入数";
        number=a;
        cin>>a;
        if(number>a)
       {
          number=a;
       }
    }

      cout<<"最小值为"<<number<<endl;
      return 0;

}
