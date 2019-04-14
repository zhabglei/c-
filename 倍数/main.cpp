
#include <iostream>

using namespace std;

int multiple(int a,int b)
{
    if(a%b==0)
        cout<<"true";
    else
    {
        cout<<"false";
    }
    return a,b;
}
int main()
{
    cout<<multiple(1,2)<<endl;
}


