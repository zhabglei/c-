#include <iostream>

using namespace std;

int main()
{
     double a=0,b=0,c=0;
     cin>>a>>b>>c;
     if  (a<b+c||b<a+c||c<a+b)
     {
      cout<<"�����γ�������";
        }
        else
        {cout<<"�������������"<<endl;
        return 0;
        }
}
