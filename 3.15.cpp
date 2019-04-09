#include <iostream>//input output stream输入输出流
using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date(int month2, int day2, int year2)
	{
		setMonth(month2);

		day=day2;
		year=year2;
	}

	void setMonth(int month2)
	{
		if(month2>=1 && month2<=12) month=month2;
		else month=1;
	}

	int getMonth()
	{
		return month;
	}

	void setDay(int day2)
	{
		day=day2;
	}

	int getDay()
	{
		return day;
	}

	void setYear(int year2)
	{
		year=year2;
	}

	int getYear()
	{
		return year;
	}

	void displayDate()
	{
		cout<<month<<"/"<<day<<"/"<<year<<endl;
	}
};

int main()
{
	Date d1(9,11,2003);
	cout<<"月份："<<d1.getMonth()<<endl;
	cout<<"日："<<d1.getDay()<<endl;
	cout<<"年："<<d1.getYear()<<endl;
	d1.displayDate();

	d1.setMonth(15);
	d1.displayDate();
	d1.setYear(2018);
	d1.setDay(3);
	d1.displayDate();

	return 0;
}

}
