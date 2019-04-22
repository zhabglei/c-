#include <iostream>

using namespace std;
int count;
int tripleByValue(int a)
{
    a=a*3;
    return a;
}
int main()
{
    cin>>count;
    cout<<tripleByValue(count)<<endl;
    return 0;
}
