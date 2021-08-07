#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20,z;
	a=++a;
	cout<<a<<"\n";
	b=b--;
	cout<<a<<" "<<b<<endl;
	z=++a*b;
	  
	cout<<z<<endl;
	
	z=a++*b;
	cout<<z<<endl;
	cout<<a;
}
