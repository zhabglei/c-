#include <iostream>
using namespace std;

int main()
{
	int counter=0;
	int number;
	int largest=-1;

	while(counter<10)
	{
	    cout<<"输入销量";
		cin>>number;
		counter++;
		if(number>largest) largest=number;
	}
	cout<<"最大值:"<<largest<<endl;

	return 0;
}
