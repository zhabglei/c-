#include <iostream>

using namespace std;

int qualityPoints(int A)
{

    if(A<60)
        A=0;
    if(A<100,A>=90)
        A=4;
    if(A<90,A>=80)
        A=3;
    if(A<80,A>=70)
        A=2;
    if(A<70,A>60)
        A=1;
        cout<<A<<endl;
    return A;
}
int B;
int main()
{
    cout<<"ÊäÈë³É¼¨";
    cin>>B;
    cout<<qualityPoints(B)<<endl;
    return 0;
}


