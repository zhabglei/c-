#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"请输入三边：";
	cin>>a>>b>>c;

	if(a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}

	if(a<c)
	{
		int temp=a;
		a=c;
		c=temp;
	}

	if(a*a==b*b+c*c) cout<<"是直角三角形"<<endl;
	else cout<<"不是直角三角形"<<endl;

	return 0;
}
