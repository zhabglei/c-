#include <iostream>

using namespace std;

int main()
{
     double a=0,b=0,c=0;
     cin>>a>>b>>c;
     if  (a<b+c||b<a+c||c<a+b)
     {
      cout<<"可以形成三角形";
        }
        else
        {cout<<"不能组成三角形"<<endl;
        return 0;
        }
}
