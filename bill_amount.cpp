#include<iostream>
using namespace std;
int main()
{
	float bill,d;
	cout<<"enter the bill amount: "<<endl;
	cin>>bill;
	if(bill<100)
	{
		cout<<"sorry! no discount\n";
	
	}
	else if(bill>=100&&bill<500)
	{
		d=bill/10;
		cout<<"total bill amount:"<<bill<<endl<<"discount amount:"<<d<<endl<<"amount payable:"<<bill-d<<endl;
		
		
	}
	else
	{
		d=bill/20;
		cout<<"total bill amount:"<<bill<<endl<<"discount amount:"<<d<<endl<<"amount payable:"<<bill-d<<endl;
		
		
	}
	return 0;
}
