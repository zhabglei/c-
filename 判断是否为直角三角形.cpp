#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"���������ߣ�";
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

	if(a*a==b*b+c*c) cout<<"��ֱ��������"<<endl;
	else cout<<"����ֱ��������"<<endl;

	return 0;
}
