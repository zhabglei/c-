#include <iostream>
#include<array>
using namespace std;
int b;
int main()
{
    array<int,21>a;
    for (int i=1;i<21;i++)
    {
        cin>>b;
        if(b<=100||b>=10)
            {
                array<int,21>c;
                c[i]=b;
                for(int k=1;k<21;k++)
                {
                    if(b==c[k])
                        {
                            a[i]=b;
                            cout<<a[i];
                        }

                            else
                        {

                            continue;
                        }
                }
            }
        else
            continue;

    }
    return 0;

}
