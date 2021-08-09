#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the three numbers "<<endl;
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<a<<" is greater"<<endl;
	else
	{
		if(b>c)
		cout<<b<<" is greater"<<endl;
		else
		cout<<c<<" is greater"<<endl;
	}
	return 0;
}
