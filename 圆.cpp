#include <iostream>

using namespace std;

int main()
{
   double r=0,pai=3.14159,d=0,s=0,c=0;
   cout<<"输入圆的半径：";
   cin>>r;
   d=2*r;
   s=2*r*pai;
   c=r*r*pai;
   cout<<"直径："<<d<<" 圆的面积："<<c<<" 圆的周长"<<s<<endl;
   return 0;
}
