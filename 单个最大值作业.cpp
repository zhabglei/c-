#include <iostream>
using namespace std;

int main()
{
	int counter=0;
	int number;
	int largest=-1;

	while(counter<10)
	{
	    cout<<"��������";
		cin>>number;
		counter++;
		if(number>largest) largest=number;
	}
	cout<<"���ֵ:"<<largest<<endl;

	return 0;
}
