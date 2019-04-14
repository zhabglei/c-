
#include <iostream>

using namespace std;

int iseven(int a)
{

    if(a%2==0)
        cout<<"true";
    else
    {
        cout<<"false";
    }
    return a;
}
int main()
{
    cout<<iseven(14)<<endl;
}
