
#include <iostream>

using namespace std;



int zuixiao(double a,double b,double c)
{

    return min (min(a,c),b);
}

int main()
{
   cout<<zuixiao(9.0,2.0,3.0)<<endl;
   return 0;
}
