#include <iostream>
#include <math.h>
#include<conio.h>

using namespace std;
double hypotenuse(double a,double b)
{
    double c;
    c*c=(a*a+b*b);
    cout<<c<<endl;
    return sqrt(a*a+b*b);

}
int main()
{
    cout<<hypotenuse(3.0,4.0)<<endl;
    return 0;
}
