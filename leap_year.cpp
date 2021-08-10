#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter the year:\n";
	cin>>year;
	if(year%100==0)
	{
		if(year%400==0)
		cout<<year<<" is a leap year"<<endl;
		
	}
	else if(year%4==0)
	{
		cout<<year<<" is a leap year\n";
	}
	else
	cout<<year<<" is not a leap year"<<endl;
	return 0;
}
