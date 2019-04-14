
#include <iostream>

using namespace std;
int main ()
{
    int number;
    int a=1 ;
    int b=0;
    cin>>number;
    if(number<=1000)
    {
        while (a<number)
            {
                a+=1;
                if(number%a==0)
                    b=b+a;
                    if(number=b)
                cout<<number<<endl;
            }


    }
}
