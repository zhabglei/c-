#include <iostream>

using namespace std;
int main()
{

	int counter=0;
	int number;
	int largest=-1;
	int larger=-1;

	while(counter<10)
	{
		cin>>number;
		counter++;

		if(number>largest)
		{
			larger=largest;
			largest=number;
		}

		else if(number>larger)
		{
			larger=number;
		}
	}
	cout<<"���ֵ:"<<largest<<endl;
	cout<<"�ڶ���:"<<larger<<endl;

	return 0;
}

