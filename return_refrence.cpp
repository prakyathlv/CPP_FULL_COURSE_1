#include<iostream>
using namespace std;
int &fun(int &b)
{
	b=20;
	return b;
}
int main()
{
	int a=10;
	 cout<<fun(a);
	 fun(a)=30;
	 cout<<a;
}
