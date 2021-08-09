#include<iostream>
using namespace std;
int main()
{
	int a,b,op;
	cout<<"enter the two numbers\n";
	cin>>a>>b;
	cout<<"enter the choice \n"<<"1 for add\n"<<"2 for sub\n"<<"3 for mul\n"<<"4 for div(que)\n"<<"5 for div(rem)"<<endl;
	cin>>op;
	switch(op)
	{
		case 1: cout<<a+b<<endl;
		break;
		case 2: cout<<a-b<<endl;
		break;
		case 3: cout<<a*b<<endl;
		break;
		case 4: cout<<a/b<<endl;
		break;
		case 5: cout<<a%b<<endl;
		break;
		default: cout<<"invalid input\n";
		break;
	}
	return 0;
}
